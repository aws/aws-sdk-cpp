/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The configuration updates for an Amazon FSx for OpenZFS file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystemOpenZFSConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateFileSystemOpenZFSConfiguration
  {
  public:
    AWS_FSX_API UpdateFileSystemOpenZFSConfiguration() = default;
    AWS_FSX_API UpdateFileSystemOpenZFSConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateFileSystemOpenZFSConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetAutomaticBackupRetentionDays() const { return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline UpdateFileSystemOpenZFSConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether tags for the file system should be copied
     * to backups. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the file system are copied to all automatic and
     * user-initiated backups where the user doesn't specify tags. If this value is
     * <code>true</code> and you specify one or more tags, only the specified tags are
     * copied to backups. If you specify one or more tags when creating a
     * user-initiated backup, no tags are copied from the file system, regardless of
     * this value.</p>
     */
    inline bool GetCopyTagsToBackups() const { return m_copyTagsToBackups; }
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }
    inline UpdateFileSystemOpenZFSConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value indicating whether tags for the volume should be copied to
     * snapshots. This value defaults to <code>false</code>. If it's set to
     * <code>true</code>, all tags for the volume are copied to snapshots where the
     * user doesn't specify tags. If this value is <code>true</code> and you specify
     * one or more tags, only the specified tags are copied to snapshots. If you
     * specify one or more tags when creating the snapshot, no tags are copied from the
     * volume, regardless of this value.</p>
     */
    inline bool GetCopyTagsToVolumes() const { return m_copyTagsToVolumes; }
    inline bool CopyTagsToVolumesHasBeenSet() const { return m_copyTagsToVolumesHasBeenSet; }
    inline void SetCopyTagsToVolumes(bool value) { m_copyTagsToVolumesHasBeenSet = true; m_copyTagsToVolumes = value; }
    inline UpdateFileSystemOpenZFSConfiguration& WithCopyTagsToVolumes(bool value) { SetCopyTagsToVolumes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const { return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    void SetDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::forward<DailyAutomaticBackupStartTimeT>(value); }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    UpdateFileSystemOpenZFSConfiguration& WithDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { SetDailyAutomaticBackupStartTime(std::forward<DailyAutomaticBackupStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput of an Amazon FSx for OpenZFS file system, measured in
     * megabytes per second&#x2028; (MB/s). Valid values depend on the DeploymentType
     * you choose, as follows:</p> <ul> <li> <p>For <code>MULTI_AZ_1</code> and
     * <code>SINGLE_AZ_2</code>, valid values are 160, 320, 640, 1280, 2560, 3840,
     * 5120, 7680, or 10240 MB/s.</p> </li> <li> <p>For <code>SINGLE_AZ_1</code>, valid
     * values are 64, 128, 256, 512, 1024, 2048, 3072, or 4096 MB/s.</p> </li> </ul>
     */
    inline int GetThroughputCapacity() const { return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline UpdateFileSystemOpenZFSConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    UpdateFileSystemOpenZFSConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const { return m_diskIopsConfiguration; }
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    void SetDiskIopsConfiguration(DiskIopsConfigurationT&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::forward<DiskIopsConfigurationT>(value); }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    UpdateFileSystemOpenZFSConfiguration& WithDiskIopsConfiguration(DiskIopsConfigurationT&& value) { SetDiskIopsConfiguration(std::forward<DiskIopsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for OpenZFS file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddRouteTableIds() const { return m_addRouteTableIds; }
    inline bool AddRouteTableIdsHasBeenSet() const { return m_addRouteTableIdsHasBeenSet; }
    template<typename AddRouteTableIdsT = Aws::Vector<Aws::String>>
    void SetAddRouteTableIds(AddRouteTableIdsT&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = std::forward<AddRouteTableIdsT>(value); }
    template<typename AddRouteTableIdsT = Aws::Vector<Aws::String>>
    UpdateFileSystemOpenZFSConfiguration& WithAddRouteTableIds(AddRouteTableIdsT&& value) { SetAddRouteTableIds(std::forward<AddRouteTableIdsT>(value)); return *this;}
    template<typename AddRouteTableIdsT = Aws::String>
    UpdateFileSystemOpenZFSConfiguration& AddAddRouteTableIds(AddRouteTableIdsT&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.emplace_back(std::forward<AddRouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for OpenZFS file system.
     * You can use the API operation to retrieve the list of VPC route table IDs for a
     * file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveRouteTableIds() const { return m_removeRouteTableIds; }
    inline bool RemoveRouteTableIdsHasBeenSet() const { return m_removeRouteTableIdsHasBeenSet; }
    template<typename RemoveRouteTableIdsT = Aws::Vector<Aws::String>>
    void SetRemoveRouteTableIds(RemoveRouteTableIdsT&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = std::forward<RemoveRouteTableIdsT>(value); }
    template<typename RemoveRouteTableIdsT = Aws::Vector<Aws::String>>
    UpdateFileSystemOpenZFSConfiguration& WithRemoveRouteTableIds(RemoveRouteTableIdsT&& value) { SetRemoveRouteTableIds(std::forward<RemoveRouteTableIdsT>(value)); return *this;}
    template<typename RemoveRouteTableIdsT = Aws::String>
    UpdateFileSystemOpenZFSConfiguration& AddRemoveRouteTableIds(RemoveRouteTableIdsT&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.emplace_back(std::forward<RemoveRouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The configuration for the optional provisioned SSD read cache on file
     * systems that use the Intelligent-Tiering storage class.</p>
     */
    inline const OpenZFSReadCacheConfiguration& GetReadCacheConfiguration() const { return m_readCacheConfiguration; }
    inline bool ReadCacheConfigurationHasBeenSet() const { return m_readCacheConfigurationHasBeenSet; }
    template<typename ReadCacheConfigurationT = OpenZFSReadCacheConfiguration>
    void SetReadCacheConfiguration(ReadCacheConfigurationT&& value) { m_readCacheConfigurationHasBeenSet = true; m_readCacheConfiguration = std::forward<ReadCacheConfigurationT>(value); }
    template<typename ReadCacheConfigurationT = OpenZFSReadCacheConfiguration>
    UpdateFileSystemOpenZFSConfiguration& WithReadCacheConfiguration(ReadCacheConfigurationT&& value) { SetReadCacheConfiguration(std::forward<ReadCacheConfigurationT>(value)); return *this;}
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
    UpdateFileSystemOpenZFSConfiguration& WithEndpointIpv6AddressRange(EndpointIpv6AddressRangeT&& value) { SetEndpointIpv6AddressRange(std::forward<EndpointIpv6AddressRangeT>(value)); return *this;}
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

    int m_throughputCapacity{0};
    bool m_throughputCapacityHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_addRouteTableIds;
    bool m_addRouteTableIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeRouteTableIds;
    bool m_removeRouteTableIdsHasBeenSet = false;

    OpenZFSReadCacheConfiguration m_readCacheConfiguration;
    bool m_readCacheConfigurationHasBeenSet = false;

    Aws::String m_endpointIpv6AddressRange;
    bool m_endpointIpv6AddressRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
