/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormItemEnablementAction.h>
#include <aws/connect/model/EvaluationFormItemEnablementCondition.h>

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

/**
 * <p>An item enablement configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormItemEnablementConfiguration">AWS
 * API Reference</a></p>
 */
class EvaluationFormItemEnablementConfiguration {
 public:
  AWS_CONNECT_API EvaluationFormItemEnablementConfiguration() = default;
  AWS_CONNECT_API EvaluationFormItemEnablementConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormItemEnablementConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A condition for item enablement configuration.</p>
   */
  inline const EvaluationFormItemEnablementCondition& GetCondition() const { return m_condition; }
  inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
  template <typename ConditionT = EvaluationFormItemEnablementCondition>
  void SetCondition(ConditionT&& value) {
    m_conditionHasBeenSet = true;
    m_condition = std::forward<ConditionT>(value);
  }
  template <typename ConditionT = EvaluationFormItemEnablementCondition>
  EvaluationFormItemEnablementConfiguration& WithCondition(ConditionT&& value) {
    SetCondition(std::forward<ConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An enablement action that if condition is satisfied. </p>
   */
  inline EvaluationFormItemEnablementAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(EvaluationFormItemEnablementAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline EvaluationFormItemEnablementConfiguration& WithAction(EvaluationFormItemEnablementAction value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An enablement action that if condition is not satisfied. </p>
   */
  inline EvaluationFormItemEnablementAction GetDefaultAction() const { return m_defaultAction; }
  inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
  inline void SetDefaultAction(EvaluationFormItemEnablementAction value) {
    m_defaultActionHasBeenSet = true;
    m_defaultAction = value;
  }
  inline EvaluationFormItemEnablementConfiguration& WithDefaultAction(EvaluationFormItemEnablementAction value) {
    SetDefaultAction(value);
    return *this;
  }
  ///@}
 private:
  EvaluationFormItemEnablementCondition m_condition;

  EvaluationFormItemEnablementAction m_action{EvaluationFormItemEnablementAction::NOT_SET};

  EvaluationFormItemEnablementAction m_defaultAction{EvaluationFormItemEnablementAction::NOT_SET};
  bool m_conditionHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_defaultActionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
