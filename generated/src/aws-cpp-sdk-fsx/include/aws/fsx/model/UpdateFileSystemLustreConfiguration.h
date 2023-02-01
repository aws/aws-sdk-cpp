/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/AutoImportPolicyType.h>
#include <aws/fsx/model/DataCompressionType.h>
#include <aws/fsx/model/LustreLogCreateConfiguration.h>
#include <aws/fsx/model/LustreRootSquashConfiguration.h>
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
  class UpdateFileSystemLustreConfiguration
  {
  public:
    AWS_FSX_API UpdateFileSystemLustreConfiguration();
    AWS_FSX_API UpdateFileSystemLustreConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateFileSystemLustreConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone. d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone. d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone. d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone. d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone. d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone. d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone. d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>(Optional) The preferred start time to perform weekly maintenance, formatted
     * d:HH:MM in the UTC time zone. d is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
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
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listing up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update the file and directory
     * listing for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>The
     * <code>AutoImportPolicy</code> parameter is not supported for Lustre file systems
     * with the <code>Persistent_2</code> deployment type. Instead, use to update a
     * data repository association on your <code>Persistent_2</code> file system.</p>
     */
    inline const AutoImportPolicyType& GetAutoImportPolicy() const{ return m_autoImportPolicy; }

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listing up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update the file and directory
     * listing for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>The
     * <code>AutoImportPolicy</code> parameter is not supported for Lustre file systems
     * with the <code>Persistent_2</code> deployment type. Instead, use to update a
     * data repository association on your <code>Persistent_2</code> file system.</p>
     */
    inline bool AutoImportPolicyHasBeenSet() const { return m_autoImportPolicyHasBeenSet; }

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listing up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update the file and directory
     * listing for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>The
     * <code>AutoImportPolicy</code> parameter is not supported for Lustre file systems
     * with the <code>Persistent_2</code> deployment type. Instead, use to update a
     * data repository association on your <code>Persistent_2</code> file system.</p>
     */
    inline void SetAutoImportPolicy(const AutoImportPolicyType& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = value; }

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listing up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update the file and directory
     * listing for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>The
     * <code>AutoImportPolicy</code> parameter is not supported for Lustre file systems
     * with the <code>Persistent_2</code> deployment type. Instead, use to update a
     * data repository association on your <code>Persistent_2</code> file system.</p>
     */
    inline void SetAutoImportPolicy(AutoImportPolicyType&& value) { m_autoImportPolicyHasBeenSet = true; m_autoImportPolicy = std::move(value); }

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listing up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update the file and directory
     * listing for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>The
     * <code>AutoImportPolicy</code> parameter is not supported for Lustre file systems
     * with the <code>Persistent_2</code> deployment type. Instead, use to update a
     * data repository association on your <code>Persistent_2</code> file system.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithAutoImportPolicy(const AutoImportPolicyType& value) { SetAutoImportPolicy(value); return *this;}

    /**
     * <p> (Optional) When you create your file system, your existing S3 objects appear
     * as file and directory listings. Use this property to choose how Amazon FSx keeps
     * your file and directory listing up to date as you add or modify objects in your
     * linked S3 bucket. <code>AutoImportPolicy</code> can have the following
     * values:</p> <ul> <li> <p> <code>NONE</code> - (Default) AutoImport is off.
     * Amazon FSx only updates file and directory listings from the linked S3 bucket
     * when the file system is created. FSx does not update the file and directory
     * listing for any new or changed objects after choosing this option.</p> </li>
     * <li> <p> <code>NEW</code> - AutoImport is on. Amazon FSx automatically imports
     * directory listings of any new objects added to the linked S3 bucket that do not
     * currently exist in the FSx file system. </p> </li> <li> <p>
     * <code>NEW_CHANGED</code> - AutoImport is on. Amazon FSx automatically imports
     * file and directory listings of any new objects added to the S3 bucket and any
     * existing objects that are changed in the S3 bucket after you choose this
     * option.</p> </li> <li> <p> <code>NEW_CHANGED_DELETED</code> - AutoImport is on.
     * Amazon FSx automatically imports file and directory listings of any new objects
     * added to the S3 bucket, any existing objects that are changed in the S3 bucket,
     * and any objects that were deleted in the S3 bucket.</p> </li> </ul> <p>The
     * <code>AutoImportPolicy</code> parameter is not supported for Lustre file systems
     * with the <code>Persistent_2</code> deployment type. Instead, use to update a
     * data repository association on your <code>Persistent_2</code> file system.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithAutoImportPolicy(AutoImportPolicyType&& value) { SetAutoImportPolicy(std::move(value)); return *this;}


    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>If you don't use <code>DataCompressionType</code>,
     * the file system retains its current data compression configuration.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline const DataCompressionType& GetDataCompressionType() const{ return m_dataCompressionType; }

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>If you don't use <code>DataCompressionType</code>,
     * the file system retains its current data compression configuration.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>If you don't use <code>DataCompressionType</code>,
     * the file system retains its current data compression configuration.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline void SetDataCompressionType(const DataCompressionType& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>If you don't use <code>DataCompressionType</code>,
     * the file system retains its current data compression configuration.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline void SetDataCompressionType(DataCompressionType&& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = std::move(value); }

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>If you don't use <code>DataCompressionType</code>,
     * the file system retains its current data compression configuration.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithDataCompressionType(const DataCompressionType& value) { SetDataCompressionType(value); return *this;}

    /**
     * <p>Sets the data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>If you don't use <code>DataCompressionType</code>,
     * the file system retains its current data compression configuration.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithDataCompressionType(DataCompressionType&& value) { SetDataCompressionType(std::move(value)); return *this;}


    /**
     * <p>The Lustre logging configuration used when updating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline const LustreLogCreateConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }

    /**
     * <p>The Lustre logging configuration used when updating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }

    /**
     * <p>The Lustre logging configuration used when updating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline void SetLogConfiguration(const LustreLogCreateConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    /**
     * <p>The Lustre logging configuration used when updating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline void SetLogConfiguration(LustreLogCreateConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }

    /**
     * <p>The Lustre logging configuration used when updating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithLogConfiguration(const LustreLogCreateConfiguration& value) { SetLogConfiguration(value); return *this;}

    /**
     * <p>The Lustre logging configuration used when updating an Amazon FSx for Lustre
     * file system. When logging is enabled, Lustre logs error and warning events for
     * data repositories associated with your file system to Amazon CloudWatch
     * Logs.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithLogConfiguration(LustreLogCreateConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Lustre root squash configuration used when updating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline const LustreRootSquashConfiguration& GetRootSquashConfiguration() const{ return m_rootSquashConfiguration; }

    /**
     * <p>The Lustre root squash configuration used when updating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline bool RootSquashConfigurationHasBeenSet() const { return m_rootSquashConfigurationHasBeenSet; }

    /**
     * <p>The Lustre root squash configuration used when updating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline void SetRootSquashConfiguration(const LustreRootSquashConfiguration& value) { m_rootSquashConfigurationHasBeenSet = true; m_rootSquashConfiguration = value; }

    /**
     * <p>The Lustre root squash configuration used when updating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline void SetRootSquashConfiguration(LustreRootSquashConfiguration&& value) { m_rootSquashConfigurationHasBeenSet = true; m_rootSquashConfiguration = std::move(value); }

    /**
     * <p>The Lustre root squash configuration used when updating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithRootSquashConfiguration(const LustreRootSquashConfiguration& value) { SetRootSquashConfiguration(value); return *this;}

    /**
     * <p>The Lustre root squash configuration used when updating an Amazon FSx for
     * Lustre file system. When enabled, root squash restricts root-level access from
     * clients that try to access your file system as a root user.</p>
     */
    inline UpdateFileSystemLustreConfiguration& WithRootSquashConfiguration(LustreRootSquashConfiguration&& value) { SetRootSquashConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    AutoImportPolicyType m_autoImportPolicy;
    bool m_autoImportPolicyHasBeenSet = false;

    DataCompressionType m_dataCompressionType;
    bool m_dataCompressionTypeHasBeenSet = false;

    LustreLogCreateConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    LustreRootSquashConfiguration m_rootSquashConfiguration;
    bool m_rootSquashConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
