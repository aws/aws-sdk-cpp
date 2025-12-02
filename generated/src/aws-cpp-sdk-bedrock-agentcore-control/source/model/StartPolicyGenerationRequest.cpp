/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StartPolicyGenerationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartPolicyGenerationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resourceHasBeenSet) {
    payload.WithObject("resource", m_resource.Jsonize());
  }

  if (m_contentHasBeenSet) {
    payload.WithObject("content", m_content.Jsonize());
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
