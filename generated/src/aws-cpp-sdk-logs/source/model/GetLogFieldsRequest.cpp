/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/GetLogFieldsRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetLogFieldsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_dataSourceNameHasBeenSet) {
    payload.WithString("dataSourceName", m_dataSourceName);
  }

  if (m_dataSourceTypeHasBeenSet) {
    payload.WithString("dataSourceType", m_dataSourceType);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLogFieldsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.GetLogFields"));
  return headers;
}
