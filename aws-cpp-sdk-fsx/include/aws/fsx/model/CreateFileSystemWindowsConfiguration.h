/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SelfManagedActiveDirectoryConfiguration.h>
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
  class AWS_FSX_API CreateFileSystemWindowsConfiguration
  {
  public:
    CreateFileSystemWindowsConfiguration();
    CreateFileSystemWindowsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CreateFileSystemWindowsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for an existing AWS Managed Microsoft Active Directory (AD) instance
     * that the file system should join when it's created.</p>
     */
    inline const Aws::String& GetActiveDirectoryId() const{ return m_activeDirectoryId; }

    /**
     * <p>The ID for an existing AWS Managed Microsoft Active Directory (AD) instance
     * that the file system should join when it's created.</p>
     */
    inline bool ActiveDirectoryIdHasBeenSet() const { return m_activeDirectoryIdHasBeenSet; }

    /**
     * <p>The ID for an existing AWS Managed Microsoft Active Directory (AD) instance
     * that the file system should join when it's created.</p>
     */
    inline void SetActiveDirectoryId(const Aws::String& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = value; }

    /**
     * <p>The ID for an existing AWS Managed Microsoft Active Directory (AD) instance
     * that the file system should join when it's created.</p>
     */
    inline void SetActiveDirectoryId(Aws::String&& value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId = std::move(value); }

    /**
     * <p>The ID for an existing AWS Managed Microsoft Active Directory (AD) instance
     * that the file system should join when it's created.</p>
     */
    inline void SetActiveDirectoryId(const char* value) { m_activeDirectoryIdHasBeenSet = true; m_activeDirectoryId.assign(value); }

    /**
     * <p>The ID for an existing AWS Managed Microsoft Active Directory (AD) instance
     * that the file system should join when it's created.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithActiveDirectoryId(const Aws::String& value) { SetActiveDirectoryId(value); return *this;}

    /**
     * <p>The ID for an existing AWS Managed Microsoft Active Directory (AD) instance
     * that the file system should join when it's created.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithActiveDirectoryId(Aws::String&& value) { SetActiveDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The ID for an existing AWS Managed Microsoft Active Directory (AD) instance
     * that the file system should join when it's created.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithActiveDirectoryId(const char* value) { SetActiveDirectoryId(value); return *this;}


    
    inline const SelfManagedActiveDirectoryConfiguration& GetSelfManagedActiveDirectoryConfiguration() const{ return m_selfManagedActiveDirectoryConfiguration; }

    
    inline bool SelfManagedActiveDirectoryConfigurationHasBeenSet() const { return m_selfManagedActiveDirectoryConfigurationHasBeenSet; }

    
    inline void SetSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryConfiguration& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = value; }

    
    inline void SetSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfiguration&& value) { m_selfManagedActiveDirectoryConfigurationHasBeenSet = true; m_selfManagedActiveDirectoryConfiguration = std::move(value); }

    
    inline CreateFileSystemWindowsConfiguration& WithSelfManagedActiveDirectoryConfiguration(const SelfManagedActiveDirectoryConfiguration& value) { SetSelfManagedActiveDirectoryConfiguration(value); return *this;}

    
    inline CreateFileSystemWindowsConfiguration& WithSelfManagedActiveDirectoryConfiguration(SelfManagedActiveDirectoryConfiguration&& value) { SetSelfManagedActiveDirectoryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per
     * second, in 2 to the <i>n</i>th increments, between 2^3 (8) and 2^11 (2048).</p>
     */
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }

    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per
     * second, in 2 to the <i>n</i>th increments, between 2^3 (8) and 2^11 (2048).</p>
     */
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }

    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per
     * second, in 2 to the <i>n</i>th increments, between 2^3 (8) and 2^11 (2048).</p>
     */
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }

    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per
     * second, in 2 to the <i>n</i>th increments, between 2^3 (8) and 2^11 (2048).</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}


    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    /**
     * <p>The preferred time to take daily automatic backups, formatted HH:MM in the
     * UTC time zone.</p>
     */
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    /**
     * <p>The preferred time to take daily automatic backups, formatted HH:MM in the
     * UTC time zone.</p>
     */
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    /**
     * <p>The preferred time to take daily automatic backups, formatted HH:MM in the
     * UTC time zone.</p>
     */
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    /**
     * <p>The preferred time to take daily automatic backups, formatted HH:MM in the
     * UTC time zone.</p>
     */
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    /**
     * <p>The preferred time to take daily automatic backups, formatted HH:MM in the
     * UTC time zone.</p>
     */
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    /**
     * <p>The preferred time to take daily automatic backups, formatted HH:MM in the
     * UTC time zone.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    /**
     * <p>The preferred time to take daily automatic backups, formatted HH:MM in the
     * UTC time zone.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred time to take daily automatic backups, formatted HH:MM in the
     * UTC time zone.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    /**
     * <p>The number of days to retain automatic backups. The default is to retain
     * backups for 7 days. Setting this value to 0 disables the creation of automatic
     * backups. The maximum retention period for backups is 35 days.</p>
     */
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    /**
     * <p>The number of days to retain automatic backups. The default is to retain
     * backups for 7 days. Setting this value to 0 disables the creation of automatic
     * backups. The maximum retention period for backups is 35 days.</p>
     */
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    /**
     * <p>The number of days to retain automatic backups. The default is to retain
     * backups for 7 days. Setting this value to 0 disables the creation of automatic
     * backups. The maximum retention period for backups is 35 days.</p>
     */
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    /**
     * <p>The number of days to retain automatic backups. The default is to retain
     * backups for 7 days. Setting this value to 0 disables the creation of automatic
     * backups. The maximum retention period for backups is 35 days.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    /**
     * <p>A boolean flag indicating whether tags for the file system should be copied
     * to backups. This value defaults to false. If it's set to true, all tags for the
     * file system are copied to all automatic and user-initiated backups where the
     * user doesn't specify tags. If this value is true, and you specify one or more
     * tags, only the specified tags are copied to backups.</p>
     */
    inline bool GetCopyTagsToBackups() const{ return m_copyTagsToBackups; }

    /**
     * <p>A boolean flag indicating whether tags for the file system should be copied
     * to backups. This value defaults to false. If it's set to true, all tags for the
     * file system are copied to all automatic and user-initiated backups where the
     * user doesn't specify tags. If this value is true, and you specify one or more
     * tags, only the specified tags are copied to backups.</p>
     */
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }

    /**
     * <p>A boolean flag indicating whether tags for the file system should be copied
     * to backups. This value defaults to false. If it's set to true, all tags for the
     * file system are copied to all automatic and user-initiated backups where the
     * user doesn't specify tags. If this value is true, and you specify one or more
     * tags, only the specified tags are copied to backups.</p>
     */
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }

    /**
     * <p>A boolean flag indicating whether tags for the file system should be copied
     * to backups. This value defaults to false. If it's set to true, all tags for the
     * file system are copied to all automatic and user-initiated backups where the
     * user doesn't specify tags. If this value is true, and you specify one or more
     * tags, only the specified tags are copied to backups.</p>
     */
    inline CreateFileSystemWindowsConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}

  private:

    Aws::String m_activeDirectoryId;
    bool m_activeDirectoryIdHasBeenSet;

    SelfManagedActiveDirectoryConfiguration m_selfManagedActiveDirectoryConfiguration;
    bool m_selfManagedActiveDirectoryConfigurationHasBeenSet;

    int m_throughputCapacity;
    bool m_throughputCapacityHasBeenSet;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet;

    bool m_copyTagsToBackups;
    bool m_copyTagsToBackupsHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
