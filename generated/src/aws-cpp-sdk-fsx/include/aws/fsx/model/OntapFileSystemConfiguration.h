/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/OntapDeploymentType.h>
#include <aws/fsx/model/FileSystemEndpoints.h>
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
   * <p>Configuration for the FSx for NetApp ONTAP file system.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/OntapFileSystemConfiguration">AWS
   * API Reference</a></p>
   */
  class OntapFileSystemConfiguration
  {
  public:
    AWS_FSX_API OntapFileSystemConfiguration();
    AWS_FSX_API OntapFileSystemConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API OntapFileSystemConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }
    inline OntapFileSystemConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }
    inline OntapFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}
    inline OntapFileSystemConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}
    inline OntapFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the FSx for ONTAP file system deployment type in use in the file
     * system. </p> <ul> <li> <p> <code>MULTI_AZ_1</code> - A high availability file
     * system configured for Multi-AZ redundancy to tolerate temporary Availability
     * Zone (AZ) unavailability. This is a first-generation FSx for ONTAP file
     * system.</p> </li> <li> <p> <code>MULTI_AZ_2</code> - A high availability file
     * system configured for Multi-AZ redundancy to tolerate temporary AZ
     * unavailability. This is a second-generation FSx for ONTAP file system.</p> </li>
     * <li> <p> <code>SINGLE_AZ_1</code> - A file system configured for Single-AZ
     * redundancy. This is a first-generation FSx for ONTAP file system.</p> </li> <li>
     * <p> <code>SINGLE_AZ_2</code> - A file system configured with multiple
     * high-availability (HA) pairs for Single-AZ redundancy. This is a
     * second-generation FSx for ONTAP file system.</p> </li> </ul> <p>For information
     * about the use cases for Multi-AZ and Single-AZ deployments, refer to <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/high-availability-multiAZ.html">Choosing
     * Multi-AZ or Single-AZ file system deployment</a>. </p>
     */
    inline const OntapDeploymentType& GetDeploymentType() const{ return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(const OntapDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline void SetDeploymentType(OntapDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }
    inline OntapFileSystemConfiguration& WithDeploymentType(const OntapDeploymentType& value) { SetDeploymentType(value); return *this;}
    inline OntapFileSystemConfiguration& WithDeploymentType(OntapDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) Specifies the IP address range in which the endpoints to
     * access your file system will be created. By default in the Amazon FSx API,
     * Amazon FSx selects an unused IP address range for you from the 198.19.* range.
     * By default in the Amazon FSx console, Amazon FSx chooses the last 64 IP
     * addresses from the VPC’s primary CIDR range to use as the endpoint IP address
     * range for the file system. You can have overlapping endpoint IP addresses for
     * file systems deployed in the same VPC/route tables.</p>
     */
    inline const Aws::String& GetEndpointIpAddressRange() const{ return m_endpointIpAddressRange; }
    inline bool EndpointIpAddressRangeHasBeenSet() const { return m_endpointIpAddressRangeHasBeenSet; }
    inline void SetEndpointIpAddressRange(const Aws::String& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = value; }
    inline void SetEndpointIpAddressRange(Aws::String&& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = std::move(value); }
    inline void SetEndpointIpAddressRange(const char* value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange.assign(value); }
    inline OntapFileSystemConfiguration& WithEndpointIpAddressRange(const Aws::String& value) { SetEndpointIpAddressRange(value); return *this;}
    inline OntapFileSystemConfiguration& WithEndpointIpAddressRange(Aws::String&& value) { SetEndpointIpAddressRange(std::move(value)); return *this;}
    inline OntapFileSystemConfiguration& WithEndpointIpAddressRange(const char* value) { SetEndpointIpAddressRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Management</code> and <code>Intercluster</code> endpoints that are
     * used to access data or to manage the file system using the NetApp ONTAP CLI,
     * REST API, or NetApp SnapMirror.</p>
     */
    inline const FileSystemEndpoints& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const FileSystemEndpoints& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(FileSystemEndpoints&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline OntapFileSystemConfiguration& WithEndpoints(const FileSystemEndpoints& value) { SetEndpoints(value); return *this;}
    inline OntapFileSystemConfiguration& WithEndpoints(FileSystemEndpoints&& value) { SetEndpoints(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SSD IOPS configuration for the ONTAP file system, specifying the number
     * of provisioned IOPS and the provision mode.</p>
     */
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const{ return m_diskIopsConfiguration; }
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }
    inline void SetDiskIopsConfiguration(const DiskIopsConfiguration& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = value; }
    inline void SetDiskIopsConfiguration(DiskIopsConfiguration&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::move(value); }
    inline OntapFileSystemConfiguration& WithDiskIopsConfiguration(const DiskIopsConfiguration& value) { SetDiskIopsConfiguration(value); return *this;}
    inline OntapFileSystemConfiguration& WithDiskIopsConfiguration(DiskIopsConfiguration&& value) { SetDiskIopsConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPreferredSubnetId() const{ return m_preferredSubnetId; }
    inline bool PreferredSubnetIdHasBeenSet() const { return m_preferredSubnetIdHasBeenSet; }
    inline void SetPreferredSubnetId(const Aws::String& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = value; }
    inline void SetPreferredSubnetId(Aws::String&& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = std::move(value); }
    inline void SetPreferredSubnetId(const char* value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId.assign(value); }
    inline OntapFileSystemConfiguration& WithPreferredSubnetId(const Aws::String& value) { SetPreferredSubnetId(value); return *this;}
    inline OntapFileSystemConfiguration& WithPreferredSubnetId(Aws::String&& value) { SetPreferredSubnetId(std::move(value)); return *this;}
    inline OntapFileSystemConfiguration& WithPreferredSubnetId(const char* value) { SetPreferredSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::move(value); }
    inline OntapFileSystemConfiguration& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}
    inline OntapFileSystemConfiguration& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(std::move(value)); return *this;}
    inline OntapFileSystemConfiguration& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }
    inline OntapFileSystemConfiguration& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(std::move(value)); return *this; }
    inline OntapFileSystemConfiguration& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }
    inline OntapFileSystemConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }
    inline OntapFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}
    inline OntapFileSystemConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}
    inline OntapFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>You can use the <code>fsxadmin</code> user account to access the NetApp ONTAP
     * CLI and REST API. The password value is always redacted in the response.</p>
     */
    inline const Aws::String& GetFsxAdminPassword() const{ return m_fsxAdminPassword; }
    inline bool FsxAdminPasswordHasBeenSet() const { return m_fsxAdminPasswordHasBeenSet; }
    inline void SetFsxAdminPassword(const Aws::String& value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword = value; }
    inline void SetFsxAdminPassword(Aws::String&& value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword = std::move(value); }
    inline void SetFsxAdminPassword(const char* value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword.assign(value); }
    inline OntapFileSystemConfiguration& WithFsxAdminPassword(const Aws::String& value) { SetFsxAdminPassword(value); return *this;}
    inline OntapFileSystemConfiguration& WithFsxAdminPassword(Aws::String&& value) { SetFsxAdminPassword(std::move(value)); return *this;}
    inline OntapFileSystemConfiguration& WithFsxAdminPassword(const char* value) { SetFsxAdminPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how many high-availability (HA) file server pairs the file system
     * will have. The default value is 1. The value of this property affects the values
     * of <code>StorageCapacity</code>, <code>Iops</code>, and
     * <code>ThroughputCapacity</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/HA-pairs.html">High-availability
     * (HA) pairs</a> in the FSx for ONTAP user guide.</p> <p>Amazon FSx responds with
     * an HTTP status code 400 (Bad Request) for the following conditions:</p> <ul>
     * <li> <p>The value of <code>HAPairs</code> is less than 1 or greater than 12.</p>
     * </li> <li> <p>The value of <code>HAPairs</code> is greater than 1 and the value
     * of <code>DeploymentType</code> is <code>SINGLE_AZ_1</code>,
     * <code>MULTI_AZ_1</code>, or <code>MULTI_AZ_2</code>.</p> </li> </ul>
     */
    inline int GetHAPairs() const{ return m_hAPairs; }
    inline bool HAPairsHasBeenSet() const { return m_hAPairsHasBeenSet; }
    inline void SetHAPairs(int value) { m_hAPairsHasBeenSet = true; m_hAPairs = value; }
    inline OntapFileSystemConfiguration& WithHAPairs(int value) { SetHAPairs(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use to choose the throughput capacity per HA pair. When the value of
     * <code>HAPairs</code> is equal to 1, the value of
     * <code>ThroughputCapacityPerHAPair</code> is the total throughput for the file
     * system.</p> <p>This field and <code>ThroughputCapacity</code> cannot be defined
     * in the same API call, but one is required.</p> <p>This field and
     * <code>ThroughputCapacity</code> are the same for file systems with one HA
     * pair.</p> <ul> <li> <p>For <code>SINGLE_AZ_1</code> and <code>MULTI_AZ_1</code>
     * file systems, valid values are 128, 256, 512, 1024, 2048, or 4096 MBps.</p>
     * </li> <li> <p>For <code>SINGLE_AZ_2</code>, valid values are 1536, 3072, or 6144
     * MBps.</p> </li> <li> <p>For <code>MULTI_AZ_2</code>, valid values are 384, 768,
     * 1536, 3072, or 6144 MBps.</p> </li> </ul> <p>Amazon FSx responds with an HTTP
     * status code 400 (Bad Request) for the following conditions:</p> <ul> <li> <p>The
     * value of <code>ThroughputCapacity</code> and
     * <code>ThroughputCapacityPerHAPair</code> are not the same value.</p> </li> <li>
     * <p>The value of deployment type is <code>SINGLE_AZ_2</code> and
     * <code>ThroughputCapacity</code> / <code>ThroughputCapacityPerHAPair</code> is
     * not a valid HA pair (a value between 1 and 12).</p> </li> <li> <p>The value of
     * <code>ThroughputCapacityPerHAPair</code> is not a valid value.</p> </li> </ul>
     */
    inline int GetThroughputCapacityPerHAPair() const{ return m_throughputCapacityPerHAPair; }
    inline bool ThroughputCapacityPerHAPairHasBeenSet() const { return m_throughputCapacityPerHAPairHasBeenSet; }
    inline void SetThroughputCapacityPerHAPair(int value) { m_throughputCapacityPerHAPairHasBeenSet = true; m_throughputCapacityPerHAPair = value; }
    inline OntapFileSystemConfiguration& WithThroughputCapacityPerHAPair(int value) { SetThroughputCapacityPerHAPair(value); return *this;}
    ///@}
  private:

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    OntapDeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_endpointIpAddressRange;
    bool m_endpointIpAddressRangeHasBeenSet = false;

    FileSystemEndpoints m_endpoints;
    bool m_endpointsHasBeenSet = false;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet = false;

    Aws::String m_preferredSubnetId;
    bool m_preferredSubnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_routeTableIds;
    bool m_routeTableIdsHasBeenSet = false;

    int m_throughputCapacity;
    bool m_throughputCapacityHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    Aws::String m_fsxAdminPassword;
    bool m_fsxAdminPasswordHasBeenSet = false;

    int m_hAPairs;
    bool m_hAPairsHasBeenSet = false;

    int m_throughputCapacityPerHAPair;
    bool m_throughputCapacityPerHAPairHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
