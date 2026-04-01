/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/GoalScheduleInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

GoalScheduleInput::GoalScheduleInput(JsonView jsonValue) { *this = jsonValue; }

GoalScheduleInput& GoalScheduleInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("state")) {
    m_state = SchedulerStateMapper::GetSchedulerStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue GoalScheduleInput::Jsonize() const {
  JsonValue payload;

  if (m_stateHasBeenSet) {
    payload.WithString("state", SchedulerStateMapper::GetNameForSchedulerState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
