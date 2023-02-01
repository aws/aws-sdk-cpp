/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryConfigurationUpdates.h>
#include <aws/fsx/model/WindowsAuditLogCreateConfiguration.h>
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


    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Where d is the weekday number, from 1 through 7, with 1 =
     * Monday and 7 = Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Where d is the weekday number, from 1 through 7, with 1 =
     * Monday and 7 = Sunday.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Where d is the weekday number, from 1 through 7, with 1 =
     * Monday and 7 = Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Where d is the weekday number, from 1 through 7, with 1 =
     * Monday and 7 = Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Where d is the weekday number, from 1 through 7, with 1 =
     * Monday and 7 = Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Where d is the weekday number, from 1 through 7, with 1 =
     * Monday and 7 = Sunday.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Where d is the weekday number, from 1 through 7, with 1 =
     * Monday and 7 = Sunday.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Where d is the weekday number, from 1 through 7, with 1 =
     * Monday and 7 = Sunday.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    /**
     * <p>The preferred time to start the daily automatic backup, in the UTC time zone,
     * for example, <code>02:00</code> </p>
     */
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    /**
     * <p>The preferred time to start the daily automatic backup, in the UTC time zone,
     * for example, <code>02:00</code> </p>
     */
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    /**
     * <p>The preferred time to start the daily automatic backup, in the UTC time zone,
     * for example, <code>02:00</code> </p>
     */
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    /**
     * <p>The preferred time to start the daily automatic backup, in the UTC time zone,
     * for example, <code>02:00</code> </p>
     */
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    /**
     * <p>The preferred time to start the daily automatic backup, in the UTC time zone,
     * for example, <code>02:00</code> </p>
     */
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    /**
     * <p>The preferred time to start the daily automatic backup, in the UTC time zone,
     * for example, <code>02:00</code> </p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    /**
     * <p>The preferred time to start the daily automatic backup, in the UTC time zone,
     * for example, <code>02:00</code> </p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred time to start the daily automatic backup, in the UTC time zone,
     * for example, <code>02:00</code> </p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    /**
     * <p>The number of days to retain automatic daily backups. Setting this to zero
     * (0) disables automatic daily backups. You can retain automatic daily backups for
     * a maximum of 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html#automatic-backups">Working
     * with Automatic Daily Backups</a>.</p>
     */
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    /**
     * <p>The number of days to retain automatic daily backups. Setting this to zero
     * (0) disables automatic daily backups. You can retain automatic daily backups for
     * a maximum of 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html#automatic-backups">Working
     * with Automatic Daily Backups</a>.</p>
     */
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    /**
     * <p>The number of days to retain automatic daily backups. Setting this to zero
     * (0) disables automatic daily backups. You can retain automatic daily backups for
     * a maximum of 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html#automatic-backups">Working
     * with Automatic Daily Backups</a>.</p>
     */
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    /**
     * <p>The number of days to retain automatic daily backups. Setting this to zero
     * (0) disables automatic daily backups. You can retain automatic daily backups for
     * a maximum of 90 days. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html#automatic-backups">Working
     * with Automatic Daily Backups</a>.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


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

    /**
     * <p>Sets the target value for a file system's throughput capacity, in MB/s, that
     * you are updating the file system to. Valid values are 8, 16, 32, 64, 128, 256,
     * 512, 1024, 2048. You cannot make a throughput capacity update request if there
     * is an existing throughput capacity update request in progress. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-throughput-capacity.html">Managing
     * Throughput Capacity</a>.</p>
     */
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }

    /**
     * <p>Sets the target value for a file system's throughput capacity, in MB/s, that
     * you are updating the file system to. Valid values are 8, 16, 32, 64, 128, 256,
     * 512, 1024, 2048. You cannot make a throughput capacity update request if there
     * is an existing throughput capacity update request in progress. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-throughput-capacity.html">Managing
     * Throughput Capacity</a>.</p>
     */
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }

    /**
     * <p>Sets the target value for a file system's throughput capacity, in MB/s, that
     * you are updating the file system to. Valid values are 8, 16, 32, 64, 128, 256,
     * 512, 1024, 2048. You cannot make a throughput capacity update request if there
     * is an existing throughput capacity update request in progress. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-throughput-capacity.html">Managing
     * Throughput Capacity</a>.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}


    /**
     * <p>The configuration Amazon FSx uses to join the Windows File Server instance to
     * the self-managed Microsoft AD directory. You cannot make a self-managed
     * Microsoft AD update request if there is an existing self-managed Microsoft AD
     * update request in progress.</p>
     */
    inline const SelfManagedActiveDirectoryConfigurationUpdates& GetSelfManagedActiveDirectoryConfiguration() const{ return m_selfManagedActiveDirectoryConfiguration; }

    /**
     * <p>The configuration Amazon FSx uses to join the Windows File Server instance to
     * the self-managed Microsoft AD directory. You cannot make a self-managed
     * Microsoft AD update request if there is an existing self-managed Microsoft AD
     * update request in progress.</p>
     */
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }

    /**
     * <p>The configuration Amazon FSx uses to join the Windows File Server instance to
     * the self-managed Microsoft AD directory. You cannot make a self-managed
     * Microsoft AD update request if there is an existing self-managed Microsoft AD
     * update request in progress.</p>
     */
    inline void SetSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryConfigurationUpdates& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = value; }

    /**
     * <p>The configuration Amazon FSx uses to join the Windows File Server instance to
     * the self-managed Microsoft AD directory. You cannot make a self-managed
     * Microsoft AD update request if there is an existing self-managed Microsoft AD
     * update request in progress.</p>
     */
    inline void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationUpdates&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::move(value); }

    /**
     * <p>The configuration Amazon FSx uses to join the Windows File Server instance to
     * the self-managed Microsoft AD directory. You cannot make a self-managed
     * Microsoft AD update request if there is an existing self-managed Microsoft AD
     * update request in progress.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryConfigurationUpdates& value) { SetSelfManagedActiveDirectoryConfiguration(value); return *this;}

    /**
     * <p>The configuration Amazon FSx uses to join the Windows File Server instance to
     * the self-managed Microsoft AD directory. You cannot make a self-managed
     * Microsoft AD update request if there is an existing self-managed Microsoft AD
     * update request in progress.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfigurationUpdates&& value) { SetSelfManagedActiveDirectoryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
     * log user accesses of files, folders, and file shares on the Amazon FSx for
     * Windows File Server file system..</p>
     */
    inline const WindowsAuditLogCreateConfiguration& GetAuditLogConfiguration() const{ return m_auditLogConfiguration; }

    /**
     * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
     * log user accesses of files, folders, and file shares on the Amazon FSx for
     * Windows File Server file system..</p>
     */
    inline bool AuditLogConfigurationHasBeenSet() const { return m_auditLogConfigurationHasBeenSet; }

    /**
     * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
     * log user accesses of files, folders, and file shares on the Amazon FSx for
     * Windows File Server file system..</p>
     */
    inline void SetAuditLogConfiguration(const WindowsAuditLogCreateConfiguration& value) { m_auditLogConfigurationHasBeenSet = true; m_auditLogConfiguration = value; }

    /**
     * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
     * log user accesses of files, folders, and file shares on the Amazon FSx for
     * Windows File Server file system..</p>
     */
    inline void SetAuditLogConfiguration(WindowsAuditLogCreateConfiguration&& value) { m_auditLogConfigurationHasBeenSet = true; m_auditLogConfiguration = std::move(value); }

    /**
     * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
     * log user accesses of files, folders, and file shares on the Amazon FSx for
     * Windows File Server file system..</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithAuditLogConfiguration(const WindowsAuditLogCreateConfiguration& value) { SetAuditLogConfiguration(value); return *this;}

    /**
     * <p>The configuration that Amazon FSx for Windows File Server uses to audit and
     * log user accesses of files, folders, and file shares on the Amazon FSx for
     * Windows File Server file system..</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithAuditLogConfiguration(WindowsAuditLogCreateConfiguration&& value) { SetAuditLogConfiguration(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
