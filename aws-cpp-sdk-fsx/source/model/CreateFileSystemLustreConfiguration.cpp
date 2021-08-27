/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateFileSystemLustreConfiguration.h>
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

CreateFileSystemLustreConfiguration::CreateFileSystemLustreConfiguration() : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_importPathHasBeenSet(false),
    m_exportPathHasBeenSet(false),
    m_importedFileChunkSize(0),
    m_importedFileChunkSizeHasBeenSet(false),
    m_deploymentType(LustreDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_autoImportPolicy(AutoImportPolicyType::NOT_SET),
    m_autoImportPolicyHasBeenSet(false),
    m_perUnitStorageThroughput(0),
    m_perUnitStorageThroughputHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false),
    m_driveCacheType(DriveCacheType::NOT_SET),
    m_driveCacheTypeHasBeenSet(false)
{
}

CreateFileSystemLustreConfiguration::CreateFileSystemLustreConfiguration(JsonView jsonValue) : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_importPathHasBeenSet(false),
    m_exportPathHasBeenSet(false),
    m_importedFileChunkSize(0),
    m_importedFileChunkSizeHasBeenSet(false),
    m_deploymentType(LustreDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_autoImportPolicy(AutoImportPolicyType::NOT_SET),
    m_autoImportPolicyHasBeenSet(false),
    m_perUnitStorageThroughput(0),
    m_perUnitStorageThroughputHasBeenSet(false),
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

CreateFileSystemLustreConfiguration& CreateFileSystemLustreConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");

    m_weeklyMaintenanceStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportPath"))
  {
    m_importPath = jsonValue.GetString("ImportPath");

    m_importPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportPath"))
  {
    m_exportPath = jsonValue.GetString("ExportPath");

    m_exportPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ImportedFileChunkSize"))
  {
    m_importedFileChunkSize = jsonValue.GetInteger("ImportedFileChunkSize");

    m_importedFileChunkSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeploymentType"))
  {
    m_deploymentType = LustreDeploymentTypeMapper::GetLustreDeploymentTypeForName(jsonValue.GetString("DeploymentType"));

    m_deploymentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoImportPolicy"))
  {
    m_autoImportPolicy = AutoImportPolicyTypeMapper::GetAutoImportPolicyTypeForName(jsonValue.GetString("AutoImportPolicy"));

    m_autoImportPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PerUnitStorageThroughput"))
  {
    m_perUnitStorageThroughput = jsonValue.GetInteger("PerUnitStorageThroughput");

    m_perUnitStorageThroughputHasBeenSet = true;
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

JsonValue CreateFileSystemLustreConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  if(m_importPathHasBeenSet)
  {
   payload.WithString("ImportPath", m_importPath);

  }

  if(m_exportPathHasBeenSet)
  {
   payload.WithString("ExportPath", m_exportPath);

  }

  if(m_importedFileChunkSizeHasBeenSet)
  {
   payload.WithInteger("ImportedFileChunkSize", m_importedFileChunkSize);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", LustreDeploymentTypeMapper::GetNameForLustreDeploymentType(m_deploymentType));
  }

  if(m_autoImportPolicyHasBeenSet)
  {
   payload.WithString("AutoImportPolicy", AutoImportPolicyTypeMapper::GetNameForAutoImportPolicyType(m_autoImportPolicy));
  }

  if(m_perUnitStorageThroughputHasBeenSet)
  {
   payload.WithInteger("PerUnitStorageThroughput", m_perUnitStorageThroughput);

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
