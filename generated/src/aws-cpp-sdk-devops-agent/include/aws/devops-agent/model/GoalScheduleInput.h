/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Schedule configuration for updating goal evaluations</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GoalScheduleInput">AWS
 * API Reference</a></p>
 */
class GoalScheduleInput {
 public:
  AWS_DEVOPSAGENT_API GoalScheduleInput() = default;
  AWS_DEVOPSAGENT_API GoalScheduleInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API GoalScheduleInput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline GoalScheduleInput& WithState(SchedulerState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  SchedulerState m_state{SchedulerState::NOT_SET};
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
