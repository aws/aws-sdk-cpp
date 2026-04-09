/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/ScheduleConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BCMDashboards {
namespace Model {

ScheduleConfig::ScheduleConfig(JsonView jsonValue) { *this = jsonValue; }

ScheduleConfig& ScheduleConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scheduleExpression")) {
    m_scheduleExpression = jsonValue.GetString("scheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleExpressionTimeZone")) {
    m_scheduleExpressionTimeZone = jsonValue.GetString("scheduleExpressionTimeZone");
    m_scheduleExpressionTimeZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schedulePeriod")) {
    m_schedulePeriod = jsonValue.GetObject("schedulePeriod");
    m_schedulePeriodHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = ScheduleStateMapper::GetScheduleStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleConfig::Jsonize() const {
  JsonValue payload;

  if (m_scheduleExpressionHasBeenSet) {
    payload.WithString("scheduleExpression", m_scheduleExpression);
  }

  if (m_scheduleExpressionTimeZoneHasBeenSet) {
    payload.WithString("scheduleExpressionTimeZone", m_scheduleExpressionTimeZone);
  }

  if (m_schedulePeriodHasBeenSet) {
    payload.WithObject("schedulePeriod", m_schedulePeriod.Jsonize());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", ScheduleStateMapper::GetNameForScheduleState(m_state));
  }

  return payload;
}

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
