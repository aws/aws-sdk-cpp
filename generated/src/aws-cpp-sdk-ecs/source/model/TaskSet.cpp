/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskSet.h>
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

TaskSet::TaskSet() : 
    m_idHasBeenSet(false),
    m_taskSetArnHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_computedDesiredCount(0),
    m_computedDesiredCountHasBeenSet(false),
    m_pendingCount(0),
    m_pendingCountHasBeenSet(false),
    m_runningCount(0),
    m_runningCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_platformFamilyHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_serviceRegistriesHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_stabilityStatus(StabilityStatus::NOT_SET),
    m_stabilityStatusHasBeenSet(false),
    m_stabilityStatusAtHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TaskSet::TaskSet(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_taskSetArnHasBeenSet(false),
    m_serviceArnHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_externalIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_computedDesiredCount(0),
    m_computedDesiredCountHasBeenSet(false),
    m_pendingCount(0),
    m_pendingCountHasBeenSet(false),
    m_runningCount(0),
    m_runningCountHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_capacityProviderStrategyHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_platformFamilyHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_serviceRegistriesHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_stabilityStatus(StabilityStatus::NOT_SET),
    m_stabilityStatusHasBeenSet(false),
    m_stabilityStatusAtHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

TaskSet& TaskSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskSetArn"))
  {
    m_taskSetArn = jsonValue.GetString("taskSetArn");

    m_taskSetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceArn"))
  {
    m_serviceArn = jsonValue.GetString("serviceArn");

    m_serviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedBy"))
  {
    m_startedBy = jsonValue.GetString("startedBy");

    m_startedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalId"))
  {
    m_externalId = jsonValue.GetString("externalId");

    m_externalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskDefinition"))
  {
    m_taskDefinition = jsonValue.GetString("taskDefinition");

    m_taskDefinitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computedDesiredCount"))
  {
    m_computedDesiredCount = jsonValue.GetInteger("computedDesiredCount");

    m_computedDesiredCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingCount"))
  {
    m_pendingCount = jsonValue.GetInteger("pendingCount");

    m_pendingCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runningCount"))
  {
    m_runningCount = jsonValue.GetInteger("runningCount");

    m_runningCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchType"))
  {
    m_launchType = LaunchTypeMapper::GetLaunchTypeForName(jsonValue.GetString("launchType"));

    m_launchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capacityProviderStrategy"))
  {
    Aws::Utils::Array<JsonView> capacityProviderStrategyJsonList = jsonValue.GetArray("capacityProviderStrategy");
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

  if(jsonValue.ValueExists("platformFamily"))
  {
    m_platformFamily = jsonValue.GetString("platformFamily");

    m_platformFamilyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loadBalancers"))
  {
    Aws::Utils::Array<JsonView> loadBalancersJsonList = jsonValue.GetArray("loadBalancers");
    for(unsigned loadBalancersIndex = 0; loadBalancersIndex < loadBalancersJsonList.GetLength(); ++loadBalancersIndex)
    {
      m_loadBalancers.push_back(loadBalancersJsonList[loadBalancersIndex].AsObject());
    }
    m_loadBalancersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceRegistries"))
  {
    Aws::Utils::Array<JsonView> serviceRegistriesJsonList = jsonValue.GetArray("serviceRegistries");
    for(unsigned serviceRegistriesIndex = 0; serviceRegistriesIndex < serviceRegistriesJsonList.GetLength(); ++serviceRegistriesIndex)
    {
      m_serviceRegistries.push_back(serviceRegistriesJsonList[serviceRegistriesIndex].AsObject());
    }
    m_serviceRegistriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scale"))
  {
    m_scale = jsonValue.GetObject("scale");

    m_scaleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stabilityStatus"))
  {
    m_stabilityStatus = StabilityStatusMapper::GetStabilityStatusForName(jsonValue.GetString("stabilityStatus"));

    m_stabilityStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stabilityStatusAt"))
  {
    m_stabilityStatusAt = jsonValue.GetDouble("stabilityStatusAt");

    m_stabilityStatusAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue TaskSet::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_taskSetArnHasBeenSet)
  {
   payload.WithString("taskSetArn", m_taskSetArn);

  }

  if(m_serviceArnHasBeenSet)
  {
   payload.WithString("serviceArn", m_serviceArn);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_startedByHasBeenSet)
  {
   payload.WithString("startedBy", m_startedBy);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("externalId", m_externalId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_taskDefinitionHasBeenSet)
  {
   payload.WithString("taskDefinition", m_taskDefinition);

  }

  if(m_computedDesiredCountHasBeenSet)
  {
   payload.WithInteger("computedDesiredCount", m_computedDesiredCount);

  }

  if(m_pendingCountHasBeenSet)
  {
   payload.WithInteger("pendingCount", m_pendingCount);

  }

  if(m_runningCountHasBeenSet)
  {
   payload.WithInteger("runningCount", m_runningCount);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
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

  if(m_platformFamilyHasBeenSet)
  {
   payload.WithString("platformFamily", m_platformFamily);

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

  if(m_scaleHasBeenSet)
  {
   payload.WithObject("scale", m_scale.Jsonize());

  }

  if(m_stabilityStatusHasBeenSet)
  {
   payload.WithString("stabilityStatus", StabilityStatusMapper::GetNameForStabilityStatus(m_stabilityStatus));
  }

  if(m_stabilityStatusAtHasBeenSet)
  {
   payload.WithDouble("stabilityStatusAt", m_stabilityStatusAt.SecondsWithMSPrecision());
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

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
