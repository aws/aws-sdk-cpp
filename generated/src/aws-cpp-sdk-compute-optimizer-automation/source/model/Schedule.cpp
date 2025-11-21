/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/Schedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

Schedule::Schedule(JsonView jsonValue) { *this = jsonValue; }

Schedule& Schedule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scheduleExpression")) {
    m_scheduleExpression = jsonValue.GetString("scheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleExpressionTimezone")) {
    m_scheduleExpressionTimezone = jsonValue.GetString("scheduleExpressionTimezone");
    m_scheduleExpressionTimezoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionWindowInMinutes")) {
    m_executionWindowInMinutes = jsonValue.GetInteger("executionWindowInMinutes");
    m_executionWindowInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue Schedule::Jsonize() const {
  JsonValue payload;

  if (m_scheduleExpressionHasBeenSet) {
    payload.WithString("scheduleExpression", m_scheduleExpression);
  }

  if (m_scheduleExpressionTimezoneHasBeenSet) {
    payload.WithString("scheduleExpressionTimezone", m_scheduleExpressionTimezone);
  }

  if (m_executionWindowInMinutesHasBeenSet) {
    payload.WithInteger("executionWindowInMinutes", m_executionWindowInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
