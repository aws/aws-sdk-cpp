/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/BatchPutGatewayRateLimitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchPutGatewayRateLimitsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_rateLimitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> rateLimitsJsonList(m_rateLimits.size());
    for (unsigned rateLimitsIndex = 0; rateLimitsIndex < rateLimitsJsonList.GetLength(); ++rateLimitsIndex) {
      rateLimitsJsonList[rateLimitsIndex].AsObject(m_rateLimits[rateLimitsIndex].Jsonize());
    }
    payload.WithArray("rateLimits", std::move(rateLimitsJsonList));
  }

  return payload.View().WriteReadable();
}
