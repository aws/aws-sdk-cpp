/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryConfiguration.h>
#include <aws/fsx/model/WindowsDeploymentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/WindowsAuditLogCreateConfiguration.h>
#include <aws/fsx/model/DiskIopsConfiguration.h>
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
   * <p>The configuration object for the Microsoft Windows file system used in
   * <code>CreateFileSystem</code> and <code>CreateFileSystemFromBackup</code>
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemWindowsConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemWindowsConfiguration
  {
  public:
    AWS_FSX_API CreateFileSystemWindowsConfiguration() = default;
    AWS_FSX_API CreateFileSystemWindowsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateFileSystemWindowsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for an existing Amazon Web Services Managed Microsoft Active Directory
     * (AD) instance that the file system should join when it's created.</p>
     */
    inline const Aws::String& GetActiveDirectoryId() const { return m_activeDirectoryId; }
    inline bool ActiveDirectoryIdHasBeenSet() const { return m_activeDirectoryIdHasBeenSet; }
    template<typename ActiveDirectoryIdT = Aws::String>
    void SetActiveDirectoryId(ActiveDirectoryIdT&& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = std::forward<ActiveDirectoryIdT>(value); }
    template<typename ActiveDirectoryIdT = Aws::String>
    CreateFileSystemWindowsConfiguration& WithActiveDirectoryId(ActiveDirectoryIdT&& value) { SetActiveDirectoryId(std::forward<ActiveDirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SelfManagedActiveDirectoryConfiguration& GetSelfManagedActiveDirectoryConfiguration() const { return m_selfManagedActiveDirectoryConfiguration; }
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryConfiguration>
    void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::forward<SelfManagedActiveDirectoryConfigurationT>(value); }
    template<typename SelfManagedActiveDirectoryConfigurationT = SelfManagedActiveDirectoryConfiguration>
    CreateFileSystemWindowsConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationT&& value) { SetSelfManagedActiveDirectoryConfiguration(std::forward<SelfManagedActiveDirectoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the file system deployment type, valid values are the
     * following:</p> <ul> <li> <p> <code>MULTI_AZ_1</code> - Deploys a high
     * availability file system that is configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability. You can only deploy a Multi-AZ
     * file system in Amazon Web Services Regions that have a minimum of three
     * Availability Zones. Also supports HDD storage type</p> </li> <li> <p>
     * <code>SINGLE_AZ_1</code> - (Default) Choose to deploy a file system that is
     * configured for single AZ redundancy.</p> </li> <li> <p> <code>SINGLE_AZ_2</code>
     * - The latest generation Single AZ file system. Specifies a file system that is
     * configured for single AZ redundancy and supports HDD storage type.</p> </li>
     * </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/high-availability-multiAZ.html">
     * Availability and Durability: Single-AZ and Multi-AZ File Systems</a>.</p>
     */
    inline WindowsDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(WindowsDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline CreateFileSystemWindowsConfiguration& WithDeploymentType(WindowsDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required when <code>DeploymentType</code> is set to <code>MULTI_AZ_1</code>.
     * This specifies the subnet in which you want the preferred file server to be
     * located. For in-Amazon Web Services applications, we recommend that you launch
     * your clients in the same Availability Zone (AZ) as your preferred file server to
     * reduce cross-AZ data transfer costs and minimize latency. </p>
     */
    inline const Aws::String& GetPreferredSubnetId() const { return m_preferredSubnetId; }
    inline bool PreferredSubnetIdHasBeenSet() const { return m_preferredSubnetIdHasBeenSet; }
    template<typename PreferredSubnetIdT = Aws::String>
    void SetPreferredSubnetId(PreferredSubnetIdT&& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = std::forward<PreferredSubnetIdT>(value); }
    template<typename PreferredSubnetIdT = Aws::String>
    CreateFileSystemWindowsConfiguration& WithPreferredSubnetId(PreferredSubnetIdT&& value) { SetPreferredSubnetId(std::forward<PreferredSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the throughput capacity of an Amazon FSx file system, measured in
     * megabytes per second (MB/s), in 2 to the <i>n</i>th increments, between 2^3 (8)
     * and 2^11 (2048).</p>
     */
    inline int GetThroughputCapacity() const { return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline CreateFileSystemWindowsConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone, where d is the weekday number, from 1 through 7, beginning
     * with Monday and ending with Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    CreateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred time to take daily automatic backups, formatted HH:MM in the
     * UTC time zone.</p>
     */
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const { return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    void SetDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::forward<DailyAutomaticBackupStartTimeT>(value); }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    CreateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { SetDailyAutomaticBackupStartTime(std::forward<DailyAutomaticBackupStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain automatic backups. Setting this property to
     * <code>0</code> disables automatic backups. You can retain automatic backups for
     * a maximum of 90 days. The default is <code>30</code>.</p>
     */
    inline int GetAutomaticBackupRetentionDays() const { return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline CreateFileSystemWindowsConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag indicating whether tags for the file system should be copied
     * to backups. This value defaults to false. If it's set to true, all tags for the
     * file system are copied to all automatic and user-initiated backups where the
     * user doesn't specify tags. If this value is true, and you specify one or more
     * tags, only the specified tags are copied to backups. If you specify one or more
     * tags when creating a user-initiated backup, no tags are copied from the file
     * system, regardless of this value.</p>
     */
    inline bool GetCopyTagsToBackups() const { return m_copyTagsToBackups; }
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }
    inline CreateFileSystemWindowsConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of one or more DNS alias names that you want to associate with the
     * Amazon FSx file system. Aliases allow you to use existing DNS names to access
     * the data in your Amazon FSx file system. You can associate up to 50 aliases with
     * a file system at any time. You can associate additional DNS aliases after you
     * create the file system using the AssociateFileSystemAliases operation. You can
     * remove DNS aliases from the file system after it is created using the
     * DisassociateFileSystemAliases operation. You only need to specify the alias name
     * in the request payload.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working
     * with DNS Aliases</a> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/walkthrough05-file-system-custom-CNAME.html">Walkthrough
     * 5: Using DNS aliases to access your file system</a>, including additional steps
     * you must take to be able to access your file system using a DNS alias.</p> <p>An
     * alias name has to meet the following requirements:</p> <ul> <li> <p>Formatted as
     * a fully-qualified domain name (FQDN), <code>hostname.domain</code>, for example,
     * <code>accounting.example.com</code>.</p> </li> <li> <p>Can contain alphanumeric
     * characters, the underscore (_), and the hyphen (-).</p> </li> <li> <p>Cannot
     * start or end with a hyphen.</p> </li> <li> <p>Can start with a numeric.</p>
     * </li> </ul> <p>For DNS alias names, Amazon FSx stores alphabetic characters as
     * lowercase letters (a-z), regardless of how you specify them: as uppercase
     * letters, lowercase letters, or the corresponding letters in escape codes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliases() const { return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    template<typename AliasesT = Aws::Vector<Aws::String>>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aws::Vector<Aws::String>>
    CreateFileSystemWindowsConfiguration& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    template<typename AliasesT = Aws::String>
    CreateFileSystemWindowsConfiguration& AddAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases.emplace_back(std::forward<AliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
     * log user accesses of files, folders, and file shares on the Amazon FSx for
     * Windows File Server file system.</p>
     */
    inline const WindowsAuditLogCreateConfiguration& GetAuditLogConfiguration() const { return m_auditLogConfiguration; }
    inline bool AuditLogConfigurationHasBeenSet() const { return m_auditLogConfigurationHasBeenSet; }
    template<typename AuditLogConfigurationT = WindowsAuditLogCreateConfiguration>
    void SetAuditLogConfiguration(AuditLogConfigurationT&& value) { m_auditLogConfigurationHasBeenSet = true; m_auditLogConfiguration = std::forward<AuditLogConfigurationT>(value); }
    template<typename AuditLogConfigurationT = WindowsAuditLogCreateConfiguration>
    CreateFileSystemWindowsConfiguration& WithAuditLogConfiguration(AuditLogConfigurationT&& value) { SetAuditLogConfiguration(std::forward<AuditLogConfigurationT>(value)); return *this;}
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
    CreateFileSystemWindowsConfiguration& WithDiskIopsConfiguration(DiskIopsConfigurationT&& value) { SetDiskIopsConfiguration(std::forward<DiskIopsConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_activeDirectoryId;
    bool m_activeDirectoryIdHasBeenSet = false;

    SelfManagedActiveDirectoryConfiguration m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet = false;

    WindowsDeploymentType m_deploymentType{WindowsDeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_preferredSubnetId;
    bool m_preferredSubnetIdHasBeenSet = false;

    int m_throughputCapacity{0};
    bool m_throughputCapacityHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    int m_automaticBackupRetentionDays{0};
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    bool m_copyTagsToBackups{false};
    bool m_copyTagsToBackupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_aliases;
    bool m_aliasesHasBeenSet = false;

    WindowsAuditLogCreateConfiguration m_auditLogConfiguration;
    bool m_auditLogConfigurationHasBeenSet = false;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
