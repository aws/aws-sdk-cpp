/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/ScheduledReportSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BCMDashboards {
namespace Model {

ScheduledReportSummary::ScheduledReportSummary(JsonView jsonValue) { *this = jsonValue; }

ScheduledReportSummary& ScheduledReportSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dashboardArn")) {
    m_dashboardArn = jsonValue.GetString("dashboardArn");
    m_dashboardArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleExpression")) {
    m_scheduleExpression = jsonValue.GetString("scheduleExpression");
    m_scheduleExpressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = ScheduleStateMapper::GetScheduleStateForName(jsonValue.GetString("state"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("healthStatus")) {
    m_healthStatus = jsonValue.GetObject("healthStatus");
    m_healthStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleExpressionTimeZone")) {
    m_scheduleExpressionTimeZone = jsonValue.GetString("scheduleExpressionTimeZone");
    m_scheduleExpressionTimeZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("widgetIds")) {
    Aws::Utils::Array<JsonView> widgetIdsJsonList = jsonValue.GetArray("widgetIds");
    for (unsigned widgetIdsIndex = 0; widgetIdsIndex < widgetIdsJsonList.GetLength(); ++widgetIdsIndex) {
      m_widgetIds.push_back(widgetIdsJsonList[widgetIdsIndex].AsString());
    }
    m_widgetIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledReportSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_dashboardArnHasBeenSet) {
    payload.WithString("dashboardArn", m_dashboardArn);
  }

  if (m_scheduleExpressionHasBeenSet) {
    payload.WithString("scheduleExpression", m_scheduleExpression);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", ScheduleStateMapper::GetNameForScheduleState(m_state));
  }

  if (m_healthStatusHasBeenSet) {
    payload.WithObject("healthStatus", m_healthStatus.Jsonize());
  }

  if (m_scheduleExpressionTimeZoneHasBeenSet) {
    payload.WithString("scheduleExpressionTimeZone", m_scheduleExpressionTimeZone);
  }

  if (m_widgetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> widgetIdsJsonList(m_widgetIds.size());
    for (unsigned widgetIdsIndex = 0; widgetIdsIndex < widgetIdsJsonList.GetLength(); ++widgetIdsIndex) {
      widgetIdsJsonList[widgetIdsIndex].AsString(m_widgetIds[widgetIdsIndex]);
    }
    payload.WithArray("widgetIds", std::move(widgetIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
