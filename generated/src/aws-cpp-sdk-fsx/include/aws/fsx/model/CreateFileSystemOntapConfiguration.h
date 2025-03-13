/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OntapDeploymentType.h>
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
   * <p>The ONTAP configuration properties of the FSx for ONTAP file system that you
   * are creating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemOntapConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateFileSystemOntapConfiguration
  {
  public:
    AWS_FSX_API CreateFileSystemOntapConfiguration() = default;
    AWS_FSX_API CreateFileSystemOntapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CreateFileSystemOntapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetAutomaticBackupRetentionDays() const { return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline CreateFileSystemOntapConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const { return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    void SetDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::forward<DailyAutomaticBackupStartTimeT>(value); }
    template<typename DailyAutomaticBackupStartTimeT = Aws::String>
    CreateFileSystemOntapConfiguration& WithDailyAutomaticBackupStartTime(DailyAutomaticBackupStartTimeT&& value) { SetDailyAutomaticBackupStartTime(std::forward<DailyAutomaticBackupStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the FSx for ONTAP file system deployment type to use in creating
     * the file system. </p> <ul> <li> <p> <code>MULTI_AZ_1</code> - A high
     * availability file system configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability. This is a first-generation FSx
     * for ONTAP file system.</p> </li> <li> <p> <code>MULTI_AZ_2</code> - A high
     * availability file system configured for Multi-AZ redundancy to tolerate
     * temporary AZ unavailability. This is a second-generation FSx for ONTAP file
     * system.</p> </li> <li> <p> <code>SINGLE_AZ_1</code> - A file system configured
     * for Single-AZ redundancy. This is a first-generation FSx for ONTAP file
     * system.</p> </li> <li> <p> <code>SINGLE_AZ_2</code> - A file system configured
     * with multiple high-availability (HA) pairs for Single-AZ redundancy. This is a
     * second-generation FSx for ONTAP file system.</p> </li> </ul> <p>For information
     * about the use cases for Multi-AZ and Single-AZ deployments, refer to <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/high-availability-AZ.html">Choosing
     * a file system deployment type</a>. </p>
     */
    inline OntapDeploymentType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(OntapDeploymentType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline CreateFileSystemOntapConfiguration& WithDeploymentType(OntapDeploymentType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) Specifies the IP address range in which the endpoints to
     * access your file system will be created. By default in the Amazon FSx API,
     * Amazon FSx selects an unused IP address range for you from the 198.19.* range.
     * By default in the Amazon FSx console, Amazon FSx chooses the last 64 IP
     * addresses from the VPC’s primary CIDR range to use as the endpoint IP address
     * range for the file system. You can have overlapping endpoint IP addresses for
     * file systems deployed in the same VPC/route tables, as long as they don't
     * overlap with any subnet.</p>
     */
    inline const Aws::String& GetEndpointIpAddressRange() const { return m_endpointIpAddressRange; }
    inline bool EndpointIpAddressRangeHasBeenSet() const { return m_endpointIpAddressRangeHasBeenSet; }
    template<typename EndpointIpAddressRangeT = Aws::String>
    void SetEndpointIpAddressRange(EndpointIpAddressRangeT&& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = std::forward<EndpointIpAddressRangeT>(value); }
    template<typename EndpointIpAddressRangeT = Aws::String>
    CreateFileSystemOntapConfiguration& WithEndpointIpAddressRange(EndpointIpAddressRangeT&& value) { SetEndpointIpAddressRange(std::forward<EndpointIpAddressRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user with
     * which you administer your file system using the NetApp ONTAP CLI and REST
     * API.</p>
     */
    inline const Aws::String& GetFsxAdminPassword() const { return m_fsxAdminPassword; }
    inline bool FsxAdminPasswordHasBeenSet() const { return m_fsxAdminPasswordHasBeenSet; }
    template<typename FsxAdminPasswordT = Aws::String>
    void SetFsxAdminPassword(FsxAdminPasswordT&& value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword = std::forward<FsxAdminPasswordT>(value); }
    template<typename FsxAdminPasswordT = Aws::String>
    CreateFileSystemOntapConfiguration& WithFsxAdminPassword(FsxAdminPasswordT&& value) { SetFsxAdminPassword(std::forward<FsxAdminPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSD IOPS configuration for the FSx for ONTAP file system.</p>
     */
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const { return m_diskIopsConfiguration; }
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    void SetDiskIopsConfiguration(DiskIopsConfigurationT&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::forward<DiskIopsConfigurationT>(value); }
    template<typename DiskIopsConfigurationT = DiskIopsConfiguration>
    CreateFileSystemOntapConfiguration& WithDiskIopsConfiguration(DiskIopsConfigurationT&& value) { SetDiskIopsConfiguration(std::forward<DiskIopsConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required when <code>DeploymentType</code> is set to <code>MULTI_AZ_1</code>
     * or <code>MULTI_AZ_2</code>. This specifies the subnet in which you want the
     * preferred file server to be located.</p>
     */
    inline const Aws::String& GetPreferredSubnetId() const { return m_preferredSubnetId; }
    inline bool PreferredSubnetIdHasBeenSet() const { return m_preferredSubnetIdHasBeenSet; }
    template<typename PreferredSubnetIdT = Aws::String>
    void SetPreferredSubnetId(PreferredSubnetIdT&& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = std::forward<PreferredSubnetIdT>(value); }
    template<typename PreferredSubnetIdT = Aws::String>
    CreateFileSystemOntapConfiguration& WithPreferredSubnetId(PreferredSubnetIdT&& value) { SetPreferredSubnetId(std::forward<PreferredSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) Specifies the route tables in which Amazon FSx creates the
     * rules for routing traffic to the correct file server. You should specify all
     * virtual private cloud (VPC) route tables associated with the subnets in which
     * your clients are located. By default, Amazon FSx selects your VPC's default
     * route table.</p>  <p>Amazon FSx manages these route tables for Multi-AZ
     * file systems using tag-based authentication. These route tables are tagged with
     * <code>Key: AmazonFSx; Value: ManagedByAmazonFSx</code>. When creating FSx for
     * ONTAP Multi-AZ file systems using CloudFormation we recommend that you add the
     * <code>Key: AmazonFSx; Value: ManagedByAmazonFSx</code> tag manually.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const { return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    void SetRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::forward<RouteTableIdsT>(value); }
    template<typename RouteTableIdsT = Aws::Vector<Aws::String>>
    CreateFileSystemOntapConfiguration& WithRouteTableIds(RouteTableIdsT&& value) { SetRouteTableIds(std::forward<RouteTableIdsT>(value)); return *this;}
    template<typename RouteTableIdsT = Aws::String>
    CreateFileSystemOntapConfiguration& AddRouteTableIds(RouteTableIdsT&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.emplace_back(std::forward<RouteTableIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Sets the throughput capacity for the file system that you're creating in
     * megabytes per second (MBps). For more information, see <a
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
    inline CreateFileSystemOntapConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const { return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    void SetWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::forward<WeeklyMaintenanceStartTimeT>(value); }
    template<typename WeeklyMaintenanceStartTimeT = Aws::String>
    CreateFileSystemOntapConfiguration& WithWeeklyMaintenanceStartTime(WeeklyMaintenanceStartTimeT&& value) { SetWeeklyMaintenanceStartTime(std::forward<WeeklyMaintenanceStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how many high-availability (HA) pairs of file servers will power
     * your file system. First-generation file systems are powered by 1 HA pair.
     * Second-generation multi-AZ file systems are powered by 1 HA pair. Second
     * generation single-AZ file systems are powered by up to 12 HA pairs. The default
     * value is 1. The value of this property affects the values of
     * <code>StorageCapacity</code>, <code>Iops</code>, and
     * <code>ThroughputCapacity</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/administering-file-systems.html#HA-pairs">High-availability
     * (HA) pairs</a> in the FSx for ONTAP user guide. Block storage protocol support
     * (iSCSI and NVMe over TCP) is disabled on file systems with more than 6 HA pairs.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/supported-fsx-clients.html#using-block-storage">Using
     * block storage protocols</a>. </p> <p>Amazon FSx responds with an HTTP status
     * code 400 (Bad Request) for the following conditions:</p> <ul> <li> <p>The value
     * of <code>HAPairs</code> is less than 1 or greater than 12.</p> </li> <li> <p>The
     * value of <code>HAPairs</code> is greater than 1 and the value of
     * <code>DeploymentType</code> is <code>SINGLE_AZ_1</code>,
     * <code>MULTI_AZ_1</code>, or <code>MULTI_AZ_2</code>.</p> </li> </ul>
     */
    inline int GetHAPairs() const { return m_hAPairs; }
    inline bool HAPairsHasBeenSet() const { return m_hAPairsHasBeenSet; }
    inline void SetHAPairs(int value) { m_hAPairsHasBeenSet = true; m_hAPairs = value; }
    inline CreateFileSystemOntapConfiguration& WithHAPairs(int value) { SetHAPairs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to choose the throughput capacity per HA pair, rather than the total
     * throughput for the file system. </p> <p>You can define either the
     * <code>ThroughputCapacityPerHAPair</code> or the <code>ThroughputCapacity</code>
     * when creating a file system, but not both.</p> <p>This field and
     * <code>ThroughputCapacity</code> are the same for file systems powered by one HA
     * pair.</p> <ul> <li> <p>For <code>SINGLE_AZ_1</code> and <code>MULTI_AZ_1</code>
     * file systems, valid values are 128, 256, 512, 1024, 2048, or 4096 MBps.</p>
     * </li> <li> <p>For <code>SINGLE_AZ_2</code>, valid values are 1536, 3072, or 6144
     * MBps.</p> </li> <li> <p>For <code>MULTI_AZ_2</code>, valid values are 384, 768,
     * 1536, 3072, or 6144 MBps.</p> </li> </ul> <p>Amazon FSx responds with an HTTP
     * status code 400 (Bad Request) for the following conditions:</p> <ul> <li> <p>The
     * value of <code>ThroughputCapacity</code> and
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
    inline CreateFileSystemOntapConfiguration& WithThroughputCapacityPerHAPair(int value) { SetThroughputCapacityPerHAPair(value); return *this;}
    ///@}
  private:

    int m_automaticBackupRetentionDays{0};
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    OntapDeploymentType m_deploymentType{OntapDeploymentType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_endpointIpAddressRange;
    bool m_endpointIpAddressRangeHasBeenSet = false;

    Aws::String m_fsxAdminPassword;
    bool m_fsxAdminPasswordHasBeenSet = false;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet = false;

    Aws::String m_preferredSubnetId;
    bool m_preferredSubnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet = false;

    int m_throughputCapacity{0};
    bool m_throughputCapacityHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    int m_hAPairs{0};
    bool m_hAPairsHasBeenSet = false;

    int m_throughputCapacityPerHAPair{0};
    bool m_throughputCapacityPerHAPairHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
