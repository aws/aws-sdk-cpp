/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSFileSystemConfiguration.h>
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

OpenZFSFileSystemConfiguration::OpenZFSFileSystemConfiguration() : 
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false),
    m_copyTagsToVolumes(false),
    m_copyTagsToVolumesHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_deploymentType(OpenZFSDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_diskIopsConfigurationHasBeenSet(false),
    m_rootVolumeIdHasBeenSet(false)
{
}

OpenZFSFileSystemConfiguration::OpenZFSFileSystemConfiguration(JsonView jsonValue) : 
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false),
    m_copyTagsToVolumes(false),
    m_copyTagsToVolumesHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_deploymentType(OpenZFSDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_diskIopsConfigurationHasBeenSet(false),
    m_rootVolumeIdHasBeenSet(false)
{
  *this = jsonValue;
}

OpenZFSFileSystemConfiguration& OpenZFSFileSystemConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("DeploymentType"))
  {
    m_deploymentType = OpenZFSDeploymentTypeMapper::GetOpenZFSDeploymentTypeForName(jsonValue.GetString("DeploymentType"));

    m_deploymentTypeHasBeenSet = true;
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

  if(jsonValue.ValueExists("RootVolumeId"))
  {
    m_rootVolumeId = jsonValue.GetString("RootVolumeId");

    m_rootVolumeIdHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenZFSFileSystemConfiguration::Jsonize() const
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

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", OpenZFSDeploymentTypeMapper::GetNameForOpenZFSDeploymentType(m_deploymentType));
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

  if(m_rootVolumeIdHasBeenSet)
  {
   payload.WithString("RootVolumeId", m_rootVolumeId);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
