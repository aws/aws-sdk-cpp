/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/TimeRangeSchedule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

TimeRangeSchedule::TimeRangeSchedule(JsonView jsonValue) { *this = jsonValue; }

TimeRangeSchedule& TimeRangeSchedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("startAfter")) {
    m_startAfter = jsonValue.GetString("startAfter");
    m_startAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startBefore")) {
    m_startBefore = jsonValue.GetString("startBefore");
    m_startBeforeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recurrence")) {
    m_recurrence = jsonValue.GetObject("recurrence");
    m_recurrenceHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeRangeSchedule::Jsonize() const {
  JsonValue payload;

  if (m_startAfterHasBeenSet) {
    payload.WithString("startAfter", m_startAfter);
  }

  if (m_startBeforeHasBeenSet) {
    payload.WithString("startBefore", m_startBefore);
  }

  if (m_recurrenceHasBeenSet) {
    payload.WithObject("recurrence", m_recurrence.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
