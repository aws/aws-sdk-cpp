/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <memory>

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
namespace AmplifyUIBuilder
{
namespace Model
{
  class ComponentProperty;

  /**
   * <p>Represents a conditional expression to set a component property. Use
   * <code>ComponentConditionProperty</code> to set a property to different values
   * conditionally, based on the value of another property.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentConditionProperty">AWS
   * API Reference</a></p>
   */
  class ComponentConditionProperty
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty();
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value to assign to the property if the condition is not met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API const ComponentProperty& GetElse() const;

    /**
     * <p>The value to assign to the property if the condition is not met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API bool ElseHasBeenSet() const;

    /**
     * <p>The value to assign to the property if the condition is not met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API void SetElse(const ComponentProperty& value);

    /**
     * <p>The value to assign to the property if the condition is not met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API void SetElse(ComponentProperty&& value);

    /**
     * <p>The value to assign to the property if the condition is not met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& WithElse(const ComponentProperty& value);

    /**
     * <p>The value to assign to the property if the condition is not met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& WithElse(ComponentProperty&& value);


    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }

    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }

    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }

    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }

    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }

    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline ComponentConditionProperty& WithField(const Aws::String& value) { SetField(value); return *this;}

    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline ComponentConditionProperty& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}

    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline ComponentConditionProperty& WithField(const char* value) { SetField(value); return *this;}


    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline const Aws::String& GetOperand() const{ return m_operand; }

    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline bool OperandHasBeenSet() const { return m_operandHasBeenSet; }

    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline void SetOperand(const Aws::String& value) { m_operandHasBeenSet = true; m_operand = value; }

    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline void SetOperand(Aws::String&& value) { m_operandHasBeenSet = true; m_operand = std::move(value); }

    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline void SetOperand(const char* value) { m_operandHasBeenSet = true; m_operand.assign(value); }

    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline ComponentConditionProperty& WithOperand(const Aws::String& value) { SetOperand(value); return *this;}

    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline ComponentConditionProperty& WithOperand(Aws::String&& value) { SetOperand(std::move(value)); return *this;}

    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline ComponentConditionProperty& WithOperand(const char* value) { SetOperand(value); return *this;}


    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline const Aws::String& GetOperandType() const{ return m_operandType; }

    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline bool OperandTypeHasBeenSet() const { return m_operandTypeHasBeenSet; }

    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline void SetOperandType(const Aws::String& value) { m_operandTypeHasBeenSet = true; m_operandType = value; }

    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline void SetOperandType(Aws::String&& value) { m_operandTypeHasBeenSet = true; m_operandType = std::move(value); }

    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline void SetOperandType(const char* value) { m_operandTypeHasBeenSet = true; m_operandType.assign(value); }

    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline ComponentConditionProperty& WithOperandType(const Aws::String& value) { SetOperandType(value); return *this;}

    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline ComponentConditionProperty& WithOperandType(Aws::String&& value) { SetOperandType(std::move(value)); return *this;}

    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline ComponentConditionProperty& WithOperandType(const char* value) { SetOperandType(value); return *this;}


    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline const Aws::String& GetOperator() const{ return m_operator; }

    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }

    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline void SetOperator(const Aws::String& value) { m_operatorHasBeenSet = true; m_operator = value; }

    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline void SetOperator(Aws::String&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }

    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline void SetOperator(const char* value) { m_operatorHasBeenSet = true; m_operator.assign(value); }

    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline ComponentConditionProperty& WithOperator(const Aws::String& value) { SetOperator(value); return *this;}

    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline ComponentConditionProperty& WithOperator(Aws::String&& value) { SetOperator(std::move(value)); return *this;}

    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline ComponentConditionProperty& WithOperator(const char* value) { SetOperator(value); return *this;}


    /**
     * <p>The name of the conditional property.</p>
     */
    inline const Aws::String& GetProperty() const{ return m_property; }

    /**
     * <p>The name of the conditional property.</p>
     */
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }

    /**
     * <p>The name of the conditional property.</p>
     */
    inline void SetProperty(const Aws::String& value) { m_propertyHasBeenSet = true; m_property = value; }

    /**
     * <p>The name of the conditional property.</p>
     */
    inline void SetProperty(Aws::String&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }

    /**
     * <p>The name of the conditional property.</p>
     */
    inline void SetProperty(const char* value) { m_propertyHasBeenSet = true; m_property.assign(value); }

    /**
     * <p>The name of the conditional property.</p>
     */
    inline ComponentConditionProperty& WithProperty(const Aws::String& value) { SetProperty(value); return *this;}

    /**
     * <p>The name of the conditional property.</p>
     */
    inline ComponentConditionProperty& WithProperty(Aws::String&& value) { SetProperty(std::move(value)); return *this;}

    /**
     * <p>The name of the conditional property.</p>
     */
    inline ComponentConditionProperty& WithProperty(const char* value) { SetProperty(value); return *this;}


    /**
     * <p>The value to assign to the property if the condition is met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API const ComponentProperty& GetThen() const;

    /**
     * <p>The value to assign to the property if the condition is met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API bool ThenHasBeenSet() const;

    /**
     * <p>The value to assign to the property if the condition is met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API void SetThen(const ComponentProperty& value);

    /**
     * <p>The value to assign to the property if the condition is met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API void SetThen(ComponentProperty&& value);

    /**
     * <p>The value to assign to the property if the condition is met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& WithThen(const ComponentProperty& value);

    /**
     * <p>The value to assign to the property if the condition is met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& WithThen(ComponentProperty&& value);

  private:

    std::shared_ptr<ComponentProperty> m_else;
    bool m_elseHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_operand;
    bool m_operandHasBeenSet = false;

    Aws::String m_operandType;
    bool m_operandTypeHasBeenSet = false;

    Aws::String m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_property;
    bool m_propertyHasBeenSet = false;

    std::shared_ptr<ComponentProperty> m_then;
    bool m_thenHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
