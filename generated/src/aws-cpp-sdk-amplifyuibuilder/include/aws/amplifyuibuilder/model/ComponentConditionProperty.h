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


    ///@{
    /**
     * <p>The name of the conditional property.</p>
     */
    inline const Aws::String& GetProperty() const{ return m_property; }
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
    inline void SetProperty(const Aws::String& value) { m_propertyHasBeenSet = true; m_property = value; }
    inline void SetProperty(Aws::String&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }
    inline void SetProperty(const char* value) { m_propertyHasBeenSet = true; m_property.assign(value); }
    inline ComponentConditionProperty& WithProperty(const Aws::String& value) { SetProperty(value); return *this;}
    inline ComponentConditionProperty& WithProperty(Aws::String&& value) { SetProperty(std::move(value)); return *this;}
    inline ComponentConditionProperty& WithProperty(const char* value) { SetProperty(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline const Aws::String& GetField() const{ return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(const Aws::String& value) { m_fieldHasBeenSet = true; m_field = value; }
    inline void SetField(Aws::String&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }
    inline void SetField(const char* value) { m_fieldHasBeenSet = true; m_field.assign(value); }
    inline ComponentConditionProperty& WithField(const Aws::String& value) { SetField(value); return *this;}
    inline ComponentConditionProperty& WithField(Aws::String&& value) { SetField(std::move(value)); return *this;}
    inline ComponentConditionProperty& WithField(const char* value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline const Aws::String& GetOperator() const{ return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(const Aws::String& value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline void SetOperator(Aws::String&& value) { m_operatorHasBeenSet = true; m_operator = std::move(value); }
    inline void SetOperator(const char* value) { m_operatorHasBeenSet = true; m_operator.assign(value); }
    inline ComponentConditionProperty& WithOperator(const Aws::String& value) { SetOperator(value); return *this;}
    inline ComponentConditionProperty& WithOperator(Aws::String&& value) { SetOperator(std::move(value)); return *this;}
    inline ComponentConditionProperty& WithOperator(const char* value) { SetOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline const Aws::String& GetOperand() const{ return m_operand; }
    inline bool OperandHasBeenSet() const { return m_operandHasBeenSet; }
    inline void SetOperand(const Aws::String& value) { m_operandHasBeenSet = true; m_operand = value; }
    inline void SetOperand(Aws::String&& value) { m_operandHasBeenSet = true; m_operand = std::move(value); }
    inline void SetOperand(const char* value) { m_operandHasBeenSet = true; m_operand.assign(value); }
    inline ComponentConditionProperty& WithOperand(const Aws::String& value) { SetOperand(value); return *this;}
    inline ComponentConditionProperty& WithOperand(Aws::String&& value) { SetOperand(std::move(value)); return *this;}
    inline ComponentConditionProperty& WithOperand(const char* value) { SetOperand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to assign to the property if the condition is met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API const ComponentProperty& GetThen() const;
    AWS_AMPLIFYUIBUILDER_API bool ThenHasBeenSet() const;
    AWS_AMPLIFYUIBUILDER_API void SetThen(const ComponentProperty& value);
    AWS_AMPLIFYUIBUILDER_API void SetThen(ComponentProperty&& value);
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& WithThen(const ComponentProperty& value);
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& WithThen(ComponentProperty&& value);
    ///@}

    ///@{
    /**
     * <p>The value to assign to the property if the condition is not met.</p>
     */
    AWS_AMPLIFYUIBUILDER_API const ComponentProperty& GetElse() const;
    AWS_AMPLIFYUIBUILDER_API bool ElseHasBeenSet() const;
    AWS_AMPLIFYUIBUILDER_API void SetElse(const ComponentProperty& value);
    AWS_AMPLIFYUIBUILDER_API void SetElse(ComponentProperty&& value);
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& WithElse(const ComponentProperty& value);
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& WithElse(ComponentProperty&& value);
    ///@}

    ///@{
    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline const Aws::String& GetOperandType() const{ return m_operandType; }
    inline bool OperandTypeHasBeenSet() const { return m_operandTypeHasBeenSet; }
    inline void SetOperandType(const Aws::String& value) { m_operandTypeHasBeenSet = true; m_operandType = value; }
    inline void SetOperandType(Aws::String&& value) { m_operandTypeHasBeenSet = true; m_operandType = std::move(value); }
    inline void SetOperandType(const char* value) { m_operandTypeHasBeenSet = true; m_operandType.assign(value); }
    inline ComponentConditionProperty& WithOperandType(const Aws::String& value) { SetOperandType(value); return *this;}
    inline ComponentConditionProperty& WithOperandType(Aws::String&& value) { SetOperandType(std::move(value)); return *this;}
    inline ComponentConditionProperty& WithOperandType(const char* value) { SetOperandType(value); return *this;}
    ///@}
  private:

    Aws::String m_property;
    bool m_propertyHasBeenSet = false;

    Aws::String m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_operator;
    bool m_operatorHasBeenSet = false;

    Aws::String m_operand;
    bool m_operandHasBeenSet = false;

    std::shared_ptr<ComponentProperty> m_then;
    bool m_thenHasBeenSet = false;

    std::shared_ptr<ComponentProperty> m_else;
    bool m_elseHasBeenSet = false;

    Aws::String m_operandType;
    bool m_operandTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
