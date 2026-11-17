/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateAgentInsightStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAgentInsightStoreRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_enablementStatusHasBeenSet) {
    payload.WithString("enablementStatus",
                       AgentInsightStoreEnablementStatusMapper::GetNameForAgentInsightStoreEnablementStatus(m_enablementStatus));
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
