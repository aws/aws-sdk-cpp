/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CreateFlowAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateFlowAliasRequest::SerializePayload() const
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

  if(m_routingConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routingConfigurationJsonList(m_routingConfiguration.size());
   for(unsigned routingConfigurationIndex = 0; routingConfigurationIndex < routingConfigurationJsonList.GetLength(); ++routingConfigurationIndex)
   {
     routingConfigurationJsonList[routingConfigurationIndex].AsObject(m_routingConfiguration[routingConfigurationIndex].Jsonize());
   }
   payload.WithArray("routingConfiguration", std::move(routingConfigurationJsonList));

  }

  if(m_concurrencyConfigurationHasBeenSet)
  {
   payload.WithObject("concurrencyConfiguration", m_concurrencyConfiguration.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




