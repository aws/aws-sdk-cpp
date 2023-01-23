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
    AWS_FSX_API UpdateFileSystemOntapConfiguration();
    AWS_FSX_API UpdateFileSystemOntapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateFileSystemOntapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline int GetAutomaticBackupRetentionDays() const{ return m_automaticBackupRetentionDays; }

    
    inline bool AutomaticBackupRetentionDaysHasBeenSet() const { return m_automaticBackupRetentionDaysHasBeenSet; }

    
    inline void SetAutomaticBackupRetentionDays(int value) { m_automaticBackupRetentionDaysHasBeenSet = true; m_automaticBackupRetentionDays = value; }

    
    inline UpdateFileSystemOntapConfiguration& WithAutomaticBackupRetentionDays(int value) { SetAutomaticBackupRetentionDays(value); return *this;}


    
    inline const Aws::String& GetDailyAutomaticBackupStartTime() const{ return m_dailyAutomaticBackupStartTime; }

    
    inline bool DailyAutomaticBackupStartTimeHasBeenSet() const { return m_dailyAutomaticBackupStartTimeHasBeenSet; }

    
    inline void SetDailyAutomaticBackupStartTime(const Aws::String& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = value; }

    
    inline void SetDailyAutomaticBackupStartTime(Aws::String&& value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime = std::move(value); }

    
    inline void SetDailyAutomaticBackupStartTime(const char* value) { m_dailyAutomaticBackupStartTimeHasBeenSet = true; m_dailyAutomaticBackupStartTime.assign(value); }

    
    inline UpdateFileSystemOntapConfiguration& WithDailyAutomaticBackupStartTime(const Aws::String& value) { SetDailyAutomaticBackupStartTime(value); return *this;}

    
    inline UpdateFileSystemOntapConfiguration& WithDailyAutomaticBackupStartTime(Aws::String&& value) { SetDailyAutomaticBackupStartTime(std::move(value)); return *this;}

    
    inline UpdateFileSystemOntapConfiguration& WithDailyAutomaticBackupStartTime(const char* value) { SetDailyAutomaticBackupStartTime(value); return *this;}


    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user.</p>
     */
    inline const Aws::String& GetFsxAdminPassword() const{ return m_fsxAdminPassword; }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user.</p>
     */
    inline bool FsxAdminPasswordHasBeenSet() const { return m_fsxAdminPasswordHasBeenSet; }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user.</p>
     */
    inline void SetFsxAdminPassword(const Aws::String& value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword = value; }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user.</p>
     */
    inline void SetFsxAdminPassword(Aws::String&& value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword = std::move(value); }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user.</p>
     */
    inline void SetFsxAdminPassword(const char* value) { m_fsxAdminPasswordHasBeenSet = true; m_fsxAdminPassword.assign(value); }

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithFsxAdminPassword(const Aws::String& value) { SetFsxAdminPassword(value); return *this;}

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithFsxAdminPassword(Aws::String&& value) { SetFsxAdminPassword(std::move(value)); return *this;}

    /**
     * <p>The ONTAP administrative password for the <code>fsxadmin</code> user.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithFsxAdminPassword(const char* value) { SetFsxAdminPassword(value); return *this;}


    
    inline const Aws::String& GetWeeklyMaintenanceStartTime() const{ return m_weeklyMaintenanceStartTime; }

    
    inline bool WeeklyMaintenanceStartTimeHasBeenSet() const { return m_weeklyMaintenanceStartTimeHasBeenSet; }

    
    inline void SetWeeklyMaintenanceStartTime(const Aws::String& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = value; }

    
    inline void SetWeeklyMaintenanceStartTime(Aws::String&& value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime = std::move(value); }

    
    inline void SetWeeklyMaintenanceStartTime(const char* value) { m_weeklyMaintenanceStartTimeHasBeenSet = true; m_weeklyMaintenanceStartTime.assign(value); }

    
    inline UpdateFileSystemOntapConfiguration& WithWeeklyMaintenanceStartTime(const Aws::String& value) { SetWeeklyMaintenanceStartTime(value); return *this;}

    
    inline UpdateFileSystemOntapConfiguration& WithWeeklyMaintenanceStartTime(Aws::String&& value) { SetWeeklyMaintenanceStartTime(std::move(value)); return *this;}

    
    inline UpdateFileSystemOntapConfiguration& WithWeeklyMaintenanceStartTime(const char* value) { SetWeeklyMaintenanceStartTime(value); return *this;}


    /**
     * <p>The SSD IOPS (input/output operations per second) configuration for an Amazon
     * FSx for NetApp ONTAP file system. The default is 3 IOPS per GB of storage
     * capacity, but you can provision additional IOPS per GB of storage. The
     * configuration consists of an IOPS mode (<code>AUTOMATIC</code> or
     * <code>USER_PROVISIONED</code>), and in the case of <code>USER_PROVISIONED</code>
     * IOPS, the total number of SSD IOPS provisioned.</p>
     */
    inline const DiskIopsConfiguration& GetDiskIopsConfiguration() const{ return m_diskIopsConfiguration; }

    /**
     * <p>The SSD IOPS (input/output operations per second) configuration for an Amazon
     * FSx for NetApp ONTAP file system. The default is 3 IOPS per GB of storage
     * capacity, but you can provision additional IOPS per GB of storage. The
     * configuration consists of an IOPS mode (<code>AUTOMATIC</code> or
     * <code>USER_PROVISIONED</code>), and in the case of <code>USER_PROVISIONED</code>
     * IOPS, the total number of SSD IOPS provisioned.</p>
     */
    inline bool DiskIopsConfigurationHasBeenSet() const { return m_diskIopsConfigurationHasBeenSet; }

    /**
     * <p>The SSD IOPS (input/output operations per second) configuration for an Amazon
     * FSx for NetApp ONTAP file system. The default is 3 IOPS per GB of storage
     * capacity, but you can provision additional IOPS per GB of storage. The
     * configuration consists of an IOPS mode (<code>AUTOMATIC</code> or
     * <code>USER_PROVISIONED</code>), and in the case of <code>USER_PROVISIONED</code>
     * IOPS, the total number of SSD IOPS provisioned.</p>
     */
    inline void SetDiskIopsConfiguration(const DiskIopsConfiguration& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = value; }

    /**
     * <p>The SSD IOPS (input/output operations per second) configuration for an Amazon
     * FSx for NetApp ONTAP file system. The default is 3 IOPS per GB of storage
     * capacity, but you can provision additional IOPS per GB of storage. The
     * configuration consists of an IOPS mode (<code>AUTOMATIC</code> or
     * <code>USER_PROVISIONED</code>), and in the case of <code>USER_PROVISIONED</code>
     * IOPS, the total number of SSD IOPS provisioned.</p>
     */
    inline void SetDiskIopsConfiguration(DiskIopsConfiguration&& value) { m_diskIopsConfigurationHasBeenSet = true; m_diskIopsConfiguration = std::move(value); }

    /**
     * <p>The SSD IOPS (input/output operations per second) configuration for an Amazon
     * FSx for NetApp ONTAP file system. The default is 3 IOPS per GB of storage
     * capacity, but you can provision additional IOPS per GB of storage. The
     * configuration consists of an IOPS mode (<code>AUTOMATIC</code> or
     * <code>USER_PROVISIONED</code>), and in the case of <code>USER_PROVISIONED</code>
     * IOPS, the total number of SSD IOPS provisioned.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithDiskIopsConfiguration(const DiskIopsConfiguration& value) { SetDiskIopsConfiguration(value); return *this;}

    /**
     * <p>The SSD IOPS (input/output operations per second) configuration for an Amazon
     * FSx for NetApp ONTAP file system. The default is 3 IOPS per GB of storage
     * capacity, but you can provision additional IOPS per GB of storage. The
     * configuration consists of an IOPS mode (<code>AUTOMATIC</code> or
     * <code>USER_PROVISIONED</code>), and in the case of <code>USER_PROVISIONED</code>
     * IOPS, the total number of SSD IOPS provisioned.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithDiskIopsConfiguration(DiskIopsConfiguration&& value) { SetDiskIopsConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the throughput of an FSx for NetApp ONTAP file system, measured in
     * megabytes per second (MBps). Valid values are 128, 256, 512, 1024, 2048, and
     * 4096 MBps.</p>
     */
    inline int GetThroughputCapacity() const{ return m_throughputCapacity; }

    /**
     * <p>Specifies the throughput of an FSx for NetApp ONTAP file system, measured in
     * megabytes per second (MBps). Valid values are 128, 256, 512, 1024, 2048, and
     * 4096 MBps.</p>
     */
    inline bool ThroughputCapacityHasBeenSet() const { return m_throughputCapacityHasBeenSet; }

    /**
     * <p>Specifies the throughput of an FSx for NetApp ONTAP file system, measured in
     * megabytes per second (MBps). Valid values are 128, 256, 512, 1024, 2048, and
     * 4096 MBps.</p>
     */
    inline void SetThroughputCapacity(int value) { m_throughputCapacityHasBeenSet = true; m_throughputCapacity = value; }

    /**
     * <p>Specifies the throughput of an FSx for NetApp ONTAP file system, measured in
     * megabytes per second (MBps). Valid values are 128, 256, 512, 1024, 2048, and
     * 4096 MBps.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithThroughputCapacity(int value) { SetThroughputCapacity(value); return *this;}


    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddRouteTableIds() const{ return m_addRouteTableIds; }

    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline bool AddRouteTableIdsHasBeenSet() const { return m_addRouteTableIdsHasBeenSet; }

    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline void SetAddRouteTableIds(const Aws::Vector<Aws::String>& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = value; }

    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline void SetAddRouteTableIds(Aws::Vector<Aws::String>&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds = std::move(value); }

    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithAddRouteTableIds(const Aws::Vector<Aws::String>& value) { SetAddRouteTableIds(value); return *this;}

    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithAddRouteTableIds(Aws::Vector<Aws::String>&& value) { SetAddRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& AddAddRouteTableIds(const Aws::String& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(value); return *this; }

    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& AddAddRouteTableIds(Aws::String&& value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Multi-AZ only) A list of IDs of new virtual private cloud (VPC) route tables
     * to associate (add) with your Amazon FSx for NetApp ONTAP file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& AddAddRouteTableIds(const char* value) { m_addRouteTableIdsHasBeenSet = true; m_addRouteTableIds.push_back(value); return *this; }


    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveRouteTableIds() const{ return m_removeRouteTableIds; }

    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline bool RemoveRouteTableIdsHasBeenSet() const { return m_removeRouteTableIdsHasBeenSet; }

    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline void SetRemoveRouteTableIds(const Aws::Vector<Aws::String>& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = value; }

    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline void SetRemoveRouteTableIds(Aws::Vector<Aws::String>&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds = std::move(value); }

    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithRemoveRouteTableIds(const Aws::Vector<Aws::String>& value) { SetRemoveRouteTableIds(value); return *this;}

    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& WithRemoveRouteTableIds(Aws::Vector<Aws::String>&& value) { SetRemoveRouteTableIds(std::move(value)); return *this;}

    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& AddRemoveRouteTableIds(const Aws::String& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(value); return *this; }

    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& AddRemoveRouteTableIds(Aws::String&& value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(std::move(value)); return *this; }

    /**
     * <p>(Multi-AZ only) A list of IDs of existing virtual private cloud (VPC) route
     * tables to disassociate (remove) from your Amazon FSx for NetApp ONTAP file
     * system. You can use the API operation to retrieve the list of VPC route table
     * IDs for a file system.</p>
     */
    inline UpdateFileSystemOntapConfiguration& AddRemoveRouteTableIds(const char* value) { m_removeRouteTableIdsHasBeenSet = true; m_removeRouteTableIds.push_back(value); return *this; }

  private:

    int m_automaticBackupRetentionDays;
    bool m_automaticBackupRetentionDaysHasBeenSet = false;

    Aws::String m_dailyAutomaticBackupStartTime;
    bool m_dailyAutomaticBackupStartTimeHasBeenSet = false;

    Aws::String m_fsxAdminPassword;
    bool m_fsxAdminPasswordHasBeenSet = false;

    Aws::String m_weeklyMaintenanceStartTime;
    bool m_weeklyMaintenanceStartTimeHasBeenSet = false;

    DiskIopsConfiguration m_diskIopsConfiguration;
    bool m_diskIopsConfigurationHasBeenSet = false;

    int m_throughputCapacity;
    bool m_throughputCapacityHasBeenSet = false;

    Aws::Vector<Aws::String> m_addRouteTableIds;
    bool m_addRouteTableIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeRouteTableIds;
    bool m_removeRouteTableIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
