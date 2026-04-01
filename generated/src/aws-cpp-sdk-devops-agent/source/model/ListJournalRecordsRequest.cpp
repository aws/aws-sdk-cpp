/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ListJournalRecordsRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListJournalRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_executionIdHasBeenSet) {
    payload.WithString("executionId", m_executionId);
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("limit", m_limit);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_recordTypeHasBeenSet) {
    payload.WithString("recordType", m_recordType);
  }

  if (m_orderHasBeenSet) {
    payload.WithString("order", OrderTypeMapper::GetNameForOrderType(m_order));
  }

  return payload.View().WriteReadable();
}
