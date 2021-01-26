/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/LustreFileSystemConfiguration.h>
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

LustreFileSystemConfiguration::LustreFileSystemConfiguration() : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dataRepositoryConfigurationHasBeenSet(false),
    m_deploymentType(LustreDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_perUnitStorageThroughput(0),
    m_perUnitStorageThroughputHasBeenSet(false),
    m_mountNameHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false),
    m_driveCacheType(DriveCacheType::NOT_SET),
    m_driveCacheTypeHasBeenSet(false)
{
}

LustreFileSystemConfiguration::LustreFileSystemConfiguration(JsonView jsonValue) : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dataRepositoryConfigurationHasBeenSet(false),
    m_deploymentType(LustreDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_perUnitStorageThroughput(0),
    m_perUnitStorageThroughputHasBeenSet(false),
    m_mountNameHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false),
    m_driveCacheType(DriveCacheType::NOT_SET),
    m_driveCacheTypeHasBeenSet(false)
{
  *this = jsonValue;
}

LustreFileSystemConfiguration& LustreFileSystemConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");

    m_weeklyMaintenanceStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataRepositoryConfiguration"))
  {
    m_dataRepositoryConfiguration = jsonValue.GetObject("DataRepositoryConfiguration");

    m_dataRepositoryConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentType"))
  {
    m_deploymentType = LustreDeploymentTypeMapper::GetLustreDeploymentTypeForName(jsonValue.GetString("DeploymentType"));

    m_deploymentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PerUnitStorageThroughput"))
  {
    m_perUnitStorageThroughput = jsonValue.GetInteger("PerUnitStorageThroughput");

    m_perUnitStorageThroughputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MountName"))
  {
    m_mountName = jsonValue.GetString("MountName");

    m_mountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DailyAutomaticBackupStartTime"))
  {
    m_dailyAutomaticBackupStartTime = jsonValue.GetString("DailyAutomaticBackupStartTime");

    m_dailyAutomaticBackupStartTimeHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("DriveCacheType"))
  {
    m_driveCacheType = DriveCacheTypeMapper::GetDriveCacheTypeForName(jsonValue.GetString("DriveCacheType"));

    m_driveCacheTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue LustreFileSystemConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  if(m_dataRepositoryConfigurationHasBeenSet)
  {
   payload.WithObject("DataRepositoryConfiguration", m_dataRepositoryConfiguration.Jsonize());

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", LustreDeploymentTypeMapper::GetNameForLustreDeploymentType(m_deploymentType));
  }

  if(m_perUnitStorageThroughputHasBeenSet)
  {
   payload.WithInteger("PerUnitStorageThroughput", m_perUnitStorageThroughput);

  }

  if(m_mountNameHasBeenSet)
  {
   payload.WithString("MountName", m_mountName);

  }

  if(m_dailyAutomaticBackupStartTimeHasBeenSet)
  {
   payload.WithString("DailyAutomaticBackupStartTime", m_dailyAutomaticBackupStartTime);

  }

  if(m_automaticBackupRetentionDaysHasBeenSet)
  {
   payload.WithInteger("AutomaticBackupRetentionDays", m_automaticBackupRetentionDays);

  }

  if(m_copyTagsToBackupsHasBeenSet)
  {
   payload.WithBool("CopyTagsToBackups", m_copyTagsToBackups);

  }

  if(m_driveCacheTypeHasBeenSet)
  {
   payload.WithString("DriveCacheType", DriveCacheTypeMapper::GetNameForDriveCacheType(m_driveCacheType));
  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
