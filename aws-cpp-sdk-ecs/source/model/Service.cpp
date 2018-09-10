﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_platformVersionHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_deploymentConfigurationHasBeenSet(false),
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
    m_schedulingStrategyHasBeenSet(false)
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
    m_platformVersionHasBeenSet(false),
    m_taskDefinitionHasBeenSet(false),
    m_deploymentConfigurationHasBeenSet(false),
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
    m_schedulingStrategyHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
