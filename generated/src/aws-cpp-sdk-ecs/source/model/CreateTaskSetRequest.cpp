/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/CreateTaskSetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateTaskSetRequest::CreateTaskSetRequest() : 
    m_serviceHasBeenSet(false),
    m_clusterHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_serviceRegistriesHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateTaskSetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_loadBalancersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> loadBalancersJsonList(m_loadBalancers.size());
   for(unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex)
   {
     loadBalancersJsonList[loadBalancersIndex].AsObject(m_loadBalancers[loadBalancersIndex].Jsonize());
   }
   payload.WithArray("loadBalancers", std::move(loadBalancersJsonList));

  }

  if(m_serviceRegistriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> serviceRegistriesJsonList(m_serviceRegistries.size());
   for(unsigned serviceRegistriesIndex = 0; serviceRegistriesIndex < serviceRegistriesJsonList.GetLength(); ++serviceRegistriesIndex)
   {
     serviceRegistriesJsonList[serviceRegistriesIndex].AsObject(m_serviceRegistries[serviceRegistriesIndex].Jsonize());
   }
   payload.WithArray("serviceRegistries", std::move(serviceRegistriesJsonList));

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_capacityProviderStrategyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> capacityProviderStrategyJsonList(m_capacityProviderStrategy.size());
   for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
   {
     capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject(m_capacityProviderStrategy[capacityProviderStrategyIndex].Jsonize());
   }
   payload.WithArray("capacityProviderStrategy", std::move(capacityProviderStrategyJsonList));

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  if(m_scaleHasBeenSet)
  {
   payload.WithObject("scale", m_scale.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateTaskSetRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.CreateTaskSet"));
  return headers;

}




