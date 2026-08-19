/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateMemoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMemoryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_eventExpiryDurationHasBeenSet) {
    payload.WithInteger("eventExpiryDuration", m_eventExpiryDuration);
  }

  if (m_memoryExecutionRoleArnHasBeenSet) {
    payload.WithString("memoryExecutionRoleArn", m_memoryExecutionRoleArn);
  }

  if (m_memoryStrategiesHasBeenSet) {
    payload.WithObject("memoryStrategies", m_memoryStrategies.Jsonize());
  }

  if (m_addIndexedKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> addIndexedKeysJsonList(m_addIndexedKeys.size());
    for (unsigned addIndexedKeysIndex = 0; addIndexedKeysIndex < addIndexedKeysJsonList.GetLength(); ++addIndexedKeysIndex) {
      addIndexedKeysJsonList[addIndexedKeysIndex].AsObject(m_addIndexedKeys[addIndexedKeysIndex].Jsonize());
    }
    payload.WithArray("addIndexedKeys", std::move(addIndexedKeysJsonList));
  }

  if (m_namespaceKeysHasBeenSet) {
    Aws::Utils::Array<JsonValue> namespaceKeysJsonList(m_namespaceKeys.size());
    for (unsigned namespaceKeysIndex = 0; namespaceKeysIndex < namespaceKeysJsonList.GetLength(); ++namespaceKeysIndex) {
      namespaceKeysJsonList[namespaceKeysIndex].AsObject(m_namespaceKeys[namespaceKeysIndex].Jsonize());
    }
    payload.WithArray("namespaceKeys", std::move(namespaceKeysJsonList));
  }

  if (m_streamDeliveryResourcesHasBeenSet) {
    payload.WithObject("streamDeliveryResources", m_streamDeliveryResources.Jsonize());
  }

  return payload.View().WriteReadable();
}
