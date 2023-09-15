﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateFileSystemOpenZFSConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

UpdateFileSystemOpenZFSConfiguration::UpdateFileSystemOpenZFSConfiguration() : 
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false),
    m_copyTagsToVolumes(false),
    m_copyTagsToVolumesHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_diskIopsConfigurationHasBeenSet(false),
    m_addRouteTableIdsHasBeenSet(false),
    m_removeRouteTableIdsHasBeenSet(false)
{
}

UpdateFileSystemOpenZFSConfiguration::UpdateFileSystemOpenZFSConfiguration(JsonView jsonValue) : 
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false),
    m_copyTagsToVolumes(false),
    m_copyTagsToVolumesHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_diskIopsConfigurationHasBeenSet(false),
    m_addRouteTableIdsHasBeenSet(false),
    m_removeRouteTableIdsHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateFileSystemOpenZFSConfiguration& UpdateFileSystemOpenZFSConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutomaticBackupRetentionDays"))
  {
    m_automaticBackupRetentionDays = jsonValue.GetInteger("AutomaticBackupRetentionDays");

    m_automaticBackupRetentionDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTagsToBackups"))
  {
    m_copyTagsToBackups = jsonValue.GetBool("CopyTagsToBackups");

    m_copyTagsToBackupsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTagsToVolumes"))
  {
    m_copyTagsToVolumes = jsonValue.GetBool("CopyTagsToVolumes");

    m_copyTagsToVolumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DailyAutomaticBackupStartTime"))
  {
    m_dailyAutomaticBackupStartTime = jsonValue.GetString("DailyAutomaticBackupStartTime");

    m_dailyAutomaticBackupStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThroughputCapacity"))
  {
    m_throughputCapacity = jsonValue.GetInteger("ThroughputCapacity");

    m_throughputCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");

    m_weeklyMaintenanceStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskIopsConfiguration"))
  {
    m_diskIopsConfiguration = jsonValue.GetObject("DiskIopsConfiguration");

    m_diskIopsConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddRouteTableIds"))
  {
    Aws::Utils::Array<JsonView> addRouteTableIdsJsonList = jsonValue.GetArray("AddRouteTableIds");
    for(unsigned addRouteTableIdsIndex = 0; addRouteTableIdsIndex < addRouteTableIdsJsonList.GetLength(); ++addRouteTableIdsIndex)
    {
      m_addRouteTableIds.push_back(addRouteTableIdsJsonList[addRouteTableIdsIndex].AsString());
    }
    m_addRouteTableIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RemoveRouteTableIds"))
  {
    Aws::Utils::Array<JsonView> removeRouteTableIdsJsonList = jsonValue.GetArray("RemoveRouteTableIds");
    for(unsigned removeRouteTableIdsIndex = 0; removeRouteTableIdsIndex < removeRouteTableIdsJsonList.GetLength(); ++removeRouteTableIdsIndex)
    {
      m_removeRouteTableIds.push_back(removeRouteTableIdsJsonList[removeRouteTableIdsIndex].AsString());
    }
    m_removeRouteTableIdsHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateFileSystemOpenZFSConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_automaticBackupRetentionDaysHasBeenSet)
  {
   payload.WithInteger("AutomaticBackupRetentionDays", m_automaticBackupRetentionDays);

  }

  if(m_copyTagsToBackupsHasBeenSet)
  {
   payload.WithBool("CopyTagsToBackups", m_copyTagsToBackups);

  }

  if(m_copyTagsToVolumesHasBeenSet)
  {
   payload.WithBool("CopyTagsToVolumes", m_copyTagsToVolumes);

  }

  if(m_dailyAutomaticBackupStartTimeHasBeenSet)
  {
   payload.WithString("DailyAutomaticBackupStartTime", m_dailyAutomaticBackupStartTime);

  }

  if(m_throughputCapacityHasBeenSet)
  {
   payload.WithInteger("ThroughputCapacity", m_throughputCapacity);

  }

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  if(m_diskIopsConfigurationHasBeenSet)
  {
   payload.WithObject("DiskIopsConfiguration", m_diskIopsConfiguration.Jsonize());

  }

  if(m_addRouteTableIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addRouteTableIdsJsonList(m_addRouteTableIds.size());
   for(unsigned addRouteTableIdsIndex = 0; addRouteTableIdsIndex < addRouteTableIdsJsonList.GetLength(); ++addRouteTableIdsIndex)
   {
     addRouteTableIdsJsonList[addRouteTableIdsIndex].AsString(m_addRouteTableIds[addRouteTableIdsIndex]);
   }
   payload.WithArray("AddRouteTableIds", std::move(addRouteTableIdsJsonList));

  }

  if(m_removeRouteTableIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeRouteTableIdsJsonList(m_removeRouteTableIds.size());
   for(unsigned removeRouteTableIdsIndex = 0; removeRouteTableIdsIndex < removeRouteTableIdsJsonList.GetLength(); ++removeRouteTableIdsIndex)
   {
     removeRouteTableIdsJsonList[removeRouteTableIdsIndex].AsString(m_removeRouteTableIds[removeRouteTableIdsIndex]);
   }
   payload.WithArray("RemoveRouteTableIds", std::move(removeRouteTableIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
