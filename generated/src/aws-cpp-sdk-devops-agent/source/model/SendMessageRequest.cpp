/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/SendMessageRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendMessageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_executionIdHasBeenSet) {
    payload.WithString("executionId", m_executionId);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("content", m_content);
  }

  if (m_contextHasBeenSet) {
    payload.WithObject("context", m_context.Jsonize());
  }

  if (m_assetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> assetIdsJsonList(m_assetIds.size());
    for (unsigned assetIdsIndex = 0; assetIdsIndex < assetIdsJsonList.GetLength(); ++assetIdsIndex) {
      assetIdsJsonList[assetIdsIndex].AsString(m_assetIds[assetIdsIndex]);
    }
    payload.WithArray("assetIds", std::move(assetIdsJsonList));
  }

  return payload.View().WriteReadable();
}
