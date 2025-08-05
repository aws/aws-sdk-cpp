/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetResourceOauth2TokenRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetResourceOauth2TokenRequest::SerializePayload() const
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

  if(m_scopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsString(m_scopes[scopesIndex]);
   }
   payload.WithArray("scopes", std::move(scopesJsonList));

  }

  if(m_oauth2FlowHasBeenSet)
  {
   payload.WithString("oauth2Flow", Oauth2FlowTypeMapper::GetNameForOauth2FlowType(m_oauth2Flow));
  }

  if(m_resourceOauth2ReturnUrlHasBeenSet)
  {
   payload.WithString("resourceOauth2ReturnUrl", m_resourceOauth2ReturnUrl);

  }

  if(m_forceAuthenticationHasBeenSet)
  {
   payload.WithBool("forceAuthentication", m_forceAuthentication);

  }

  if(m_customParametersHasBeenSet)
  {
   JsonValue customParametersJsonMap;
   for(auto& customParametersItem : m_customParameters)
   {
     customParametersJsonMap.WithString(customParametersItem.first, customParametersItem.second);
   }
   payload.WithObject("customParameters", std::move(customParametersJsonMap));

  }

  return payload.View().WriteReadable();
}




