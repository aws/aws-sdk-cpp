/*
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
    m_settingsHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_clusterArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
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
    m_settingsHasBeenSet(false)
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
    Array<JsonView> statisticsJsonList = jsonValue.GetArray("statistics");
    for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
    {
      m_statistics.push_back(statisticsJsonList[statisticsIndex].AsObject());
    }
    m_statisticsHasBeenSet = true;
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

  if(jsonValue.ValueExists("settings"))
  {
    Array<JsonView> settingsJsonList = jsonValue.GetArray("settings");
    for(unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex)
    {
      m_settings.push_back(settingsJsonList[settingsIndex].AsObject());
    }
    m_settingsHasBeenSet = true;
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
   Array<JsonValue> statisticsJsonList(m_statistics.size());
   for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
   {
     statisticsJsonList[statisticsIndex].AsObject(m_statistics[statisticsIndex].Jsonize());
   }
   payload.WithArray("statistics", std::move(statisticsJsonList));

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

  if(m_settingsHasBeenSet)
  {
   Array<JsonValue> settingsJsonList(m_settings.size());
   for(unsigned settingsIndex = 0; settingsIndex < settingsJsonList.GetLength(); ++settingsIndex)
   {
     settingsJsonList[settingsIndex].AsObject(m_settings[settingsIndex].Jsonize());
   }
   payload.WithArray("settings", std::move(settingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
