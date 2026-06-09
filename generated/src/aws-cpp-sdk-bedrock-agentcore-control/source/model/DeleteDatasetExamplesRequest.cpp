/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DeleteDatasetExamplesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteDatasetExamplesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_exampleIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> exampleIdsJsonList(m_exampleIds.size());
    for (unsigned exampleIdsIndex = 0; exampleIdsIndex < exampleIdsJsonList.GetLength(); ++exampleIdsIndex) {
      exampleIdsJsonList[exampleIdsIndex].AsString(m_exampleIds[exampleIdsIndex]);
    }
    payload.WithArray("exampleIds", std::move(exampleIdsJsonList));
  }

  return payload.View().WriteReadable();
}
