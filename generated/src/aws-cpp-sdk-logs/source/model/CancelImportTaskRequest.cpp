/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/CancelImportTaskRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CancelImportTaskRequest::SerializePayload() const {
  JsonValue payload;

  if (m_importIdHasBeenSet) {
    payload.WithString("importId", m_importId);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CancelImportTaskRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.CancelImportTask"));
  return headers;
}
