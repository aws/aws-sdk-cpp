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


    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    
    inline OntapFileSystemConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    
    inline OntapFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    
    inline OntapFileSystemConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    
    inline OntapFileSystemConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    /**
     * <p>Specifies the FSx for ONTAP file system deployment type in use in the file
     * system. </p> <ul> <li> <p> <code>MULTI_AZ_1</code> - (Default) A high
     * availability file system configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability. </p> </li> <li> <p>
     * <code>SINGLE_AZ_1</code> - A file system configured for Single-AZ
     * redundancy.</p> </li> </ul> <p>For information about the use cases for Multi-AZ
     * and Single-AZ deployments, refer to <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/high-availability-multiAZ.html">Choosing
     * Multi-AZ or Single-AZ file system deployment</a>. </p>
     */
    inline const OntapDeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>Specifies the FSx for ONTAP file system deployment type in use in the file
     * system. </p> <ul> <li> <p> <code>MULTI_AZ_1</code> - (Default) A high
     * availability file system configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability. </p> </li> <li> <p>
     * <code>SINGLE_AZ_1</code> - A file system configured for Single-AZ
     * redundancy.</p> </li> </ul> <p>For information about the use cases for Multi-AZ
     * and Single-AZ deployments, refer to <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/high-availability-multiAZ.html">Choosing
     * Multi-AZ or Single-AZ file system deployment</a>. </p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>Specifies the FSx for ONTAP file system deployment type in use in the file
     * system. </p> <ul> <li> <p> <code>MULTI_AZ_1</code> - (Default) A high
     * availability file system configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability. </p> </li> <li> <p>
     * <code>SINGLE_AZ_1</code> - A file system configured for Single-AZ
     * redundancy.</p> </li> </ul> <p>For information about the use cases for Multi-AZ
     * and Single-AZ deployments, refer to <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/high-availability-multiAZ.html">Choosing
     * Multi-AZ or Single-AZ file system deployment</a>. </p>
     */
    inline void SetDeploymentType(const OntapDeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>Specifies the FSx for ONTAP file system deployment type in use in the file
     * system. </p> <ul> <li> <p> <code>MULTI_AZ_1</code> - (Default) A high
     * availability file system configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability. </p> </li> <li> <p>
     * <code>SINGLE_AZ_1</code> - A file system configured for Single-AZ
     * redundancy.</p> </li> </ul> <p>For information about the use cases for Multi-AZ
     * and Single-AZ deployments, refer to <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/high-availability-multiAZ.html">Choosing
     * Multi-AZ or Single-AZ file system deployment</a>. </p>
     */
    inline void SetDeploymentType(OntapDeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>Specifies the FSx for ONTAP file system deployment type in use in the file
     * system. </p> <ul> <li> <p> <code>MULTI_AZ_1</code> - (Default) A high
     * availability file system configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability. </p> </li> <li> <p>
     * <code>SINGLE_AZ_1</code> - A file system configured for Single-AZ
     * redundancy.</p> </li> </ul> <p>For information about the use cases for Multi-AZ
     * and Single-AZ deployments, refer to <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/high-availability-multiAZ.html">Choosing
     * Multi-AZ or Single-AZ file system deployment</a>. </p>
     */
    inline OntapFileSystemConfiguration& WithDeploymentType(const OntapDeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>Specifies the FSx for ONTAP file system deployment type in use in the file
     * system. </p> <ul> <li> <p> <code>MULTI_AZ_1</code> - (Default) A high
     * availability file system configured for Multi-AZ redundancy to tolerate
     * temporary Availability Zone (AZ) unavailability. </p> </li> <li> <p>
     * <code>SINGLE_AZ_1</code> - A file system configured for Single-AZ
     * redundancy.</p> </li> </ul> <p>For information about the use cases for Multi-AZ
     * and Single-AZ deployments, refer to <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/high-availability-multiAZ.html">Choosing
     * Multi-AZ or Single-AZ file system deployment</a>. </p>
     */
    inline OntapFileSystemConfiguration& WithDeploymentType(OntapDeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>(Multi-AZ only) The IP address range in which the endpoints to access your
     * file system are created.</p>  <p>The Endpoint IP address range you
     * select for your file system must exist outside the VPC's CIDR range and must be
     * at least /30 or larger. If you do not specify this optional parameter, Amazon
     * FSx will automatically select a CIDR block for you.</p> 
     */
    inline const Aws::String& GetEndpointIpAddressRange() const{ return m_endpointIpAddressRange; }

    /**
     * <p>(Multi-AZ only) The IP address range in which the endpoints to access your
     * file system are created.</p>  <p>The Endpoint IP address range you
     * select for your file system must exist outside the VPC's CIDR range and must be
     * at least /30 or larger. If you do not specify this optional parameter, Amazon
     * FSx will automatically select a CIDR block for you.</p> 
     */
    inline bool EndpointIpAddressRangeHasBeenSet() const { return m_endpointIpAddressRangeHasBeenSet; }

    /**
     * <p>(Multi-AZ only) The IP address range in which the endpoints to access your
     * file system are created.</p>  <p>The Endpoint IP address range you
     * select for your file system must exist outside the VPC's CIDR range and must be
     * at least /30 or larger. If you do not specify this optional parameter, Amazon
     * FSx will automatically select a CIDR block for you.</p> 
     */
    inline void SetEndpointIpAddressRange(const Aws::String& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = value; }

    /**
     * <p>(Multi-AZ only) The IP address range in which the endpoints to access your
     * file system are created.</p>  <p>The Endpoint IP address range you
     * select for your file system must exist outside the VPC's CIDR range and must be
     * at least /30 or larger. If you do not specify this optional parameter, Amazon
     * FSx will automatically select a CIDR block for you.</p> 
     */
    inline void SetEndpointIpAddressRange(Aws::String&& value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange = std::move(value); }

    /**
     * <p>(Multi-AZ only) The IP address range in which the endpoints to access your
     * file system are created.</p>  <p>The Endpoint IP address range you
     * select for your file system must exist outside the VPC's CIDR range and must be
     * at least /30 or larger. If you do not specify this optional parameter, Amazon
     * FSx will automatically select a CIDR block for you.</p> 
     */
    inline void SetEndpointIpAddressRange(const char* value) { m_endpointIpAddressRangeHasBeenSet = true; m_endpointIpAddressRange.assign(value); }

    /**
     * <p>(Multi-AZ only) The IP address range in which the endpoints to access your
     * file system are created.</p>  <p>The Endpoint IP address range you
     * select for your file system must exist outside the VPC's CIDR range and must be
     * at least /30 or larger. If you do not specify this optional parameter, Amazon
     * FSx will automatically select a CIDR block for you.</p> 
     */
    inline OntapFileSystemConfiguration& WithEndpointIpAddressRange(const Aws::String& value) { SetEndpointIpAddressRange(value); return *this;}

    /**
     * <p>(Multi-AZ only) The IP address range in which the endpoints to access your
     * file system are created.</p>  <p>The Endpoint IP address range you
     * select for your file system must exist outside the VPC's CIDR range and must be
     * at least /30 or larger. If you do not specify this optional parameter, Amazon
     * FSx will automatically select a CIDR block for you.</p> 
     */
    inline OntapFileSystemConfiguration& WithEndpointIpAddressRange(Aws::String&& value) { SetEndpointIpAddressRange(std::move(value)); return *this;}

    /**
     * <p>(Multi-AZ only) The IP address range in which the endpoints to access your
     * file system are created.</p>  <p>The Endpoint IP address range you
     * select for your file system must exist outside the VPC's CIDR range and must be
     * at least /30 or larger. If you do not specify this optional parameter, Amazon
     * FSx will automatically select a CIDR block for you.</p> 
     */
    inline OntapFileSystemConfiguration& WithEndpointIpAddressRange(const char* value) { SetEndpointIpAddressRange(value); return *this;}


    /**
     * <p>The <code>Management</code> and <code>Intercluster</code> endpoints that are
     * used to access data or to manage the file system using the NetApp ONTAP CLI,
     * REST API, or NetApp SnapMirror.</p>
     */
    inline const FileSystemEndpoints& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The <code>Management</code> and <code>Intercluster</code> endpoints that are
     * used to access data or to manage the file system using the NetApp ONTAP CLI,
     * REST API, or NetApp SnapMirror.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>The <code>Management</code> and <code>Intercluster</code> endpoints that are
     * used to access data or to manage the file system using the NetApp ONTAP CLI,
     * REST API, or NetApp SnapMirror.</p>
     */
    inline void SetEndpoints(const FileSystemEndpoints& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>The <code>Management</code> and <code>Intercluster</code> endpoints that are
     * used to access data or to manage the file system using the NetApp ONTAP CLI,
     * REST API, or NetApp SnapMirror.</p>
     */
    inline void SetEndpoints(FileSystemEndpoints&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>The <code>Management</code> and <code>Intercluster</code> endpoints that are
     * used to access data or to manage the file system using the NetApp ONTAP CLI,
     * REST API, or NetApp SnapMirror.</p>
     */
    inline OntapFileSystemConfiguration& WithEndpoints(const FileSystemEndpoints& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The <code>Management</code> and <code>Intercluster</code> endpoints that are
     * used to access data or to manage the file system using the NetApp ONTAP CLI,
     * REST API, or NetApp SnapMirror.</p>
     */
    inline OntapFileSystemConfiguration& WithEndpoints(FileSystemEndpoints&& value) { SetEndpoints(std::move(value)); return *this;}


    /**
     * <p>The SSD IOPS configuration for the ONTAP file system, specifying the number
     * of provisioned IOPS and the provision mode.</p>
     */
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const{ return m_diskIopsConfiguration; }

    /**
     * <p>The SSD IOPS configuration for the ONTAP file system, specifying the number
     * of provisioned IOPS and the provision mode.</p>
     */
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }

    /**
     * <p>The SSD IOPS configuration for the ONTAP file system, specifying the number
     * of provisioned IOPS and the provision mode.</p>
     */
    inline void SetDiskIopsConfiguration(const DiskIopsConfiguration& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = value; }

    /**
     * <p>The SSD IOPS configuration for the ONTAP file system, specifying the number
     * of provisioned IOPS and the provision mode.</p>
     */
    inline void SetDiskIopsConfiguration(DiskIopsConfiguration&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::move(value); }

    /**
     * <p>The SSD IOPS configuration for the ONTAP file system, specifying the number
     * of provisioned IOPS and the provision mode.</p>
     */
    inline OntapFileSystemConfiguration& WithDiskIopsConfiguration(const DiskIopsConfiguration& value) { SetDiskIopsConfiguration(value); return *this;}

    /**
     * <p>The SSD IOPS configuration for the ONTAP file system, specifying the number
     * of provisioned IOPS and the provision mode.</p>
     */
    inline OntapFileSystemConfiguration& WithDiskIopsConfiguration(DiskIopsConfiguration&& value) { SetDiskIopsConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetPreferredSubnetId() const{ return m_preferredSubnetId; }

    
    inline bool PreferredSubnetIdHasBeenSet() const { return m_preferredSubnetIdHasBeenSet; }

    
    inline void SetPreferredSubnetId(const Aws::String& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = value; }

    
    inline void SetPreferredSubnetId(Aws::String&& value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId = std::move(value); }

    
    inline void SetPreferredSubnetId(const char* value) { m_preferredSubnetIdHasBeenSet = true; m_preferredSubnetId.assign(value); }

    
    inline OntapFileSystemConfiguration& WithPreferredSubnetId(const Aws::String& value) { SetPreferredSubnetId(value); return *this;}

    
    inline OntapFileSystemConfiguration& WithPreferredSubnetId(Aws::String&& value) { SetPreferredSubnetId(std::move(value)); return *this;}

    
    inline OntapFileSystemConfiguration& WithPreferredSubnetId(const char* value) { SetPreferredSubnetId(value); return *this;}


    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRouteTableIds() const{ return m_routeTableIds; }

    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline bool RouteTableIdsHasBeenSet() const { return m_routeTableIdsHasBeenSet; }

    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline void SetRouteTableIds(const Aws::Vector<Aws::String>& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = value; }

    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline void SetRouteTableIds(Aws::Vector<Aws::String>&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds = std::move(value); }

    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline OntapFileSystemConfiguration& WithRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRouteTableIds(value); return *this;}

    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline OntapFileSystemConfiguration& WithRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline OntapFileSystemConfiguration& AddRouteTableIds(const Aws::String& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }

    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline OntapFileSystemConfiguration& AddRouteTableIds(Aws::String&& value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Multi-AZ only) The VPC route tables in which your file system's endpoints
     * are created.</p>
     */
    inline OntapFileSystemConfiguration& AddRouteTableIds(const char* value) { m_routeTableIdsHasBeenSet = true; m_routeTableIds.push_back(value); return *this; }


    
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }

    
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }

    
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }

    
    inline OntapFileSystemConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}


    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    
    inline OntapFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    
    inline OntapFileSystemConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    
    inline OntapFileSystemConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}

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
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
