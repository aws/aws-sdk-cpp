/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/UpdateABTestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateABTestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_variantsHasBeenSet) {
    Aws::Utils::Array<JsonValue> variantsJsonList(m_variants.size());
    for (unsigned variantsIndex = 0; variantsIndex < variantsJsonList.GetLength(); ++variantsIndex) {
      variantsJsonList[variantsIndex].AsObject(m_variants[variantsIndex].Jsonize());
    }
    payload.WithArray("variants", std::move(variantsJsonList));
  }

  if (m_gatewayFilterHasBeenSet) {
    payload.WithObject("gatewayFilter", m_gatewayFilter.Jsonize());
  }

  if (m_evaluationConfigHasBeenSet) {
    payload.WithObject("evaluationConfig", m_evaluationConfig.Jsonize());
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_executionStatusHasBeenSet) {
    payload.WithString("executionStatus", ABTestExecutionStatusMapper::GetNameForABTestExecutionStatus(m_executionStatus));
  }

  return payload.View().WriteReadable();
}
