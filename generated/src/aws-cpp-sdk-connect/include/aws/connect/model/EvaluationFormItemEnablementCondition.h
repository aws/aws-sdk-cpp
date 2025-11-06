/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormItemEnablementConditionOperand.h>
#include <aws/connect/model/EvaluationFormItemEnablementOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class EvaluationFormItemEnablementConditionOperand;

/**
 * <p>A condition for item enablement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormItemEnablementCondition">AWS
 * API Reference</a></p>
 */
class EvaluationFormItemEnablementCondition {
 public:
  AWS_CONNECT_API EvaluationFormItemEnablementCondition() = default;
  AWS_CONNECT_API EvaluationFormItemEnablementCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormItemEnablementCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Operands of the enablement condition.</p>
   */
  inline const Aws::Vector<EvaluationFormItemEnablementConditionOperand>& GetOperands() const { return m_operands; }
  inline bool OperandsHasBeenSet() const { return m_operandsHasBeenSet; }
  template <typename OperandsT = Aws::Vector<EvaluationFormItemEnablementConditionOperand>>
  void SetOperands(OperandsT&& value) {
    m_operandsHasBeenSet = true;
    m_operands = std::forward<OperandsT>(value);
  }
  template <typename OperandsT = Aws::Vector<EvaluationFormItemEnablementConditionOperand>>
  EvaluationFormItemEnablementCondition& WithOperands(OperandsT&& value) {
    SetOperands(std::forward<OperandsT>(value));
    return *this;
  }
  template <typename OperandsT = EvaluationFormItemEnablementConditionOperand>
  EvaluationFormItemEnablementCondition& AddOperands(OperandsT&& value) {
    m_operandsHasBeenSet = true;
    m_operands.emplace_back(std::forward<OperandsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The operator to be used to be applied to operands if more than one provided.
   * </p>
   */
  inline EvaluationFormItemEnablementOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(EvaluationFormItemEnablementOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline EvaluationFormItemEnablementCondition& WithOperator(EvaluationFormItemEnablementOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationFormItemEnablementConditionOperand> m_operands;
  bool m_operandsHasBeenSet = false;

  EvaluationFormItemEnablementOperator m_operator{EvaluationFormItemEnablementOperator::NOT_SET};
  bool m_operatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
