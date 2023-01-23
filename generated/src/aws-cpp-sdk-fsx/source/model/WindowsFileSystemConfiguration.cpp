/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/WindowsFileSystemConfiguration.h>
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

WindowsFileSystemConfiguration::WindowsFileSystemConfiguration() : 
    m_activeDirectoryIdHasBeenSet(false),
    m_selfManagedActiveDirectoryConfigurationHasBeenSet(false),
    m_deploymentType(WindowsDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_remoteAdministrationEndpointHasBeenSet(false),
    m_preferredSubnetIdHasBeenSet(false),
    m_preferredFileServerIpHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_maintenanceOperationsInProgressHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_auditLogConfigurationHasBeenSet(false)
{
}

WindowsFileSystemConfiguration::WindowsFileSystemConfiguration(JsonView jsonValue) : 
    m_activeDirectoryIdHasBeenSet(false),
    m_selfManagedActiveDirectoryConfigurationHasBeenSet(false),
    m_deploymentType(WindowsDeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_remoteAdministrationEndpointHasBeenSet(false),
    m_preferredSubnetIdHasBeenSet(false),
    m_preferredFileServerIpHasBeenSet(false),
    m_throughputCapacity(0),
    m_throughputCapacityHasBeenSet(false),
    m_maintenanceOperationsInProgressHasBeenSet(false),
    m_weeklyMaintenanceStartTimeHasBeenSet(false),
    m_dailyAutomaticBackupStartTimeHasBeenSet(false),
    m_automaticBackupRetentionDays(0),
    m_automaticBackupRetentionDaysHasBeenSet(false),
    m_copyTagsToBackups(false),
    m_copyTagsToBackupsHasBeenSet(false),
    m_aliasesHasBeenSet(false),
    m_auditLogConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

WindowsFileSystemConfiguration& WindowsFileSystemConfiguration::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("RemoteAdministrationEndpoint"))
  {
    m_remoteAdministrationEndpoint = jsonValue.GetString("RemoteAdministrationEndpoint");

    m_remoteAdministrationEndpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredSubnetId"))
  {
    m_preferredSubnetId = jsonValue.GetString("PreferredSubnetId");

    m_preferredSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PreferredFileServerIp"))
  {
    m_preferredFileServerIp = jsonValue.GetString("PreferredFileServerIp");

    m_preferredFileServerIpHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ThroughputCapacity"))
  {
    m_throughputCapacity = jsonValue.GetInteger("ThroughputCapacity");

    m_throughputCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaintenanceOperationsInProgress"))
  {
    Aws::Utils::Array<JsonView> maintenanceOperationsInProgressJsonList = jsonValue.GetArray("MaintenanceOperationsInProgress");
    for(unsigned maintenanceOperationsInProgressIndex = 0; maintenanceOperationsInProgressIndex < maintenanceOperationsInProgressJsonList.GetLength(); ++maintenanceOperationsInProgressIndex)
    {
      m_maintenanceOperationsInProgress.push_back(FileSystemMaintenanceOperationMapper::GetFileSystemMaintenanceOperationForName(maintenanceOperationsInProgressJsonList[maintenanceOperationsInProgressIndex].AsString()));
    }
    m_maintenanceOperationsInProgressHasBeenSet = true;
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
      m_aliases.push_back(aliasesJsonList[aliasesIndex].AsObject());
    }
    m_aliasesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuditLogConfiguration"))
  {
    m_auditLogConfiguration = jsonValue.GetObject("AuditLogConfiguration");

    m_auditLogConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue WindowsFileSystemConfiguration::Jsonize() const
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

  if(m_remoteAdministrationEndpointHasBeenSet)
  {
   payload.WithString("RemoteAdministrationEndpoint", m_remoteAdministrationEndpoint);

  }

  if(m_preferredSubnetIdHasBeenSet)
  {
   payload.WithString("PreferredSubnetId", m_preferredSubnetId);

  }

  if(m_preferredFileServerIpHasBeenSet)
  {
   payload.WithString("PreferredFileServerIp", m_preferredFileServerIp);

  }

  if(m_throughputCapacityHasBeenSet)
  {
   payload.WithInteger("ThroughputCapacity", m_throughputCapacity);

  }

  if(m_maintenanceOperationsInProgressHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> maintenanceOperationsInProgressJsonList(m_maintenanceOperationsInProgress.size());
   for(unsigned maintenanceOperationsInProgressIndex = 0; maintenanceOperationsInProgressIndex < maintenanceOperationsInProgressJsonList.GetLength(); ++maintenanceOperationsInProgressIndex)
   {
     maintenanceOperationsInProgressJsonList[maintenanceOperationsInProgressIndex].AsString(FileSystemMaintenanceOperationMapper::GetNameForFileSystemMaintenanceOperation(m_maintenanceOperationsInProgress[maintenanceOperationsInProgressIndex]));
   }
   payload.WithArray("MaintenanceOperationsInProgress", std::move(maintenanceOperationsInProgressJsonList));

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
     aliasesJsonList[aliasesIndex].AsObject(m_aliases[aliasesIndex].Jsonize());
   }
   payload.WithArray("Aliases", std::move(aliasesJsonList));

  }

  if(m_auditLogConfigurationHasBeenSet)
  {
   payload.WithObject("AuditLogConfiguration", m_auditLogConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
