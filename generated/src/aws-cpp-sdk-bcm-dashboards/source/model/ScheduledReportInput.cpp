/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/ScheduledReportInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BCMDashboards {
namespace Model {

ScheduledReportInput::ScheduledReportInput(JsonView jsonValue) { *this = jsonValue; }

ScheduledReportInput& ScheduledReportInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dashboardArn")) {
    m_dashboardArn = jsonValue.GetString("dashboardArn");
    m_dashboardArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduledReportExecutionRoleArn")) {
    m_scheduledReportExecutionRoleArn = jsonValue.GetString("scheduledReportExecutionRoleArn");
    m_scheduledReportExecutionRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleConfig")) {
    m_scheduleConfig = jsonValue.GetObject("scheduleConfig");
    m_scheduleConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("widgetIds")) {
    Aws::Utils::Array<JsonView> widgetIdsJsonList = jsonValue.GetArray("widgetIds");
    for (unsigned widgetIdsIndex = 0; widgetIdsIndex < widgetIdsJsonList.GetLength(); ++widgetIdsIndex) {
      m_widgetIds.push_back(widgetIdsJsonList[widgetIdsIndex].AsString());
    }
    m_widgetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("widgetDateRangeOverride")) {
    m_widgetDateRangeOverride = jsonValue.GetObject("widgetDateRangeOverride");
    m_widgetDateRangeOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledReportInput::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_dashboardArnHasBeenSet) {
    payload.WithString("dashboardArn", m_dashboardArn);
  }

  if (m_scheduledReportExecutionRoleArnHasBeenSet) {
    payload.WithString("scheduledReportExecutionRoleArn", m_scheduledReportExecutionRoleArn);
  }

  if (m_scheduleConfigHasBeenSet) {
    payload.WithObject("scheduleConfig", m_scheduleConfig.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_widgetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> widgetIdsJsonList(m_widgetIds.size());
    for (unsigned widgetIdsIndex = 0; widgetIdsIndex < widgetIdsJsonList.GetLength(); ++widgetIdsIndex) {
      widgetIdsJsonList[widgetIdsIndex].AsString(m_widgetIds[widgetIdsIndex]);
    }
    payload.WithArray("widgetIds", std::move(widgetIdsJsonList));
  }

  if (m_widgetDateRangeOverrideHasBeenSet) {
    payload.WithObject("widgetDateRangeOverride", m_widgetDateRangeOverride.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
