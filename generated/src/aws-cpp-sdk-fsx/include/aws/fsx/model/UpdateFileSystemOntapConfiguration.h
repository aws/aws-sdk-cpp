/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/DiskIopsConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The configuration updates for an Amazon FSx for NetApp ONTAP file
   * system.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystemOntapConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateFileSystemOntapConfiguration
  {
  public:
    AWS_FSX_API UpdateFileSystemOntapConfiguration() = default;
    AWS_FSX_API UpdateFileSystemOntapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateFileSystemOntapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetAutomaticBackupRetentionDays() const { return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline UpdateFileSystemOntapConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const { return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    void SetDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::forward<DailyAutomaticBackupStartTimeT>(value); }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    UpdateFileSystemOntapConfiguration& WithDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { SetDailyAutomaticBackupStartTime(std::forward<DailyAutomaticBackupStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the password for the <code>fsxadmin</code> user by entering a new
     * password. You use the <code>fsxadmin</code> user to access the NetApp ONTAP CLI
     * and REST API to manage your file system resources. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-resources-ontap-apps.html">Managing
     * resources using NetApp Application</a>.</p>
     */
    inline const Aws::String& GetFsxAdminPassword() const { return m_fsxAdminPassword; }
    inline bool FsxAdminPasswordHasBeenSet() const { return m_fsxAdminPasswordHasBeenSet; }
    template<typename FsxAdminPasswordT = Aws::String>
    void SetFsxAdminPassword(FsxAdminPasswordT&& value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword = std::forward<FsxAdminPasswordT>(value); }
    template<typename FsxAdminPasswordT = Aws::String>
    UpdateFileSystemOntapConfiguration& WithFsxAdminPassword(FsxAdminPasswordT&& value) { SetFsxAdminPassword(std::forward<FsxAdminPasswordT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    UpdateFileSystemOntapConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSD IOPS (input output operations per second) configuration for an Amazon
     * FSx for NetApp ONTAP file system. The default is 3 IOPS per GB of storage
     * capacity, but you can provision additional IOPS per GB of storage. The
     * configuration consists of an IOPS mode (<code>AUTOMATIC</code> or
     * <code>USER_PROVISIONED</code>), and in the case of <code>USER_PROVISIONED</code>
     * IOPS, the total number of SSD IOPS provisioned. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/storage-capacity-and-IOPS.html">File
     * system storage capacity and IOPS</a>.</p>
     */
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const { return m_diskIopsConfiguration; }
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    void SetDiskIopsConfiguration(DiskIopsConfigurationT&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::forward<DiskIopsConfigurationT>(value); }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    UpdateFileSystemOntapConfiguration& WithDiskIopsConfiguration(DiskIopsConfigurationT&& value) { SetDiskIopsConfiguration(std::forward<DiskIopsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter a new value to change the amount of throughput capacity for the file
     * system in megabytes per second (MBps). For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/managing-throughput-capacity.html">Managing
     * throughput capacity</a> in the FSx for ONTAP User Guide.</p> <p>Amazon FSx
     * responds with an HTTP status code 400 (Bad Request) for the following
     * conditions:</p> <ul> <li> <p>The value of <code>ThroughputCapacity</code> and
     * <code>ThroughputCapacityPerHAPair</code> are not the same value.</p> </li> <li>
     * <p>The value of <code>ThroughputCapacity</code> when divided by the value of
     * <code>HAPairs</code> is outside of the valid range for
     * <code>ThroughputCapacity</code>.</p> </li> </ul>
     */
    inline int GetThroughputCapacity() const { return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline UpdateFileSystemOntapConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddRouteTableIds() const { return m_addRouteTableIds; }
    inline bool AddRouteTableIdsHasBeenSet() const { return m_addRouteTableIdsHasBeenSet; }
    template<typename AddRouteTableIdsT = Aws::Vector<Aws::String>>
    void SetAddRouteTableIds(AddRouteTableIdsT&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = std::forward<AddRouteTableIdsT>(value); }
    template<typename AddRouteTableIdsT = Aws::Vector<Aws::String>>
    UpdateFileSystemOntapConfiguration& WithAddRouteTableIds(AddRouteTableIdsT&& value) { SetAddRouteTableIds(std::forward<AddRouteTableIdsT>(value)); return *this;}
    template<typename AddRouteTableIdsT = Aws::String>
    UpdateFileSystemOntapConfiguration& AddAddRouteTableIds(AddRouteTableIdsT&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.emplace_back(std::forward<AddRouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveRouteTableIds() const { return m_removeRouteTableIds; }
    inline bool RemoveRouteTableIdsHasBeenSet() const { return m_removeRouteTableIdsHasBeenSet; }
    template<typename RemoveRouteTableIdsT = Aws::Vector<Aws::String>>
    void SetRemoveRouteTableIds(RemoveRouteTableIdsT&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = std::forward<RemoveRouteTableIdsT>(value); }
    template<typename RemoveRouteTableIdsT = Aws::Vector<Aws::String>>
    UpdateFileSystemOntapConfiguration& WithRemoveRouteTableIds(RemoveRouteTableIdsT&& value) { SetRemoveRouteTableIds(std::forward<RemoveRouteTableIdsT>(value)); return *this;}
    template<typename RemoveRouteTableIdsT = Aws::String>
    UpdateFileSystemOntapConfiguration& AddRemoveRouteTableIds(RemoveRouteTableIdsT&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.emplace_back(std::forward<RemoveRouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use to choose the throughput capacity per HA pair, rather than the total
     * throughput for the file system. </p> <p>This field and
     * <code>ThroughputCapacity</code> cannot be defined in the same API call, but one
     * is required.</p> <p>This field and <code>ThroughputCapacity</code> are the same
     * for file systems with one HA pair.</p> <ul> <li> <p>For <code>SINGLE_AZ_1</code>
     * and <code>MULTI_AZ_1</code> file systems, valid values are 128, 256, 512, 1024,
     * 2048, or 4096 MBps.</p> </li> <li> <p>For <code>SINGLE_AZ_2</code>, valid values
     * are 1536, 3072, or 6144 MBps.</p> </li> <li> <p>For <code>MULTI_AZ_2</code>,
     * valid values are 384, 768, 1536, 3072, or 6144 MBps.</p> </li> </ul> <p>Amazon
     * FSx responds with an HTTP status code 400 (Bad Request) for the following
     * conditions:</p> <ul> <li> <p>The value of <code>ThroughputCapacity</code> and
     * <code>ThroughputCapacityPerHAPair</code> are not the same value for file systems
     * with one HA pair.</p> </li> <li> <p>The value of deployment type is
     * <code>SINGLE_AZ_2</code> and <code>ThroughputCapacity</code> /
     * <code>ThroughputCapacityPerHAPair</code> is not a valid HA pair (a value between
     * 1 and 12).</p> </li> <li> <p>The value of
     * <code>ThroughputCapacityPerHAPair</code> is not a valid value.</p> </li> </ul>
     */
    inline int GetThroughputCapacityPerHAPair() const { return m_throughputCapacityPerHAPair; }
    inline bool ThroughputCapacityPerHAPairHasBeenSet() const { return m_throughputCapacityPerHAPairHasBeenSet; }
    inline void SetThroughputCapacityPerHAPair(int value) { m_throughputCapacityPerHAPairHasBeenSet = true; m_throughputCapacityPerHAPair = value; }
    inline UpdateFileSystemOntapConfiguration& WithThroughputCapacityPerHAPair(int value) { SetThroughputCapacityPerHAPair(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to update the number of high-availability (HA) pairs for a
     * second-generation single-AZ file system. If you increase the number of HA pairs
     * for your file system, you must specify proportional increases for
     * <code>StorageCapacity</code>, <code>Iops</code>, and
     * <code>ThroughputCapacity</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/administering-file-systems.html#HA-pairs">High-availability
     * (HA) pairs</a> in the FSx for ONTAP user guide. Block storage protocol support
     * (iSCSI and NVMe over TCP) is disabled on file systems with more than 6 HA pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/supported-fsx-clients.html#using-block-storage">Using
     * block storage protocols</a>.</p>
     */
    inline int GetHAPairs() const { return m_hAPairs; }
    inline bool HAPairsHasBeenSet() const { return m_hAPairsHasBeenSet; }
    inline void SetHAPairs(int value) { m_hAPairsHasBeenSet = true; m_hAPairs = value; }
    inline UpdateFileSystemOntapConfiguration& WithHAPairs(int value) { SetHAPairs(value); return *this;}
    ///@}
  private:

    int m_automaticBackupRetentionDays{0};
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    Aws::String m_fsxAdminPassword;
    bool m_fsxAdminPasswordHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet = false;

    int m_throughputCapacity{0};
    bool m_throughputCapacityHasBeenSet = false;

    Aws::Vector<Aws::String> m_addRouteTableIds;
    bool m_addRouteTableIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeRouteTableIds;
    bool m_removeRouteTableIdsHasBeenSet = false;

    int m_throughputCapacityPerHAPair{0};
    bool m_throughputCapacityPerHAPairHasBeenSet = false;

    int m_hAPairs{0};
    bool m_hAPairsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
