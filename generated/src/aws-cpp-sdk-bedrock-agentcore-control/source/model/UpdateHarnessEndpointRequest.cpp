/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateHarnessEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateHarnessEndpointRequest::SerializePayload() const {
  JsonValue payload;

  if (m_targetVersionHasBeenSet) {
    payload.WithString("targetVersion", m_targetVersion);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
