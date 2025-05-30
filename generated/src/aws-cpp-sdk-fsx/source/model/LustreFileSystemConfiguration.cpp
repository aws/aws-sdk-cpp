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

LustreFileSystemConfiguration::LustreFileSystemConfiguration(JsonView jsonValue)
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
  if(jsonValue.ValueExists("DataCompressionType"))
  {
    m_dataCompressionType = DataCompressionTypeMapper::GetDataCompressionTypeForName(jsonValue.GetString("DataCompressionType"));
    m_dataCompressionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LogConfiguration"))
  {
    m_logConfiguration = jsonValue.GetObject("LogConfiguration");
    m_logConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RootSquashConfiguration"))
  {
    m_rootSquashConfiguration = jsonValue.GetObject("RootSquashConfiguration");
    m_rootSquashConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MetadataConfiguration"))
  {
    m_metadataConfiguration = jsonValue.GetObject("MetadataConfiguration");
    m_metadataConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EfaEnabled"))
  {
    m_efaEnabled = jsonValue.GetBool("EfaEnabled");
    m_efaEnabledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThroughputCapacity"))
  {
    m_throughputCapacity = jsonValue.GetInteger("ThroughputCapacity");
    m_throughputCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataReadCacheConfiguration"))
  {
    m_dataReadCacheConfiguration = jsonValue.GetObject("DataReadCacheConfiguration");
    m_dataReadCacheConfigurationHasBeenSet = true;
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

  if(m_dataCompressionTypeHasBeenSet)
  {
   payload.WithString("DataCompressionType", DataCompressionTypeMapper::GetNameForDataCompressionType(m_dataCompressionType));
  }

  if(m_logConfigurationHasBeenSet)
  {
   payload.WithObject("LogConfiguration", m_logConfiguration.Jsonize());

  }

  if(m_rootSquashConfigurationHasBeenSet)
  {
   payload.WithObject("RootSquashConfiguration", m_rootSquashConfiguration.Jsonize());

  }

  if(m_metadataConfigurationHasBeenSet)
  {
   payload.WithObject("MetadataConfiguration", m_metadataConfiguration.Jsonize());

  }

  if(m_efaEnabledHasBeenSet)
  {
   payload.WithBool("EfaEnabled", m_efaEnabled);

  }

  if(m_throughputCapacityHasBeenSet)
  {
   payload.WithInteger("ThroughputCapacity", m_throughputCapacity);

  }

  if(m_dataReadCacheConfigurationHasBeenSet)
  {
   payload.WithObject("DataReadCacheConfiguration", m_dataReadCacheConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
