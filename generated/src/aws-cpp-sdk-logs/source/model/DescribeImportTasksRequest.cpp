/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/DescribeImportTasksRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeImportTasksRequest::SerializePayload() const {
  JsonValue payload;

  if (m_importIdHasBeenSet) {
    payload.WithString("importId", m_importId);
  }

  if (m_importStatusHasBeenSet) {
    payload.WithString("importStatus", ImportStatusMapper::GetNameForImportStatus(m_importStatus));
  }

  if (m_importSourceArnHasBeenSet) {
    payload.WithString("importSourceArn", m_importSourceArn);
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("limit", m_limit);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeImportTasksRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DescribeImportTasks"));
  return headers;
}
