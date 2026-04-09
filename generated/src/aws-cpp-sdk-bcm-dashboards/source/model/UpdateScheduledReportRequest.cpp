/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/UpdateScheduledReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMDashboards::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateScheduledReportRequest::SerializePayload() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
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

  if (m_clearWidgetIdsHasBeenSet) {
    payload.WithBool("clearWidgetIds", m_clearWidgetIds);
  }

  if (m_clearWidgetDateRangeOverrideHasBeenSet) {
    payload.WithBool("clearWidgetDateRangeOverride", m_clearWidgetDateRangeOverride);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateScheduledReportRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMDashboardsService.UpdateScheduledReport"));
  return headers;
}
