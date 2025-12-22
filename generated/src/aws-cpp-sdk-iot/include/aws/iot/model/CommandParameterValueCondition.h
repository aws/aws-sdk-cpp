/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/CommandParameterValueComparisonOperand.h>
#include <aws/iot/model/CommandParameterValueComparisonOperator.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>A condition for the command parameter that must be evaluated to true for
 * successful creation of a command execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandParameterValueCondition">AWS
 * API Reference</a></p>
 */
class CommandParameterValueCondition {
 public:
  AWS_IOT_API CommandParameterValueCondition() = default;
  AWS_IOT_API CommandParameterValueCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API CommandParameterValueCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The comparison operator for the command parameter.</p>  <p>IN_RANGE,
   * and NOT_IN_RANGE operators include boundary values.</p>
   */
  inline CommandParameterValueComparisonOperator GetComparisonOperator() const { return m_comparisonOperator; }
  inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
  inline void SetComparisonOperator(CommandParameterValueComparisonOperator value) {
    m_comparisonOperatorHasBeenSet = true;
    m_comparisonOperator = value;
  }
  inline CommandParameterValueCondition& WithComparisonOperator(CommandParameterValueComparisonOperator value) {
    SetComparisonOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operand for the command parameter.</p>
   */
  inline const CommandParameterValueComparisonOperand& GetOperand() const { return m_operand; }
  inline bool OperandHasBeenSet() const { return m_operandHasBeenSet; }
  template <typename OperandT = CommandParameterValueComparisonOperand>
  void SetOperand(OperandT&& value) {
    m_operandHasBeenSet = true;
    m_operand = std::forward<OperandT>(value);
  }
  template <typename OperandT = CommandParameterValueComparisonOperand>
  CommandParameterValueCondition& WithOperand(OperandT&& value) {
    SetOperand(std::forward<OperandT>(value));
    return *this;
  }
  ///@}
 private:
  CommandParameterValueComparisonOperator m_comparisonOperator{CommandParameterValueComparisonOperator::NOT_SET};

  CommandParameterValueComparisonOperand m_operand;
  bool m_comparisonOperatorHasBeenSet = false;
  bool m_operandHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
