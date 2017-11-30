/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/serverlessrepo/ServerlessApplicationRepository_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * Parameters supported by the application.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ParameterDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterDefinition
  {
  public:
    ParameterDefinition();
    ParameterDefinition(const Aws::Utils::Json::JsonValue& jsonValue);
    ParameterDefinition& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * A regular expression that represents the patterns to allow for String types.
     */
    inline const Aws::String& GetAllowedPattern() const{ return m_allowedPattern; }

    /**
     * A regular expression that represents the patterns to allow for String types.
     */
    inline void SetAllowedPattern(const Aws::String& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = value; }

    /**
     * A regular expression that represents the patterns to allow for String types.
     */
    inline void SetAllowedPattern(Aws::String&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::move(value); }

    /**
     * A regular expression that represents the patterns to allow for String types.
     */
    inline void SetAllowedPattern(const char* value) { m_allowedPatternHasBeenSet = true; m_allowedPattern.assign(value); }

    /**
     * A regular expression that represents the patterns to allow for String types.
     */
    inline ParameterDefinition& WithAllowedPattern(const Aws::String& value) { SetAllowedPattern(value); return *this;}

    /**
     * A regular expression that represents the patterns to allow for String types.
     */
    inline ParameterDefinition& WithAllowedPattern(Aws::String&& value) { SetAllowedPattern(std::move(value)); return *this;}

    /**
     * A regular expression that represents the patterns to allow for String types.
     */
    inline ParameterDefinition& WithAllowedPattern(const char* value) { SetAllowedPattern(value); return *this;}


    /**
     * Array containing the list of values allowed for the parameter.
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * Array containing the list of values allowed for the parameter.
     */
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * Array containing the list of values allowed for the parameter.
     */
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * Array containing the list of values allowed for the parameter.
     */
    inline ParameterDefinition& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}

    /**
     * Array containing the list of values allowed for the parameter.
     */
    inline ParameterDefinition& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * Array containing the list of values allowed for the parameter.
     */
    inline ParameterDefinition& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * Array containing the list of values allowed for the parameter.
     */
    inline ParameterDefinition& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }

    /**
     * Array containing the list of values allowed for the parameter.
     */
    inline ParameterDefinition& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }


    /**
     * A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,\n a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user\n
     * specifies an invalid value:\n\n Malformed input-Parameter MyParameter must match
     * pattern [A-Za-z0-9]+ \n \nBy adding a constraint description, such as "must
     * contain only uppercase and lowercase letters, and numbers," you can display\n
     * the following customized error message:\n\n Malformed input-Parameter
     * MyParameter must contain only uppercase and lowercase letters and numbers.
     */
    inline const Aws::String& GetConstraintDescription() const{ return m_constraintDescription; }

    /**
     * A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,\n a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user\n
     * specifies an invalid value:\n\n Malformed input-Parameter MyParameter must match
     * pattern [A-Za-z0-9]+ \n \nBy adding a constraint description, such as "must
     * contain only uppercase and lowercase letters, and numbers," you can display\n
     * the following customized error message:\n\n Malformed input-Parameter
     * MyParameter must contain only uppercase and lowercase letters and numbers.
     */
    inline void SetConstraintDescription(const Aws::String& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = value; }

    /**
     * A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,\n a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user\n
     * specifies an invalid value:\n\n Malformed input-Parameter MyParameter must match
     * pattern [A-Za-z0-9]+ \n \nBy adding a constraint description, such as "must
     * contain only uppercase and lowercase letters, and numbers," you can display\n
     * the following customized error message:\n\n Malformed input-Parameter
     * MyParameter must contain only uppercase and lowercase letters and numbers.
     */
    inline void SetConstraintDescription(Aws::String&& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = std::move(value); }

    /**
     * A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,\n a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user\n
     * specifies an invalid value:\n\n Malformed input-Parameter MyParameter must match
     * pattern [A-Za-z0-9]+ \n \nBy adding a constraint description, such as "must
     * contain only uppercase and lowercase letters, and numbers," you can display\n
     * the following customized error message:\n\n Malformed input-Parameter
     * MyParameter must contain only uppercase and lowercase letters and numbers.
     */
    inline void SetConstraintDescription(const char* value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription.assign(value); }

    /**
     * A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,\n a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user\n
     * specifies an invalid value:\n\n Malformed input-Parameter MyParameter must match
     * pattern [A-Za-z0-9]+ \n \nBy adding a constraint description, such as "must
     * contain only uppercase and lowercase letters, and numbers," you can display\n
     * the following customized error message:\n\n Malformed input-Parameter
     * MyParameter must contain only uppercase and lowercase letters and numbers.
     */
    inline ParameterDefinition& WithConstraintDescription(const Aws::String& value) { SetConstraintDescription(value); return *this;}

    /**
     * A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,\n a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user\n
     * specifies an invalid value:\n\n Malformed input-Parameter MyParameter must match
     * pattern [A-Za-z0-9]+ \n \nBy adding a constraint description, such as "must
     * contain only uppercase and lowercase letters, and numbers," you can display\n
     * the following customized error message:\n\n Malformed input-Parameter
     * MyParameter must contain only uppercase and lowercase letters and numbers.
     */
    inline ParameterDefinition& WithConstraintDescription(Aws::String&& value) { SetConstraintDescription(std::move(value)); return *this;}

    /**
     * A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,\n a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user\n
     * specifies an invalid value:\n\n Malformed input-Parameter MyParameter must match
     * pattern [A-Za-z0-9]+ \n \nBy adding a constraint description, such as "must
     * contain only uppercase and lowercase letters, and numbers," you can display\n
     * the following customized error message:\n\n Malformed input-Parameter
     * MyParameter must contain only uppercase and lowercase letters and numbers.
     */
    inline ParameterDefinition& WithConstraintDescription(const char* value) { SetConstraintDescription(value); return *this;}


    /**
     * A value of the appropriate type for the template to use if no value is specified
     * when a stack is created.\n If you define constraints for the parameter, you must
     * specify a value that adheres to those constraints.
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * A value of the appropriate type for the template to use if no value is specified
     * when a stack is created.\n If you define constraints for the parameter, you must
     * specify a value that adheres to those constraints.
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * A value of the appropriate type for the template to use if no value is specified
     * when a stack is created.\n If you define constraints for the parameter, you must
     * specify a value that adheres to those constraints.
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * A value of the appropriate type for the template to use if no value is specified
     * when a stack is created.\n If you define constraints for the parameter, you must
     * specify a value that adheres to those constraints.
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * A value of the appropriate type for the template to use if no value is specified
     * when a stack is created.\n If you define constraints for the parameter, you must
     * specify a value that adheres to those constraints.
     */
    inline ParameterDefinition& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * A value of the appropriate type for the template to use if no value is specified
     * when a stack is created.\n If you define constraints for the parameter, you must
     * specify a value that adheres to those constraints.
     */
    inline ParameterDefinition& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * A value of the appropriate type for the template to use if no value is specified
     * when a stack is created.\n If you define constraints for the parameter, you must
     * specify a value that adheres to those constraints.
     */
    inline ParameterDefinition& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * A string of up to 4,000 characters that describes the parameter.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A string of up to 4,000 characters that describes the parameter.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A string of up to 4,000 characters that describes the parameter.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A string of up to 4,000 characters that describes the parameter.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A string of up to 4,000 characters that describes the parameter.
     */
    inline ParameterDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A string of up to 4,000 characters that describes the parameter.
     */
    inline ParameterDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A string of up to 4,000 characters that describes the parameter.
     */
    inline ParameterDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * An integer value that determines the largest number of characters you want to
     * allow for String types.
     */
    inline int GetMaxLength() const{ return m_maxLength; }

    /**
     * An integer value that determines the largest number of characters you want to
     * allow for String types.
     */
    inline void SetMaxLength(int value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }

    /**
     * An integer value that determines the largest number of characters you want to
     * allow for String types.
     */
    inline ParameterDefinition& WithMaxLength(int value) { SetMaxLength(value); return *this;}


    /**
     * A numeric value that determines the largest numeric value you want to allow for
     * Number types.
     */
    inline int GetMaxValue() const{ return m_maxValue; }

    /**
     * A numeric value that determines the largest numeric value you want to allow for
     * Number types.
     */
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * A numeric value that determines the largest numeric value you want to allow for
     * Number types.
     */
    inline ParameterDefinition& WithMaxValue(int value) { SetMaxValue(value); return *this;}


    /**
     * An integer value that determines the smallest number of characters you want to
     * allow for String types.
     */
    inline int GetMinLength() const{ return m_minLength; }

    /**
     * An integer value that determines the smallest number of characters you want to
     * allow for String types.
     */
    inline void SetMinLength(int value) { m_minLengthHasBeenSet = true; m_minLength = value; }

    /**
     * An integer value that determines the smallest number of characters you want to
     * allow for String types.
     */
    inline ParameterDefinition& WithMinLength(int value) { SetMinLength(value); return *this;}


    /**
     * A numeric value that determines the smallest numeric value you want to allow for
     * Number types.
     */
    inline int GetMinValue() const{ return m_minValue; }

    /**
     * A numeric value that determines the smallest numeric value you want to allow for
     * Number types.
     */
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * A numeric value that determines the smallest numeric value you want to allow for
     * Number types.
     */
    inline ParameterDefinition& WithMinValue(int value) { SetMinValue(value); return *this;}


    /**
     * The name of the parameter.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the parameter.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the parameter.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the parameter.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the parameter.
     */
    inline ParameterDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the parameter.
     */
    inline ParameterDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the parameter.
     */
    inline ParameterDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Whether to mask the parameter value whenever anyone makes a call that describes
     * the stack. If you set the\n value to true, the parameter value is masked with
     * asterisks (*****).
     */
    inline bool GetNoEcho() const{ return m_noEcho; }

    /**
     * Whether to mask the parameter value whenever anyone makes a call that describes
     * the stack. If you set the\n value to true, the parameter value is masked with
     * asterisks (*****).
     */
    inline void SetNoEcho(bool value) { m_noEchoHasBeenSet = true; m_noEcho = value; }

    /**
     * Whether to mask the parameter value whenever anyone makes a call that describes
     * the stack. If you set the\n value to true, the parameter value is masked with
     * asterisks (*****).
     */
    inline ParameterDefinition& WithNoEcho(bool value) { SetNoEcho(value); return *this;}


    /**
     * A list of SAM resources that use this parameter.
     */
    inline const Aws::Vector<Aws::String>& GetReferencedByResources() const{ return m_referencedByResources; }

    /**
     * A list of SAM resources that use this parameter.
     */
    inline void SetReferencedByResources(const Aws::Vector<Aws::String>& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources = value; }

    /**
     * A list of SAM resources that use this parameter.
     */
    inline void SetReferencedByResources(Aws::Vector<Aws::String>&& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources = std::move(value); }

    /**
     * A list of SAM resources that use this parameter.
     */
    inline ParameterDefinition& WithReferencedByResources(const Aws::Vector<Aws::String>& value) { SetReferencedByResources(value); return *this;}

    /**
     * A list of SAM resources that use this parameter.
     */
    inline ParameterDefinition& WithReferencedByResources(Aws::Vector<Aws::String>&& value) { SetReferencedByResources(std::move(value)); return *this;}

    /**
     * A list of SAM resources that use this parameter.
     */
    inline ParameterDefinition& AddReferencedByResources(const Aws::String& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources.push_back(value); return *this; }

    /**
     * A list of SAM resources that use this parameter.
     */
    inline ParameterDefinition& AddReferencedByResources(Aws::String&& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources.push_back(std::move(value)); return *this; }

    /**
     * A list of SAM resources that use this parameter.
     */
    inline ParameterDefinition& AddReferencedByResources(const char* value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources.push_back(value); return *this; }


    /**
     * The type of the parameter.\nValid values: String | Number | List<Number> |
     * CommaDelimitedList \n \n\n String : A literal string.\nFor example, users could
     * specify "MyUserName" .\n\n Number : An integer or float. AWS CloudFormation
     * validates the parameter value as a number; however, when you use the\n parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a string.\nFor example, users could specify "8888"
     * .\n\n List<Number> : An array of integers or floats that are separated by
     * commas. AWS CloudFormation validates the parameter value as numbers; however,
     * when\n you use the parameter elsewhere in your template (for example, by using
     * the Ref intrinsic function), the parameter value becomes a list of strings.\nFor
     * example, users could specify "80,20", and a Ref results in ["80","20"] .\n\n
     * CommaDelimitedList : An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of
     * commas.\n Also, each member string is space-trimmed.\nFor example, users could
     * specify "test,dev,prod", and a Ref results in ["test","dev","prod"] .
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * The type of the parameter.\nValid values: String | Number | List<Number> |
     * CommaDelimitedList \n \n\n String : A literal string.\nFor example, users could
     * specify "MyUserName" .\n\n Number : An integer or float. AWS CloudFormation
     * validates the parameter value as a number; however, when you use the\n parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a string.\nFor example, users could specify "8888"
     * .\n\n List<Number> : An array of integers or floats that are separated by
     * commas. AWS CloudFormation validates the parameter value as numbers; however,
     * when\n you use the parameter elsewhere in your template (for example, by using
     * the Ref intrinsic function), the parameter value becomes a list of strings.\nFor
     * example, users could specify "80,20", and a Ref results in ["80","20"] .\n\n
     * CommaDelimitedList : An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of
     * commas.\n Also, each member string is space-trimmed.\nFor example, users could
     * specify "test,dev,prod", and a Ref results in ["test","dev","prod"] .
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * The type of the parameter.\nValid values: String | Number | List<Number> |
     * CommaDelimitedList \n \n\n String : A literal string.\nFor example, users could
     * specify "MyUserName" .\n\n Number : An integer or float. AWS CloudFormation
     * validates the parameter value as a number; however, when you use the\n parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a string.\nFor example, users could specify "8888"
     * .\n\n List<Number> : An array of integers or floats that are separated by
     * commas. AWS CloudFormation validates the parameter value as numbers; however,
     * when\n you use the parameter elsewhere in your template (for example, by using
     * the Ref intrinsic function), the parameter value becomes a list of strings.\nFor
     * example, users could specify "80,20", and a Ref results in ["80","20"] .\n\n
     * CommaDelimitedList : An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of
     * commas.\n Also, each member string is space-trimmed.\nFor example, users could
     * specify "test,dev,prod", and a Ref results in ["test","dev","prod"] .
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * The type of the parameter.\nValid values: String | Number | List<Number> |
     * CommaDelimitedList \n \n\n String : A literal string.\nFor example, users could
     * specify "MyUserName" .\n\n Number : An integer or float. AWS CloudFormation
     * validates the parameter value as a number; however, when you use the\n parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a string.\nFor example, users could specify "8888"
     * .\n\n List<Number> : An array of integers or floats that are separated by
     * commas. AWS CloudFormation validates the parameter value as numbers; however,
     * when\n you use the parameter elsewhere in your template (for example, by using
     * the Ref intrinsic function), the parameter value becomes a list of strings.\nFor
     * example, users could specify "80,20", and a Ref results in ["80","20"] .\n\n
     * CommaDelimitedList : An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of
     * commas.\n Also, each member string is space-trimmed.\nFor example, users could
     * specify "test,dev,prod", and a Ref results in ["test","dev","prod"] .
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * The type of the parameter.\nValid values: String | Number | List<Number> |
     * CommaDelimitedList \n \n\n String : A literal string.\nFor example, users could
     * specify "MyUserName" .\n\n Number : An integer or float. AWS CloudFormation
     * validates the parameter value as a number; however, when you use the\n parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a string.\nFor example, users could specify "8888"
     * .\n\n List<Number> : An array of integers or floats that are separated by
     * commas. AWS CloudFormation validates the parameter value as numbers; however,
     * when\n you use the parameter elsewhere in your template (for example, by using
     * the Ref intrinsic function), the parameter value becomes a list of strings.\nFor
     * example, users could specify "80,20", and a Ref results in ["80","20"] .\n\n
     * CommaDelimitedList : An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of
     * commas.\n Also, each member string is space-trimmed.\nFor example, users could
     * specify "test,dev,prod", and a Ref results in ["test","dev","prod"] .
     */
    inline ParameterDefinition& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * The type of the parameter.\nValid values: String | Number | List<Number> |
     * CommaDelimitedList \n \n\n String : A literal string.\nFor example, users could
     * specify "MyUserName" .\n\n Number : An integer or float. AWS CloudFormation
     * validates the parameter value as a number; however, when you use the\n parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a string.\nFor example, users could specify "8888"
     * .\n\n List<Number> : An array of integers or floats that are separated by
     * commas. AWS CloudFormation validates the parameter value as numbers; however,
     * when\n you use the parameter elsewhere in your template (for example, by using
     * the Ref intrinsic function), the parameter value becomes a list of strings.\nFor
     * example, users could specify "80,20", and a Ref results in ["80","20"] .\n\n
     * CommaDelimitedList : An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of
     * commas.\n Also, each member string is space-trimmed.\nFor example, users could
     * specify "test,dev,prod", and a Ref results in ["test","dev","prod"] .
     */
    inline ParameterDefinition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * The type of the parameter.\nValid values: String | Number | List<Number> |
     * CommaDelimitedList \n \n\n String : A literal string.\nFor example, users could
     * specify "MyUserName" .\n\n Number : An integer or float. AWS CloudFormation
     * validates the parameter value as a number; however, when you use the\n parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a string.\nFor example, users could specify "8888"
     * .\n\n List<Number> : An array of integers or floats that are separated by
     * commas. AWS CloudFormation validates the parameter value as numbers; however,
     * when\n you use the parameter elsewhere in your template (for example, by using
     * the Ref intrinsic function), the parameter value becomes a list of strings.\nFor
     * example, users could specify "80,20", and a Ref results in ["80","20"] .\n\n
     * CommaDelimitedList : An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of
     * commas.\n Also, each member string is space-trimmed.\nFor example, users could
     * specify "test,dev,prod", and a Ref results in ["test","dev","prod"] .
     */
    inline ParameterDefinition& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_allowedPattern;
    bool m_allowedPatternHasBeenSet;

    Aws::Vector<Aws::String> m_allowedValues;
    bool m_allowedValuesHasBeenSet;

    Aws::String m_constraintDescription;
    bool m_constraintDescriptionHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    int m_maxLength;
    bool m_maxLengthHasBeenSet;

    int m_maxValue;
    bool m_maxValueHasBeenSet;

    int m_minLength;
    bool m_minLengthHasBeenSet;

    int m_minValue;
    bool m_minValueHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_noEcho;
    bool m_noEchoHasBeenSet;

    Aws::Vector<Aws::String> m_referencedByResources;
    bool m_referencedByResourcesHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace ServerlessApplicationRepository
} // namespace Aws
