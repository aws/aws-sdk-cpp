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
   * <p>The configuration object for the Microsoft Windows file system used in the
   * <code>UpdateFileSystem</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystemWindowsConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API UpdateFileSystemWindowsConfiguration
  {
  public:
    UpdateFileSystemWindowsConfiguration();
    UpdateFileSystemWindowsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    UpdateFileSystemWindowsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred time to perform weekly maintenance, in the UTC time zone.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred time to take daily automatic backups, in the UTC time zone.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    /**
     * <p>The number of days to retain automatic backups. Setting this to 0 disables
     * automatic backups. You can retain automatic backups for a maximum of 35
     * days.</p>
     */
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    /**
     * <p>The number of days to retain automatic backups. Setting this to 0 disables
     * automatic backups. You can retain automatic backups for a maximum of 35
     * days.</p>
     */
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    /**
     * <p>The number of days to retain automatic backups. Setting this to 0 disables
     * automatic backups. You can retain automatic backups for a maximum of 35
     * days.</p>
     */
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    /**
     * <p>The number of days to retain automatic backups. Setting this to 0 disables
     * automatic backups. You can retain automatic backups for a maximum of 35
     * days.</p>
     */
    inline UpdateFileSystemWindowsConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}

  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
