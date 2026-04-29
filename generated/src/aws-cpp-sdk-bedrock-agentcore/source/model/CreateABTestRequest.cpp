/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CreateABTestRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateABTestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_gatewayArnHasBeenSet) {
    payload.WithString("gatewayArn", m_gatewayArn);
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

  if (m_enableOnCreateHasBeenSet) {
    payload.WithBool("enableOnCreate", m_enableOnCreate);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
