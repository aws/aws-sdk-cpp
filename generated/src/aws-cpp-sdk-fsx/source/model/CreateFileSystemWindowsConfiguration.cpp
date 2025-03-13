/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateFileSystemWindowsConfiguration.h>
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

CreateFileSystemWindowsConfiguration::CreateFileSystemWindowsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateFileSystemWindowsConfiguration& CreateFileSystemWindowsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ActiveDirectoryId"))
  {
    m_activeDirectoryId = jsonValue.GetString("ActiveDirectoryId");
    m_activeDirectoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SelfManagedActiveDirectoryConfiguration"))
  {
    m_selfManagedActiveDirectoryConfiguration = jsonValue.GetObject("SelfManagedActiveDirectoryConfiguration");
    m_selfManagedActiveDirectoryConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeploymentType"))
  {
    m_deploymentType = WindowsDeploymentTypeMapper::GetWindowsDeploymentTypeForName(jsonValue.GetString("DeploymentType"));
    m_deploymentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreferredSubnetId"))
  {
    m_preferredSubnetId = jsonValue.GetString("PreferredSubnetId");
    m_preferredSubnetIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("Aliases"))
  {
    Aws::Utils::Array<JsonView> aliasesJsonList = jsonValue.GetArray("Aliases");
    for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
    {
      m_aliases.push_back(aliasesJsonList[aliasesIndex].AsString());
    }
    m_aliasesHasBeenSet = true;
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

JsonValue CreateFileSystemWindowsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_activeDirectoryIdHasBeenSet)
  {
   payload.WithString("ActiveDirectoryId", m_activeDirectoryId);

  }

  if(m_selfManagedActiveDirectoryConfigurationHasBeenSet)
  {
   payload.WithObject("SelfManagedActiveDirectoryConfiguration", m_selfManagedActiveDirectoryConfiguration.Jsonize());

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("DeploymentType", WindowsDeploymentTypeMapper::GetNameForWindowsDeploymentType(m_deploymentType));
  }

  if(m_preferredSubnetIdHasBeenSet)
  {
   payload.WithString("PreferredSubnetId", m_preferredSubnetId);

  }

  if(m_throughputCapacityHasBeenSet)
  {
   payload.WithInteger("ThroughputCapacity", m_throughputCapacity);

  }

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

  if(m_copyTagsToBackupsHasBeenSet)
  {
   payload.WithBool("CopyTagsToBackups", m_copyTagsToBackups);

  }

  if(m_aliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasesJsonList(m_aliases.size());
   for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
   {
     aliasesJsonList[aliasesIndex].AsString(m_aliases[aliasesIndex]);
   }
   payload.WithArray("Aliases", std::move(aliasesJsonList));

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
