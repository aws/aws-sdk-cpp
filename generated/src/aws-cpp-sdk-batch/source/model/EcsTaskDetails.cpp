/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EcsTaskDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EcsTaskDetails::EcsTaskDetails() : 
    m_containersHasBeenSet(false),
    m_containerInstanceArnHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_ephemeralStorageHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_ipcModeHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_pidModeHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_runtimePlatformHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
}

EcsTaskDetails::EcsTaskDetails(JsonView jsonValue) : 
    m_containersHasBeenSet(false),
    m_containerInstanceArnHasBeenSet(false),
    m_taskArnHasBeenSet(false),
    m_ephemeralStorageHasBeenSet(false),
    m_executionRoleArnHasBeenSet(false),
    m_platformVersionHasBeenSet(false),
    m_ipcModeHasBeenSet(false),
    m_taskRoleArnHasBeenSet(false),
    m_pidModeHasBeenSet(false),
    m_networkConfigurationHasBeenSet(false),
    m_runtimePlatformHasBeenSet(false),
    m_volumesHasBeenSet(false)
{
  *this = jsonValue;
}

EcsTaskDetails& EcsTaskDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containers"))
  {
    Aws::Utils::Array<JsonView> containersJsonList = jsonValue.GetArray("containers");
    for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
    {
      m_containers.push_back(containersJsonList[containersIndex].AsObject());
    }
    m_containersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerInstanceArn"))
  {
    m_containerInstanceArn = jsonValue.GetString("containerInstanceArn");

    m_containerInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskArn"))
  {
    m_taskArn = jsonValue.GetString("taskArn");

    m_taskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ephemeralStorage"))
  {
    m_ephemeralStorage = jsonValue.GetObject("ephemeralStorage");

    m_ephemeralStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRoleArn"))
  {
    m_executionRoleArn = jsonValue.GetString("executionRoleArn");

    m_executionRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platformVersion"))
  {
    m_platformVersion = jsonValue.GetString("platformVersion");

    m_platformVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipcMode"))
  {
    m_ipcMode = jsonValue.GetString("ipcMode");

    m_ipcModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("taskRoleArn"))
  {
    m_taskRoleArn = jsonValue.GetString("taskRoleArn");

    m_taskRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pidMode"))
  {
    m_pidMode = jsonValue.GetString("pidMode");

    m_pidModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("networkConfiguration"))
  {
    m_networkConfiguration = jsonValue.GetObject("networkConfiguration");

    m_networkConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runtimePlatform"))
  {
    m_runtimePlatform = jsonValue.GetObject("runtimePlatform");

    m_runtimePlatformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  return *this;
}

JsonValue EcsTaskDetails::Jsonize() const
{
  JsonValue payload;

  if(m_containersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containersJsonList(m_containers.size());
   for(unsigned containersIndex = 0; containersIndex < containersJsonList.GetLength(); ++containersIndex)
   {
     containersJsonList[containersIndex].AsObject(m_containers[containersIndex].Jsonize());
   }
   payload.WithArray("containers", std::move(containersJsonList));

  }

  if(m_containerInstanceArnHasBeenSet)
  {
   payload.WithString("containerInstanceArn", m_containerInstanceArn);

  }

  if(m_taskArnHasBeenSet)
  {
   payload.WithString("taskArn", m_taskArn);

  }

  if(m_ephemeralStorageHasBeenSet)
  {
   payload.WithObject("ephemeralStorage", m_ephemeralStorage.Jsonize());

  }

  if(m_executionRoleArnHasBeenSet)
  {
   payload.WithString("executionRoleArn", m_executionRoleArn);

  }

  if(m_platformVersionHasBeenSet)
  {
   payload.WithString("platformVersion", m_platformVersion);

  }

  if(m_ipcModeHasBeenSet)
  {
   payload.WithString("ipcMode", m_ipcMode);

  }

  if(m_taskRoleArnHasBeenSet)
  {
   payload.WithString("taskRoleArn", m_taskRoleArn);

  }

  if(m_pidModeHasBeenSet)
  {
   payload.WithString("pidMode", m_pidMode);

  }

  if(m_networkConfigurationHasBeenSet)
  {
   payload.WithObject("networkConfiguration", m_networkConfiguration.Jsonize());

  }

  if(m_runtimePlatformHasBeenSet)
  {
   payload.WithObject("runtimePlatform", m_runtimePlatform.Jsonize());

  }

  if(m_volumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("volumes", std::move(volumesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
