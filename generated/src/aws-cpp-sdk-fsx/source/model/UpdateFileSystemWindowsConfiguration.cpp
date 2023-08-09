/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/UpdateFileSystemWindowsConfiguration.h>
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

UpdateFileSystemWindowsConfiguration::UpdateFileSystemWindowsConfiguration() : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_selfManagedActiveDirectoryConfigurationHasBeenSet(false),
    m_auditLogConfigurationHasBeenSet(false),
    m_diskIopsConfigurationHasBeenSet(false)
{
}

UpdateFileSystemWindowsConfiguration::UpdateFileSystemWindowsConfiguration(JsonView jsonValue) : 
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_selfManagedActiveDirectoryConfigurationHasBeenSet(false),
    m_auditLogConfigurationHasBeenSet(false),
    m_diskIopsConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateFileSystemWindowsConfiguration& UpdateFileSystemWindowsConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ThroughputCapacity"))
  {
    m_throughputCapacity = jsonValue.GetInteger("ThroughputCapacity");

    m_throughputCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelfManagedActiveDirectoryConfiguration"))
  {
    m_selfManagedActiveDirectoryConfiguration = jsonValue.GetObject("SelfManagedActiveDirectoryConfiguration");

    m_selfManagedActiveDirectoryConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuditLogConfiguration"))
  {
    m_auditLogConfiguration = jsonValue.GetObject("AuditLogConfiguration");

    m_auditLogConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DiskIopsConfiguration"))
  {
    m_diskIopsConfiguration = jsonValue.GetObject("DiskIopsConfiguration");

    m_diskIopsConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateFileSystemWindowsConfiguration::Jsonize() const
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

  if(m_throughputCapacityHasBeenSet)
  {
   payload.WithInteger("ThroughputCapacity", m_throughputCapacity);

  }

  if(m_selfManagedActiveDirectoryConfigurationHasBeenSet)
  {
   payload.WithObject("SelfManagedActiveDirectoryConfiguration", m_selfManagedActiveDirectoryConfiguration.Jsonize());

  }

  if(m_auditLogConfigurationHasBeenSet)
  {
   payload.WithObject("AuditLogConfiguration", m_auditLogConfiguration.Jsonize());

  }

  if(m_diskIopsConfigurationHasBeenSet)
  {
   payload.WithObject("DiskIopsConfiguration", m_diskIopsConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
