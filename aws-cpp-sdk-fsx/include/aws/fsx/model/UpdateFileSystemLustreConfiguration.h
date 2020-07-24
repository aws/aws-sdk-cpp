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
     * <p> (Optional) Use this property to configure the AutoImport feature on the file
     * system's linked Amazon S3 data repository. You use AutoImport to update the
     * contents of your FSx for Lustre file system automatically with changes that
     * occur in the linked S3 data repository. <code>AutoImportPolicy</code> can have
     * the following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport
     * is off. Changes in the linked data repository are not reflected on the FSx file
     * system.</p> </li> <li> <p> <code>NEW</code> - AutoImport is on. New files in the
     * linked data repository that do not currently exist in the FSx file system are
     * automatically imported. Updates to existing FSx files are not imported to the
     * FSx file system. Files deleted from the linked data repository are not deleted
     * from the FSx file system.</p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. New files in the linked S3 data repository that do not
     * currently exist in the FSx file system are automatically imported. Changes to
     * existing FSx files in the linked repository are also automatically imported to
     * the FSx file system. Files deleted from the linked data repository are not
     * deleted from the FSx file system. </p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline const AutoImportPolicyType& GetAutoImportPolicy() const{ return m_autoImportPolicy; }

    /**
     * <p> (Optional) Use this property to configure the AutoImport feature on the file
     * system's linked Amazon S3 data repository. You use AutoImport to update the
     * contents of your FSx for Lustre file system automatically with changes that
     * occur in the linked S3 data repository. <code>AutoImportPolicy</code> can have
     * the following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport
     * is off. Changes in the linked data repository are not reflected on the FSx file
     * system.</p> </li> <li> <p> <code>NEW</code> - AutoImport is on. New files in the
     * linked data repository that do not currently exist in the FSx file system are
     * automatically imported. Updates to existing FSx files are not imported to the
     * FSx file system. Files deleted from the linked data repository are not deleted
     * from the FSx file system.</p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. New files in the linked S3 data repository that do not
     * currently exist in the FSx file system are automatically imported. Changes to
     * existing FSx files in the linked repository are also automatically imported to
     * the FSx file system. Files deleted from the linked data repository are not
     * deleted from the FSx file system. </p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline bool AutoImportPolicyHasBeenSet() const { return m_autoImportPolicyHasBeenSet; }

    /**
     * <p> (Optional) Use this property to configure the AutoImport feature on the file
     * system's linked Amazon S3 data repository. You use AutoImport to update the
     * contents of your FSx for Lustre file system automatically with changes that
     * occur in the linked S3 data repository. <code>AutoImportPolicy</code> can have
     * the following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport
     * is off. Changes in the linked data repository are not reflected on the FSx file
     * system.</p> </li> <li> <p> <code>NEW</code> - AutoImport is on. New files in the
     * linked data repository that do not currently exist in the FSx file system are
     * automatically imported. Updates to existing FSx files are not imported to the
     * FSx file system. Files deleted from the linked data repository are not deleted
     * from the FSx file system.</p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. New files in the linked S3 data repository that do not
     * currently exist in the FSx file system are automatically imported. Changes to
     * existing FSx files in the linked repository are also automatically imported to
     * the FSx file system. Files deleted from the linked data repository are not
     * deleted from the FSx file system. </p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline void SetAutoImportPolicy(const AutoImportPolicyType& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = value; }

    /**
     * <p> (Optional) Use this property to configure the AutoImport feature on the file
     * system's linked Amazon S3 data repository. You use AutoImport to update the
     * contents of your FSx for Lustre file system automatically with changes that
     * occur in the linked S3 data repository. <code>AutoImportPolicy</code> can have
     * the following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport
     * is off. Changes in the linked data repository are not reflected on the FSx file
     * system.</p> </li> <li> <p> <code>NEW</code> - AutoImport is on. New files in the
     * linked data repository that do not currently exist in the FSx file system are
     * automatically imported. Updates to existing FSx files are not imported to the
     * FSx file system. Files deleted from the linked data repository are not deleted
     * from the FSx file system.</p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. New files in the linked S3 data repository that do not
     * currently exist in the FSx file system are automatically imported. Changes to
     * existing FSx files in the linked repository are also automatically imported to
     * the FSx file system. Files deleted from the linked data repository are not
     * deleted from the FSx file system. </p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline void SetAutoImportPolicy(AutoImportPolicyType&& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = std::move(value); }

    /**
     * <p> (Optional) Use this property to configure the AutoImport feature on the file
     * system's linked Amazon S3 data repository. You use AutoImport to update the
     * contents of your FSx for Lustre file system automatically with changes that
     * occur in the linked S3 data repository. <code>AutoImportPolicy</code> can have
     * the following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport
     * is off. Changes in the linked data repository are not reflected on the FSx file
     * system.</p> </li> <li> <p> <code>NEW</code> - AutoImport is on. New files in the
     * linked data repository that do not currently exist in the FSx file system are
     * automatically imported. Updates to existing FSx files are not imported to the
     * FSx file system. Files deleted from the linked data repository are not deleted
     * from the FSx file system.</p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. New files in the linked S3 data repository that do not
     * currently exist in the FSx file system are automatically imported. Changes to
     * existing FSx files in the linked repository are also automatically imported to
     * the FSx file system. Files deleted from the linked data repository are not
     * deleted from the FSx file system. </p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithAutoImportPolicy(const AutoImportPolicyType& value) { SetAutoImportPolicy(value); return *this;}

    /**
     * <p> (Optional) Use this property to configure the AutoImport feature on the file
     * system's linked Amazon S3 data repository. You use AutoImport to update the
     * contents of your FSx for Lustre file system automatically with changes that
     * occur in the linked S3 data repository. <code>AutoImportPolicy</code> can have
     * the following values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport
     * is off. Changes in the linked data repository are not reflected on the FSx file
     * system.</p> </li> <li> <p> <code>NEW</code> - AutoImport is on. New files in the
     * linked data repository that do not currently exist in the FSx file system are
     * automatically imported. Updates to existing FSx files are not imported to the
     * FSx file system. Files deleted from the linked data repository are not deleted
     * from the FSx file system.</p> </li> <li> <p> <code>NEW_CHANGED</code> -
     * AutoImport is on. New files in the linked S3 data repository that do not
     * currently exist in the FSx file system are automatically imported. Changes to
     * existing FSx files in the linked repository are also automatically imported to
     * the FSx file system. Files deleted from the linked data repository are not
     * deleted from the FSx file system. </p> </li> </ul> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/autoimport-data-repo.html">Automatically
     * import updates from your S3 bucket</a>.</p>
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
