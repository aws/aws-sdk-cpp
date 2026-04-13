/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/CreateScheduledReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMDashboards::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateScheduledReportRequest::SerializePayload() const {
  JsonValue payload;

  if (m_scheduledReportHasBeenSet) {
    payload.WithObject("scheduledReport", m_scheduledReport.Jsonize());
  }

  if (m_resourceTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
    for (unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex) {
      resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
    }
    payload.WithArray("resourceTags", std::move(resourceTagsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateScheduledReportRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMDashboardsService.CreateScheduledReport"));
  return headers;
}
