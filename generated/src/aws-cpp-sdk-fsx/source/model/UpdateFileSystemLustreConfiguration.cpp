/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateFileSystemLustreConfiguration.h>
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

UpdateFileSystemLustreConfiguration::UpdateFileSystemLustreConfiguration() : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_autoImportPolicy(AutoImportPolicyType::NOT_SET),
    m_autoImportPolicyHasBeenSet(false),
    m_dataCompressionType(DataCompressionType::NOT_SET),
    m_dataCompressionTypeHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_rootSquashConfigurationHasBeenSet(false),
    m_perUnitStorageThroughput(0),
    m_perUnitStorageThroughputHasBeenSet(false)
{
}

UpdateFileSystemLustreConfiguration::UpdateFileSystemLustreConfiguration(JsonView jsonValue) : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_autoImportPolicy(AutoImportPolicyType::NOT_SET),
    m_autoImportPolicyHasBeenSet(false),
    m_dataCompressionType(DataCompressionType::NOT_SET),
    m_dataCompressionTypeHasBeenSet(false),
    m_logConfigurationHasBeenSet(false),
    m_rootSquashConfigurationHasBeenSet(false),
    m_perUnitStorageThroughput(0),
    m_perUnitStorageThroughputHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateFileSystemLustreConfiguration& UpdateFileSystemLustreConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WeeklyMaintenanceStartTime"))
  {
    m_weeklyMaintenanceStartTime = jsonValue.GetString("WeeklyMaintenanceStartTime");

    m_weeklyMaintenanceStartTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("AutoImportPolicy"))
  {
    m_autoImportPolicy = AutoImportPolicyTypeMapper::GetAutoImportPolicyTypeForName(jsonValue.GetString("AutoImportPolicy"));

    m_autoImportPolicyHasBeenSet = true;
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

  if(jsonValue.ValueExists("PerUnitStorageThroughput"))
  {
    m_perUnitStorageThroughput = jsonValue.GetInteger("PerUnitStorageThroughput");

    m_perUnitStorageThroughputHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateFileSystemLustreConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_weeklyMaintenanceStartTimeHasBeenSet)
  {
   payload.WithString("WeeklyMaintenanceStartTime", m_weeklyMaintenanceStartTime);

  }

  if(m_dailyAutomaticBackupStartTimeHasBeenSet)
  {
   payload.WithString("DailyAutomaticBackupStartTime", m_dailyAutomaticBackupStartTime);

  }

  if(m_automaticBackupRetentionDaysHasBeenSet)
  {
   payload.WithInteger("AutomaticBackupRetentionDays", m_automaticBackupRetentionDays);

  }

  if(m_autoImportPolicyHasBeenSet)
  {
   payload.WithString("AutoImportPolicy", AutoImportPolicyTypeMapper::GetNameForAutoImportPolicyType(m_autoImportPolicy));
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

  if(m_perUnitStorageThroughputHasBeenSet)
  {
   payload.WithInteger("PerUnitStorageThroughput", m_perUnitStorageThroughput);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
