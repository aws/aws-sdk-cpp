/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>
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
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty() = default;
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentConditionProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the conditional property.</p>
     */
    inline const Aws::String& GetProperty() const { return m_property; }
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
    template<typename PropertyT = Aws::String>
    void SetProperty(PropertyT&& value) { m_propertyHasBeenSet = true; m_property = std::forward<PropertyT>(value); }
    template<typename PropertyT = Aws::String>
    ComponentConditionProperty& WithProperty(PropertyT&& value) { SetProperty(std::forward<PropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a field. Specify this when the property is a data model.</p>
     */
    inline const Aws::String& GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    template<typename FieldT = Aws::String>
    void SetField(FieldT&& value) { m_fieldHasBeenSet = true; m_field = std::forward<FieldT>(value); }
    template<typename FieldT = Aws::String>
    ComponentConditionProperty& WithField(FieldT&& value) { SetField(std::forward<FieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operator to use to perform the evaluation, such as <code>eq</code> to
     * represent equals.</p>
     */
    inline const Aws::String& GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    template<typename OperatorT = Aws::String>
    void SetOperator(OperatorT&& value) { m_operatorHasBeenSet = true; m_operator = std::forward<OperatorT>(value); }
    template<typename OperatorT = Aws::String>
    ComponentConditionProperty& WithOperator(OperatorT&& value) { SetOperator(std::forward<OperatorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property to evaluate.</p>
     */
    inline const Aws::String& GetOperand() const { return m_operand; }
    inline bool OperandHasBeenSet() const { return m_operandHasBeenSet; }
    template<typename OperandT = Aws::String>
    void SetOperand(OperandT&& value) { m_operandHasBeenSet = true; m_operand = std::forward<OperandT>(value); }
    template<typename OperandT = Aws::String>
    ComponentConditionProperty& WithOperand(OperandT&& value) { SetOperand(std::forward<OperandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to assign to the property if the condition is met.</p>
     */
    inline const ComponentProperty& GetThen() const{
      return *m_then;
    }
    inline bool ThenHasBeenSet() const { return m_thenHasBeenSet; }
    template<typename ThenT = ComponentProperty>
    void SetThen(ThenT&& value) {
      m_thenHasBeenSet = true; 
      m_then = Aws::MakeShared<ComponentProperty>("ComponentConditionProperty", std::forward<ThenT>(value));
    }
    template<typename ThenT = ComponentProperty>
    ComponentConditionProperty& WithThen(ThenT&& value) { SetThen(std::forward<ThenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to assign to the property if the condition is not met.</p>
     */
    inline const ComponentProperty& GetElse() const{
      return *m_else;
    }
    inline bool ElseHasBeenSet() const { return m_elseHasBeenSet; }
    template<typename ElseT = ComponentProperty>
    void SetElse(ElseT&& value) {
      m_elseHasBeenSet = true; 
      m_else = Aws::MakeShared<ComponentProperty>("ComponentConditionProperty", std::forward<ElseT>(value));
    }
    template<typename ElseT = ComponentProperty>
    ComponentConditionProperty& WithElse(ElseT&& value) { SetElse(std::forward<ElseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the property to evaluate.</p>
     */
    inline const Aws::String& GetOperandType() const { return m_operandType; }
    inline bool OperandTypeHasBeenSet() const { return m_operandTypeHasBeenSet; }
    template<typename OperandTypeT = Aws::String>
    void SetOperandType(OperandTypeT&& value) { m_operandTypeHasBeenSet = true; m_operandType = std::forward<OperandTypeT>(value); }
    template<typename OperandTypeT = Aws::String>
    ComponentConditionProperty& WithOperandType(OperandTypeT&& value) { SetOperandType(std::forward<OperandTypeT>(value)); return *this;}
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
