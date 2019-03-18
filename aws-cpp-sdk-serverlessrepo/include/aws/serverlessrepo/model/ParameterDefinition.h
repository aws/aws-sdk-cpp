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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServerlessApplicationRepository
{
namespace Model
{

  /**
   * <p>Parameters supported by the application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/serverlessrepo-2017-09-08/ParameterDefinition">AWS
   * API Reference</a></p>
   */
  class AWS_SERVERLESSAPPLICATIONREPOSITORY_API ParameterDefinition
  {
  public:
    ParameterDefinition();
    ParameterDefinition(Aws::Utils::Json::JsonView jsonValue);
    ParameterDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A regular expression that represents the patterns to allow for String
     * types.</p>
     */
    inline const Aws::String& GetAllowedPattern() const{ return m_allowedPattern; }

    /**
     * <p>A regular expression that represents the patterns to allow for String
     * types.</p>
     */
    inline bool AllowedPatternHasBeenSet() const { return m_allowedPatternHasBeenSet; }

    /**
     * <p>A regular expression that represents the patterns to allow for String
     * types.</p>
     */
    inline void SetAllowedPattern(const Aws::String& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = value; }

    /**
     * <p>A regular expression that represents the patterns to allow for String
     * types.</p>
     */
    inline void SetAllowedPattern(Aws::String&& value) { m_allowedPatternHasBeenSet = true; m_allowedPattern = std::move(value); }

    /**
     * <p>A regular expression that represents the patterns to allow for String
     * types.</p>
     */
    inline void SetAllowedPattern(const char* value) { m_allowedPatternHasBeenSet = true; m_allowedPattern.assign(value); }

    /**
     * <p>A regular expression that represents the patterns to allow for String
     * types.</p>
     */
    inline ParameterDefinition& WithAllowedPattern(const Aws::String& value) { SetAllowedPattern(value); return *this;}

    /**
     * <p>A regular expression that represents the patterns to allow for String
     * types.</p>
     */
    inline ParameterDefinition& WithAllowedPattern(Aws::String&& value) { SetAllowedPattern(std::move(value)); return *this;}

    /**
     * <p>A regular expression that represents the patterns to allow for String
     * types.</p>
     */
    inline ParameterDefinition& WithAllowedPattern(const char* value) { SetAllowedPattern(value); return *this;}


    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline ParameterDefinition& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline ParameterDefinition& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline ParameterDefinition& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline ParameterDefinition& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }

    /**
     * <p>An array containing the list of values allowed for the parameter.</p>
     */
    inline ParameterDefinition& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }


    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,
 a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user

     * specifies an invalid value:</p><p>
 Malformed input-Parameter MyParameter must
     * match pattern [A-Za-z0-9]+
 </p><p>By adding a constraint description, such as
     * "must contain only uppercase and lowercase letters and numbers," you can
     * display
 the following customized error message:</p><p>
 Malformed
     * input-Parameter MyParameter must contain only uppercase and lowercase letters
     * and numbers.
 </p>
     */
    inline const Aws::String& GetConstraintDescription() const{ return m_constraintDescription; }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,
 a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user

     * specifies an invalid value:</p><p>
 Malformed input-Parameter MyParameter must
     * match pattern [A-Za-z0-9]+
 </p><p>By adding a constraint description, such as
     * "must contain only uppercase and lowercase letters and numbers," you can
     * display
 the following customized error message:</p><p>
 Malformed
     * input-Parameter MyParameter must contain only uppercase and lowercase letters
     * and numbers.
 </p>
     */
    inline bool ConstraintDescriptionHasBeenSet() const { return m_constraintDescriptionHasBeenSet; }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,
 a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user

     * specifies an invalid value:</p><p>
 Malformed input-Parameter MyParameter must
     * match pattern [A-Za-z0-9]+
 </p><p>By adding a constraint description, such as
     * "must contain only uppercase and lowercase letters and numbers," you can
     * display
 the following customized error message:</p><p>
 Malformed
     * input-Parameter MyParameter must contain only uppercase and lowercase letters
     * and numbers.
 </p>
     */
    inline void SetConstraintDescription(const Aws::String& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = value; }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,
 a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user

     * specifies an invalid value:</p><p>
 Malformed input-Parameter MyParameter must
     * match pattern [A-Za-z0-9]+
 </p><p>By adding a constraint description, such as
     * "must contain only uppercase and lowercase letters and numbers," you can
     * display
 the following customized error message:</p><p>
 Malformed
     * input-Parameter MyParameter must contain only uppercase and lowercase letters
     * and numbers.
 </p>
     */
    inline void SetConstraintDescription(Aws::String&& value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription = std::move(value); }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,
 a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user

     * specifies an invalid value:</p><p>
 Malformed input-Parameter MyParameter must
     * match pattern [A-Za-z0-9]+
 </p><p>By adding a constraint description, such as
     * "must contain only uppercase and lowercase letters and numbers," you can
     * display
 the following customized error message:</p><p>
 Malformed
     * input-Parameter MyParameter must contain only uppercase and lowercase letters
     * and numbers.
 </p>
     */
    inline void SetConstraintDescription(const char* value) { m_constraintDescriptionHasBeenSet = true; m_constraintDescription.assign(value); }

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,
 a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user

     * specifies an invalid value:</p><p>
 Malformed input-Parameter MyParameter must
     * match pattern [A-Za-z0-9]+
 </p><p>By adding a constraint description, such as
     * "must contain only uppercase and lowercase letters and numbers," you can
     * display
 the following customized error message:</p><p>
 Malformed
     * input-Parameter MyParameter must contain only uppercase and lowercase letters
     * and numbers.
 </p>
     */
    inline ParameterDefinition& WithConstraintDescription(const Aws::String& value) { SetConstraintDescription(value); return *this;}

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,
 a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user

     * specifies an invalid value:</p><p>
 Malformed input-Parameter MyParameter must
     * match pattern [A-Za-z0-9]+
 </p><p>By adding a constraint description, such as
     * "must contain only uppercase and lowercase letters and numbers," you can
     * display
 the following customized error message:</p><p>
 Malformed
     * input-Parameter MyParameter must contain only uppercase and lowercase letters
     * and numbers.
 </p>
     */
    inline ParameterDefinition& WithConstraintDescription(Aws::String&& value) { SetConstraintDescription(std::move(value)); return *this;}

    /**
     * <p>A string that explains a constraint when the constraint is violated. For
     * example, without a constraint description,
 a parameter that has an allowed
     * pattern of [A-Za-z0-9]+ displays the following error message when the user

     * specifies an invalid value:</p><p>
 Malformed input-Parameter MyParameter must
     * match pattern [A-Za-z0-9]+
 </p><p>By adding a constraint description, such as
     * "must contain only uppercase and lowercase letters and numbers," you can
     * display
 the following customized error message:</p><p>
 Malformed
     * input-Parameter MyParameter must contain only uppercase and lowercase letters
     * and numbers.
 </p>
     */
    inline ParameterDefinition& WithConstraintDescription(const char* value) { SetConstraintDescription(value); return *this;}


    /**
     * <p>A value of the appropriate type for the template to use if no value is
     * specified when a stack is created.
 If you define constraints for the parameter,
     * you must specify a value that adheres to those constraints.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>A value of the appropriate type for the template to use if no value is
     * specified when a stack is created.
 If you define constraints for the parameter,
     * you must specify a value that adheres to those constraints.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>A value of the appropriate type for the template to use if no value is
     * specified when a stack is created.
 If you define constraints for the parameter,
     * you must specify a value that adheres to those constraints.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>A value of the appropriate type for the template to use if no value is
     * specified when a stack is created.
 If you define constraints for the parameter,
     * you must specify a value that adheres to those constraints.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>A value of the appropriate type for the template to use if no value is
     * specified when a stack is created.
 If you define constraints for the parameter,
     * you must specify a value that adheres to those constraints.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>A value of the appropriate type for the template to use if no value is
     * specified when a stack is created.
 If you define constraints for the parameter,
     * you must specify a value that adheres to those constraints.</p>
     */
    inline ParameterDefinition& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>A value of the appropriate type for the template to use if no value is
     * specified when a stack is created.
 If you define constraints for the parameter,
     * you must specify a value that adheres to those constraints.</p>
     */
    inline ParameterDefinition& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>A value of the appropriate type for the template to use if no value is
     * specified when a stack is created.
 If you define constraints for the parameter,
     * you must specify a value that adheres to those constraints.</p>
     */
    inline ParameterDefinition& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>A string of up to 4,000 characters that describes the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A string of up to 4,000 characters that describes the parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A string of up to 4,000 characters that describes the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A string of up to 4,000 characters that describes the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A string of up to 4,000 characters that describes the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A string of up to 4,000 characters that describes the parameter.</p>
     */
    inline ParameterDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A string of up to 4,000 characters that describes the parameter.</p>
     */
    inline ParameterDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A string of up to 4,000 characters that describes the parameter.</p>
     */
    inline ParameterDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An integer value that determines the largest number of characters that you
     * want to allow for String types.</p>
     */
    inline int GetMaxLength() const{ return m_maxLength; }

    /**
     * <p>An integer value that determines the largest number of characters that you
     * want to allow for String types.</p>
     */
    inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }

    /**
     * <p>An integer value that determines the largest number of characters that you
     * want to allow for String types.</p>
     */
    inline void SetMaxLength(int value) { m_maxLengthHasBeenSet = true; m_maxLength = value; }

    /**
     * <p>An integer value that determines the largest number of characters that you
     * want to allow for String types.</p>
     */
    inline ParameterDefinition& WithMaxLength(int value) { SetMaxLength(value); return *this;}


    /**
     * <p>A numeric value that determines the largest numeric value that you want to
     * allow for Number types.</p>
     */
    inline int GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>A numeric value that determines the largest numeric value that you want to
     * allow for Number types.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>A numeric value that determines the largest numeric value that you want to
     * allow for Number types.</p>
     */
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>A numeric value that determines the largest numeric value that you want to
     * allow for Number types.</p>
     */
    inline ParameterDefinition& WithMaxValue(int value) { SetMaxValue(value); return *this;}


    /**
     * <p>An integer value that determines the smallest number of characters that you
     * want to allow for String types.</p>
     */
    inline int GetMinLength() const{ return m_minLength; }

    /**
     * <p>An integer value that determines the smallest number of characters that you
     * want to allow for String types.</p>
     */
    inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }

    /**
     * <p>An integer value that determines the smallest number of characters that you
     * want to allow for String types.</p>
     */
    inline void SetMinLength(int value) { m_minLengthHasBeenSet = true; m_minLength = value; }

    /**
     * <p>An integer value that determines the smallest number of characters that you
     * want to allow for String types.</p>
     */
    inline ParameterDefinition& WithMinLength(int value) { SetMinLength(value); return *this;}


    /**
     * <p>A numeric value that determines the smallest numeric value that you want to
     * allow for Number types.</p>
     */
    inline int GetMinValue() const{ return m_minValue; }

    /**
     * <p>A numeric value that determines the smallest numeric value that you want to
     * allow for Number types.</p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>A numeric value that determines the smallest numeric value that you want to
     * allow for Number types.</p>
     */
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>A numeric value that determines the smallest numeric value that you want to
     * allow for Number types.</p>
     */
    inline ParameterDefinition& WithMinValue(int value) { SetMinValue(value); return *this;}


    /**
     * <p>The name of the parameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter.</p>
     */
    inline ParameterDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline ParameterDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter.</p>
     */
    inline ParameterDefinition& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Whether to mask the parameter value whenever anyone makes a call that
     * describes the stack. If you set the
 value to true, the parameter value is
     * masked with asterisks (*****).</p>
     */
    inline bool GetNoEcho() const{ return m_noEcho; }

    /**
     * <p>Whether to mask the parameter value whenever anyone makes a call that
     * describes the stack. If you set the
 value to true, the parameter value is
     * masked with asterisks (*****).</p>
     */
    inline bool NoEchoHasBeenSet() const { return m_noEchoHasBeenSet; }

    /**
     * <p>Whether to mask the parameter value whenever anyone makes a call that
     * describes the stack. If you set the
 value to true, the parameter value is
     * masked with asterisks (*****).</p>
     */
    inline void SetNoEcho(bool value) { m_noEchoHasBeenSet = true; m_noEcho = value; }

    /**
     * <p>Whether to mask the parameter value whenever anyone makes a call that
     * describes the stack. If you set the
 value to true, the parameter value is
     * masked with asterisks (*****).</p>
     */
    inline ParameterDefinition& WithNoEcho(bool value) { SetNoEcho(value); return *this;}


    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReferencedByResources() const{ return m_referencedByResources; }

    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline bool ReferencedByResourcesHasBeenSet() const { return m_referencedByResourcesHasBeenSet; }

    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline void SetReferencedByResources(const Aws::Vector<Aws::String>& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources = value; }

    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline void SetReferencedByResources(Aws::Vector<Aws::String>&& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources = std::move(value); }

    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline ParameterDefinition& WithReferencedByResources(const Aws::Vector<Aws::String>& value) { SetReferencedByResources(value); return *this;}

    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline ParameterDefinition& WithReferencedByResources(Aws::Vector<Aws::String>&& value) { SetReferencedByResources(std::move(value)); return *this;}

    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline ParameterDefinition& AddReferencedByResources(const Aws::String& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources.push_back(value); return *this; }

    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline ParameterDefinition& AddReferencedByResources(Aws::String&& value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of AWS SAM resources that use this parameter.</p>
     */
    inline ParameterDefinition& AddReferencedByResources(const char* value) { m_referencedByResourcesHasBeenSet = true; m_referencedByResources.push_back(value); return *this; }


    /**
     * <p>The type of the parameter.</p><p>Valid values: String | Number |
     * List&lt;Number> | CommaDelimitedList
 </p><p>
 String: A literal
     * string.</p><p>For example, users can specify "MyUserName".</p><p>
 Number: An
     * integer or float. AWS CloudFormation validates the parameter value as a number.
     * However, when you use the
 parameter elsewhere in your template (for example, by
     * using the Ref intrinsic function), the parameter value becomes a
     * string.</p><p>For example, users might specify "8888".</p><p>
 List&lt;Number>:
     * An array of integers or floats that are separated by commas. AWS CloudFormation
     * validates the parameter value as numbers. However, when
 you use the parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a list of strings.</p><p>For example, users might
     * specify "80,20", and then Ref results in ["80","20"].</p><p>

     * CommaDelimitedList: An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of commas.

     * Also, each member string is space-trimmed.</p><p>For example, users might
     * specify "test,dev,prod", and then Ref results in ["test","dev","prod"].</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the parameter.</p><p>Valid values: String | Number |
     * List&lt;Number> | CommaDelimitedList
 </p><p>
 String: A literal
     * string.</p><p>For example, users can specify "MyUserName".</p><p>
 Number: An
     * integer or float. AWS CloudFormation validates the parameter value as a number.
     * However, when you use the
 parameter elsewhere in your template (for example, by
     * using the Ref intrinsic function), the parameter value becomes a
     * string.</p><p>For example, users might specify "8888".</p><p>
 List&lt;Number>:
     * An array of integers or floats that are separated by commas. AWS CloudFormation
     * validates the parameter value as numbers. However, when
 you use the parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a list of strings.</p><p>For example, users might
     * specify "80,20", and then Ref results in ["80","20"].</p><p>

     * CommaDelimitedList: An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of commas.

     * Also, each member string is space-trimmed.</p><p>For example, users might
     * specify "test,dev,prod", and then Ref results in ["test","dev","prod"].</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the parameter.</p><p>Valid values: String | Number |
     * List&lt;Number> | CommaDelimitedList
 </p><p>
 String: A literal
     * string.</p><p>For example, users can specify "MyUserName".</p><p>
 Number: An
     * integer or float. AWS CloudFormation validates the parameter value as a number.
     * However, when you use the
 parameter elsewhere in your template (for example, by
     * using the Ref intrinsic function), the parameter value becomes a
     * string.</p><p>For example, users might specify "8888".</p><p>
 List&lt;Number>:
     * An array of integers or floats that are separated by commas. AWS CloudFormation
     * validates the parameter value as numbers. However, when
 you use the parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a list of strings.</p><p>For example, users might
     * specify "80,20", and then Ref results in ["80","20"].</p><p>

     * CommaDelimitedList: An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of commas.

     * Also, each member string is space-trimmed.</p><p>For example, users might
     * specify "test,dev,prod", and then Ref results in ["test","dev","prod"].</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the parameter.</p><p>Valid values: String | Number |
     * List&lt;Number> | CommaDelimitedList
 </p><p>
 String: A literal
     * string.</p><p>For example, users can specify "MyUserName".</p><p>
 Number: An
     * integer or float. AWS CloudFormation validates the parameter value as a number.
     * However, when you use the
 parameter elsewhere in your template (for example, by
     * using the Ref intrinsic function), the parameter value becomes a
     * string.</p><p>For example, users might specify "8888".</p><p>
 List&lt;Number>:
     * An array of integers or floats that are separated by commas. AWS CloudFormation
     * validates the parameter value as numbers. However, when
 you use the parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a list of strings.</p><p>For example, users might
     * specify "80,20", and then Ref results in ["80","20"].</p><p>

     * CommaDelimitedList: An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of commas.

     * Also, each member string is space-trimmed.</p><p>For example, users might
     * specify "test,dev,prod", and then Ref results in ["test","dev","prod"].</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the parameter.</p><p>Valid values: String | Number |
     * List&lt;Number> | CommaDelimitedList
 </p><p>
 String: A literal
     * string.</p><p>For example, users can specify "MyUserName".</p><p>
 Number: An
     * integer or float. AWS CloudFormation validates the parameter value as a number.
     * However, when you use the
 parameter elsewhere in your template (for example, by
     * using the Ref intrinsic function), the parameter value becomes a
     * string.</p><p>For example, users might specify "8888".</p><p>
 List&lt;Number>:
     * An array of integers or floats that are separated by commas. AWS CloudFormation
     * validates the parameter value as numbers. However, when
 you use the parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a list of strings.</p><p>For example, users might
     * specify "80,20", and then Ref results in ["80","20"].</p><p>

     * CommaDelimitedList: An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of commas.

     * Also, each member string is space-trimmed.</p><p>For example, users might
     * specify "test,dev,prod", and then Ref results in ["test","dev","prod"].</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the parameter.</p><p>Valid values: String | Number |
     * List&lt;Number> | CommaDelimitedList
 </p><p>
 String: A literal
     * string.</p><p>For example, users can specify "MyUserName".</p><p>
 Number: An
     * integer or float. AWS CloudFormation validates the parameter value as a number.
     * However, when you use the
 parameter elsewhere in your template (for example, by
     * using the Ref intrinsic function), the parameter value becomes a
     * string.</p><p>For example, users might specify "8888".</p><p>
 List&lt;Number>:
     * An array of integers or floats that are separated by commas. AWS CloudFormation
     * validates the parameter value as numbers. However, when
 you use the parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a list of strings.</p><p>For example, users might
     * specify "80,20", and then Ref results in ["80","20"].</p><p>

     * CommaDelimitedList: An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of commas.

     * Also, each member string is space-trimmed.</p><p>For example, users might
     * specify "test,dev,prod", and then Ref results in ["test","dev","prod"].</p>
     */
    inline ParameterDefinition& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the parameter.</p><p>Valid values: String | Number |
     * List&lt;Number> | CommaDelimitedList
 </p><p>
 String: A literal
     * string.</p><p>For example, users can specify "MyUserName".</p><p>
 Number: An
     * integer or float. AWS CloudFormation validates the parameter value as a number.
     * However, when you use the
 parameter elsewhere in your template (for example, by
     * using the Ref intrinsic function), the parameter value becomes a
     * string.</p><p>For example, users might specify "8888".</p><p>
 List&lt;Number>:
     * An array of integers or floats that are separated by commas. AWS CloudFormation
     * validates the parameter value as numbers. However, when
 you use the parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a list of strings.</p><p>For example, users might
     * specify "80,20", and then Ref results in ["80","20"].</p><p>

     * CommaDelimitedList: An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of commas.

     * Also, each member string is space-trimmed.</p><p>For example, users might
     * specify "test,dev,prod", and then Ref results in ["test","dev","prod"].</p>
     */
    inline ParameterDefinition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the parameter.</p><p>Valid values: String | Number |
     * List&lt;Number> | CommaDelimitedList
 </p><p>
 String: A literal
     * string.</p><p>For example, users can specify "MyUserName".</p><p>
 Number: An
     * integer or float. AWS CloudFormation validates the parameter value as a number.
     * However, when you use the
 parameter elsewhere in your template (for example, by
     * using the Ref intrinsic function), the parameter value becomes a
     * string.</p><p>For example, users might specify "8888".</p><p>
 List&lt;Number>:
     * An array of integers or floats that are separated by commas. AWS CloudFormation
     * validates the parameter value as numbers. However, when
 you use the parameter
     * elsewhere in your template (for example, by using the Ref intrinsic function),
     * the parameter value becomes a list of strings.</p><p>For example, users might
     * specify "80,20", and then Ref results in ["80","20"].</p><p>

     * CommaDelimitedList: An array of literal strings that are separated by commas.
     * The total number of strings should be one more than the total number of commas.

     * Also, each member string is space-trimmed.</p><p>For example, users might
     * specify "test,dev,prod", and then Ref results in ["test","dev","prod"].</p>
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
