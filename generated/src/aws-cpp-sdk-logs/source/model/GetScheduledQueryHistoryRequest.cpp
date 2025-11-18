/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/GetScheduledQueryHistoryRequest.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetScheduledQueryHistoryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithInt64("startTime", m_startTime);
  }

  if (m_endTimeHasBeenSet) {
    payload.WithInt64("endTime", m_endTime);
  }

  if (m_executionStatusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> executionStatusesJsonList(m_executionStatuses.size());
    for (unsigned executionStatusesIndex = 0; executionStatusesIndex < executionStatusesJsonList.GetLength(); ++executionStatusesIndex) {
      executionStatusesJsonList[executionStatusesIndex].AsString(
          ExecutionStatusMapper::GetNameForExecutionStatus(m_executionStatuses[executionStatusesIndex]));
    }
    payload.WithArray("executionStatuses", std::move(executionStatusesJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetScheduledQueryHistoryRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.GetScheduledQueryHistory"));
  return headers;
}
