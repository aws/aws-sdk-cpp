/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ResetTokenVaultKeyMaterialRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ResetTokenVaultKeyMaterialRequest::SerializePayload() const {
  JsonValue payload;

  if (m_tokenVaultIdHasBeenSet) {
    payload.WithString("tokenVaultId", m_tokenVaultId);
  }

  return payload.View().WriteReadable();
}
