/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SynchronizeGatewayTargetsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SynchronizeGatewayTargetsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_targetIdListHasBeenSet) {
    Aws::Utils::Array<JsonValue> targetIdListJsonList(m_targetIdList.size());
    for (unsigned targetIdListIndex = 0; targetIdListIndex < targetIdListJsonList.GetLength(); ++targetIdListIndex) {
      targetIdListJsonList[targetIdListIndex].AsString(m_targetIdList[targetIdListIndex]);
    }
    payload.WithArray("targetIdList", std::move(targetIdListJsonList));
  }

  return payload.View().WriteReadable();
}
