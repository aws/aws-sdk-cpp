/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/TriggerCondition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

TriggerCondition::TriggerCondition(JsonView jsonValue) { *this = jsonValue; }

TriggerCondition& TriggerCondition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("schedule")) {
    m_schedule = jsonValue.GetObject("schedule");
    m_scheduleHasBeenSet = true;
  }
  return *this;
}

JsonValue TriggerCondition::Jsonize() const {
  JsonValue payload;

  if (m_scheduleHasBeenSet) {
    payload.WithObject("schedule", m_schedule.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
