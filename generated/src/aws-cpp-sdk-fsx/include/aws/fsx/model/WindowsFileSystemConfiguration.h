/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryAttributes.h>
#include <aws/fsx/model/WindowsDeploymentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/WindowsAuditLogConfiguration.h>
#include <aws/fsx/model/DiskIopsConfiguration.h>
#include <aws/fsx/model/FileSystemMaintenanceOperation.h>
#include <aws/fsx/model/Alias.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>The configuration for this Microsoft Windows file system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/WindowsFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class WindowsFileSystemConfiguration
  {
  public:
    AWS_FSX_API WindowsFileSystemConfiguration() = default;
    AWS_FSX_API WindowsFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API WindowsFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for an existing Amazon Web Services Managed Microsoft Active Directory
     * instance that the file system is joined to.</p>
     */
    inline const Aws::String& GetActiveDirectoryId() const { return m_activeDirectoryId; }
    inline bool ActiveDirectoryIdHasBeenSet() const { return m_activeDirectoryIdHasBeenSet; }
    template<typename ActiveDirectoryIdT = Aws::String>
    void SetActiveDirectoryId(ActiveDirectoryIdT&& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = std::forward<ActiveDirectoryIdT>(value); }
    template<typename ActiveDirectoryIdT = Aws::String>
    WindowsFileSystemConfiguration& WithActiveDirectoryId(ActiveDirectoryIdT&& value) { SetActiveDirectoryId(std::forward<ActiveDirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SelfManagedActiveDirectoryAttributes& GetSelfManagedActiveDirectoryConfiguration() const { return m_selfManagedActiveDirectoryConfiguration; }
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryAttributes>
    void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::forward<SelfManagedActiveDirectoryConfigurationT>(value); }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryAttributes>
    WindowsFileSystemConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { SetSelfManagedActiveDirectoryConfiguration(std::forward<SelfManagedActiveDirectoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the file system deployment type, valid values are the
     * following:</p> <ul> <li> <p> <code>MULTI_AZ_1</code> - Specifies a high
     * availability file system that is configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability, and supports SSD and HDD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_1</code> - (Default) Specifies a
     * file system that is configured for single AZ redundancy, only supports SSD
     * storage.</p> </li> <li> <p> <code>SINGLE_AZ_2</code> - Latest generation Single
     * AZ file system. Specifies a file system that is configured for single AZ
     * redundancy and supports SSD and HDD storage.</p> </li> </ul> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html">Single-AZ
     * and Multi-AZ File Systems</a>.</p>
     */
    inline WindowsDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(WindowsDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline WindowsFileSystemConfiguration& WithDeploymentType(WindowsDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, use this endpoint when
     * performing administrative tasks on the file system using Amazon FSx Remote
     * PowerShell.</p> <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>
     * deployment types, this is the DNS name of the file system.</p> <p>This endpoint
     * is temporarily unavailable when the file system is undergoing maintenance.</p>
     */
    inline const Aws::String& GetRemoteAdministrationEndpoint() const { return m_remoteAdministrationEndpoint; }
    inline bool RemoteAdministrationEndpointHasBeenSet() const { return m_remoteAdministrationEndpointHasBeenSet; }
    template<typename RemoteAdministrationEndpointT = Aws::String>
    void SetRemoteAdministrationEndpoint(RemoteAdministrationEndpointT&& value) { m_remoteAdministrationEndpointHasBeenSet = true; m_remoteAdministrationEndpoint = std::forward<RemoteAdministrationEndpointT>(value); }
    template<typename RemoteAdministrationEndpointT = Aws::String>
    WindowsFileSystemConfiguration& WithRemoteAdministrationEndpoint(RemoteAdministrationEndpointT&& value) { SetRemoteAdministrationEndpoint(std::forward<RemoteAdministrationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, it specifies the ID of the
     * subnet where the preferred file server is located. Must be one of the two subnet
     * IDs specified in <code>SubnetIds</code> property. Amazon FSx serves traffic from
     * this subnet except in the event of a failover to the secondary file server.</p>
     * <p>For <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code> deployment types,
     * this value is the same as that for <code>SubnetIDs</code>. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html#single-multi-az-resources">Availability
     * and durability: Single-AZ and Multi-AZ file systems</a>.</p>
     */
    inline const Aws::String& GetPreferredSubnetId() const { return m_preferredSubnetId; }
    inline bool PreferredSubnetIdHasBeenSet() const { return m_preferredSubnetIdHasBeenSet; }
    template<typename PreferredSubnetIdT = Aws::String>
    void SetPreferredSubnetId(PreferredSubnetIdT&& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = std::forward<PreferredSubnetIdT>(value); }
    template<typename PreferredSubnetIdT = Aws::String>
    WindowsFileSystemConfiguration& WithPreferredSubnetId(PreferredSubnetIdT&& value) { SetPreferredSubnetId(std::forward<PreferredSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For <code>MULTI_AZ_1</code> deployment types, the IP address of the primary,
     * or preferred, file server.</p> <p>Use this IP address when mounting the file
     * system on Linux SMB clients or Windows SMB clients that are not joined to a
     * Microsoft Active Directory. Applicable for all Windows file system deployment
     * types. This IP address is temporarily unavailable when the file system is
     * undergoing maintenance. For Linux and Windows SMB clients that are joined to an
     * Active Directory, use the file system's DNSName instead. For more information on
     * mapping and mounting file shares, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/accessing-file-shares.html">Accessing
     * File Shares</a>.</p>
     */
    inline const Aws::String& GetPreferredFileServerIp() const { return m_preferredFileServerIp; }
    inline bool PreferredFileServerIpHasBeenSet() const { return m_preferredFileServerIpHasBeenSet; }
    template<typename PreferredFileServerIpT = Aws::String>
    void SetPreferredFileServerIp(PreferredFileServerIpT&& value) { m_preferredFileServerIpHasBeenSet = true; m_preferredFileServerIp = std::forward<PreferredFileServerIpT>(value); }
    template<typename PreferredFileServerIpT = Aws::String>
    WindowsFileSystemConfiguration& WithPreferredFileServerIp(PreferredFileServerIpT&& value) { SetPreferredFileServerIp(std::forward<PreferredFileServerIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput of the Amazon FSx file system, measured in megabytes per
     * second.</p>
     */
    inline int GetThroughputCapacity() const { return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline WindowsFileSystemConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of maintenance operations in progress for this file system.</p>
     */
    inline const Aws::Vector<FileSystemMaintenanceOperation>& GetMaintenanceOperationsInProgress() const { return m_maintenanceOperationsInProgress; }
    inline bool MaintenanceOperationsInProgressHasBeenSet() const { return m_maintenanceOperationsInProgressHasBeenSet; }
    template<typename MaintenanceOperationsInProgressT = Aws::Vector<FileSystemMaintenanceOperation>>
    void SetMaintenanceOperationsInProgress(MaintenanceOperationsInProgressT&& value) { m_maintenanceOperationsInProgressHasBeenSet = true; m_maintenanceOperationsInProgress = std::forward<MaintenanceOperationsInProgressT>(value); }
    template<typename MaintenanceOperationsInProgressT = Aws::Vector<FileSystemMaintenanceOperation>>
    WindowsFileSystemConfiguration& WithMaintenanceOperationsInProgress(MaintenanceOperationsInProgressT&& value) { SetMaintenanceOperationsInProgress(std::forward<MaintenanceOperationsInProgressT>(value)); return *this;}
    inline WindowsFileSystemConfiguration& AddMaintenanceOperationsInProgress(FileSystemMaintenanceOperation value) { m_maintenanceOperationsInProgressHasBeenSet = true; m_maintenanceOperationsInProgress.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    WindowsFileSystemConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const { return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    void SetDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::forward<DailyAutomaticBackupStartTimeT>(value); }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    WindowsFileSystemConfiguration& WithDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { SetDailyAutomaticBackupStartTime(std::forward<DailyAutomaticBackupStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain automatic backups. Setting this to 0 disables
     * automatic backups. You can retain automatic backups for a maximum of 90
     * days.</p>
     */
    inline int GetAutomaticBackupRetentionDays() const { return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline WindowsFileSystemConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag indicating whether tags on the file system should be copied to
     * backups. This value defaults to false. If it's set to true, all tags on the file
     * system are copied to all automatic backups and any user-initiated backups where
     * the user doesn't specify any tags. If this value is true, and you specify one or
     * more tags, only the specified tags are copied to backups. If you specify one or
     * more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value.</p>
     */
    inline bool GetCopyTagsToBackups() const { return m_copyTagsToBackups; }
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }
    inline WindowsFileSystemConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Alias>& GetAliases() const { return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    template<typename AliasesT = Aws::Vector<Alias>>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aws::Vector<Alias>>
    WindowsFileSystemConfiguration& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    template<typename AliasesT = Alias>
    WindowsFileSystemConfiguration& AddAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases.emplace_back(std::forward<AliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
     * log user accesses of files, folders, and file shares on the Amazon FSx for
     * Windows File Server file system.</p>
     */
    inline const WindowsAuditLogConfiguration& GetAuditLogConfiguration() const { return m_auditLogConfiguration; }
    inline bool AuditLogConfigurationHasBeenSet() const { return m_auditLogConfigurationHasBeenSet; }
    template<typename AuditLogConfigurationT = WindowsAuditLogConfiguration>
    void SetAuditLogConfiguration(AuditLogConfigurationT&& value) { m_auditLogConfigurationHasBeenSet = true; m_auditLogConfiguration = std::forward<AuditLogConfigurationT>(value); }
    template<typename AuditLogConfigurationT = WindowsAuditLogConfiguration>
    WindowsFileSystemConfiguration& WithAuditLogConfiguration(AuditLogConfigurationT&& value) { SetAuditLogConfiguration(std::forward<AuditLogConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSD IOPS (input/output operations per second) configuration for an Amazon
     * FSx for Windows file system. By default, Amazon FSx automatically provisions 3
     * IOPS per GiB of storage capacity. You can provision additional IOPS per GiB of
     * storage, up to the maximum limit associated with your chosen throughput
     * capacity.</p>
     */
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const { return m_diskIopsConfiguration; }
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    void SetDiskIopsConfiguration(DiskIopsConfigurationT&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::forward<DiskIopsConfigurationT>(value); }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    WindowsFileSystemConfiguration& WithDiskIopsConfiguration(DiskIopsConfigurationT&& value) { SetDiskIopsConfiguration(std::forward<DiskIopsConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activeDirectoryId;
    bool m_activeDirectoryIdHasBeenSet = false;

    SelfManagedActiveDirectoryAttributes m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet = false;

    WindowsDeploymentType m_deploymentType{WindowsDeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_remoteAdministrationEndpoint;
    bool m_remoteAdministrationEndpointHasBeenSet = false;

    Aws::String m_preferredSubnetId;
    bool m_preferredSubnetIdHasBeenSet = false;

    Aws::String m_preferredFileServerIp;
    bool m_preferredFileServerIpHasBeenSet = false;

    int m_throughputCapacity{0};
    bool m_throughputCapacityHasBeenSet = false;

    Aws::Vector<FileSystemMaintenanceOperation> m_maintenanceOperationsInProgress;
    bool m_maintenanceOperationsInProgressHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    int m_automaticBackupRetentionDays{0};
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    bool m_copyTagsToBackups{false};
    bool m_copyTagsToBackupsHasBeenSet = false;

    Aws::Vector<Alias> m_aliases;
    bool m_aliasesHasBeenSet = false;

    WindowsAuditLogConfiguration m_auditLogConfiguration;
    bool m_auditLogConfigurationHasBeenSet = false;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
