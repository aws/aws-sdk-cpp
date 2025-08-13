/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OpenZFSDeploymentType.h>
#include <aws/fsx/model/DiskIopsConfiguration.h>
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
   * <p>The configuration for the Amazon FSx for OpenZFS file system. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OpenZFSFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenZFSFileSystemConfiguration
  {
  public:
    AWS_FSX_API OpenZFSFileSystemConfiguration() = default;
    AWS_FSX_API OpenZFSFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OpenZFSFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetAutomaticBackupRetentionDays() const { return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline OpenZFSFileSystemConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether tags on the file system should be copied
     * to backups. If it's set to <code>true</code>, all tags on the file system are
     * copied to all automatic backups and any user-initiated backups where the user
     * doesn't specify any tags. If this value is <code>true</code> and you specify one
     * or more tags, only the specified tags are copied to backups. If you specify one
     * or more tags when creating a user-initiated backup, no tags are copied from the
     * file system, regardless of this value. </p>
     */
    inline bool GetCopyTagsToBackups() const { return m_copyTagsToBackups; }
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }
    inline OpenZFSFileSystemConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value. </p>
     */
    inline bool GetCopyTagsToVolumes() const { return m_copyTagsToVolumes; }
    inline bool CopyTagsToVolumesHasBeenSet() const { return m_copyTagsToVolumesHasBeenSet; }
    inline void SetCopyTagsToVolumes(bool value) { m_copyTagsToVolumesHasBeenSet = true; m_copyTagsToVolumes = value; }
    inline OpenZFSFileSystemConfiguration& WithCopyTagsToVolumes(bool value) { SetCopyTagsToVolumes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const { return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    void SetDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::forward<DailyAutomaticBackupStartTimeT>(value); }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    OpenZFSFileSystemConfiguration& WithDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { SetDailyAutomaticBackupStartTime(std::forward<DailyAutomaticBackupStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the file-system deployment type. Amazon FSx for OpenZFS
     * supports&#x2028; <code>MULTI_AZ_1</code>, <code>SINGLE_AZ_HA_2</code>,
     * <code>SINGLE_AZ_HA_1</code>, <code>SINGLE_AZ_2</code>, and
     * <code>SINGLE_AZ_1</code>.</p>
     */
    inline OpenZFSDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(OpenZFSDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline OpenZFSFileSystemConfiguration& WithDeploymentType(OpenZFSDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput of an Amazon FSx file system, measured in megabytes per second
     * (MBps).</p>
     */
    inline int GetThroughputCapacity() const { return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline OpenZFSFileSystemConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    OpenZFSFileSystemConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const { return m_diskIopsConfiguration; }
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    void SetDiskIopsConfiguration(DiskIopsConfigurationT&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::forward<DiskIopsConfigurationT>(value); }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    OpenZFSFileSystemConfiguration& WithDiskIopsConfiguration(DiskIopsConfigurationT&& value) { SetDiskIopsConfiguration(std::forward<DiskIopsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the root volume of the OpenZFS file system. </p>
     */
    inline const Aws::String& GetRootVolumeId() const { return m_rootVolumeId; }
    inline bool RootVolumeIdHasBeenSet() const { return m_rootVolumeIdHasBeenSet; }
    template<typename RootVolumeIdT = Aws::String>
    void SetRootVolumeId(RootVolumeIdT&& value) { m_rootVolumeIdHasBeenSet = true; m_rootVolumeId = std::forward<RootVolumeIdT>(value); }
    template<typename RootVolumeIdT = Aws::String>
    OpenZFSFileSystemConfiguration& WithRootVolumeId(RootVolumeIdT&& value) { SetRootVolumeId(std::forward<RootVolumeIdT>(value)); return *this;}
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
    OpenZFSFileSystemConfiguration& WithPreferredSubnetId(PreferredSubnetIdT&& value) { SetPreferredSubnetId(std::forward<PreferredSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) Specifies the IP address range in which the endpoints to
     * access your file system will be created. By default in the Amazon FSx API and
     * Amazon FSx console, Amazon FSx selects an available /28 IP address range for you
     * from one of the VPC's CIDR ranges. You can have overlapping endpoint IP
     * addresses for file systems deployed in the same VPC/route tables.</p>
     */
    inline const Aws::String& GetEndpointIpAddressRange() const { return m_endpointIpAddressRange; }
    inline bool EndpointIpAddressRangeHasBeenSet() const { return m_endpointIpAddressRangeHasBeenSet; }
    template<typename EndpointIpAddressRangeT = Aws::String>
    void SetEndpointIpAddressRange(EndpointIpAddressRangeT&& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = std::forward<EndpointIpAddressRangeT>(value); }
    template<typename EndpointIpAddressRangeT = Aws::String>
    OpenZFSFileSystemConfiguration& WithEndpointIpAddressRange(EndpointIpAddressRangeT&& value) { SetEndpointIpAddressRange(std::forward<EndpointIpAddressRangeT>(value)); return *this;}
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
    OpenZFSFileSystemConfiguration& WithEndpointIpv6AddressRange(EndpointIpv6AddressRangeT&& value) { SetEndpointIpv6AddressRange(std::forward<EndpointIpv6AddressRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const { return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    void SetRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::forward<RouteTableIdsT>(value); }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    OpenZFSFileSystemConfiguration& WithRouteTableIds(RouteTableIdsT&& value) { SetRouteTableIds(std::forward<RouteTableIdsT>(value)); return *this;}
    template<typename RouteTableIdsT = Aws::String>
    OpenZFSFileSystemConfiguration& AddRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.emplace_back(std::forward<RouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address of the endpoint that is used to access data or to manage the
     * file system.</p>
     */
    inline const Aws::String& GetEndpointIpAddress() const { return m_endpointIpAddress; }
    inline bool EndpointIpAddressHasBeenSet() const { return m_endpointIpAddressHasBeenSet; }
    template<typename EndpointIpAddressT = Aws::String>
    void SetEndpointIpAddress(EndpointIpAddressT&& value) { m_endpointIpAddressHasBeenSet = true; m_endpointIpAddress = std::forward<EndpointIpAddressT>(value); }
    template<typename EndpointIpAddressT = Aws::String>
    OpenZFSFileSystemConfiguration& WithEndpointIpAddress(EndpointIpAddressT&& value) { SetEndpointIpAddress(std::forward<EndpointIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 address of the endpoint that is used to access data or to manage the
     * file system.</p>
     */
    inline const Aws::String& GetEndpointIpv6Address() const { return m_endpointIpv6Address; }
    inline bool EndpointIpv6AddressHasBeenSet() const { return m_endpointIpv6AddressHasBeenSet; }
    template<typename EndpointIpv6AddressT = Aws::String>
    void SetEndpointIpv6Address(EndpointIpv6AddressT&& value) { m_endpointIpv6AddressHasBeenSet = true; m_endpointIpv6Address = std::forward<EndpointIpv6AddressT>(value); }
    template<typename EndpointIpv6AddressT = Aws::String>
    OpenZFSFileSystemConfiguration& WithEndpointIpv6Address(EndpointIpv6AddressT&& value) { SetEndpointIpv6Address(std::forward<EndpointIpv6AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Required when <code>StorageType</code> is set to
     * <code>INTELLIGENT_TIERING</code>. Specifies the optional provisioned SSD read
     * cache. </p>
     */
    inline const OpenZFSReadCacheConfiguration& GetReadCacheConfiguration() const { return m_readCacheConfiguration; }
    inline bool ReadCacheConfigurationHasBeenSet() const { return m_readCacheConfigurationHasBeenSet; }
    template<typename ReadCacheConfigurationT = OpenZFSReadCacheConfiguration>
    void SetReadCacheConfiguration(ReadCacheConfigurationT&& value) { m_readCacheConfigurationHasBeenSet = true; m_readCacheConfiguration = std::forward<ReadCacheConfigurationT>(value); }
    template<typename ReadCacheConfigurationT = OpenZFSReadCacheConfiguration>
    OpenZFSFileSystemConfiguration& WithReadCacheConfiguration(ReadCacheConfigurationT&& value) { SetReadCacheConfiguration(std::forward<ReadCacheConfigurationT>(value)); return *this;}
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

    Aws::String m_rootVolumeId;
    bool m_rootVolumeIdHasBeenSet = false;

    Aws::String m_preferredSubnetId;
    bool m_preferredSubnetIdHasBeenSet = false;

    Aws::String m_endpointIpAddressRange;
    bool m_endpointIpAddressRangeHasBeenSet = false;

    Aws::String m_endpointIpv6AddressRange;
    bool m_endpointIpv6AddressRangeHasBeenSet = false;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet = false;

    Aws::String m_endpointIpAddress;
    bool m_endpointIpAddressHasBeenSet = false;

    Aws::String m_endpointIpv6Address;
    bool m_endpointIpv6AddressHasBeenSet = false;

    OpenZFSReadCacheConfiguration m_readCacheConfiguration;
    bool m_readCacheConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
