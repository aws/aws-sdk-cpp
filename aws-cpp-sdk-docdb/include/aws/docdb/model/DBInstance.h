/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/Endpoint.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/docdb/model/DBSubnetGroup.h>
#include <aws/docdb/model/PendingModifiedValues.h>
#include <aws/docdb/model/VpcSecurityGroupMembership.h>
#include <aws/docdb/model/DBInstanceStatusInfo.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace DocDB
{
namespace Model
{

  /**
   * <p>Detailed information about a DB instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/DBInstance">AWS
   * API Reference</a></p>
   */
  class AWS_DOCDB_API DBInstance
  {
  public:
    DBInstance();
    DBInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Contains a user-provided database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>Contains a user-provided database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>Contains a user-provided database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Contains a user-provided database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>Contains a user-provided database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>Contains a user-provided database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline DBInstance& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Contains a user-provided database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline DBInstance& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains a user-provided database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline DBInstance& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline DBInstance& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline DBInstance& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline DBInstance& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline DBInstance& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline DBInstance& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline DBInstance& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline const Aws::String& GetDBInstanceStatus() const{ return m_dBInstanceStatus; }

    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline bool DBInstanceStatusHasBeenSet() const { return m_dBInstanceStatusHasBeenSet; }

    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline void SetDBInstanceStatus(const Aws::String& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = value; }

    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline void SetDBInstanceStatus(Aws::String&& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = std::move(value); }

    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline void SetDBInstanceStatus(const char* value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus.assign(value); }

    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline DBInstance& WithDBInstanceStatus(const Aws::String& value) { SetDBInstanceStatus(value); return *this;}

    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline DBInstance& WithDBInstanceStatus(Aws::String&& value) { SetDBInstanceStatus(std::move(value)); return *this;}

    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline DBInstance& WithDBInstanceStatus(const char* value) { SetDBInstanceStatus(value); return *this;}


    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline DBInstance& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline DBInstance& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    /**
     * <p>Provides the date and time that the DB instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const{ return m_instanceCreateTime; }

    /**
     * <p>Provides the date and time that the DB instance was created.</p>
     */
    inline bool InstanceCreateTimeHasBeenSet() const { return m_instanceCreateTimeHasBeenSet; }

    /**
     * <p>Provides the date and time that the DB instance was created.</p>
     */
    inline void SetInstanceCreateTime(const Aws::Utils::DateTime& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p>Provides the date and time that the DB instance was created.</p>
     */
    inline void SetInstanceCreateTime(Aws::Utils::DateTime&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = std::move(value); }

    /**
     * <p>Provides the date and time that the DB instance was created.</p>
     */
    inline DBInstance& WithInstanceCreateTime(const Aws::Utils::DateTime& value) { SetInstanceCreateTime(value); return *this;}

    /**
     * <p>Provides the date and time that the DB instance was created.</p>
     */
    inline DBInstance& WithInstanceCreateTime(Aws::Utils::DateTime&& value) { SetInstanceCreateTime(std::move(value)); return *this;}


    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline DBInstance& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline DBInstance& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline DBInstance& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline DBInstance& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline bool VpcSecurityGroupsHasBeenSet() const { return m_vpcSecurityGroupsHasBeenSet; }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = std::move(value); }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline DBInstance& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline DBInstance& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline DBInstance& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline DBInstance& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the name of the Availability Zone that the DB instance is located
     * in.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>Specifies the name of the Availability Zone that the DB instance is located
     * in.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>Specifies the name of the Availability Zone that the DB instance is located
     * in.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>Specifies the name of the Availability Zone that the DB instance is located
     * in.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>Specifies the name of the Availability Zone that the DB instance is located
     * in.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>Specifies the name of the Availability Zone that the DB instance is located
     * in.</p>
     */
    inline DBInstance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Specifies the name of the Availability Zone that the DB instance is located
     * in.</p>
     */
    inline DBInstance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the Availability Zone that the DB instance is located
     * in.</p>
     */
    inline DBInstance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>Specifies information on the subnet group that is associated with the DB
     * instance, including the name, description, and subnets in the subnet group.</p>
     */
    inline const DBSubnetGroup& GetDBSubnetGroup() const{ return m_dBSubnetGroup; }

    /**
     * <p>Specifies information on the subnet group that is associated with the DB
     * instance, including the name, description, and subnets in the subnet group.</p>
     */
    inline bool DBSubnetGroupHasBeenSet() const { return m_dBSubnetGroupHasBeenSet; }

    /**
     * <p>Specifies information on the subnet group that is associated with the DB
     * instance, including the name, description, and subnets in the subnet group.</p>
     */
    inline void SetDBSubnetGroup(const DBSubnetGroup& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = value; }

    /**
     * <p>Specifies information on the subnet group that is associated with the DB
     * instance, including the name, description, and subnets in the subnet group.</p>
     */
    inline void SetDBSubnetGroup(DBSubnetGroup&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = std::move(value); }

    /**
     * <p>Specifies information on the subnet group that is associated with the DB
     * instance, including the name, description, and subnets in the subnet group.</p>
     */
    inline DBInstance& WithDBSubnetGroup(const DBSubnetGroup& value) { SetDBSubnetGroup(value); return *this;}

    /**
     * <p>Specifies information on the subnet group that is associated with the DB
     * instance, including the name, description, and subnets in the subnet group.</p>
     */
    inline DBInstance& WithDBSubnetGroup(DBSubnetGroup&& value) { SetDBSubnetGroup(std::move(value)); return *this;}


    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline DBInstance& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline DBInstance& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline DBInstance& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>Specifies that changes to the DB instance are pending. This element is
     * included only when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline const PendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is
     * included only when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline bool PendingModifiedValuesHasBeenSet() const { return m_pendingModifiedValuesHasBeenSet; }

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is
     * included only when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline void SetPendingModifiedValues(const PendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is
     * included only when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline void SetPendingModifiedValues(PendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = std::move(value); }

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is
     * included only when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline DBInstance& WithPendingModifiedValues(const PendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is
     * included only when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline DBInstance& WithPendingModifiedValues(PendingModifiedValues&& value) { SetPendingModifiedValues(std::move(value)); return *this;}


    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const{ return m_latestRestorableTime; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline bool LatestRestorableTimeHasBeenSet() const { return m_latestRestorableTimeHasBeenSet; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline void SetLatestRestorableTime(const Aws::Utils::DateTime& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline void SetLatestRestorableTime(Aws::Utils::DateTime&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = std::move(value); }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline DBInstance& WithLatestRestorableTime(const Aws::Utils::DateTime& value) { SetLatestRestorableTime(value); return *this;}

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline DBInstance& WithLatestRestorableTime(Aws::Utils::DateTime&& value) { SetLatestRestorableTime(std::move(value)); return *this;}


    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline DBInstance& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline DBInstance& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline DBInstance& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Indicates that minor version patches are applied automatically.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Indicates that minor version patches are applied automatically.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>Indicates that minor version patches are applied automatically.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates that minor version patches are applied automatically.</p>
     */
    inline DBInstance& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>Specifies the availability options for the DB instance. A value of
     * <code>true</code> specifies an internet-facing instance with a publicly
     * resolvable DNS name, which resolves to a public IP address. A value of
     * <code>false</code> specifies an internal instance with a DNS name that resolves
     * to a private IP address.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies the availability options for the DB instance. A value of
     * <code>true</code> specifies an internet-facing instance with a publicly
     * resolvable DNS name, which resolves to a public IP address. A value of
     * <code>false</code> specifies an internal instance with a DNS name that resolves
     * to a private IP address.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies the availability options for the DB instance. A value of
     * <code>true</code> specifies an internet-facing instance with a publicly
     * resolvable DNS name, which resolves to a public IP address. A value of
     * <code>false</code> specifies an internal instance with a DNS name that resolves
     * to a private IP address.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies the availability options for the DB instance. A value of
     * <code>true</code> specifies an internet-facing instance with a publicly
     * resolvable DNS name, which resolves to a public IP address. A value of
     * <code>false</code> specifies an internal instance with a DNS name that resolves
     * to a private IP address.</p>
     */
    inline DBInstance& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The status of a read replica. If the instance is not a read replica, this is
     * blank.</p>
     */
    inline const Aws::Vector<DBInstanceStatusInfo>& GetStatusInfos() const{ return m_statusInfos; }

    /**
     * <p>The status of a read replica. If the instance is not a read replica, this is
     * blank.</p>
     */
    inline bool StatusInfosHasBeenSet() const { return m_statusInfosHasBeenSet; }

    /**
     * <p>The status of a read replica. If the instance is not a read replica, this is
     * blank.</p>
     */
    inline void SetStatusInfos(const Aws::Vector<DBInstanceStatusInfo>& value) { m_statusInfosHasBeenSet = true; m_statusInfos = value; }

    /**
     * <p>The status of a read replica. If the instance is not a read replica, this is
     * blank.</p>
     */
    inline void SetStatusInfos(Aws::Vector<DBInstanceStatusInfo>&& value) { m_statusInfosHasBeenSet = true; m_statusInfos = std::move(value); }

    /**
     * <p>The status of a read replica. If the instance is not a read replica, this is
     * blank.</p>
     */
    inline DBInstance& WithStatusInfos(const Aws::Vector<DBInstanceStatusInfo>& value) { SetStatusInfos(value); return *this;}

    /**
     * <p>The status of a read replica. If the instance is not a read replica, this is
     * blank.</p>
     */
    inline DBInstance& WithStatusInfos(Aws::Vector<DBInstanceStatusInfo>&& value) { SetStatusInfos(std::move(value)); return *this;}

    /**
     * <p>The status of a read replica. If the instance is not a read replica, this is
     * blank.</p>
     */
    inline DBInstance& AddStatusInfos(const DBInstanceStatusInfo& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(value); return *this; }

    /**
     * <p>The status of a read replica. If the instance is not a read replica, this is
     * blank.</p>
     */
    inline DBInstance& AddStatusInfos(DBInstanceStatusInfo&& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains the name of the DB cluster that the DB instance is a member of if
     * the DB instance is a member of a DB cluster.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>Contains the name of the DB cluster that the DB instance is a member of if
     * the DB instance is a member of a DB cluster.</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>Contains the name of the DB cluster that the DB instance is a member of if
     * the DB instance is a member of a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>Contains the name of the DB cluster that the DB instance is a member of if
     * the DB instance is a member of a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>Contains the name of the DB cluster that the DB instance is a member of if
     * the DB instance is a member of a DB cluster.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>Contains the name of the DB cluster that the DB instance is a member of if
     * the DB instance is a member of a DB cluster.</p>
     */
    inline DBInstance& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>Contains the name of the DB cluster that the DB instance is a member of if
     * the DB instance is a member of a DB cluster.</p>
     */
    inline DBInstance& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>Contains the name of the DB cluster that the DB instance is a member of if
     * the DB instance is a member of a DB cluster.</p>
     */
    inline DBInstance& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline DBInstance& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p> If <code>StorageEncrypted</code> is <code>true</code>, the AWS KMS key
     * identifier for the encrypted DB instance. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> If <code>StorageEncrypted</code> is <code>true</code>, the AWS KMS key
     * identifier for the encrypted DB instance. </p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p> If <code>StorageEncrypted</code> is <code>true</code>, the AWS KMS key
     * identifier for the encrypted DB instance. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> If <code>StorageEncrypted</code> is <code>true</code>, the AWS KMS key
     * identifier for the encrypted DB instance. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p> If <code>StorageEncrypted</code> is <code>true</code>, the AWS KMS key
     * identifier for the encrypted DB instance. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> If <code>StorageEncrypted</code> is <code>true</code>, the AWS KMS key
     * identifier for the encrypted DB instance. </p>
     */
    inline DBInstance& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> If <code>StorageEncrypted</code> is <code>true</code>, the AWS KMS key
     * identifier for the encrypted DB instance. </p>
     */
    inline DBInstance& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p> If <code>StorageEncrypted</code> is <code>true</code>, the AWS KMS key
     * identifier for the encrypted DB instance. </p>
     */
    inline DBInstance& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed.</p>
     */
    inline bool DbiResourceIdHasBeenSet() const { return m_dbiResourceIdHasBeenSet; }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed.</p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed.</p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = std::move(value); }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed.</p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed.</p>
     */
    inline DBInstance& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed.</p>
     */
    inline DBInstance& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(std::move(value)); return *this;}

    /**
     * <p>The AWS Region-unique, immutable identifier for the DB instance. This
     * identifier is found in AWS CloudTrail log entries whenever the AWS KMS key for
     * the DB instance is accessed.</p>
     */
    inline DBInstance& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}


    /**
     * <p>A value that specifies the order in which an Amazon DocumentDB replica is
     * promoted to the primary instance after a failure of the existing primary
     * instance.</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }

    /**
     * <p>A value that specifies the order in which an Amazon DocumentDB replica is
     * promoted to the primary instance after a failure of the existing primary
     * instance.</p>
     */
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }

    /**
     * <p>A value that specifies the order in which an Amazon DocumentDB replica is
     * promoted to the primary instance after a failure of the existing primary
     * instance.</p>
     */
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }

    /**
     * <p>A value that specifies the order in which an Amazon DocumentDB replica is
     * promoted to the primary instance after a failure of the existing primary
     * instance.</p>
     */
    inline DBInstance& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceArn() const{ return m_dBInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline bool DBInstanceArnHasBeenSet() const { return m_dBInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline void SetDBInstanceArn(const Aws::String& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline void SetDBInstanceArn(Aws::String&& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline void SetDBInstanceArn(const char* value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline DBInstance& WithDBInstanceArn(const Aws::String& value) { SetDBInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline DBInstance& WithDBInstanceArn(Aws::String&& value) { SetDBInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline DBInstance& WithDBInstanceArn(const char* value) { SetDBInstanceArn(value); return *this;}


    /**
     * <p>A list of log types that this DB instance is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnabledCloudwatchLogsExports() const{ return m_enabledCloudwatchLogsExports; }

    /**
     * <p>A list of log types that this DB instance is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline bool EnabledCloudwatchLogsExportsHasBeenSet() const { return m_enabledCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>A list of log types that this DB instance is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline void SetEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = value; }

    /**
     * <p>A list of log types that this DB instance is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline void SetEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports = std::move(value); }

    /**
     * <p>A list of log types that this DB instance is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBInstance& WithEnabledCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnabledCloudwatchLogsExports(value); return *this;}

    /**
     * <p>A list of log types that this DB instance is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBInstance& WithEnabledCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnabledCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>A list of log types that this DB instance is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBInstance& AddEnabledCloudwatchLogsExports(const Aws::String& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>A list of log types that this DB instance is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBInstance& AddEnabledCloudwatchLogsExports(Aws::String&& value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of log types that this DB instance is configured to export to Amazon
     * CloudWatch Logs.</p>
     */
    inline DBInstance& AddEnabledCloudwatchLogsExports(const char* value) { m_enabledCloudwatchLogsExportsHasBeenSet = true; m_enabledCloudwatchLogsExports.push_back(value); return *this; }

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    Aws::String m_engine;
    bool m_engineHasBeenSet;

    Aws::String m_dBInstanceStatus;
    bool m_dBInstanceStatusHasBeenSet;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::Utils::DateTime m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    DBSubnetGroup m_dBSubnetGroup;
    bool m_dBSubnetGroupHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    PendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet;

    Aws::Utils::DateTime m_latestRestorableTime;
    bool m_latestRestorableTimeHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    Aws::Vector<DBInstanceStatusInfo> m_statusInfos;
    bool m_statusInfosHasBeenSet;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet;

    Aws::String m_dBInstanceArn;
    bool m_dBInstanceArnHasBeenSet;

    Aws::Vector<Aws::String> m_enabledCloudwatchLogsExports;
    bool m_enabledCloudwatchLogsExportsHasBeenSet;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
