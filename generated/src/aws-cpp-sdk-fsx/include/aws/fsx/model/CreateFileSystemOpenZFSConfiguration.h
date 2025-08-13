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
    AWS_FSX_API CreateFileSystemOpenZFSConfiguration() = default;
    AWS_FSX_API CreateFileSystemOpenZFSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateFileSystemOpenZFSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetAutomaticBackupRetentionDays() const { return m_automaticBackupRetentionDays; }
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
    inline bool GetCopyTagsToBackups() const { return m_copyTagsToBackups; }
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
    inline bool GetCopyTagsToVolumes() const { return m_copyTagsToVolumes; }
    inline bool CopyTagsToVolumesHasBeenSet() const { return m_copyTagsToVolumesHasBeenSet; }
    inline void SetCopyTagsToVolumes(bool value) { m_copyTagsToVolumesHasBeenSet = true; m_copyTagsToVolumes = value; }
    inline CreateFileSystemOpenZFSConfiguration& WithCopyTagsToVolumes(bool value) { SetCopyTagsToVolumes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const { return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    void SetDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::forward<DailyAutomaticBackupStartTimeT>(value); }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    CreateFileSystemOpenZFSConfiguration& WithDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { SetDailyAutomaticBackupStartTime(std::forward<DailyAutomaticBackupStartTimeT>(value)); return *this;}
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
    inline OpenZFSDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(OpenZFSDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline CreateFileSystemOpenZFSConfiguration& WithDeploymentType(OpenZFSDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the throughput of an Amazon FSx for OpenZFS file system, measured
     * in megabytes per second (MBps). Valid values depend on the
     * <code>DeploymentType</code> that you choose, as follows:</p> <ul> <li> <p>For
     * <code>MULTI_AZ_1</code> and <code>SINGLE_AZ_2</code>, valid values are 160, 320,
     * 640, 1280, 2560, 3840, 5120, 7680, or 10240 MBps.</p> </li> <li> <p>For
     * <code>SINGLE_AZ_1</code>, valid values are 64, 128, 256, 512, 1024, 2048, 3072,
     * or 4096 MBps.</p> </li> </ul> <p>You pay for additional throughput capacity that
     * you provision.</p>
     */
    inline int GetThroughputCapacity() const { return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline CreateFileSystemOpenZFSConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    CreateFileSystemOpenZFSConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const { return m_diskIopsConfiguration; }
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    void SetDiskIopsConfiguration(DiskIopsConfigurationT&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::forward<DiskIopsConfigurationT>(value); }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    CreateFileSystemOpenZFSConfiguration& WithDiskIopsConfiguration(DiskIopsConfigurationT&& value) { SetDiskIopsConfiguration(std::forward<DiskIopsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration Amazon FSx uses when creating the root value of the Amazon
     * FSx for OpenZFS file system. All volumes are children of the root volume. </p>
     */
    inline const OpenZFSCreateRootVolumeConfiguration& GetRootVolumeConfiguration() const { return m_rootVolumeConfiguration; }
    inline bool RootVolumeConfigurationHasBeenSet() const { return m_rootVolumeConfigurationHasBeenSet; }
    template<typename RootVolumeConfigurationT = OpenZFSCreateRootVolumeConfiguration>
    void SetRootVolumeConfiguration(RootVolumeConfigurationT&& value) { m_rootVolumeConfigurationHasBeenSet = true; m_rootVolumeConfiguration = std::forward<RootVolumeConfigurationT>(value); }
    template<typename RootVolumeConfigurationT = OpenZFSCreateRootVolumeConfiguration>
    CreateFileSystemOpenZFSConfiguration& WithRootVolumeConfiguration(RootVolumeConfigurationT&& value) { SetRootVolumeConfiguration(std::forward<RootVolumeConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required when <code>DeploymentType</code> is set to <code>MULTI_AZ_1</code>.
     * This specifies the subnet in which you want the preferred file server to be
     * located.</p>
     */
    inline const Aws::String& GetPreferredSubnetId() const { return m_preferredSubnetId; }
    inline bool PreferredSubnetIdHasBeenSet() const { return m_preferredSubnetIdHasBeenSet; }
    template<typename PreferredSubnetIdT = Aws::String>
    void SetPreferredSubnetId(PreferredSubnetIdT&& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = std::forward<PreferredSubnetIdT>(value); }
    template<typename PreferredSubnetIdT = Aws::String>
    CreateFileSystemOpenZFSConfiguration& WithPreferredSubnetId(PreferredSubnetIdT&& value) { SetPreferredSubnetId(std::forward<PreferredSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) Specifies the IP address range in which the endpoints to
     * access your file system will be created. By default in the Amazon FSx API and
     * Amazon FSx console, Amazon FSx selects an available /28 IP address range for you
     * from one of the VPC's CIDR ranges. You can have overlapping endpoint IP
     * addresses for file systems deployed in the same VPC/route tables, as long as
     * they don't overlap with any subnet.</p>
     */
    inline const Aws::String& GetEndpointIpAddressRange() const { return m_endpointIpAddressRange; }
    inline bool EndpointIpAddressRangeHasBeenSet() const { return m_endpointIpAddressRangeHasBeenSet; }
    template<typename EndpointIpAddressRangeT = Aws::String>
    void SetEndpointIpAddressRange(EndpointIpAddressRangeT&& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = std::forward<EndpointIpAddressRangeT>(value); }
    template<typename EndpointIpAddressRangeT = Aws::String>
    CreateFileSystemOpenZFSConfiguration& WithEndpointIpAddressRange(EndpointIpAddressRangeT&& value) { SetEndpointIpAddressRange(std::forward<EndpointIpAddressRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) Specifies the IP address range in which the endpoints to
     * access your file system will be created. By default in the Amazon FSx API and
     * Amazon FSx console, Amazon FSx selects an available /118 IP address range for
     * you from one of the VPC's CIDR ranges. You can have overlapping endpoint IP
     * addresses for file systems deployed in the same VPC/route tables, as long as
     * they don't overlap with any subnet.</p>
     */
    inline const Aws::String& GetEndpointIpv6AddressRange() const { return m_endpointIpv6AddressRange; }
    inline bool EndpointIpv6AddressRangeHasBeenSet() const { return m_endpointIpv6AddressRangeHasBeenSet; }
    template<typename EndpointIpv6AddressRangeT = Aws::String>
    void SetEndpointIpv6AddressRange(EndpointIpv6AddressRangeT&& value) { m_endpointIpv6AddressRangeHasBeenSet = true; m_endpointIpv6AddressRange = std::forward<EndpointIpv6AddressRangeT>(value); }
    template<typename EndpointIpv6AddressRangeT = Aws::String>
    CreateFileSystemOpenZFSConfiguration& WithEndpointIpv6AddressRange(EndpointIpv6AddressRangeT&& value) { SetEndpointIpv6AddressRange(std::forward<EndpointIpv6AddressRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) Specifies the route tables in which Amazon FSx creates the
     * rules for routing traffic to the correct file server. You should specify all
     * virtual private cloud (VPC) route tables associated with the subnets in which
     * your clients are located. By default, Amazon FSx selects your VPC's default
     * route table.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const { return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    void SetRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::forward<RouteTableIdsT>(value); }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    CreateFileSystemOpenZFSConfiguration& WithRouteTableIds(RouteTableIdsT&& value) { SetRouteTableIds(std::forward<RouteTableIdsT>(value)); return *this;}
    template<typename RouteTableIdsT = Aws::String>
    CreateFileSystemOpenZFSConfiguration& AddRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.emplace_back(std::forward<RouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specifies the optional provisioned SSD read cache on file systems that use
     * the Intelligent-Tiering storage class. </p>
     */
    inline const OpenZFSReadCacheConfiguration& GetReadCacheConfiguration() const { return m_readCacheConfiguration; }
    inline bool ReadCacheConfigurationHasBeenSet() const { return m_readCacheConfigurationHasBeenSet; }
    template<typename ReadCacheConfigurationT = OpenZFSReadCacheConfiguration>
    void SetReadCacheConfiguration(ReadCacheConfigurationT&& value) { m_readCacheConfigurationHasBeenSet = true; m_readCacheConfiguration = std::forward<ReadCacheConfigurationT>(value); }
    template<typename ReadCacheConfigurationT = OpenZFSReadCacheConfiguration>
    CreateFileSystemOpenZFSConfiguration& WithReadCacheConfiguration(ReadCacheConfigurationT&& value) { SetReadCacheConfiguration(std::forward<ReadCacheConfigurationT>(value)); return *this;}
    ///@}
  private:

    int m_automaticBackupRetentionDays{0};
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    bool m_copyTagsToBackups{false};
    bool m_copyTagsToBackupsHasBeenSet = false;

    bool m_copyTagsToVolumes{false};
    bool m_copyTagsToVolumesHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    OpenZFSDeploymentType m_deploymentType{OpenZFSDeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    int m_throughputCapacity{0};
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

    Aws::String m_endpointIpv6AddressRange;
    bool m_endpointIpv6AddressRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet = false;

    OpenZFSReadCacheConfiguration m_readCacheConfiguration;
    bool m_readCacheConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
