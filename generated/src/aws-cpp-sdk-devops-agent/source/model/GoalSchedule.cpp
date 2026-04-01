/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/GoalSchedule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

GoalSchedule::GoalSchedule(JsonView jsonValue) { *this = jsonValue; }

GoalSchedule& GoalSchedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("state")) {
    m_state = SchedulerStateMapper::GetSchedulerStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("expression")) {
    m_expression = jsonValue.GetString("expression");
    m_expressionHasBeenSet = true;
  }
  return *this;
}

JsonValue GoalSchedule::Jsonize() const {
  JsonValue payload;

  if (m_stateHasBeenSet) {
    payload.WithString("state", SchedulerStateMapper::GetNameForSchedulerState(m_state));
  }

  if (m_expressionHasBeenSet) {
    payload.WithString("expression", m_expression);
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
