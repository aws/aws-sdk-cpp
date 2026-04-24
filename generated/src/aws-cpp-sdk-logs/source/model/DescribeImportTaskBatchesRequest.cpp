/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/DescribeImportTaskBatchesRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeImportTaskBatchesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_importIdHasBeenSet) {
    payload.WithString("importId", m_importId);
  }

  if (m_batchImportStatusHasBeenSet) {
    Aws::Utils::Array<JsonValue> batchImportStatusJsonList(m_batchImportStatus.size());
    for (unsigned batchImportStatusIndex = 0; batchImportStatusIndex < batchImportStatusJsonList.GetLength(); ++batchImportStatusIndex) {
      batchImportStatusJsonList[batchImportStatusIndex].AsString(
          ImportStatusMapper::GetNameForImportStatus(m_batchImportStatus[batchImportStatusIndex]));
    }
    payload.WithArray("batchImportStatus", std::move(batchImportStatusJsonList));
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("limit", m_limit);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeImportTaskBatchesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.DescribeImportTaskBatches"));
  return headers;
}
