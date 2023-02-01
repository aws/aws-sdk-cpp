/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Cluster.h>
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

Cluster::Cluster() : 
    m_clusterArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_registeredContainerInstancesCount(0),
    m_registeredContainerInstancesCountHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_pendingTasksCount(0),
    m_pendingTasksCountHasBeenSet(false),
    m_activeServicesCount(0),
    m_activeServicesCountHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_capacityProvidersHasBeenSet(false),
    m_defaultCapacityProviderStrategyHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_attachmentsStatusHasBeenSet(false),
    m_serviceConnectDefaultsHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_clusterArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_configurationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_registeredContainerInstancesCount(0),
    m_registeredContainerInstancesCountHasBeenSet(false),
    m_runningTasksCount(0),
    m_runningTasksCountHasBeenSet(false),
    m_pendingTasksCount(0),
    m_pendingTasksCountHasBeenSet(false),
    m_activeServicesCount(0),
    m_activeServicesCountHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_settingsHasBeenSet(false),
    m_capacityProvidersHasBeenSet(false),
    m_defaultCapacityProviderStrategyHasBeenSet(false),
    m_attachmentsHasBeenSet(false),
    m_attachmentsStatusHasBeenSet(false),
    m_serviceConnectDefaultsHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");

    m_configurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetString("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredContainerInstancesCount"))
  {
    m_registeredContainerInstancesCount = jsonValue.GetInteger("registeredContainerInstancesCount");

    m_registeredContainerInstancesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runningTasksCount"))
  {
    m_runningTasksCount = jsonValue.GetInteger("runningTasksCount");

    m_runningTasksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pendingTasksCount"))
  {
    m_pendingTasksCount = jsonValue.GetInteger("pendingTasksCount");

    m_pendingTasksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("activeServicesCount"))
  {
    m_activeServicesCount = jsonValue.GetInteger("activeServicesCount");

    m_activeServicesCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistics"))
  {
    Aws::Utils::Array<JsonView> statisticsJsonList = jsonValue.GetArray("statistics");
    for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
    {
      m_statistics.push_back(statisticsJsonList[statisticsIndex].AsObject());
    }
    m_statisticsHasBeenSet = true;
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

  if(jsonValue.ValueExists("settings"))
  {
    Aws::Utils::Array<JsonView> settingsJsonList = jsonValue.GetArray("settings");
    for(unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex)
    {
      m_settings.push_back(settingsJsonList[settingsIndex].AsObject());
    }
    m_settingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capacityProviders"))
  {
    Aws::Utils::Array<JsonView> capacityProvidersJsonList = jsonValue.GetArray("capacityProviders");
    for(unsigned capacityProvidersIndex = 0; capacityProvidersIndex < capacityProvidersJsonList.GetLength(); ++capacityProvidersIndex)
    {
      m_capacityProviders.push_back(capacityProvidersJsonList[capacityProvidersIndex].AsString());
    }
    m_capacityProvidersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultCapacityProviderStrategy"))
  {
    Aws::Utils::Array<JsonView> defaultCapacityProviderStrategyJsonList = jsonValue.GetArray("defaultCapacityProviderStrategy");
    for(unsigned defaultCapacityProviderStrategyIndex = 0; defaultCapacityProviderStrategyIndex < defaultCapacityProviderStrategyJsonList.GetLength(); ++defaultCapacityProviderStrategyIndex)
    {
      m_defaultCapacityProviderStrategy.push_back(defaultCapacityProviderStrategyJsonList[defaultCapacityProviderStrategyIndex].AsObject());
    }
    m_defaultCapacityProviderStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachments"))
  {
    Aws::Utils::Array<JsonView> attachmentsJsonList = jsonValue.GetArray("attachments");
    for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
    {
      m_attachments.push_back(attachmentsJsonList[attachmentsIndex].AsObject());
    }
    m_attachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attachmentsStatus"))
  {
    m_attachmentsStatus = jsonValue.GetString("attachmentsStatus");

    m_attachmentsStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceConnectDefaults"))
  {
    m_serviceConnectDefaults = jsonValue.GetObject("serviceConnectDefaults");

    m_serviceConnectDefaultsHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", m_status);

  }

  if(m_registeredContainerInstancesCountHasBeenSet)
  {
   payload.WithInteger("registeredContainerInstancesCount", m_registeredContainerInstancesCount);

  }

  if(m_runningTasksCountHasBeenSet)
  {
   payload.WithInteger("runningTasksCount", m_runningTasksCount);

  }

  if(m_pendingTasksCountHasBeenSet)
  {
   payload.WithInteger("pendingTasksCount", m_pendingTasksCount);

  }

  if(m_activeServicesCountHasBeenSet)
  {
   payload.WithInteger("activeServicesCount", m_activeServicesCount);

  }

  if(m_statisticsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> statisticsJsonList(m_statistics.size());
   for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
   {
     statisticsJsonList[statisticsIndex].AsObject(m_statistics[statisticsIndex].Jsonize());
   }
   payload.WithArray("statistics", std::move(statisticsJsonList));

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

  if(m_attachmentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("attachments", std::move(attachmentsJsonList));

  }

  if(m_attachmentsStatusHasBeenSet)
  {
   payload.WithString("attachmentsStatus", m_attachmentsStatus);

  }

  if(m_serviceConnectDefaultsHasBeenSet)
  {
   payload.WithObject("serviceConnectDefaults", m_serviceConnectDefaults.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
