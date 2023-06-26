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
#include <aws/fsx/model/DataCompressionType.h>
#include <aws/fsx/model/LustreLogConfiguration.h>
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
   * <p>The configuration for the Amazon FSx for Lustre file system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LustreFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class LustreFileSystemConfiguration
  {
  public:
    AWS_FSX_API LustreFileSystemConfiguration();
    AWS_FSX_API LustreFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API LustreFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Here, <code>d</code> is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Here, <code>d</code> is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Here, <code>d</code> is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Here, <code>d</code> is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Here, <code>d</code> is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Here, <code>d</code> is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Here, <code>d</code> is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    /**
     * <p>The preferred start time to perform weekly maintenance, formatted d:HH:MM in
     * the UTC time zone. Here, <code>d</code> is the weekday number, from 1 through 7,
     * beginning with Monday and ending with Sunday.</p>
     */
    inline LustreFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    
    inline const DataRepositoryConfiguration& GetDataRepositoryConfiguration() const{ return m_dataRepositoryConfiguration; }

    
    inline bool DataRepositoryConfigurationHasBeenSet() const { return m_dataRepositoryConfigurationHasBeenSet; }

    
    inline void SetDataRepositoryConfiguration(const DataRepositoryConfiguration& value) { m_dataRepositoryConfigurationHasBeenSet = true; m_dataRepositoryConfiguration = value; }

    
    inline void SetDataRepositoryConfiguration(DataRepositoryConfiguration&& value) { m_dataRepositoryConfigurationHasBeenSet = true; m_dataRepositoryConfiguration = std::move(value); }

    
    inline LustreFileSystemConfiguration& WithDataRepositoryConfiguration(const DataRepositoryConfiguration& value) { SetDataRepositoryConfiguration(value); return *this;}

    
    inline LustreFileSystemConfiguration& WithDataRepositoryConfiguration(DataRepositoryConfiguration&& value) { SetDataRepositoryConfiguration(std::move(value)); return *this;}


    /**
     * <p>The deployment type of the FSx for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment type is used for longer-term storage and
     * workloads and encryption of data in transit. <code>PERSISTENT_2</code> is built
     * on Lustre v2.12 and offers higher <code>PerUnitStorageThroughput</code> (up to
     * 1000 MB/s/TiB) along with a lower minimum storage capacity requirement (600
     * GiB). To learn more about FSx for Lustre deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre deployment options</a>.</p> <p>The default is
     * <code>SCRATCH_1</code>.</p>
     */
    inline const LustreDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>The deployment type of the FSx for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment type is used for longer-term storage and
     * workloads and encryption of data in transit. <code>PERSISTENT_2</code> is built
     * on Lustre v2.12 and offers higher <code>PerUnitStorageThroughput</code> (up to
     * 1000 MB/s/TiB) along with a lower minimum storage capacity requirement (600
     * GiB). To learn more about FSx for Lustre deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre deployment options</a>.</p> <p>The default is
     * <code>SCRATCH_1</code>.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>The deployment type of the FSx for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment type is used for longer-term storage and
     * workloads and encryption of data in transit. <code>PERSISTENT_2</code> is built
     * on Lustre v2.12 and offers higher <code>PerUnitStorageThroughput</code> (up to
     * 1000 MB/s/TiB) along with a lower minimum storage capacity requirement (600
     * GiB). To learn more about FSx for Lustre deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre deployment options</a>.</p> <p>The default is
     * <code>SCRATCH_1</code>.</p>
     */
    inline void SetDeploymentType(const LustreDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>The deployment type of the FSx for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment type is used for longer-term storage and
     * workloads and encryption of data in transit. <code>PERSISTENT_2</code> is built
     * on Lustre v2.12 and offers higher <code>PerUnitStorageThroughput</code> (up to
     * 1000 MB/s/TiB) along with a lower minimum storage capacity requirement (600
     * GiB). To learn more about FSx for Lustre deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre deployment options</a>.</p> <p>The default is
     * <code>SCRATCH_1</code>.</p>
     */
    inline void SetDeploymentType(LustreDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>The deployment type of the FSx for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment type is used for longer-term storage and
     * workloads and encryption of data in transit. <code>PERSISTENT_2</code> is built
     * on Lustre v2.12 and offers higher <code>PerUnitStorageThroughput</code> (up to
     * 1000 MB/s/TiB) along with a lower minimum storage capacity requirement (600
     * GiB). To learn more about FSx for Lustre deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre deployment options</a>.</p> <p>The default is
     * <code>SCRATCH_1</code>.</p>
     */
    inline LustreFileSystemConfiguration& WithDeploymentType(const LustreDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>The deployment type of the FSx for Lustre file system. <i>Scratch deployment
     * type</i> is designed for temporary storage and shorter-term processing of
     * data.</p> <p> <code>SCRATCH_1</code> and <code>SCRATCH_2</code> deployment types
     * are best suited for when you need temporary storage and shorter-term processing
     * of data. The <code>SCRATCH_2</code> deployment type provides in-transit
     * encryption of data and higher burst throughput capacity than
     * <code>SCRATCH_1</code>.</p> <p>The <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment type is used for longer-term storage and
     * workloads and encryption of data in transit. <code>PERSISTENT_2</code> is built
     * on Lustre v2.12 and offers higher <code>PerUnitStorageThroughput</code> (up to
     * 1000 MB/s/TiB) along with a lower minimum storage capacity requirement (600
     * GiB). To learn more about FSx for Lustre deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/lustre-deployment-types.html">
     * FSx for Lustre deployment options</a>.</p> <p>The default is
     * <code>SCRATCH_1</code>.</p>
     */
    inline LustreFileSystemConfiguration& WithDeploymentType(LustreDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. File system throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). This option is only valid for <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment types. </p> <p>Valid values:</p> <ul> <li>
     * <p>For <code>PERSISTENT_1</code> SSD storage: 50, 100, 200.</p> </li> <li>
     * <p>For <code>PERSISTENT_1</code> HDD storage: 12, 40.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000.</p> </li> </ul>
     */
    inline int GetPerUnitStorageThroughput() const{ return m_perUnitStorageThroughput; }

    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. File system throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). This option is only valid for <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment types. </p> <p>Valid values:</p> <ul> <li>
     * <p>For <code>PERSISTENT_1</code> SSD storage: 50, 100, 200.</p> </li> <li>
     * <p>For <code>PERSISTENT_1</code> HDD storage: 12, 40.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000.</p> </li> </ul>
     */
    inline bool PerUnitStorageThroughputHasBeenSet() const { return m_perUnitStorageThroughputHasBeenSet; }

    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. File system throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). This option is only valid for <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment types. </p> <p>Valid values:</p> <ul> <li>
     * <p>For <code>PERSISTENT_1</code> SSD storage: 50, 100, 200.</p> </li> <li>
     * <p>For <code>PERSISTENT_1</code> HDD storage: 12, 40.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000.</p> </li> </ul>
     */
    inline void SetPerUnitStorageThroughput(int value) { m_perUnitStorageThroughputHasBeenSet = true; m_perUnitStorageThroughput = value; }

    /**
     * <p>Per unit storage throughput represents the megabytes per second of read or
     * write throughput per 1 tebibyte of storage provisioned. File system throughput
     * capacity is equal to Storage capacity (TiB) * PerUnitStorageThroughput
     * (MB/s/TiB). This option is only valid for <code>PERSISTENT_1</code> and
     * <code>PERSISTENT_2</code> deployment types. </p> <p>Valid values:</p> <ul> <li>
     * <p>For <code>PERSISTENT_1</code> SSD storage: 50, 100, 200.</p> </li> <li>
     * <p>For <code>PERSISTENT_1</code> HDD storage: 12, 40.</p> </li> <li> <p>For
     * <code>PERSISTENT_2</code> SSD storage: 125, 250, 500, 1000.</p> </li> </ul>
     */
    inline LustreFileSystemConfiguration& WithPerUnitStorageThroughput(int value) { SetPerUnitStorageThroughput(value); return *this;}


    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> deployment types, this value is a string that is
     * unique within an Amazon Web Services Region. </p>
     */
    inline const Aws::String& GetMountName() const{ return m_mountName; }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> deployment types, this value is a string that is
     * unique within an Amazon Web Services Region. </p>
     */
    inline bool MountNameHasBeenSet() const { return m_mountNameHasBeenSet; }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> deployment types, this value is a string that is
     * unique within an Amazon Web Services Region. </p>
     */
    inline void SetMountName(const Aws::String& value) { m_mountNameHasBeenSet = true; m_mountName = value; }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> deployment types, this value is a string that is
     * unique within an Amazon Web Services Region. </p>
     */
    inline void SetMountName(Aws::String&& value) { m_mountNameHasBeenSet = true; m_mountName = std::move(value); }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> deployment types, this value is a string that is
     * unique within an Amazon Web Services Region. </p>
     */
    inline void SetMountName(const char* value) { m_mountNameHasBeenSet = true; m_mountName.assign(value); }

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> deployment types, this value is a string that is
     * unique within an Amazon Web Services Region. </p>
     */
    inline LustreFileSystemConfiguration& WithMountName(const Aws::String& value) { SetMountName(value); return *this;}

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> deployment types, this value is a string that is
     * unique within an Amazon Web Services Region. </p>
     */
    inline LustreFileSystemConfiguration& WithMountName(Aws::String&& value) { SetMountName(std::move(value)); return *this;}

    /**
     * <p>You use the <code>MountName</code> value when mounting the file system.</p>
     * <p>For the <code>SCRATCH_1</code> deployment type, this value is always
     * "<code>fsx</code>". For <code>SCRATCH_2</code>, <code>PERSISTENT_1</code>, and
     * <code>PERSISTENT_2</code> deployment types, this value is a string that is
     * unique within an Amazon Web Services Region. </p>
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
     * <p>A boolean flag indicating whether tags on the file system are copied to
     * backups. If it's set to true, all tags on the file system are copied to all
     * automatic backups and any user-initiated backups where the user doesn't specify
     * any tags. If this value is true, and you specify one or more tags, only the
     * specified tags are copied to backups. If you specify one or more tags when
     * creating a user-initiated backup, no tags are copied from the file system,
     * regardless of this value. (Default = false)</p>
     */
    inline bool GetCopyTagsToBackups() const{ return m_copyTagsToBackups; }

    /**
     * <p>A boolean flag indicating whether tags on the file system are copied to
     * backups. If it's set to true, all tags on the file system are copied to all
     * automatic backups and any user-initiated backups where the user doesn't specify
     * any tags. If this value is true, and you specify one or more tags, only the
     * specified tags are copied to backups. If you specify one or more tags when
     * creating a user-initiated backup, no tags are copied from the file system,
     * regardless of this value. (Default = false)</p>
     */
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }

    /**
     * <p>A boolean flag indicating whether tags on the file system are copied to
     * backups. If it's set to true, all tags on the file system are copied to all
     * automatic backups and any user-initiated backups where the user doesn't specify
     * any tags. If this value is true, and you specify one or more tags, only the
     * specified tags are copied to backups. If you specify one or more tags when
     * creating a user-initiated backup, no tags are copied from the file system,
     * regardless of this value. (Default = false)</p>
     */
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }

    /**
     * <p>A boolean flag indicating whether tags on the file system are copied to
     * backups. If it's set to true, all tags on the file system are copied to all
     * automatic backups and any user-initiated backups where the user doesn't specify
     * any tags. If this value is true, and you specify one or more tags, only the
     * specified tags are copied to backups. If you specify one or more tags when
     * creating a user-initiated backup, no tags are copied from the file system,
     * regardless of this value. (Default = false)</p>
     */
    inline LustreFileSystemConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}


    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * <code>StorageType</code> is HDD. When set to <code>READ</code> the file system
     * has an SSD storage cache that is sized to 20% of the file system's storage
     * capacity. This improves the performance for frequently accessed files by caching
     * up to 20% of the total storage capacity.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to HDD.</p>
     */
    inline const DriveCacheType& GetDriveCacheType() const{ return m_driveCacheType; }

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * <code>StorageType</code> is HDD. When set to <code>READ</code> the file system
     * has an SSD storage cache that is sized to 20% of the file system's storage
     * capacity. This improves the performance for frequently accessed files by caching
     * up to 20% of the total storage capacity.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to HDD.</p>
     */
    inline bool DriveCacheTypeHasBeenSet() const { return m_driveCacheTypeHasBeenSet; }

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * <code>StorageType</code> is HDD. When set to <code>READ</code> the file system
     * has an SSD storage cache that is sized to 20% of the file system's storage
     * capacity. This improves the performance for frequently accessed files by caching
     * up to 20% of the total storage capacity.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to HDD.</p>
     */
    inline void SetDriveCacheType(const DriveCacheType& value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = value; }

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * <code>StorageType</code> is HDD. When set to <code>READ</code> the file system
     * has an SSD storage cache that is sized to 20% of the file system's storage
     * capacity. This improves the performance for frequently accessed files by caching
     * up to 20% of the total storage capacity.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to HDD.</p>
     */
    inline void SetDriveCacheType(DriveCacheType&& value) { m_driveCacheTypeHasBeenSet = true; m_driveCacheType = std::move(value); }

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * <code>StorageType</code> is HDD. When set to <code>READ</code> the file system
     * has an SSD storage cache that is sized to 20% of the file system's storage
     * capacity. This improves the performance for frequently accessed files by caching
     * up to 20% of the total storage capacity.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to HDD.</p>
     */
    inline LustreFileSystemConfiguration& WithDriveCacheType(const DriveCacheType& value) { SetDriveCacheType(value); return *this;}

    /**
     * <p>The type of drive cache used by <code>PERSISTENT_1</code> file systems that
     * are provisioned with HDD storage devices. This parameter is required when
     * <code>StorageType</code> is HDD. When set to <code>READ</code> the file system
     * has an SSD storage cache that is sized to 20% of the file system's storage
     * capacity. This improves the performance for frequently accessed files by caching
     * up to 20% of the total storage capacity.</p> <p>This parameter is required when
     * <code>StorageType</code> is set to HDD.</p>
     */
    inline LustreFileSystemConfiguration& WithDriveCacheType(DriveCacheType&& value) { SetDriveCacheType(std::move(value)); return *this;}


    /**
     * <p>The data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline const DataCompressionType& GetDataCompressionType() const{ return m_dataCompressionType; }

    /**
     * <p>The data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline bool DataCompressionTypeHasBeenSet() const { return m_dataCompressionTypeHasBeenSet; }

    /**
     * <p>The data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline void SetDataCompressionType(const DataCompressionType& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = value; }

    /**
     * <p>The data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline void SetDataCompressionType(DataCompressionType&& value) { m_dataCompressionTypeHasBeenSet = true; m_dataCompressionType = std::move(value); }

    /**
     * <p>The data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline LustreFileSystemConfiguration& WithDataCompressionType(const DataCompressionType& value) { SetDataCompressionType(value); return *this;}

    /**
     * <p>The data compression configuration for the file system.
     * <code>DataCompressionType</code> can have the following values:</p> <ul> <li>
     * <p> <code>NONE</code> - Data compression is turned off for the file system.</p>
     * </li> <li> <p> <code>LZ4</code> - Data compression is turned on with the LZ4
     * algorithm.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-compression.html">Lustre
     * data compression</a>.</p>
     */
    inline LustreFileSystemConfiguration& WithDataCompressionType(DataCompressionType&& value) { SetDataCompressionType(std::move(value)); return *this;}


    /**
     * <p>The Lustre logging configuration. Lustre logging writes the enabled log
     * events for your file system to Amazon CloudWatch Logs.</p>
     */
    inline const LustreLogConfiguration& GetLogConfiguration() const{ return m_logConfiguration; }

    /**
     * <p>The Lustre logging configuration. Lustre logging writes the enabled log
     * events for your file system to Amazon CloudWatch Logs.</p>
     */
    inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }

    /**
     * <p>The Lustre logging configuration. Lustre logging writes the enabled log
     * events for your file system to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogConfiguration(const LustreLogConfiguration& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = value; }

    /**
     * <p>The Lustre logging configuration. Lustre logging writes the enabled log
     * events for your file system to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogConfiguration(LustreLogConfiguration&& value) { m_logConfigurationHasBeenSet = true; m_logConfiguration = std::move(value); }

    /**
     * <p>The Lustre logging configuration. Lustre logging writes the enabled log
     * events for your file system to Amazon CloudWatch Logs.</p>
     */
    inline LustreFileSystemConfiguration& WithLogConfiguration(const LustreLogConfiguration& value) { SetLogConfiguration(value); return *this;}

    /**
     * <p>The Lustre logging configuration. Lustre logging writes the enabled log
     * events for your file system to Amazon CloudWatch Logs.</p>
     */
    inline LustreFileSystemConfiguration& WithLogConfiguration(LustreLogConfiguration&& value) { SetLogConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Lustre root squash configuration for an Amazon FSx for Lustre file
     * system. When enabled, root squash restricts root-level access from clients that
     * try to access your file system as a root user.</p>
     */
    inline const LustreRootSquashConfiguration& GetRootSquashConfiguration() const{ return m_rootSquashConfiguration; }

    /**
     * <p>The Lustre root squash configuration for an Amazon FSx for Lustre file
     * system. When enabled, root squash restricts root-level access from clients that
     * try to access your file system as a root user.</p>
     */
    inline bool RootSquashConfigurationHasBeenSet() const { return m_rootSquashConfigurationHasBeenSet; }

    /**
     * <p>The Lustre root squash configuration for an Amazon FSx for Lustre file
     * system. When enabled, root squash restricts root-level access from clients that
     * try to access your file system as a root user.</p>
     */
    inline void SetRootSquashConfiguration(const LustreRootSquashConfiguration& value) { m_rootSquashConfigurationHasBeenSet = true; m_rootSquashConfiguration = value; }

    /**
     * <p>The Lustre root squash configuration for an Amazon FSx for Lustre file
     * system. When enabled, root squash restricts root-level access from clients that
     * try to access your file system as a root user.</p>
     */
    inline void SetRootSquashConfiguration(LustreRootSquashConfiguration&& value) { m_rootSquashConfigurationHasBeenSet = true; m_rootSquashConfiguration = std::move(value); }

    /**
     * <p>The Lustre root squash configuration for an Amazon FSx for Lustre file
     * system. When enabled, root squash restricts root-level access from clients that
     * try to access your file system as a root user.</p>
     */
    inline LustreFileSystemConfiguration& WithRootSquashConfiguration(const LustreRootSquashConfiguration& value) { SetRootSquashConfiguration(value); return *this;}

    /**
     * <p>The Lustre root squash configuration for an Amazon FSx for Lustre file
     * system. When enabled, root squash restricts root-level access from clients that
     * try to access your file system as a root user.</p>
     */
    inline LustreFileSystemConfiguration& WithRootSquashConfiguration(LustreRootSquashConfiguration&& value) { SetRootSquashConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    DataRepositoryConfiguration m_dataRepositoryConfiguration;
    bool m_dataRepositoryConfigurationHasBeenSet = false;

    LustreDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    int m_perUnitStorageThroughput;
    bool m_perUnitStorageThroughputHasBeenSet = false;

    Aws::String m_mountName;
    bool m_mountNameHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    bool m_copyTagsToBackups;
    bool m_copyTagsToBackupsHasBeenSet = false;

    DriveCacheType m_driveCacheType;
    bool m_driveCacheTypeHasBeenSet = false;

    DataCompressionType m_dataCompressionType;
    bool m_dataCompressionTypeHasBeenSet = false;

    LustreLogConfiguration m_logConfiguration;
    bool m_logConfigurationHasBeenSet = false;

    LustreRootSquashConfiguration m_rootSquashConfiguration;
    bool m_rootSquashConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
