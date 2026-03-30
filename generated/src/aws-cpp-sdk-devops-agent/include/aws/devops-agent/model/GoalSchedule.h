/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SchedulerState.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Schedule configuration for goal evaluations</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GoalSchedule">AWS
 * API Reference</a></p>
 */
class GoalSchedule {
 public:
  AWS_DEVOPSAGENT_API GoalSchedule() = default;
  AWS_DEVOPSAGENT_API GoalSchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API GoalSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the schedule is enabled or disabled</p>
   */
  inline SchedulerState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(SchedulerState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GoalSchedule& WithState(SchedulerState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Schedule expression (e.g., 'rate(7 days)')</p>
   */
  inline const Aws::String& GetExpression() const { return m_expression; }
  inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
  template <typename ExpressionT = Aws::String>
  void SetExpression(ExpressionT&& value) {
    m_expressionHasBeenSet = true;
    m_expression = std::forward<ExpressionT>(value);
  }
  template <typename ExpressionT = Aws::String>
  GoalSchedule& WithExpression(ExpressionT&& value) {
    SetExpression(std::forward<ExpressionT>(value));
    return *this;
  }
  ///@}
 private:
  SchedulerState m_state{SchedulerState::NOT_SET};

  Aws::String m_expression;
  bool m_stateHasBeenSet = false;
  bool m_expressionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
