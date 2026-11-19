/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/StartTopicReassignmentRequest.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartTopicReassignmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_targetInstanceTypeHasBeenSet) {
    payload.WithString("targetInstanceType", m_targetInstanceType);
  }

  if (m_topicsToExcludeHasBeenSet) {
    Aws::Utils::Array<JsonValue> topicsToExcludeJsonList(m_topicsToExclude.size());
    for (unsigned topicsToExcludeIndex = 0; topicsToExcludeIndex < topicsToExcludeJsonList.GetLength(); ++topicsToExcludeIndex) {
      topicsToExcludeJsonList[topicsToExcludeIndex].AsString(m_topicsToExclude[topicsToExcludeIndex]);
    }
    payload.WithArray("topicsToExclude", std::move(topicsToExcludeJsonList));
  }

  if (m_topicsToIncludeHasBeenSet) {
    Aws::Utils::Array<JsonValue> topicsToIncludeJsonList(m_topicsToInclude.size());
    for (unsigned topicsToIncludeIndex = 0; topicsToIncludeIndex < topicsToIncludeJsonList.GetLength(); ++topicsToIncludeIndex) {
      topicsToIncludeJsonList[topicsToIncludeIndex].AsString(m_topicsToInclude[topicsToIncludeIndex]);
    }
    payload.WithArray("topicsToInclude", std::move(topicsToIncludeJsonList));
  }

  return payload.View().WriteReadable();
}
