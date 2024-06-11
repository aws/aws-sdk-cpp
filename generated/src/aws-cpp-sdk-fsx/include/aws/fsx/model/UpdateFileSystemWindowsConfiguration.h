/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryConfigurationUpdates.h>
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
   * <p>Updates the configuration for an existing Amazon FSx for Windows File Server
   * file system. Amazon FSx only overwrites existing properties with non-null values
   * provided in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystemWindowsConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateFileSystemWindowsConfiguration
  {
  public:
    AWS_FSX_API UpdateFileSystemWindowsConfiguration();
    AWS_FSX_API UpdateFileSystemWindowsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateFileSystemWindowsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Where d is the weekday number, from 1 through 7, with 1 =
     * Monday and 7 = Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }
    inline UpdateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}
    inline UpdateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}
    inline UpdateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred time to start the daily automatic backup, in the UTC time zone,
     * for example, <code>02:00</code> </p>
     */
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }
    inline UpdateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}
    inline UpdateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}
    inline UpdateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain automatic backups. Setting this property to
     * <code>0</code> disables automatic backups. You can retain automatic backups for
     * a maximum of 90 days. The default is <code>30</code>. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html#automatic-backups">Working
     * with Automatic Daily Backups</a>.</p>
     */
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline UpdateFileSystemWindowsConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the target value for a file system's throughput capacity, in MB/s, that
     * you are updating the file system to. Valid values are 8, 16, 32, 64, 128, 256,
     * 512, 1024, 2048. You cannot make a throughput capacity update request if there
     * is an existing throughput capacity update request in progress. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-throughput-capacity.html">Managing
     * Throughput Capacity</a>.</p>
     */
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline UpdateFileSystemWindowsConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration Amazon FSx uses to join the Windows File Server instance to
     * the self-managed Microsoft AD directory. You cannot make a self-managed
     * Microsoft AD update request if there is an existing self-managed Microsoft AD
     * update request in progress.</p>
     */
    inline const SelfManagedActiveDirectoryConfigurationUpdates& GetSelfManagedActiveDirectoryConfiguration() const{ return m_selfManagedActiveDirectoryConfiguration; }
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }
    inline void SetSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryConfigurationUpdates& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = value; }
    inline void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationUpdates&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::move(value); }
    inline UpdateFileSystemWindowsConfiguration& WithSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryConfigurationUpdates& value) { SetSelfManagedActiveDirectoryConfiguration(value); return *this;}
    inline UpdateFileSystemWindowsConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationUpdates&& value) { SetSelfManagedActiveDirectoryConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
     * log user accesses of files, folders, and file shares on the Amazon FSx for
     * Windows File Server file system..</p>
     */
    inline const WindowsAuditLogCreateConfiguration& GetAuditLogConfiguration() const{ return m_auditLogConfiguration; }
    inline bool AuditLogConfigurationHasBeenSet() const { return m_auditLogConfigurationHasBeenSet; }
    inline void SetAuditLogConfiguration(const WindowsAuditLogCreateConfiguration& value) { m_auditLogConfigurationHasBeenSet = true; m_auditLogConfiguration = value; }
    inline void SetAuditLogConfiguration(WindowsAuditLogCreateConfiguration&& value) { m_auditLogConfigurationHasBeenSet = true; m_auditLogConfiguration = std::move(value); }
    inline UpdateFileSystemWindowsConfiguration& WithAuditLogConfiguration(const WindowsAuditLogCreateConfiguration& value) { SetAuditLogConfiguration(value); return *this;}
    inline UpdateFileSystemWindowsConfiguration& WithAuditLogConfiguration(WindowsAuditLogCreateConfiguration&& value) { SetAuditLogConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSD IOPS (input/output operations per second) configuration for an Amazon
     * FSx for Windows file system. By default, Amazon FSx automatically provisions 3
     * IOPS per GiB of storage capacity. You can provision additional IOPS per GiB of
     * storage, up to the maximum limit associated with your chosen throughput
     * capacity.</p>
     */
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const{ return m_diskIopsConfiguration; }
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }
    inline void SetDiskIopsConfiguration(const DiskIopsConfiguration& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = value; }
    inline void SetDiskIopsConfiguration(DiskIopsConfiguration&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::move(value); }
    inline UpdateFileSystemWindowsConfiguration& WithDiskIopsConfiguration(const DiskIopsConfiguration& value) { SetDiskIopsConfiguration(value); return *this;}
    inline UpdateFileSystemWindowsConfiguration& WithDiskIopsConfiguration(DiskIopsConfiguration&& value) { SetDiskIopsConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    int m_throughputCapacity;
    bool m_throughputCapacityHasBeenSet = false;

    SelfManagedActiveDirectoryConfigurationUpdates m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet = false;

    WindowsAuditLogCreateConfiguration m_auditLogConfiguration;
    bool m_auditLogConfigurationHasBeenSet = false;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
