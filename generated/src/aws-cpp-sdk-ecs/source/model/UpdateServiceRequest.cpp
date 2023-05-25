/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/UpdateServiceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ECS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceRequest::UpdateServiceRequest() : 
    m_clusterHasBeenSet(false),
    m_serviceHasBeenSet(false),
    m_desiredCount(0),
    m_desiredCountHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_deploymentConfigurationHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_placementStrategyHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_forceNewDeployment(false),
    m_forceNewDeploymentHasBeenSet(false),
    m_healthCheckGracePeriodSeconds(0),
    m_healthCheckGracePeriodSecondsHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false),
    m_enableECSManagedTags(false),
    m_enableECSManagedTagsHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_propagateTags(PropagateTags::NOT_SET),
    m_propagateTagsHasBeenSet(false),
    m_serviceRegistriesHasBeenSet(false),
    m_serviceConnectConfigurationHasBeenSet(false)
{
}

Aws::String UpdateServiceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clusterHasBeenSet)
  {
   payload.WithString("cluster", m_cluster);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_desiredCountHasBeenSet)
  {
   payload.WithInteger("desiredCount", m_desiredCount);

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

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

  if(m_deploymentConfigurationHasBeenSet)
  {
   payload.WithObject("deploymentConfiguration", m_deploymentConfiguration.Jsonize());

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_placementConstraintsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementConstraintsJsonList(m_placementConstraints.size());
   for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
   {
     placementConstraintsJsonList[placementConstraintsIndex].AsObject(m_placementConstraints[placementConstraintsIndex].Jsonize());
   }
   payload.WithArray("placementConstraints", std::move(placementConstraintsJsonList));

  }

  if(m_placementStrategyHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> placementStrategyJsonList(m_placementStrategy.size());
   for(unsigned placementStrategyIndex = 0; placementStrategyIndex < placementStrategyJsonList.GetLength(); ++placementStrategyIndex)
   {
     placementStrategyJsonList[placementStrategyIndex].AsObject(m_placementStrategy[placementStrategyIndex].Jsonize());
   }
   payload.WithArray("placementStrategy", std::move(placementStrategyJsonList));

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  if(m_forceNewDeploymentHasBeenSet)
  {
   payload.WithBool("forceNewDeployment", m_forceNewDeployment);

  }

  if(m_healthCheckGracePeriodSecondsHasBeenSet)
  {
   payload.WithInteger("healthCheckGracePeriodSeconds", m_healthCheckGracePeriodSeconds);

  }

  if(m_enableExecuteCommandHasBeenSet)
  {
   payload.WithBool("enableExecuteCommand", m_enableExecuteCommand);

  }

  if(m_enableECSManagedTagsHasBeenSet)
  {
   payload.WithBool("enableECSManagedTags", m_enableECSManagedTags);

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

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithString("propagateTags", PropagateTagsMapper::GetNameForPropagateTags(m_propagateTags));
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

  if(m_serviceConnectConfigurationHasBeenSet)
  {
   payload.WithObject("serviceConnectConfiguration", m_serviceConnectConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServiceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonEC2ContainerServiceV20141113.UpdateService"));
  return headers;

}




