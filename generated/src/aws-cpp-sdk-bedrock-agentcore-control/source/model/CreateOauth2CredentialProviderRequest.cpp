/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreateOauth2CredentialProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateOauth2CredentialProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_credentialProviderVendorHasBeenSet)
  {
   payload.WithString("credentialProviderVendor", CredentialProviderVendorTypeMapper::GetNameForCredentialProviderVendorType(m_credentialProviderVendor));
  }

  if(m_oauth2ProviderConfigInputHasBeenSet)
  {
   payload.WithObject("oauth2ProviderConfigInput", m_oauth2ProviderConfigInput.Jsonize());

  }

  return payload.View().WriteReadable();
}




