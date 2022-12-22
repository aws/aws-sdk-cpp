/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OpenZFSDeploymentType.h>
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
   * <p>The configuration for the Amazon FSx for OpenZFS file system. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenZFSFileSystemConfiguration
  {
  public:
    AWS_FSX_API OpenZFSFileSystemConfiguration();
    AWS_FSX_API OpenZFSFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    
    inline OpenZFSFileSystemConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    /**
     * <p>A Boolean value indicating whether tags on the file system should be copied
     * to backups. If it's set to <code>true</code>, all tags on the file system are
     * copied to all automatic backups and any user-initiated backups where the user
     * doesn't specify any tags. If this value is <code>true</code> and you specify one
     * or more tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value. </p>
     */
    inline bool GetCopyTagsToBackups() const{ return m_copyTagsToBackups; }

    /**
     * <p>A Boolean value indicating whether tags on the file system should be copied
     * to backups. If it's set to <code>true</code>, all tags on the file system are
     * copied to all automatic backups and any user-initiated backups where the user
     * doesn't specify any tags. If this value is <code>true</code> and you specify one
     * or more tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value. </p>
     */
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether tags on the file system should be copied
     * to backups. If it's set to <code>true</code>, all tags on the file system are
     * copied to all automatic backups and any user-initiated backups where the user
     * doesn't specify any tags. If this value is <code>true</code> and you specify one
     * or more tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value. </p>
     */
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }

    /**
     * <p>A Boolean value indicating whether tags on the file system should be copied
     * to backups. If it's set to <code>true</code>, all tags on the file system are
     * copied to all automatic backups and any user-initiated backups where the user
     * doesn't specify any tags. If this value is <code>true</code> and you specify one
     * or more tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value. </p>
     */
    inline OpenZFSFileSystemConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}


    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline bool GetCopyTagsToVolumes() const{ return m_copyTagsToVolumes; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline bool CopyTagsToVolumesHasBeenSet() const { return m_copyTagsToVolumesHasBeenSet; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline void SetCopyTagsToVolumes(bool value) { m_copyTagsToVolumesHasBeenSet = true; m_copyTagsToVolumes = value; }

    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline OpenZFSFileSystemConfiguration& WithCopyTagsToVolumes(bool value) { SetCopyTagsToVolumes(value); return *this;}


    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    
    inline OpenZFSFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    
    inline OpenZFSFileSystemConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    
    inline OpenZFSFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    /**
     * <p>Specifies the file-system deployment type. Amazon FSx for OpenZFS
     * supports&#x2028; <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>.</p>
     */
    inline const OpenZFSDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Specifies the file-system deployment type. Amazon FSx for OpenZFS
     * supports&#x2028; <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>Specifies the file-system deployment type. Amazon FSx for OpenZFS
     * supports&#x2028; <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>.</p>
     */
    inline void SetDeploymentType(const OpenZFSDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Specifies the file-system deployment type. Amazon FSx for OpenZFS
     * supports&#x2028; <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>.</p>
     */
    inline void SetDeploymentType(OpenZFSDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>Specifies the file-system deployment type. Amazon FSx for OpenZFS
     * supports&#x2028; <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>.</p>
     */
    inline OpenZFSFileSystemConfiguration& WithDeploymentType(const OpenZFSDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Specifies the file-system deployment type. Amazon FSx for OpenZFS
     * supports&#x2028; <code>SINGLE_AZ_1</code> and <code>SINGLE_AZ_2</code>.</p>
     */
    inline OpenZFSFileSystemConfiguration& WithDeploymentType(OpenZFSDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per second
     * (MBps).</p>
     */
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }

    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per second
     * (MBps).</p>
     */
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }

    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per second
     * (MBps).</p>
     */
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }

    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per second
     * (MBps).</p>
     */
    inline OpenZFSFileSystemConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}


    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    
    inline OpenZFSFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    
    inline OpenZFSFileSystemConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    
    inline OpenZFSFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const{ return m_diskIopsConfiguration; }

    
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }

    
    inline void SetDiskIopsConfiguration(const DiskIopsConfiguration& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = value; }

    
    inline void SetDiskIopsConfiguration(DiskIopsConfiguration&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::move(value); }

    
    inline OpenZFSFileSystemConfiguration& WithDiskIopsConfiguration(const DiskIopsConfiguration& value) { SetDiskIopsConfiguration(value); return *this;}

    
    inline OpenZFSFileSystemConfiguration& WithDiskIopsConfiguration(DiskIopsConfiguration&& value) { SetDiskIopsConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ID of the root volume of the OpenZFS file system. </p>
     */
    inline const Aws::String& GetRootVolumeId() const{ return m_rootVolumeId; }

    /**
     * <p>The ID of the root volume of the OpenZFS file system. </p>
     */
    inline bool RootVolumeIdHasBeenSet() const { return m_rootVolumeIdHasBeenSet; }

    /**
     * <p>The ID of the root volume of the OpenZFS file system. </p>
     */
    inline void SetRootVolumeId(const Aws::String& value) { m_rootVolumeIdHasBeenSet = true; m_rootVolumeId = value; }

    /**
     * <p>The ID of the root volume of the OpenZFS file system. </p>
     */
    inline void SetRootVolumeId(Aws::String&& value) { m_rootVolumeIdHasBeenSet = true; m_rootVolumeId = std::move(value); }

    /**
     * <p>The ID of the root volume of the OpenZFS file system. </p>
     */
    inline void SetRootVolumeId(const char* value) { m_rootVolumeIdHasBeenSet = true; m_rootVolumeId.assign(value); }

    /**
     * <p>The ID of the root volume of the OpenZFS file system. </p>
     */
    inline OpenZFSFileSystemConfiguration& WithRootVolumeId(const Aws::String& value) { SetRootVolumeId(value); return *this;}

    /**
     * <p>The ID of the root volume of the OpenZFS file system. </p>
     */
    inline OpenZFSFileSystemConfiguration& WithRootVolumeId(Aws::String&& value) { SetRootVolumeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the root volume of the OpenZFS file system. </p>
     */
    inline OpenZFSFileSystemConfiguration& WithRootVolumeId(const char* value) { SetRootVolumeId(value); return *this;}

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

    Aws::String m_rootVolumeId;
    bool m_rootVolumeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
