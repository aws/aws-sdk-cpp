/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/CreateClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateClusterRequest::CreateClusterRequest() : 
    m_clusterNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_capacityProvidersHasBeenSet(false),
    m_defaultCapacityProviderStrategyHasBeenSet(false),
    m_serviceConnectDefaultsHasBeenSet(false)
{
}

Aws::String CreateClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_settingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> settingsJsonList(m_settings.size());
   for(unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex)
   {
     settingsJsonList[settingsIndex].AsObject(m_settings[settingsIndex].Jsonize());
   }
   payload.WithArray("settings", std::move(settingsJsonList));

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_capacityProvidersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityProvidersJsonList(m_capacityProviders.size());
   for(unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex)
   {
     capacityProvidersJsonList[capacityProvidersIndex].AsString(m_capacityProviders[capacityProvidersIndex]);
   }
   payload.WithArray("capacityProviders", std::move(capacityProvidersJsonList));

  }

  if(m_defaultCapacityProviderStrategyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> defaultCapacityProviderStrategyJsonList(m_defaultCapacityProviderStrategy.size());
   for(unsigned defaultCapacityProviderStrategyIndex = 0; defaultCapacityProviderStrategyIndex < defaultCapacityProviderStrategyJsonList.GetLength(); ++defaultCapacityProviderStrategyIndex)
   {
     defaultCapacityProviderStrategyJsonList[defaultCapacityProviderStrategyIndex].AsObject(m_defaultCapacityProviderStrategy[defaultCapacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("defaultCapacityProviderStrategy", std::move(defaultCapacityProviderStrategyJsonList));

  }

  if(m_serviceConnectDefaultsHasBeenSet)
  {
   payload.WithObject("serviceConnectDefaults", m_serviceConnectDefaults.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.CreateCluster"));
  return headers;

}




