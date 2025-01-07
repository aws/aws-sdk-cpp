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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/OpenZFSReadCacheConfiguration.h>
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


    ///@{
    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline CreateFileSystemOpenZFSConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
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
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }
    inline CreateFileSystemOpenZFSConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}
    ///@}

    ///@{
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
    inline bool CopyTagsToVolumesHasBeenSet() const { return m_copyTagsToVolumesHasBeenSet; }
    inline void SetCopyTagsToVolumes(bool value) { m_copyTagsToVolumesHasBeenSet = true; m_copyTagsToVolumes = value; }
    inline CreateFileSystemOpenZFSConfiguration& WithCopyTagsToVolumes(bool value) { SetCopyTagsToVolumes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }
    inline CreateFileSystemOpenZFSConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the file system deployment type. Valid values are the
     * following:</p> <ul> <li> <p> <code>MULTI_AZ_1</code>- Creates file systems with
     * high availability and durability by replicating your data and supporting
     * failover across multiple Availability Zones in the same Amazon Web Services
     * Region.</p> </li> <li> <p> <code>SINGLE_AZ_HA_2</code>- Creates file systems
     * with high availability and throughput capacities of 160 - 10,240 MB/s using an
     * NVMe L2ARC cache by deploying a primary and standby file system within the same
     * Availability Zone.</p> </li> <li> <p> <code>SINGLE_AZ_HA_1</code>- Creates file
     * systems with high availability and throughput capacities of 64 - 4,096 MB/s by
     * deploying a primary and standby file system within the same Availability
     * Zone.</p> </li> <li> <p> <code>SINGLE_AZ_2</code>- Creates file systems with
     * throughput capacities of 160 - 10,240 MB/s using an NVMe L2ARC cache that
     * automatically recover within a single Availability Zone.</p> </li> <li> <p>
     * <code>SINGLE_AZ_1</code>- Creates file systems with throughput capacities of 64
     * - 4,096 MBs that automatically recover within a single Availability Zone.</p>
     * </li> </ul> <p>For a list of which Amazon Web Services Regions each deployment
     * type is available in, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/availability-durability.html#available-aws-regions">Deployment
     * type availability</a>. For more information on the differences in performance
     * between deployment types, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/performance.html#zfs-fs-performance">File
     * system performance</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p>
     */
    inline const OpenZFSDeploymentType& GetDeploymentType() const{ return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(const OpenZFSDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline void SetDeploymentType(OpenZFSDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }
    inline CreateFileSystemOpenZFSConfiguration& WithDeploymentType(const OpenZFSDeploymentType& value) { SetDeploymentType(value); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithDeploymentType(OpenZFSDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the throughput of an Amazon FSx for OpenZFS file system, measured
     * in megabytes per second (MBps). Valid values depend on the DeploymentType you
     * choose, as follows:</p> <ul> <li> <p>For <code>MULTI_AZ_1</code> and
     * <code>SINGLE_AZ_2</code>, valid values are 160, 320, 640, 1280, 2560, 3840,
     * 5120, 7680, or 10240 MBps.</p> </li> <li> <p>For <code>SINGLE_AZ_1</code>, valid
     * values are 64, 128, 256, 512, 1024, 2048, 3072, or 4096 MBps.</p> </li> </ul>
     * <p>You pay for additional throughput capacity that you provision.</p>
     */
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline CreateFileSystemOpenZFSConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }
    inline CreateFileSystemOpenZFSConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}
    ///@}

    ///@{
    
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const{ return m_diskIopsConfiguration; }
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }
    inline void SetDiskIopsConfiguration(const DiskIopsConfiguration& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = value; }
    inline void SetDiskIopsConfiguration(DiskIopsConfiguration&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::move(value); }
    inline CreateFileSystemOpenZFSConfiguration& WithDiskIopsConfiguration(const DiskIopsConfiguration& value) { SetDiskIopsConfiguration(value); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithDiskIopsConfiguration(DiskIopsConfiguration&& value) { SetDiskIopsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration Amazon FSx uses when creating the root value of the Amazon
     * FSx for OpenZFS file system. All volumes are children of the root volume. </p>
     */
    inline const OpenZFSCreateRootVolumeConfiguration& GetRootVolumeConfiguration() const{ return m_rootVolumeConfiguration; }
    inline bool RootVolumeConfigurationHasBeenSet() const { return m_rootVolumeConfigurationHasBeenSet; }
    inline void SetRootVolumeConfiguration(const OpenZFSCreateRootVolumeConfiguration& value) { m_rootVolumeConfigurationHasBeenSet = true; m_rootVolumeConfiguration = value; }
    inline void SetRootVolumeConfiguration(OpenZFSCreateRootVolumeConfiguration&& value) { m_rootVolumeConfigurationHasBeenSet = true; m_rootVolumeConfiguration = std::move(value); }
    inline CreateFileSystemOpenZFSConfiguration& WithRootVolumeConfiguration(const OpenZFSCreateRootVolumeConfiguration& value) { SetRootVolumeConfiguration(value); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithRootVolumeConfiguration(OpenZFSCreateRootVolumeConfiguration&& value) { SetRootVolumeConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required when <code>DeploymentType</code> is set to <code>MULTI_AZ_1</code>.
     * This specifies the subnet in which you want the preferred file server to be
     * located.</p>
     */
    inline const Aws::String& GetPreferredSubnetId() const{ return m_preferredSubnetId; }
    inline bool PreferredSubnetIdHasBeenSet() const { return m_preferredSubnetIdHasBeenSet; }
    inline void SetPreferredSubnetId(const Aws::String& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = value; }
    inline void SetPreferredSubnetId(Aws::String&& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = std::move(value); }
    inline void SetPreferredSubnetId(const char* value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId.assign(value); }
    inline CreateFileSystemOpenZFSConfiguration& WithPreferredSubnetId(const Aws::String& value) { SetPreferredSubnetId(value); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithPreferredSubnetId(Aws::String&& value) { SetPreferredSubnetId(std::move(value)); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithPreferredSubnetId(const char* value) { SetPreferredSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) Specifies the IP address range in which the endpoints to
     * access your file system will be created. By default in the Amazon FSx API and
     * Amazon FSx console, Amazon FSx selects an available /28 IP address range for you
     * from one of the VPC's CIDR ranges. You can have overlapping endpoint IP
     * addresses for file systems deployed in the same VPC/route tables.</p>
     */
    inline const Aws::String& GetEndpointIpAddressRange() const{ return m_endpointIpAddressRange; }
    inline bool EndpointIpAddressRangeHasBeenSet() const { return m_endpointIpAddressRangeHasBeenSet; }
    inline void SetEndpointIpAddressRange(const Aws::String& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = value; }
    inline void SetEndpointIpAddressRange(Aws::String&& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = std::move(value); }
    inline void SetEndpointIpAddressRange(const char* value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange.assign(value); }
    inline CreateFileSystemOpenZFSConfiguration& WithEndpointIpAddressRange(const Aws::String& value) { SetEndpointIpAddressRange(value); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithEndpointIpAddressRange(Aws::String&& value) { SetEndpointIpAddressRange(std::move(value)); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithEndpointIpAddressRange(const char* value) { SetEndpointIpAddressRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) Specifies the route tables in which Amazon FSx creates the
     * rules for routing traffic to the correct file server. You should specify all
     * virtual private cloud (VPC) route tables associated with the subnets in which
     * your clients are located. By default, Amazon FSx selects your VPC's default
     * route table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::move(value); }
    inline CreateFileSystemOpenZFSConfiguration& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(std::move(value)); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }
    inline CreateFileSystemOpenZFSConfiguration& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(std::move(value)); return *this; }
    inline CreateFileSystemOpenZFSConfiguration& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the optional provisioned SSD read cache on file systems that use
     * the Intelligent-Tiering storage class. </p>
     */
    inline const OpenZFSReadCacheConfiguration& GetReadCacheConfiguration() const{ return m_readCacheConfiguration; }
    inline bool ReadCacheConfigurationHasBeenSet() const { return m_readCacheConfigurationHasBeenSet; }
    inline void SetReadCacheConfiguration(const OpenZFSReadCacheConfiguration& value) { m_readCacheConfigurationHasBeenSet = true; m_readCacheConfiguration = value; }
    inline void SetReadCacheConfiguration(OpenZFSReadCacheConfiguration&& value) { m_readCacheConfigurationHasBeenSet = true; m_readCacheConfiguration = std::move(value); }
    inline CreateFileSystemOpenZFSConfiguration& WithReadCacheConfiguration(const OpenZFSReadCacheConfiguration& value) { SetReadCacheConfiguration(value); return *this;}
    inline CreateFileSystemOpenZFSConfiguration& WithReadCacheConfiguration(OpenZFSReadCacheConfiguration&& value) { SetReadCacheConfiguration(std::move(value)); return *this;}
    ///@}
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

    Aws::String m_preferredSubnetId;
    bool m_preferredSubnetIdHasBeenSet = false;

    Aws::String m_endpointIpAddressRange;
    bool m_endpointIpAddressRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet = false;

    OpenZFSReadCacheConfiguration m_readCacheConfiguration;
    bool m_readCacheConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
