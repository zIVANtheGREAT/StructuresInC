#include <stdio.h>
/*
	Programmer: Ivan Castro

	Purpose: exploring the use of structrues in C

	-Structures are a user-defined data type.
	
	-It allows you to group together variables of
	 different data types under the same name. 

	 Syntax:

	 struct structure_name 
	 {
	  	
	    data_type member_name;
	    data_type member_name;
	    ....
	    ....
      };

*/

struct Distance // structure declaration
{
	int feet;	 // Member
	float inch;  // Member
}D1, D2, result; // D1, D2, and results are variables

int main()
{
	//Take first distance input D1.
	printf("Enter first distance.\n");
	printf("In feet: ");
	scanf_s("%d", &D1.feet);
	printf("In inch(es): ");
	scanf_s("%f", &D1.inch);

	//Take second distance input D2.
	printf("Enter second distance.\n");
	printf("In feet: ");
	scanf_s("%d", &D2.feet);
	printf("In inch(es): ");
	scanf_s("%f", &D2.inch);

	//Adding the two distances.
	result.feet = D1.feet + D2.feet;
	result.inch = D1.inch + D2.inch;

	//Convert inches to feet if inhces is greater than 12
	while (result.inch >= 12.0)
	{
		result.inch -= 12.0;
		result.feet++;
	}

	//print results
	printf("\nSum of distances = %d\'%.2f\"", result.feet, result.inch);

	return 0;
}
