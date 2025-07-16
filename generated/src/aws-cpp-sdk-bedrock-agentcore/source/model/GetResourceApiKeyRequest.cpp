/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetResourceApiKeyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetResourceApiKeyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workloadIdentityTokenHasBeenSet)
  {
   payload.WithString("workloadIdentityToken", m_workloadIdentityToken);

  }

  if(m_resourceCredentialProviderNameHasBeenSet)
  {
   payload.WithString("resourceCredentialProviderName", m_resourceCredentialProviderName);

  }

  return payload.View().WriteReadable();
}




