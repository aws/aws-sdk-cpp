/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreateGatewayRateLimitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateGatewayRateLimitRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_rateLimitIdHasBeenSet) {
    payload.WithString("rateLimitId", m_rateLimitId);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_dimensionKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> dimensionKeysJsonList(m_dimensionKeys.size());
    for (unsigned dimensionKeysIndex = 0; dimensionKeysIndex < dimensionKeysJsonList.GetLength(); ++dimensionKeysIndex) {
      dimensionKeysJsonList[dimensionKeysIndex].AsString(m_dimensionKeys[dimensionKeysIndex]);
    }
    payload.WithArray("dimensionKeys", std::move(dimensionKeysJsonList));
  }

  if (m_entriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> entriesJsonList(m_entries.size());
    for (unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex) {
      entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
    }
    payload.WithArray("entries", std::move(entriesJsonList));
  }

  return payload.View().WriteReadable();
}
