/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormItemEnablementExpression.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>

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
class EvaluationFormItemEnablementCondition;

/**
 * <p>An operand of the enablement condition.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormItemEnablementConditionOperand">AWS
 * API Reference</a></p>
 */
class EvaluationFormItemEnablementConditionOperand {
 public:
  AWS_CONNECT_API EvaluationFormItemEnablementConditionOperand() = default;
  AWS_CONNECT_API EvaluationFormItemEnablementConditionOperand(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormItemEnablementConditionOperand& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An expression of the enablement condition.</p>
   */
  inline const EvaluationFormItemEnablementExpression& GetExpression() const { return m_expression; }
  inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
  template <typename ExpressionT = EvaluationFormItemEnablementExpression>
  void SetExpression(ExpressionT&& value) {
    m_expressionHasBeenSet = true;
    m_expression = std::forward<ExpressionT>(value);
  }
  template <typename ExpressionT = EvaluationFormItemEnablementExpression>
  EvaluationFormItemEnablementConditionOperand& WithExpression(ExpressionT&& value) {
    SetExpression(std::forward<ExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A condition for item enablement.</p>
   */
  inline const EvaluationFormItemEnablementCondition& GetCondition() const { return *m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  template <typename ConditionT = EvaluationFormItemEnablementCondition>
  void SetCondition(ConditionT&& value) {
    m_conditionHasBeenSet = true;
    m_condition = Aws::MakeShared<EvaluationFormItemEnablementCondition>("EvaluationFormItemEnablementConditionOperand",
                                                                         std::forward<ConditionT>(value));
  }
  template <typename ConditionT = EvaluationFormItemEnablementCondition>
  EvaluationFormItemEnablementConditionOperand& WithCondition(ConditionT&& value) {
    SetCondition(std::forward<ConditionT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormItemEnablementExpression m_expression;
  bool m_expressionHasBeenSet = false;

  std::shared_ptr<EvaluationFormItemEnablementCondition> m_condition;
  bool m_conditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
