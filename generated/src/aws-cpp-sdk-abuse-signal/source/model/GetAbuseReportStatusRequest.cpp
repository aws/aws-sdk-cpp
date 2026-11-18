/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/GetAbuseReportStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AbuseSignal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetAbuseReportStatusRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection GetAbuseReportStatusRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AbuseReportApi.GetAbuseReportStatus"));
  return headers;
}
