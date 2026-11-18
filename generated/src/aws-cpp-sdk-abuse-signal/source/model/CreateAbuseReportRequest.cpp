/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/CreateAbuseReportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AbuseSignal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAbuseReportRequest::SerializePayload() const {
  JsonValue payload;

  if (m_reportHasBeenSet) {
    payload.WithObject("report", m_report.Jsonize());
  }

  if (m_correlationIdHasBeenSet) {
    payload.WithString("correlationId", m_correlationId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAbuseReportRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AbuseReportApi.CreateAbuseReport"));
  return headers;
}
