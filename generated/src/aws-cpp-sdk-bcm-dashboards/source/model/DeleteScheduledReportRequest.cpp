/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/DeleteScheduledReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BCMDashboards::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteScheduledReportRequest::SerializePayload() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteScheduledReportRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSBCMDashboardsService.DeleteScheduledReport"));
  return headers;
}
