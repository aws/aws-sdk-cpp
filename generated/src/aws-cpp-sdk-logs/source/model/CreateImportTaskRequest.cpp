/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/CreateImportTaskRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateImportTaskRequest::SerializePayload() const {
  JsonValue payload;

  if (m_importSourceArnHasBeenSet) {
    payload.WithString("importSourceArn", m_importSourceArn);
  }

  if (m_importRoleArnHasBeenSet) {
    payload.WithString("importRoleArn", m_importRoleArn);
  }

  if (m_importFilterHasBeenSet) {
    payload.WithObject("importFilter", m_importFilter.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateImportTaskRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.CreateImportTask"));
  return headers;
}
