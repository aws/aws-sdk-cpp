/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DataRepositoryConfiguration.h>
#include <aws/fsx/model/LustreDeploymentType.h>
#include <aws/fsx/model/DriveCacheType.h>
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
   * <p>The configuration for the Amazon FSx for Lustre file system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LustreFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_FSX_API LustreFileSystemConfiguration
  {
  public:
    LustreFileSystemConfiguration();
    LustreFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LustreFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. d is the weekday number, from 1 through 7, beginning with
     * Monday and ending with Sunday.</p>
     */
    inline LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    
    inline const DataRepositoryConfiguration& GetDataRepositoryConfiguration() const{ return m_dataRepositoryConfiguration; }

    
    inline bool DataRepositoryConfigurationHasBeenSet() const { return m_dataRepositoryConfigurationHasBeenSet; }

    
    inline void SetDataRepositoryConfiguration(const DataRepositoryConfiguration& value) { m_dataRepositoryConfigurationHasBeenSet = true; m_dataRepositoryConfiguration = value; }

    
    inline void SetDataRepositoryConfiguration(DataRepositoryConfiguration&& value) { m_dataRepositoryConfigurationHasBeenSet = true; m_dataRepositoryConfiguration = std::move(value); }

    
    inline LustreFileSystemConfiguration& WithDataRepositoryConfiguration(const DataRepositoryConfiguration& value) { SetDataRepositoryConfiguration(value); return *this;}

    
    inline LustreFileSystemConfiguration& WithDataRepositoryConfiguration(DataRepositoryConfiguration&& value) { SetDataRepositoryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The deployment type of the FSX for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> deployment type is
     * used for longer-term storage and workloads and encryption of data in transit. To
     * learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>. (Default = <code>SCRATCH_1</code>)</p>
     */
    inline const LustreDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>The deployment type of the FSX for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> deployment type is
     * used for longer-term storage and workloads and encryption of data in transit. To
     * learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>. (Default = <code>SCRATCH_1</code>)</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>The deployment type of the FSX for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> deployment type is
     * used for longer-term storage and workloads and encryption of data in transit. To
     * learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>. (Default = <code>SCRATCH_1</code>)</p>
     */
    inline void SetDeploymentType(const LustreDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>The deployment type of the FSX for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> deployment type is
     * used for longer-term storage and workloads and encryption of data in transit. To
     * learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>. (Default = <code>SCRATCH_1</code>)</p>
     */
    inline void SetDeploymentType(LustreDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>The deployment type of the FSX for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> deployment type is
     * used for longer-term storage and workloads and encryption of data in transit. To
     * learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>. (Default = <code>SCRATCH_1</code>)</p>
     */
    inline LustreFileSystemConfiguration& WithDeploymentType(const LustreDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>The deployment type of the FSX for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> deployment type is
     * used for longer-term storage and workloads and encryption of data in transit. To
     * learn more about deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre Deployment Options</a>. (Default = <code>SCRATCH_1</code>)</p>
     */
    inline LustreFileSystemConfiguration& WithDeploymentType(LustreDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p> Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. File system throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). This option is only valid for <code>PERSISTENT_1</code> deployment
     * types. </p> <p>Valid values for SSD storage: 50, 100, 200. Valid values for HDD
     * storage: 12, 40. </p>
     */
    inline int GetPerUnitStorageThroughput() const{ return m_perUnitStorageThroughput; }

    /**
     * <p> Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. File system throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). This option is only valid for <code>PERSISTENT_1</code> deployment
     * types. </p> <p>Valid values for SSD storage: 50, 100, 200. Valid values for HDD
     * storage: 12, 40. </p>
     */
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }

    /**
     * <p> Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. File system throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). This option is only valid for <code>PERSISTENT_1</code> deployment
     * types. </p> <p>Valid values for SSD storage: 50, 100, 200. Valid values for HDD
     * storage: 12, 40. </p>
     */
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }

    /**
     * <p> Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. File system throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). This option is only valid for <code>PERSISTENT_1</code> deployment
     * types. </p> <p>Valid values for SSD storage: 50, 100, 200. Valid values for HDD
     * storage: 12, 40. </p>
     */
    inline LustreFileSystemConfiguration& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}


    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code> and <code>PERSISTENT_1</code>
     * deployment types, this value is a string that is unique within an AWS Region.
     * </p>
     */
    inline const Aws::String& GetMountName() const{ return m_mountName; }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code> and <code>PERSISTENT_1</code>
     * deployment types, this value is a string that is unique within an AWS Region.
     * </p>
     */
    inline bool MountNameHasBeenSet() const { return m_mountNameHasBeenSet; }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code> and <code>PERSISTENT_1</code>
     * deployment types, this value is a string that is unique within an AWS Region.
     * </p>
     */
    inline void SetMountName(const Aws::String& value) { m_mountNameHasBeenSet = true; m_mountName = value; }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code> and <code>PERSISTENT_1</code>
     * deployment types, this value is a string that is unique within an AWS Region.
     * </p>
     */
    inline void SetMountName(Aws::String&& value) { m_mountNameHasBeenSet = true; m_mountName = std::move(value); }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code> and <code>PERSISTENT_1</code>
     * deployment types, this value is a string that is unique within an AWS Region.
     * </p>
     */
    inline void SetMountName(const char* value) { m_mountNameHasBeenSet = true; m_mountName.assign(value); }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code> and <code>PERSISTENT_1</code>
     * deployment types, this value is a string that is unique within an AWS Region.
     * </p>
     */
    inline LustreFileSystemConfiguration& WithMountName(const Aws::String& value) { SetMountName(value); return *this;}

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code> and <code>PERSISTENT_1</code>
     * deployment types, this value is a string that is unique within an AWS Region.
     * </p>
     */
    inline LustreFileSystemConfiguration& WithMountName(Aws::String&& value) { SetMountName(std::move(value)); return *this;}

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code> and <code>PERSISTENT_1</code>
     * deployment types, this value is a string that is unique within an AWS Region.
     * </p>
     */
    inline LustreFileSystemConfiguration& WithMountName(const char* value) { SetMountName(value); return *this;}


    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    
    inline LustreFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    
    inline LustreFileSystemConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    
    inline LustreFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    
    inline LustreFileSystemConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    /**
     * <p>A boolean flag indicating whether tags on the file system should be copied to
     * backups. If it's set to true, all tags on the file system are copied to all
     * automatic backups and any user-initiated backups where the user doesn't specify
     * any tags. If this value is true, and you specify one or more tags, only the
     * specified tags are copied to backups. If you specify one or more tags when
     * creating a user-initiated backup, no tags are copied from the file system,
     * regardless of this value. (Default = false)</p>
     */
    inline bool GetCopyTagsToBackups() const{ return m_copyTagsToBackups; }

    /**
     * <p>A boolean flag indicating whether tags on the file system should be copied to
     * backups. If it's set to true, all tags on the file system are copied to all
     * automatic backups and any user-initiated backups where the user doesn't specify
     * any tags. If this value is true, and you specify one or more tags, only the
     * specified tags are copied to backups. If you specify one or more tags when
     * creating a user-initiated backup, no tags are copied from the file system,
     * regardless of this value. (Default = false)</p>
     */
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }

    /**
     * <p>A boolean flag indicating whether tags on the file system should be copied to
     * backups. If it's set to true, all tags on the file system are copied to all
     * automatic backups and any user-initiated backups where the user doesn't specify
     * any tags. If this value is true, and you specify one or more tags, only the
     * specified tags are copied to backups. If you specify one or more tags when
     * creating a user-initiated backup, no tags are copied from the file system,
     * regardless of this value. (Default = false)</p>
     */
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }

    /**
     * <p>A boolean flag indicating whether tags on the file system should be copied to
     * backups. If it's set to true, all tags on the file system are copied to all
     * automatic backups and any user-initiated backups where the user doesn't specify
     * any tags. If this value is true, and you specify one or more tags, only the
     * specified tags are copied to backups. If you specify one or more tags when
     * creating a user-initiated backup, no tags are copied from the file system,
     * regardless of this value. (Default = false)</p>
     */
    inline LustreFileSystemConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}


    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline const DriveCacheType& GetDriveCacheType() const{ return m_driveCacheType; }

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline bool DriveCacheTypeHasBeenSet() const { return m_driveCacheTypeHasBeenSet; }

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline void SetDriveCacheType(const DriveCacheType& value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = value; }

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline void SetDriveCacheType(DriveCacheType&& value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = std::move(value); }

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline LustreFileSystemConfiguration& WithDriveCacheType(const DriveCacheType& value) { SetDriveCacheType(value); return *this;}

    /**
     * <p>The type of drive cache used by PERSISTENT_1 file systems that are
     * provisioned with HDD storage devices. This parameter is required when storage
     * type is HDD. Set to <code>READ</code>, improve the performance for frequently
     * accessed files and allows 20% of the total storage capacity of the file system
     * to be cached. </p> <p>This parameter is required when <code>StorageType</code>
     * is set to HDD.</p>
     */
    inline LustreFileSystemConfiguration& WithDriveCacheType(DriveCacheType&& value) { SetDriveCacheType(std::move(value)); return *this;}

  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet;

    DataRepositoryConfiguration m_dataRepositoryConfiguration;
    bool m_dataRepositoryConfigurationHasBeenSet;

    LustreDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet;

    int m_perUnitStorageThroughput;
    bool m_perUnitStorageThroughputHasBeenSet;

    Aws::String m_mountName;
    bool m_mountNameHasBeenSet;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet;

    bool m_copyTagsToBackups;
    bool m_copyTagsToBackupsHasBeenSet;

    DriveCacheType m_driveCacheType;
    bool m_driveCacheTypeHasBeenSet;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
