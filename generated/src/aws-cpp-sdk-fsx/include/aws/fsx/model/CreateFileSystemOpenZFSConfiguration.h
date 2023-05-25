/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OpenZFSDeploymentType.h>
#include <aws/fsx/model/DiskIopsConfiguration.h>
#include <aws/fsx/model/OpenZFSCreateRootVolumeConfiguration.h>
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
   * <p>The Amazon FSx for OpenZFS configuration properties for the file system that
   * you are creating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemOpenZFSConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemOpenZFSConfiguration
  {
  public:
    AWS_FSX_API CreateFileSystemOpenZFSConfiguration();
    AWS_FSX_API CreateFileSystemOpenZFSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateFileSystemOpenZFSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    
    inline CreateFileSystemOpenZFSConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    /**
     * <p>A Boolean value indicating whether tags for the file system should be copied
     * to backups. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the file system are copied to all automatic and
     * user-initiated backups where the user doesn't specify tags. If this value is
     * <code>true</code>, and you specify one or more tags, only the specified tags are
     * copied to backups. If you specify one or more tags when creating a
     * user-initiated backup, no tags are copied from the file system, regardless of
     * this value.</p>
     */
    inline bool GetCopyTagsToBackups() const{ return m_copyTagsToBackups; }

    /**
     * <p>A Boolean value indicating whether tags for the file system should be copied
     * to backups. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the file system are copied to all automatic and
     * user-initiated backups where the user doesn't specify tags. If this value is
     * <code>true</code>, and you specify one or more tags, only the specified tags are
     * copied to backups. If you specify one or more tags when creating a
     * user-initiated backup, no tags are copied from the file system, regardless of
     * this value.</p>
     */
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether tags for the file system should be copied
     * to backups. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the file system are copied to all automatic and
     * user-initiated backups where the user doesn't specify tags. If this value is
     * <code>true</code>, and you specify one or more tags, only the specified tags are
     * copied to backups. If you specify one or more tags when creating a
     * user-initiated backup, no tags are copied from the file system, regardless of
     * this value.</p>
     */
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }

    /**
     * <p>A Boolean value indicating whether tags for the file system should be copied
     * to backups. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the file system are copied to all automatic and
     * user-initiated backups where the user doesn't specify tags. If this value is
     * <code>true</code>, and you specify one or more tags, only the specified tags are
     * copied to backups. If you specify one or more tags when creating a
     * user-initiated backup, no tags are copied from the file system, regardless of
     * this value.</p>
     */
    inline CreateFileSystemOpenZFSConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}


    /**
     * <p>A Boolean value indicating whether tags for the file system should be copied
     * to volumes. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the file system are copied to volumes where the
     * user doesn't specify tags. If this value is <code>true</code>, and you specify
     * one or more tags, only the specified tags are copied to volumes. If you specify
     * one or more tags when creating the volume, no tags are copied from the file
     * system, regardless of this value.</p>
     */
    inline bool GetCopyTagsToVolumes() const{ return m_copyTagsToVolumes; }

    /**
     * <p>A Boolean value indicating whether tags for the file system should be copied
     * to volumes. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the file system are copied to volumes where the
     * user doesn't specify tags. If this value is <code>true</code>, and you specify
     * one or more tags, only the specified tags are copied to volumes. If you specify
     * one or more tags when creating the volume, no tags are copied from the file
     * system, regardless of this value.</p>
     */
    inline bool CopyTagsToVolumesHasBeenSet() const { return m_copyTagsToVolumesHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether tags for the file system should be copied
     * to volumes. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the file system are copied to volumes where the
     * user doesn't specify tags. If this value is <code>true</code>, and you specify
     * one or more tags, only the specified tags are copied to volumes. If you specify
     * one or more tags when creating the volume, no tags are copied from the file
     * system, regardless of this value.</p>
     */
    inline void SetCopyTagsToVolumes(bool value) { m_copyTagsToVolumesHasBeenSet = true; m_copyTagsToVolumes = value; }

    /**
     * <p>A Boolean value indicating whether tags for the file system should be copied
     * to volumes. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the file system are copied to volumes where the
     * user doesn't specify tags. If this value is <code>true</code>, and you specify
     * one or more tags, only the specified tags are copied to volumes. If you specify
     * one or more tags when creating the volume, no tags are copied from the file
     * system, regardless of this value.</p>
     */
    inline CreateFileSystemOpenZFSConfiguration& WithCopyTagsToVolumes(bool value) { SetCopyTagsToVolumes(value); return *this;}


    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    
    inline CreateFileSystemOpenZFSConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    
    inline CreateFileSystemOpenZFSConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    
    inline CreateFileSystemOpenZFSConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    /**
     * <p>Specifies the file system deployment type. Single AZ deployment types are
     * configured for redundancy within a single Availability Zone in an Amazon Web
     * Services Region . Valid values are the following:</p> <ul> <li> <p>
     * <code>SINGLE_AZ_1</code>- (Default) Creates file systems with throughput
     * capacities of 64 - 4,096 MB/s. <code>Single_AZ_1</code> is available in all
     * Amazon Web Services Regions where Amazon FSx for OpenZFS is available, except US
     * West (Oregon).</p> </li> <li> <p> <code>SINGLE_AZ_2</code>- Creates file systems
     * with throughput capacities of 160 - 10,240 MB/s using an NVMe L2ARC cache.
     * <code>Single_AZ_2</code> is available only in the US East (N. Virginia), US East
     * (Ohio), US West (Oregon), and Europe (Ireland) Amazon Web Services Regions.</p>
     * </li> </ul> <p>For more information, see: <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/availability-durability.html#available-aws-regions">Deployment
     * type availability</a> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#zfs-fs-performance">File
     * system performance</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline const OpenZFSDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Specifies the file system deployment type. Single AZ deployment types are
     * configured for redundancy within a single Availability Zone in an Amazon Web
     * Services Region . Valid values are the following:</p> <ul> <li> <p>
     * <code>SINGLE_AZ_1</code>- (Default) Creates file systems with throughput
     * capacities of 64 - 4,096 MB/s. <code>Single_AZ_1</code> is available in all
     * Amazon Web Services Regions where Amazon FSx for OpenZFS is available, except US
     * West (Oregon).</p> </li> <li> <p> <code>SINGLE_AZ_2</code>- Creates file systems
     * with throughput capacities of 160 - 10,240 MB/s using an NVMe L2ARC cache.
     * <code>Single_AZ_2</code> is available only in the US East (N. Virginia), US East
     * (Ohio), US West (Oregon), and Europe (Ireland) Amazon Web Services Regions.</p>
     * </li> </ul> <p>For more information, see: <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/availability-durability.html#available-aws-regions">Deployment
     * type availability</a> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#zfs-fs-performance">File
     * system performance</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>Specifies the file system deployment type. Single AZ deployment types are
     * configured for redundancy within a single Availability Zone in an Amazon Web
     * Services Region . Valid values are the following:</p> <ul> <li> <p>
     * <code>SINGLE_AZ_1</code>- (Default) Creates file systems with throughput
     * capacities of 64 - 4,096 MB/s. <code>Single_AZ_1</code> is available in all
     * Amazon Web Services Regions where Amazon FSx for OpenZFS is available, except US
     * West (Oregon).</p> </li> <li> <p> <code>SINGLE_AZ_2</code>- Creates file systems
     * with throughput capacities of 160 - 10,240 MB/s using an NVMe L2ARC cache.
     * <code>Single_AZ_2</code> is available only in the US East (N. Virginia), US East
     * (Ohio), US West (Oregon), and Europe (Ireland) Amazon Web Services Regions.</p>
     * </li> </ul> <p>For more information, see: <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/availability-durability.html#available-aws-regions">Deployment
     * type availability</a> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#zfs-fs-performance">File
     * system performance</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline void SetDeploymentType(const OpenZFSDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Specifies the file system deployment type. Single AZ deployment types are
     * configured for redundancy within a single Availability Zone in an Amazon Web
     * Services Region . Valid values are the following:</p> <ul> <li> <p>
     * <code>SINGLE_AZ_1</code>- (Default) Creates file systems with throughput
     * capacities of 64 - 4,096 MB/s. <code>Single_AZ_1</code> is available in all
     * Amazon Web Services Regions where Amazon FSx for OpenZFS is available, except US
     * West (Oregon).</p> </li> <li> <p> <code>SINGLE_AZ_2</code>- Creates file systems
     * with throughput capacities of 160 - 10,240 MB/s using an NVMe L2ARC cache.
     * <code>Single_AZ_2</code> is available only in the US East (N. Virginia), US East
     * (Ohio), US West (Oregon), and Europe (Ireland) Amazon Web Services Regions.</p>
     * </li> </ul> <p>For more information, see: <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/availability-durability.html#available-aws-regions">Deployment
     * type availability</a> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#zfs-fs-performance">File
     * system performance</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline void SetDeploymentType(OpenZFSDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>Specifies the file system deployment type. Single AZ deployment types are
     * configured for redundancy within a single Availability Zone in an Amazon Web
     * Services Region . Valid values are the following:</p> <ul> <li> <p>
     * <code>SINGLE_AZ_1</code>- (Default) Creates file systems with throughput
     * capacities of 64 - 4,096 MB/s. <code>Single_AZ_1</code> is available in all
     * Amazon Web Services Regions where Amazon FSx for OpenZFS is available, except US
     * West (Oregon).</p> </li> <li> <p> <code>SINGLE_AZ_2</code>- Creates file systems
     * with throughput capacities of 160 - 10,240 MB/s using an NVMe L2ARC cache.
     * <code>Single_AZ_2</code> is available only in the US East (N. Virginia), US East
     * (Ohio), US West (Oregon), and Europe (Ireland) Amazon Web Services Regions.</p>
     * </li> </ul> <p>For more information, see: <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/availability-durability.html#available-aws-regions">Deployment
     * type availability</a> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#zfs-fs-performance">File
     * system performance</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline CreateFileSystemOpenZFSConfiguration& WithDeploymentType(const OpenZFSDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Specifies the file system deployment type. Single AZ deployment types are
     * configured for redundancy within a single Availability Zone in an Amazon Web
     * Services Region . Valid values are the following:</p> <ul> <li> <p>
     * <code>SINGLE_AZ_1</code>- (Default) Creates file systems with throughput
     * capacities of 64 - 4,096 MB/s. <code>Single_AZ_1</code> is available in all
     * Amazon Web Services Regions where Amazon FSx for OpenZFS is available, except US
     * West (Oregon).</p> </li> <li> <p> <code>SINGLE_AZ_2</code>- Creates file systems
     * with throughput capacities of 160 - 10,240 MB/s using an NVMe L2ARC cache.
     * <code>Single_AZ_2</code> is available only in the US East (N. Virginia), US East
     * (Ohio), US West (Oregon), and Europe (Ireland) Amazon Web Services Regions.</p>
     * </li> </ul> <p>For more information, see: <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/availability-durability.html#available-aws-regions">Deployment
     * type availability</a> and <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#zfs-fs-performance">File
     * system performance</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline CreateFileSystemOpenZFSConfiguration& WithDeploymentType(OpenZFSDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>Specifies the throughput of an Amazon FSx for OpenZFS file system, measured
     * in megabytes per second (MB/s). Valid values depend on the DeploymentType you
     * choose, as follows:</p> <ul> <li> <p>For <code>SINGLE_AZ_1</code>, valid values
     * are 64, 128, 256, 512, 1024, 2048, 3072, or 4096 MB/s.</p> </li> <li> <p>For
     * <code>SINGLE_AZ_2</code>, valid values are 160, 320, 640, 1280, 2560, 3840,
     * 5120, 7680, or 10240 MB/s.</p> </li> </ul> <p>You pay for additional throughput
     * capacity that you provision.</p>
     */
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }

    /**
     * <p>Specifies the throughput of an Amazon FSx for OpenZFS file system, measured
     * in megabytes per second (MB/s). Valid values depend on the DeploymentType you
     * choose, as follows:</p> <ul> <li> <p>For <code>SINGLE_AZ_1</code>, valid values
     * are 64, 128, 256, 512, 1024, 2048, 3072, or 4096 MB/s.</p> </li> <li> <p>For
     * <code>SINGLE_AZ_2</code>, valid values are 160, 320, 640, 1280, 2560, 3840,
     * 5120, 7680, or 10240 MB/s.</p> </li> </ul> <p>You pay for additional throughput
     * capacity that you provision.</p>
     */
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }

    /**
     * <p>Specifies the throughput of an Amazon FSx for OpenZFS file system, measured
     * in megabytes per second (MB/s). Valid values depend on the DeploymentType you
     * choose, as follows:</p> <ul> <li> <p>For <code>SINGLE_AZ_1</code>, valid values
     * are 64, 128, 256, 512, 1024, 2048, 3072, or 4096 MB/s.</p> </li> <li> <p>For
     * <code>SINGLE_AZ_2</code>, valid values are 160, 320, 640, 1280, 2560, 3840,
     * 5120, 7680, or 10240 MB/s.</p> </li> </ul> <p>You pay for additional throughput
     * capacity that you provision.</p>
     */
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }

    /**
     * <p>Specifies the throughput of an Amazon FSx for OpenZFS file system, measured
     * in megabytes per second (MB/s). Valid values depend on the DeploymentType you
     * choose, as follows:</p> <ul> <li> <p>For <code>SINGLE_AZ_1</code>, valid values
     * are 64, 128, 256, 512, 1024, 2048, 3072, or 4096 MB/s.</p> </li> <li> <p>For
     * <code>SINGLE_AZ_2</code>, valid values are 160, 320, 640, 1280, 2560, 3840,
     * 5120, 7680, or 10240 MB/s.</p> </li> </ul> <p>You pay for additional throughput
     * capacity that you provision.</p>
     */
    inline CreateFileSystemOpenZFSConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}


    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    
    inline CreateFileSystemOpenZFSConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    
    inline CreateFileSystemOpenZFSConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    
    inline CreateFileSystemOpenZFSConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const{ return m_diskIopsConfiguration; }

    
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }

    
    inline void SetDiskIopsConfiguration(const DiskIopsConfiguration& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = value; }

    
    inline void SetDiskIopsConfiguration(DiskIopsConfiguration&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::move(value); }

    
    inline CreateFileSystemOpenZFSConfiguration& WithDiskIopsConfiguration(const DiskIopsConfiguration& value) { SetDiskIopsConfiguration(value); return *this;}

    
    inline CreateFileSystemOpenZFSConfiguration& WithDiskIopsConfiguration(DiskIopsConfiguration&& value) { SetDiskIopsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The configuration Amazon FSx uses when creating the root value of the Amazon
     * FSx for OpenZFS file system. All volumes are children of the root volume. </p>
     */
    inline const OpenZFSCreateRootVolumeConfiguration& GetRootVolumeConfiguration() const{ return m_rootVolumeConfiguration; }

    /**
     * <p>The configuration Amazon FSx uses when creating the root value of the Amazon
     * FSx for OpenZFS file system. All volumes are children of the root volume. </p>
     */
    inline bool RootVolumeConfigurationHasBeenSet() const { return m_rootVolumeConfigurationHasBeenSet; }

    /**
     * <p>The configuration Amazon FSx uses when creating the root value of the Amazon
     * FSx for OpenZFS file system. All volumes are children of the root volume. </p>
     */
    inline void SetRootVolumeConfiguration(const OpenZFSCreateRootVolumeConfiguration& value) { m_rootVolumeConfigurationHasBeenSet = true; m_rootVolumeConfiguration = value; }

    /**
     * <p>The configuration Amazon FSx uses when creating the root value of the Amazon
     * FSx for OpenZFS file system. All volumes are children of the root volume. </p>
     */
    inline void SetRootVolumeConfiguration(OpenZFSCreateRootVolumeConfiguration&& value) { m_rootVolumeConfigurationHasBeenSet = true; m_rootVolumeConfiguration = std::move(value); }

    /**
     * <p>The configuration Amazon FSx uses when creating the root value of the Amazon
     * FSx for OpenZFS file system. All volumes are children of the root volume. </p>
     */
    inline CreateFileSystemOpenZFSConfiguration& WithRootVolumeConfiguration(const OpenZFSCreateRootVolumeConfiguration& value) { SetRootVolumeConfiguration(value); return *this;}

    /**
     * <p>The configuration Amazon FSx uses when creating the root value of the Amazon
     * FSx for OpenZFS file system. All volumes are children of the root volume. </p>
     */
    inline CreateFileSystemOpenZFSConfiguration& WithRootVolumeConfiguration(OpenZFSCreateRootVolumeConfiguration&& value) { SetRootVolumeConfiguration(std::move(value)); return *this;}

  private:

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    bool m_copyTagsToBackups;
    bool m_copyTagsToBackupsHasBeenSet = false;

    bool m_copyTagsToVolumes;
    bool m_copyTagsToVolumesHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    OpenZFSDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    int m_throughputCapacity;
    bool m_throughputCapacityHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet = false;

    OpenZFSCreateRootVolumeConfiguration m_rootVolumeConfiguration;
    bool m_rootVolumeConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
