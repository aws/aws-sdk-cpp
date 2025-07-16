/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdateGatewayTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateGatewayTargetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_targetConfigurationHasBeenSet)
  {
   payload.WithObject("targetConfiguration", m_targetConfiguration.Jsonize());

  }

  if(m_credentialProviderConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> credentialProviderConfigurationsJsonList(m_credentialProviderConfigurations.size());
   for(unsigned credentialProviderConfigurationsIndex = 0; credentialProviderConfigurationsIndex < credentialProviderConfigurationsJsonList.GetLength(); ++credentialProviderConfigurationsIndex)
   {
     credentialProviderConfigurationsJsonList[credentialProviderConfigurationsIndex].AsObject(m_credentialProviderConfigurations[credentialProviderConfigurationsIndex].Jsonize());
   }
   payload.WithArray("credentialProviderConfigurations", std::move(credentialProviderConfigurationsJsonList));

  }

  return payload.View().WriteReadable();
}




