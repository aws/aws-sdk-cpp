/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/UpdateAgentAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAgentAliasRequest::UpdateAgentAliasRequest() : 
    m_agentIdHasBeenSet(false),
    m_agentAliasIdHasBeenSet(false),
    m_agentAliasNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_routingConfigurationHasBeenSet(false)
{
}

Aws::String UpdateAgentAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentAliasNameHasBeenSet)
  {
   payload.WithString("agentAliasName", m_agentAliasName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_routingConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routingConfigurationJsonList(m_routingConfiguration.size());
   for(unsigned routingConfigurationIndex = 0; routingConfigurationIndex < routingConfigurationJsonList.GetLength(); ++routingConfigurationIndex)
   {
     routingConfigurationJsonList[routingConfigurationIndex].AsObject(m_routingConfiguration[routingConfigurationIndex].Jsonize());
   }
   payload.WithArray("routingConfiguration", std::move(routingConfigurationJsonList));

  }

  return payload.View().WriteReadable();
}




