/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ListInvestigationRecordsRequest.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListInvestigationRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_investigationIdHasBeenSet) {
    payload.WithString("investigationId", m_investigationId);
  }

  if (m_recordTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> recordTypesJsonList(m_recordTypes.size());
    for (unsigned recordTypesIndex = 0; recordTypesIndex < recordTypesJsonList.GetLength(); ++recordTypesIndex) {
      recordTypesJsonList[recordTypesIndex].AsString(RecordTypeMapper::GetNameForRecordType(m_recordTypes[recordTypesIndex]));
    }
    payload.WithArray("recordTypes", std::move(recordTypesJsonList));
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
