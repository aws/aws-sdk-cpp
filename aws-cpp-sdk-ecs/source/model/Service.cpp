/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Service.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

Service::Service() : 
    m_serviceArnHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_serviceRegistriesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_desiredCount(0),
    m_desiredCountHasBeenSet(false),
    m_runningCount(0),
    m_runningCountHasBeenSet(false),
    m_pendingCount(0),
    m_pendingCountHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_deploymentConfigurationHasBeenSet(false),
    m_taskSetsHasBeenSet(false),
    m_deploymentsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_placementStrategyHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_healthCheckGracePeriodSeconds(0),
    m_healthCheckGracePeriodSecondsHasBeenSet(false),
    m_schedulingStrategy(SchedulingStrategy::NOT_SET),
    m_schedulingStrategyHasBeenSet(false),
    m_deploymentControllerHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_enableECSManagedTags(false),
    m_enableECSManagedTagsHasBeenSet(false),
    m_propagateTags(PropagateTags::NOT_SET),
    m_propagateTagsHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false)
{
}

Service::Service(JsonView jsonValue) : 
    m_serviceArnHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_serviceRegistriesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_desiredCount(0),
    m_desiredCountHasBeenSet(false),
    m_runningCount(0),
    m_runningCountHasBeenSet(false),
    m_pendingCount(0),
    m_pendingCountHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_deploymentConfigurationHasBeenSet(false),
    m_taskSetsHasBeenSet(false),
    m_deploymentsHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_placementConstraintsHasBeenSet(false),
    m_placementStrategyHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_healthCheckGracePeriodSeconds(0),
    m_healthCheckGracePeriodSecondsHasBeenSet(false),
    m_schedulingStrategy(SchedulingStrategy::NOT_SET),
    m_schedulingStrategyHasBeenSet(false),
    m_deploymentControllerHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdByHasBeenSet(false),
    m_enableECSManagedTags(false),
    m_enableECSManagedTagsHasBeenSet(false),
    m_propagateTags(PropagateTags::NOT_SET),
    m_propagateTagsHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false)
{
  *this = jsonValue;
}

Service& Service::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceArn"))
  {
    m_serviceArn = jsonValue.GetString("serviceArn");

    m_serviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loadBalancers"))
  {
    Array<JsonView> loadBalancersJsonList = jsonValue.GetArray("loadBalancers");
    for(unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex)
    {
      m_loadBalancers.push_back(loadBalancersJsonList[loadBalancersIndex].AsObject());
    }
    m_loadBalancersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceRegistries"))
  {
    Array<JsonView> serviceRegistriesJsonList = jsonValue.GetArray("serviceRegistries");
    for(unsigned serviceRegistriesIndex = 0; serviceRegistriesIndex < serviceRegistriesJsonList.GetLength(); ++serviceRegistriesIndex)
    {
      m_serviceRegistries.push_back(serviceRegistriesJsonList[serviceRegistriesIndex].AsObject());
    }
    m_serviceRegistriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredCount"))
  {
    m_desiredCount = jsonValue.GetInteger("desiredCount");

    m_desiredCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runningCount"))
  {
    m_runningCount = jsonValue.GetInteger("runningCount");

    m_runningCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingCount"))
  {
    m_pendingCount = jsonValue.GetInteger("pendingCount");

    m_pendingCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchType"))
  {
    m_launchType = LaunchTypeMapper::GetLaunchTypeForName(jsonValue.GetString("launchType"));

    m_launchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capacityProviderStrategy"))
  {
    Array<JsonView> capacityProviderStrategyJsonList = jsonValue.GetArray("capacityProviderStrategy");
    for(unsigned capacityProviderStrategyIndex = 0; capacityProviderStrategyIndex < capacityProviderStrategyJsonList.GetLength(); ++capacityProviderStrategyIndex)
    {
      m_capacityProviderStrategy.push_back(capacityProviderStrategyJsonList[capacityProviderStrategyIndex].AsObject());
    }
    m_capacityProviderStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformVersion"))
  {
    m_platformVersion = jsonValue.GetString("platformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskDefinition"))
  {
    m_taskDefinition = jsonValue.GetString("taskDefinition");

    m_taskDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentConfiguration"))
  {
    m_deploymentConfiguration = jsonValue.GetObject("deploymentConfiguration");

    m_deploymentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskSets"))
  {
    Array<JsonView> taskSetsJsonList = jsonValue.GetArray("taskSets");
    for(unsigned taskSetsIndex = 0; taskSetsIndex < taskSetsJsonList.GetLength(); ++taskSetsIndex)
    {
      m_taskSets.push_back(taskSetsJsonList[taskSetsIndex].AsObject());
    }
    m_taskSetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deployments"))
  {
    Array<JsonView> deploymentsJsonList = jsonValue.GetArray("deployments");
    for(unsigned deploymentsIndex = 0; deploymentsIndex < deploymentsJsonList.GetLength(); ++deploymentsIndex)
    {
      m_deployments.push_back(deploymentsJsonList[deploymentsIndex].AsObject());
    }
    m_deploymentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("events"))
  {
    Array<JsonView> eventsJsonList = jsonValue.GetArray("events");
    for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
    {
      m_events.push_back(eventsJsonList[eventsIndex].AsObject());
    }
    m_eventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("placementConstraints"))
  {
    Array<JsonView> placementConstraintsJsonList = jsonValue.GetArray("placementConstraints");
    for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
    {
      m_placementConstraints.push_back(placementConstraintsJsonList[placementConstraintsIndex].AsObject());
    }
    m_placementConstraintsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("placementStrategy"))
  {
    Array<JsonView> placementStrategyJsonList = jsonValue.GetArray("placementStrategy");
    for(unsigned placementStrategyIndex = 0; placementStrategyIndex < placementStrategyJsonList.GetLength(); ++placementStrategyIndex)
    {
      m_placementStrategy.push_back(placementStrategyJsonList[placementStrategyIndex].AsObject());
    }
    m_placementStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthCheckGracePeriodSeconds"))
  {
    m_healthCheckGracePeriodSeconds = jsonValue.GetInteger("healthCheckGracePeriodSeconds");

    m_healthCheckGracePeriodSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schedulingStrategy"))
  {
    m_schedulingStrategy = SchedulingStrategyMapper::GetSchedulingStrategyForName(jsonValue.GetString("schedulingStrategy"));

    m_schedulingStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deploymentController"))
  {
    m_deploymentController = jsonValue.GetObject("deploymentController");

    m_deploymentControllerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

    m_createdByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableECSManagedTags"))
  {
    m_enableECSManagedTags = jsonValue.GetBool("enableECSManagedTags");

    m_enableECSManagedTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propagateTags"))
  {
    m_propagateTags = PropagateTagsMapper::GetPropagateTagsForName(jsonValue.GetString("propagateTags"));

    m_propagateTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableExecuteCommand"))
  {
    m_enableExecuteCommand = jsonValue.GetBool("enableExecuteCommand");

    m_enableExecuteCommandHasBeenSet = true;
  }

  return *this;
}

JsonValue Service::Jsonize() const
{
  JsonValue payload;

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("serviceArn", m_serviceArn);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_loadBalancersHasBeenSet)
  {
   Array<JsonValue> loadBalancersJsonList(m_loadBalancers.size());
   for(unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex)
   {
     loadBalancersJsonList[loadBalancersIndex].AsObject(m_loadBalancers[loadBalancersIndex].Jsonize());
   }
   payload.WithArray("loadBalancers", std::move(loadBalancersJsonList));

  }

  if(m_serviceRegistriesHasBeenSet)
  {
   Array<JsonValue> serviceRegistriesJsonList(m_serviceRegistries.size());
   for(unsigned serviceRegistriesIndex = 0; serviceRegistriesIndex < serviceRegistriesJsonList.GetLength(); ++serviceRegistriesIndex)
   {
     serviceRegistriesJsonList[serviceRegistriesIndex].AsObject(m_serviceRegistries[serviceRegistriesIndex].Jsonize());
   }
   payload.WithArray("serviceRegistries", std::move(serviceRegistriesJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_desiredCountHasBeenSet)
  {
   payload.WithInteger("desiredCount", m_desiredCount);

  }

  if(m_runningCountHasBeenSet)
  {
   payload.WithInteger("runningCount", m_runningCount);

  }

  if(m_pendingCountHasBeenSet)
  {
   payload.WithInteger("pendingCount", m_pendingCount);

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_capacityProviderStrategyHasBeenSet)
  {
   Array<JsonValue> capacityProviderStrategyJsonList(m_capacityProviderStrategy.size());
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

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  if(m_deploymentConfigurationHasBeenSet)
  {
   payload.WithObject("deploymentConfiguration", m_deploymentConfiguration.Jsonize());

  }

  if(m_taskSetsHasBeenSet)
  {
   Array<JsonValue> taskSetsJsonList(m_taskSets.size());
   for(unsigned taskSetsIndex = 0; taskSetsIndex < taskSetsJsonList.GetLength(); ++taskSetsIndex)
   {
     taskSetsJsonList[taskSetsIndex].AsObject(m_taskSets[taskSetsIndex].Jsonize());
   }
   payload.WithArray("taskSets", std::move(taskSetsJsonList));

  }

  if(m_deploymentsHasBeenSet)
  {
   Array<JsonValue> deploymentsJsonList(m_deployments.size());
   for(unsigned deploymentsIndex = 0; deploymentsIndex < deploymentsJsonList.GetLength(); ++deploymentsIndex)
   {
     deploymentsJsonList[deploymentsIndex].AsObject(m_deployments[deploymentsIndex].Jsonize());
   }
   payload.WithArray("deployments", std::move(deploymentsJsonList));

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_eventsHasBeenSet)
  {
   Array<JsonValue> eventsJsonList(m_events.size());
   for(unsigned eventsIndex = 0; eventsIndex < eventsJsonList.GetLength(); ++eventsIndex)
   {
     eventsJsonList[eventsIndex].AsObject(m_events[eventsIndex].Jsonize());
   }
   payload.WithArray("events", std::move(eventsJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_placementConstraintsHasBeenSet)
  {
   Array<JsonValue> placementConstraintsJsonList(m_placementConstraints.size());
   for(unsigned placementConstraintsIndex = 0; placementConstraintsIndex < placementConstraintsJsonList.GetLength(); ++placementConstraintsIndex)
   {
     placementConstraintsJsonList[placementConstraintsIndex].AsObject(m_placementConstraints[placementConstraintsIndex].Jsonize());
   }
   payload.WithArray("placementConstraints", std::move(placementConstraintsJsonList));

  }

  if(m_placementStrategyHasBeenSet)
  {
   Array<JsonValue> placementStrategyJsonList(m_placementStrategy.size());
   for(unsigned placementStrategyIndex = 0; placementStrategyIndex < placementStrategyJsonList.GetLength(); ++placementStrategyIndex)
   {
     placementStrategyJsonList[placementStrategyIndex].AsObject(m_placementStrategy[placementStrategyIndex].Jsonize());
   }
   payload.WithArray("placementStrategy", std::move(placementStrategyJsonList));

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_healthCheckGracePeriodSecondsHasBeenSet)
  {
   payload.WithInteger("healthCheckGracePeriodSeconds", m_healthCheckGracePeriodSeconds);

  }

  if(m_schedulingStrategyHasBeenSet)
  {
   payload.WithString("schedulingStrategy", SchedulingStrategyMapper::GetNameForSchedulingStrategy(m_schedulingStrategy));
  }

  if(m_deploymentControllerHasBeenSet)
  {
   payload.WithObject("deploymentController", m_deploymentController.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_enableECSManagedTagsHasBeenSet)
  {
   payload.WithBool("enableECSManagedTags", m_enableECSManagedTags);

  }

  if(m_propagateTagsHasBeenSet)
  {
   payload.WithString("propagateTags", PropagateTagsMapper::GetNameForPropagateTags(m_propagateTags));
  }

  if(m_enableExecuteCommandHasBeenSet)
  {
   payload.WithBool("enableExecuteCommand", m_enableExecuteCommand);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
