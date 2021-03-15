/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/Task.h>
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

Task::Task() : 
    m_attachmentsHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_capacityProviderNameHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_connectivity(Connectivity::NOT_SET),
    m_connectivityHasBeenSet(false),
    m_connectivityAtHasBeenSet(false),
    m_containerInstanceArnHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_desiredStatusHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false),
    m_executionStoppedAtHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_healthStatus(HealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_inferenceAcceleratorsHasBeenSet(false),
    m_lastStatusHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_pullStartedAtHasBeenSet(false),
    m_pullStoppedAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_stopCode(TaskStopCode::NOT_SET),
    m_stopCodeHasBeenSet(false),
    m_stoppedAtHasBeenSet(false),
    m_stoppedReasonHasBeenSet(false),
    m_stoppingAtHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_taskDefinitionArnHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

Task::Task(JsonView jsonValue) : 
    m_attachmentsHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_capacityProviderNameHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_connectivity(Connectivity::NOT_SET),
    m_connectivityHasBeenSet(false),
    m_connectivityAtHasBeenSet(false),
    m_containerInstanceArnHasBeenSet(false),
    m_containersHasBeenSet(false),
    m_cpuHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_desiredStatusHasBeenSet(false),
    m_enableExecuteCommand(false),
    m_enableExecuteCommandHasBeenSet(false),
    m_executionStoppedAtHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_healthStatus(HealthStatus::NOT_SET),
    m_healthStatusHasBeenSet(false),
    m_inferenceAcceleratorsHasBeenSet(false),
    m_lastStatusHasBeenSet(false),
    m_launchType(LaunchType::NOT_SET),
    m_launchTypeHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_overridesHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_pullStartedAtHasBeenSet(false),
    m_pullStoppedAtHasBeenSet(false),
    m_startedAtHasBeenSet(false),
    m_startedByHasBeenSet(false),
    m_stopCode(TaskStopCode::NOT_SET),
    m_stopCodeHasBeenSet(false),
    m_stoppedAtHasBeenSet(false),
    m_stoppedReasonHasBeenSet(false),
    m_stoppingAtHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_taskDefinitionArnHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

Task& Task::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attachments"))
  {
    Array<JsonView> attachmentsJsonList = jsonValue.GetArray("attachments");
    for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
    {
      m_attachments.push_back(attachmentsJsonList[attachmentsIndex].AsObject());
    }
    m_attachmentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("availabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("capacityProviderName"))
  {
    m_capacityProviderName = jsonValue.GetString("capacityProviderName");

    m_capacityProviderNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectivity"))
  {
    m_connectivity = ConnectivityMapper::GetConnectivityForName(jsonValue.GetString("connectivity"));

    m_connectivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectivityAt"))
  {
    m_connectivityAt = jsonValue.GetDouble("connectivityAt");

    m_connectivityAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerInstanceArn"))
  {
    m_containerInstanceArn = jsonValue.GetString("containerInstanceArn");

    m_containerInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containers"))
  {
    Array<JsonView> containersJsonList = jsonValue.GetArray("containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetString("cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredStatus"))
  {
    m_desiredStatus = jsonValue.GetString("desiredStatus");

    m_desiredStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enableExecuteCommand"))
  {
    m_enableExecuteCommand = jsonValue.GetBool("enableExecuteCommand");

    m_enableExecuteCommandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionStoppedAt"))
  {
    m_executionStoppedAt = jsonValue.GetDouble("executionStoppedAt");

    m_executionStoppedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("group"))
  {
    m_group = jsonValue.GetString("group");

    m_groupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("healthStatus"))
  {
    m_healthStatus = HealthStatusMapper::GetHealthStatusForName(jsonValue.GetString("healthStatus"));

    m_healthStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inferenceAccelerators"))
  {
    Array<JsonView> inferenceAcceleratorsJsonList = jsonValue.GetArray("inferenceAccelerators");
    for(unsigned inferenceAcceleratorsIndex = 0; inferenceAcceleratorsIndex < inferenceAcceleratorsJsonList.GetLength(); ++inferenceAcceleratorsIndex)
    {
      m_inferenceAccelerators.push_back(inferenceAcceleratorsJsonList[inferenceAcceleratorsIndex].AsObject());
    }
    m_inferenceAcceleratorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastStatus"))
  {
    m_lastStatus = jsonValue.GetString("lastStatus");

    m_lastStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchType"))
  {
    m_launchType = LaunchTypeMapper::GetLaunchTypeForName(jsonValue.GetString("launchType"));

    m_launchTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetString("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("overrides"))
  {
    m_overrides = jsonValue.GetObject("overrides");

    m_overridesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformVersion"))
  {
    m_platformVersion = jsonValue.GetString("platformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullStartedAt"))
  {
    m_pullStartedAt = jsonValue.GetDouble("pullStartedAt");

    m_pullStartedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pullStoppedAt"))
  {
    m_pullStoppedAt = jsonValue.GetDouble("pullStoppedAt");

    m_pullStoppedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedAt"))
  {
    m_startedAt = jsonValue.GetDouble("startedAt");

    m_startedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startedBy"))
  {
    m_startedBy = jsonValue.GetString("startedBy");

    m_startedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stopCode"))
  {
    m_stopCode = TaskStopCodeMapper::GetTaskStopCodeForName(jsonValue.GetString("stopCode"));

    m_stopCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stoppedAt"))
  {
    m_stoppedAt = jsonValue.GetDouble("stoppedAt");

    m_stoppedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stoppedReason"))
  {
    m_stoppedReason = jsonValue.GetString("stoppedReason");

    m_stoppedReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stoppingAt"))
  {
    m_stoppingAt = jsonValue.GetDouble("stoppingAt");

    m_stoppingAtHasBeenSet = true;
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

  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskDefinitionArn"))
  {
    m_taskDefinitionArn = jsonValue.GetString("taskDefinitionArn");

    m_taskDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue Task::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentsHasBeenSet)
  {
   Array<JsonValue> attachmentsJsonList(m_attachments.size());
   for(unsigned attachmentsIndex = 0; attachmentsIndex < attachmentsJsonList.GetLength(); ++attachmentsIndex)
   {
     attachmentsJsonList[attachmentsIndex].AsObject(m_attachments[attachmentsIndex].Jsonize());
   }
   payload.WithArray("attachments", std::move(attachmentsJsonList));

  }

  if(m_attributesHasBeenSet)
  {
   Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("availabilityZone", m_availabilityZone);

  }

  if(m_capacityProviderNameHasBeenSet)
  {
   payload.WithString("capacityProviderName", m_capacityProviderName);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_connectivityHasBeenSet)
  {
   payload.WithString("connectivity", ConnectivityMapper::GetNameForConnectivity(m_connectivity));
  }

  if(m_connectivityAtHasBeenSet)
  {
   payload.WithDouble("connectivityAt", m_connectivityAt.SecondsWithMSPrecision());
  }

  if(m_containerInstanceArnHasBeenSet)
  {
   payload.WithString("containerInstanceArn", m_containerInstanceArn);

  }

  if(m_containersHasBeenSet)
  {
   Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("containers", std::move(containersJsonList));

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithString("cpu", m_cpu);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_desiredStatusHasBeenSet)
  {
   payload.WithString("desiredStatus", m_desiredStatus);

  }

  if(m_enableExecuteCommandHasBeenSet)
  {
   payload.WithBool("enableExecuteCommand", m_enableExecuteCommand);

  }

  if(m_executionStoppedAtHasBeenSet)
  {
   payload.WithDouble("executionStoppedAt", m_executionStoppedAt.SecondsWithMSPrecision());
  }

  if(m_groupHasBeenSet)
  {
   payload.WithString("group", m_group);

  }

  if(m_healthStatusHasBeenSet)
  {
   payload.WithString("healthStatus", HealthStatusMapper::GetNameForHealthStatus(m_healthStatus));
  }

  if(m_inferenceAcceleratorsHasBeenSet)
  {
   Array<JsonValue> inferenceAcceleratorsJsonList(m_inferenceAccelerators.size());
   for(unsigned inferenceAcceleratorsIndex = 0; inferenceAcceleratorsIndex < inferenceAcceleratorsJsonList.GetLength(); ++inferenceAcceleratorsIndex)
   {
     inferenceAcceleratorsJsonList[inferenceAcceleratorsIndex].AsObject(m_inferenceAccelerators[inferenceAcceleratorsIndex].Jsonize());
   }
   payload.WithArray("inferenceAccelerators", std::move(inferenceAcceleratorsJsonList));

  }

  if(m_lastStatusHasBeenSet)
  {
   payload.WithString("lastStatus", m_lastStatus);

  }

  if(m_launchTypeHasBeenSet)
  {
   payload.WithString("launchType", LaunchTypeMapper::GetNameForLaunchType(m_launchType));
  }

  if(m_memoryHasBeenSet)
  {
   payload.WithString("memory", m_memory);

  }

  if(m_overridesHasBeenSet)
  {
   payload.WithObject("overrides", m_overrides.Jsonize());

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  if(m_pullStartedAtHasBeenSet)
  {
   payload.WithDouble("pullStartedAt", m_pullStartedAt.SecondsWithMSPrecision());
  }

  if(m_pullStoppedAtHasBeenSet)
  {
   payload.WithDouble("pullStoppedAt", m_pullStoppedAt.SecondsWithMSPrecision());
  }

  if(m_startedAtHasBeenSet)
  {
   payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if(m_startedByHasBeenSet)
  {
   payload.WithString("startedBy", m_startedBy);

  }

  if(m_stopCodeHasBeenSet)
  {
   payload.WithString("stopCode", TaskStopCodeMapper::GetNameForTaskStopCode(m_stopCode));
  }

  if(m_stoppedAtHasBeenSet)
  {
   payload.WithDouble("stoppedAt", m_stoppedAt.SecondsWithMSPrecision());
  }

  if(m_stoppedReasonHasBeenSet)
  {
   payload.WithString("stoppedReason", m_stoppedReason);

  }

  if(m_stoppingAtHasBeenSet)
  {
   payload.WithDouble("stoppingAt", m_stoppingAt.SecondsWithMSPrecision());
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

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("taskArn", m_taskArn);

  }

  if(m_taskDefinitionArnHasBeenSet)
  {
   payload.WithString("taskDefinitionArn", m_taskDefinitionArn);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
