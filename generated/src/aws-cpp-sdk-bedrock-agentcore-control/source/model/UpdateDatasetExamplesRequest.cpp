/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateDatasetExamplesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDatasetExamplesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_examplesHasBeenSet) {
    Aws::Utils::Array<JsonValue> examplesJsonList(m_examples.size());
    for (unsigned examplesIndex = 0; examplesIndex < examplesJsonList.GetLength(); ++examplesIndex) {
      examplesJsonList[examplesIndex].AsObject(m_examples[examplesIndex].View());
    }
    payload.WithArray("examples", std::move(examplesJsonList));
  }

  return payload.View().WriteReadable();
}
