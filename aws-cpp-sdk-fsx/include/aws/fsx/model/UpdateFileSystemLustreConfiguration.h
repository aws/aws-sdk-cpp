/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/AutoImportPolicyType.h>
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
   * <p>The configuration object for Amazon FSx for Lustre file systems used in the
   * <code>UpdateFileSystem</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystemLustreConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API UpdateFileSystemLustreConfiguration
  {
  public:
    UpdateFileSystemLustreConfiguration();
    UpdateFileSystemLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    UpdateFileSystemLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    
    inline UpdateFileSystemLustreConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    
    inline UpdateFileSystemLustreConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    
    inline UpdateFileSystemLustreConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    
    inline UpdateFileSystemLustreConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    /**
     * <p>Use this property to turn the Autoimport feature on and off. AutoImport
     * enables your FSx for Lustre file system to automatically update its contents
     * with changes that have been made to its linked Amazon S3 data repository. You
     * can set the policy to have one the following values:</p> <ul> <li> <p>
     * <code>NONE</code> - (Default) Autoimport is turned off. Changes to your S3
     * repository will not be reflected on the FSx file system.</p> </li> <li> <p>
     * <code>NEW</code> - Autoimport is turned on; only new files in the linked S3
     * repository will be imported to the FSx file system. Updates to existing files
     * and deleted files will not be imported to the FSx file system.</p> </li> <li>
     * <p> <code>NEW_CHANGED</code> - Autoimport is turned on; new files and changes to
     * existing files in the linked S3 repository will be imported to the FSx file
     * system. Files deleted in S3 are not deleted in the FSx file system.</p> </li>
     * <li> <p> <code>NEW_CHANGED_DELETED</code> - Autoimport is turned on; new files,
     * changes to existing files, and deleted files in the linked S3 repository will be
     * imported to the FSx file system. </p> </li> </ul>
     */
    inline const AutoImportPolicyType& GetAutoImportPolicy() const{ return m_autoImportPolicy; }

    /**
     * <p>Use this property to turn the Autoimport feature on and off. AutoImport
     * enables your FSx for Lustre file system to automatically update its contents
     * with changes that have been made to its linked Amazon S3 data repository. You
     * can set the policy to have one the following values:</p> <ul> <li> <p>
     * <code>NONE</code> - (Default) Autoimport is turned off. Changes to your S3
     * repository will not be reflected on the FSx file system.</p> </li> <li> <p>
     * <code>NEW</code> - Autoimport is turned on; only new files in the linked S3
     * repository will be imported to the FSx file system. Updates to existing files
     * and deleted files will not be imported to the FSx file system.</p> </li> <li>
     * <p> <code>NEW_CHANGED</code> - Autoimport is turned on; new files and changes to
     * existing files in the linked S3 repository will be imported to the FSx file
     * system. Files deleted in S3 are not deleted in the FSx file system.</p> </li>
     * <li> <p> <code>NEW_CHANGED_DELETED</code> - Autoimport is turned on; new files,
     * changes to existing files, and deleted files in the linked S3 repository will be
     * imported to the FSx file system. </p> </li> </ul>
     */
    inline bool AutoImportPolicyHasBeenSet() const { return m_autoImportPolicyHasBeenSet; }

    /**
     * <p>Use this property to turn the Autoimport feature on and off. AutoImport
     * enables your FSx for Lustre file system to automatically update its contents
     * with changes that have been made to its linked Amazon S3 data repository. You
     * can set the policy to have one the following values:</p> <ul> <li> <p>
     * <code>NONE</code> - (Default) Autoimport is turned off. Changes to your S3
     * repository will not be reflected on the FSx file system.</p> </li> <li> <p>
     * <code>NEW</code> - Autoimport is turned on; only new files in the linked S3
     * repository will be imported to the FSx file system. Updates to existing files
     * and deleted files will not be imported to the FSx file system.</p> </li> <li>
     * <p> <code>NEW_CHANGED</code> - Autoimport is turned on; new files and changes to
     * existing files in the linked S3 repository will be imported to the FSx file
     * system. Files deleted in S3 are not deleted in the FSx file system.</p> </li>
     * <li> <p> <code>NEW_CHANGED_DELETED</code> - Autoimport is turned on; new files,
     * changes to existing files, and deleted files in the linked S3 repository will be
     * imported to the FSx file system. </p> </li> </ul>
     */
    inline void SetAutoImportPolicy(const AutoImportPolicyType& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = value; }

    /**
     * <p>Use this property to turn the Autoimport feature on and off. AutoImport
     * enables your FSx for Lustre file system to automatically update its contents
     * with changes that have been made to its linked Amazon S3 data repository. You
     * can set the policy to have one the following values:</p> <ul> <li> <p>
     * <code>NONE</code> - (Default) Autoimport is turned off. Changes to your S3
     * repository will not be reflected on the FSx file system.</p> </li> <li> <p>
     * <code>NEW</code> - Autoimport is turned on; only new files in the linked S3
     * repository will be imported to the FSx file system. Updates to existing files
     * and deleted files will not be imported to the FSx file system.</p> </li> <li>
     * <p> <code>NEW_CHANGED</code> - Autoimport is turned on; new files and changes to
     * existing files in the linked S3 repository will be imported to the FSx file
     * system. Files deleted in S3 are not deleted in the FSx file system.</p> </li>
     * <li> <p> <code>NEW_CHANGED_DELETED</code> - Autoimport is turned on; new files,
     * changes to existing files, and deleted files in the linked S3 repository will be
     * imported to the FSx file system. </p> </li> </ul>
     */
    inline void SetAutoImportPolicy(AutoImportPolicyType&& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = std::move(value); }

    /**
     * <p>Use this property to turn the Autoimport feature on and off. AutoImport
     * enables your FSx for Lustre file system to automatically update its contents
     * with changes that have been made to its linked Amazon S3 data repository. You
     * can set the policy to have one the following values:</p> <ul> <li> <p>
     * <code>NONE</code> - (Default) Autoimport is turned off. Changes to your S3
     * repository will not be reflected on the FSx file system.</p> </li> <li> <p>
     * <code>NEW</code> - Autoimport is turned on; only new files in the linked S3
     * repository will be imported to the FSx file system. Updates to existing files
     * and deleted files will not be imported to the FSx file system.</p> </li> <li>
     * <p> <code>NEW_CHANGED</code> - Autoimport is turned on; new files and changes to
     * existing files in the linked S3 repository will be imported to the FSx file
     * system. Files deleted in S3 are not deleted in the FSx file system.</p> </li>
     * <li> <p> <code>NEW_CHANGED_DELETED</code> - Autoimport is turned on; new files,
     * changes to existing files, and deleted files in the linked S3 repository will be
     * imported to the FSx file system. </p> </li> </ul>
     */
    inline UpdateFileSystemLustreConfiguration& WithAutoImportPolicy(const AutoImportPolicyType& value) { SetAutoImportPolicy(value); return *this;}

    /**
     * <p>Use this property to turn the Autoimport feature on and off. AutoImport
     * enables your FSx for Lustre file system to automatically update its contents
     * with changes that have been made to its linked Amazon S3 data repository. You
     * can set the policy to have one the following values:</p> <ul> <li> <p>
     * <code>NONE</code> - (Default) Autoimport is turned off. Changes to your S3
     * repository will not be reflected on the FSx file system.</p> </li> <li> <p>
     * <code>NEW</code> - Autoimport is turned on; only new files in the linked S3
     * repository will be imported to the FSx file system. Updates to existing files
     * and deleted files will not be imported to the FSx file system.</p> </li> <li>
     * <p> <code>NEW_CHANGED</code> - Autoimport is turned on; new files and changes to
     * existing files in the linked S3 repository will be imported to the FSx file
     * system. Files deleted in S3 are not deleted in the FSx file system.</p> </li>
     * <li> <p> <code>NEW_CHANGED_DELETED</code> - Autoimport is turned on; new files,
     * changes to existing files, and deleted files in the linked S3 repository will be
     * imported to the FSx file system. </p> </li> </ul>
     */
    inline UpdateFileSystemLustreConfiguration& WithAutoImportPolicy(AutoImportPolicyType&& value) { SetAutoImportPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet;

    AutoImportPolicyType m_autoImportPolicy;
    bool m_autoImportPolicyHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
