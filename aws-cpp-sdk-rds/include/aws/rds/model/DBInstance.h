/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/Endpoint.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DBSubnetGroup.h>
#include <aws/rds/model/PendingModifiedValues.h>
#include <aws/rds/model/OptionGroupMembership.h>
#include <aws/rds/model/DBSecurityGroupMembership.h>
#include <aws/rds/model/VpcSecurityGroupMembership.h>
#include <aws/rds/model/DBParameterGroupStatus.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p> Contains the result of a successful invocation of the following actions:
   * </p> <ul> <li><a>CreateDBInstance</a></li> <li><a>DeleteDBInstance</a></li>
   * <li><a>ModifyDBInstance</a></li> </ul> <p>This data type is used as a response
   * element in the <a>DescribeDBInstances</a> action.</p>
   */
  class AWS_RDS_API DBInstance
  {
  public:
    DBInstance();
    DBInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    DBInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p> Contains a user-supplied database identifier. This is the unique key that
     * identifies a DB Instance. </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p> Contains a user-supplied database identifier. This is the unique key that
     * identifies a DB Instance. </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> Contains a user-supplied database identifier. This is the unique key that
     * identifies a DB Instance. </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> Contains a user-supplied database identifier. This is the unique key that
     * identifies a DB Instance. </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p> Contains a user-supplied database identifier. This is the unique key that
     * identifies a DB Instance. </p>
     */
    inline DBInstance& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Contains a user-supplied database identifier. This is the unique key that
     * identifies a DB Instance. </p>
     */
    inline DBInstance& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Contains a user-supplied database identifier. This is the unique key that
     * identifies a DB Instance. </p>
     */
    inline DBInstance& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Contains the name of the compute and memory capacity class of the DB
     * Instance. </p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p> Contains the name of the compute and memory capacity class of the DB
     * Instance. </p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> Contains the name of the compute and memory capacity class of the DB
     * Instance. </p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> Contains the name of the compute and memory capacity class of the DB
     * Instance. </p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p> Contains the name of the compute and memory capacity class of the DB
     * Instance. </p>
     */
    inline DBInstance& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> Contains the name of the compute and memory capacity class of the DB
     * Instance. </p>
     */
    inline DBInstance& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> Contains the name of the compute and memory capacity class of the DB
     * Instance. </p>
     */
    inline DBInstance& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> Provides the name of the database engine to be used for this DB Instance.
     * </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p> Provides the name of the database engine to be used for this DB Instance.
     * </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> Provides the name of the database engine to be used for this DB Instance.
     * </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> Provides the name of the database engine to be used for this DB Instance.
     * </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p> Provides the name of the database engine to be used for this DB Instance.
     * </p>
     */
    inline DBInstance& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p> Provides the name of the database engine to be used for this DB Instance.
     * </p>
     */
    inline DBInstance& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p> Provides the name of the database engine to be used for this DB Instance.
     * </p>
     */
    inline DBInstance& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p> Specifies the current state of this database. </p>
     */
    inline const Aws::String& GetDBInstanceStatus() const{ return m_dBInstanceStatus; }

    /**
     * <p> Specifies the current state of this database. </p>
     */
    inline void SetDBInstanceStatus(const Aws::String& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = value; }

    /**
     * <p> Specifies the current state of this database. </p>
     */
    inline void SetDBInstanceStatus(Aws::String&& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = value; }

    /**
     * <p> Specifies the current state of this database. </p>
     */
    inline void SetDBInstanceStatus(const char* value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus.assign(value); }

    /**
     * <p> Specifies the current state of this database. </p>
     */
    inline DBInstance& WithDBInstanceStatus(const Aws::String& value) { SetDBInstanceStatus(value); return *this;}

    /**
     * <p> Specifies the current state of this database. </p>
     */
    inline DBInstance& WithDBInstanceStatus(Aws::String&& value) { SetDBInstanceStatus(value); return *this;}

    /**
     * <p> Specifies the current state of this database. </p>
     */
    inline DBInstance& WithDBInstanceStatus(const char* value) { SetDBInstanceStatus(value); return *this;}

    /**
     * <p> Contains the master username for the DB Instance. </p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p> Contains the master username for the DB Instance. </p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p> Contains the master username for the DB Instance. </p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p> Contains the master username for the DB Instance. </p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p> Contains the master username for the DB Instance. </p>
     */
    inline DBInstance& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p> Contains the master username for the DB Instance. </p>
     */
    inline DBInstance& WithMasterUsername(Aws::String&& value) { SetMasterUsername(value); return *this;}

    /**
     * <p> Contains the master username for the DB Instance. </p>
     */
    inline DBInstance& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p> Contains the name of the initial database of
     * this instance that was provided at create time, if one was specified when the DB
     * Instance was created. This same name is returned for the life of the DB
     * Instance. </p> <p>Type: String</p> <p><b>Oracle</b></p> <p> Contains the Oracle
     * System ID (SID) of the created DB Instance. </p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p> Contains the name of the initial database of
     * this instance that was provided at create time, if one was specified when the DB
     * Instance was created. This same name is returned for the life of the DB
     * Instance. </p> <p>Type: String</p> <p><b>Oracle</b></p> <p> Contains the Oracle
     * System ID (SID) of the created DB Instance. </p>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p> Contains the name of the initial database of
     * this instance that was provided at create time, if one was specified when the DB
     * Instance was created. This same name is returned for the life of the DB
     * Instance. </p> <p>Type: String</p> <p><b>Oracle</b></p> <p> Contains the Oracle
     * System ID (SID) of the created DB Instance. </p>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p> Contains the name of the initial database of
     * this instance that was provided at create time, if one was specified when the DB
     * Instance was created. This same name is returned for the life of the DB
     * Instance. </p> <p>Type: String</p> <p><b>Oracle</b></p> <p> Contains the Oracle
     * System ID (SID) of the created DB Instance. </p>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p> Contains the name of the initial database of
     * this instance that was provided at create time, if one was specified when the DB
     * Instance was created. This same name is returned for the life of the DB
     * Instance. </p> <p>Type: String</p> <p><b>Oracle</b></p> <p> Contains the Oracle
     * System ID (SID) of the created DB Instance. </p>
     */
    inline DBInstance& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p> Contains the name of the initial database of
     * this instance that was provided at create time, if one was specified when the DB
     * Instance was created. This same name is returned for the life of the DB
     * Instance. </p> <p>Type: String</p> <p><b>Oracle</b></p> <p> Contains the Oracle
     * System ID (SID) of the created DB Instance. </p>
     */
    inline DBInstance& WithDBName(Aws::String&& value) { SetDBName(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use.</p> <p><b>MySQL</b></p> <p> Contains the name of the initial database of
     * this instance that was provided at create time, if one was specified when the DB
     * Instance was created. This same name is returned for the life of the DB
     * Instance. </p> <p>Type: String</p> <p><b>Oracle</b></p> <p> Contains the Oracle
     * System ID (SID) of the created DB Instance. </p>
     */
    inline DBInstance& WithDBName(const char* value) { SetDBName(value); return *this;}

    /**
     * <p> Specifies the connection endpoint. </p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p> Specifies the connection endpoint. </p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p> Specifies the connection endpoint. </p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p> Specifies the connection endpoint. </p>
     */
    inline DBInstance& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p> Specifies the connection endpoint. </p>
     */
    inline DBInstance& WithEndpoint(Endpoint&& value) { SetEndpoint(value); return *this;}

    /**
     * <p> Specifies the allocated storage size specified in gigabytes. </p>
     */
    inline long GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p> Specifies the allocated storage size specified in gigabytes. </p>
     */
    inline void SetAllocatedStorage(long value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p> Specifies the allocated storage size specified in gigabytes. </p>
     */
    inline DBInstance& WithAllocatedStorage(long value) { SetAllocatedStorage(value); return *this;}

    /**
     * <p> Provides the date and time the DB Instance was created. </p>
     */
    inline double GetInstanceCreateTime() const{ return m_instanceCreateTime; }

    /**
     * <p> Provides the date and time the DB Instance was created. </p>
     */
    inline void SetInstanceCreateTime(double value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p> Provides the date and time the DB Instance was created. </p>
     */
    inline DBInstance& WithInstanceCreateTime(double value) { SetInstanceCreateTime(value); return *this;}

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
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

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
    inline DBInstance& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> Specifies the daily time range during which automated backups are created if
     * automated backups are enabled, as determined by the
     * <code>BackupRetentionPeriod</code>. </p>
     */
    inline DBInstance& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> Specifies the number of days for which automatic DB Snapshots are retained.
     * </p>
     */
    inline long GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p> Specifies the number of days for which automatic DB Snapshots are retained.
     * </p>
     */
    inline void SetBackupRetentionPeriod(long value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p> Specifies the number of days for which automatic DB Snapshots are retained.
     * </p>
     */
    inline DBInstance& WithBackupRetentionPeriod(long value) { SetBackupRetentionPeriod(value); return *this;}

    /**
     * <p> Provides List of DB Security Group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline const Aws::Vector<DBSecurityGroupMembership>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }

    /**
     * <p> Provides List of DB Security Group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline void SetDBSecurityGroups(const Aws::Vector<DBSecurityGroupMembership>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p> Provides List of DB Security Group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline void SetDBSecurityGroups(Aws::Vector<DBSecurityGroupMembership>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p> Provides List of DB Security Group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline DBInstance& WithDBSecurityGroups(const Aws::Vector<DBSecurityGroupMembership>& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p> Provides List of DB Security Group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline DBInstance& WithDBSecurityGroups(Aws::Vector<DBSecurityGroupMembership>&& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p> Provides List of DB Security Group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline DBInstance& AddDBSecurityGroups(const DBSecurityGroupMembership& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p> Provides List of DB Security Group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline DBInstance& AddDBSecurityGroups(DBSecurityGroupMembership&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p> Provides List of VPC security group elements that the DB Instance belongs
     * to. </p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p> Provides List of VPC security group elements that the DB Instance belongs
     * to. </p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p> Provides List of VPC security group elements that the DB Instance belongs
     * to. </p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p> Provides List of VPC security group elements that the DB Instance belongs
     * to. </p>
     */
    inline DBInstance& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p> Provides List of VPC security group elements that the DB Instance belongs
     * to. </p>
     */
    inline DBInstance& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p> Provides List of VPC security group elements that the DB Instance belongs
     * to. </p>
     */
    inline DBInstance& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p> Provides List of VPC security group elements that the DB Instance belongs
     * to. </p>
     */
    inline DBInstance& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p> Provides the list of DB Parameter Groups applied to this DB Instance. </p>
     */
    inline const Aws::Vector<DBParameterGroupStatus>& GetDBParameterGroups() const{ return m_dBParameterGroups; }

    /**
     * <p> Provides the list of DB Parameter Groups applied to this DB Instance. </p>
     */
    inline void SetDBParameterGroups(const Aws::Vector<DBParameterGroupStatus>& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups = value; }

    /**
     * <p> Provides the list of DB Parameter Groups applied to this DB Instance. </p>
     */
    inline void SetDBParameterGroups(Aws::Vector<DBParameterGroupStatus>&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups = value; }

    /**
     * <p> Provides the list of DB Parameter Groups applied to this DB Instance. </p>
     */
    inline DBInstance& WithDBParameterGroups(const Aws::Vector<DBParameterGroupStatus>& value) { SetDBParameterGroups(value); return *this;}

    /**
     * <p> Provides the list of DB Parameter Groups applied to this DB Instance. </p>
     */
    inline DBInstance& WithDBParameterGroups(Aws::Vector<DBParameterGroupStatus>&& value) { SetDBParameterGroups(value); return *this;}

    /**
     * <p> Provides the list of DB Parameter Groups applied to this DB Instance. </p>
     */
    inline DBInstance& AddDBParameterGroups(const DBParameterGroupStatus& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups.push_back(value); return *this; }

    /**
     * <p> Provides the list of DB Parameter Groups applied to this DB Instance. </p>
     */
    inline DBInstance& AddDBParameterGroups(DBParameterGroupStatus&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups.push_back(value); return *this; }

    /**
     * <p> Specifies the name of the Availability Zone the DB Instance is located in.
     * </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p> Specifies the name of the Availability Zone the DB Instance is located in.
     * </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> Specifies the name of the Availability Zone the DB Instance is located in.
     * </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> Specifies the name of the Availability Zone the DB Instance is located in.
     * </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p> Specifies the name of the Availability Zone the DB Instance is located in.
     * </p>
     */
    inline DBInstance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> Specifies the name of the Availability Zone the DB Instance is located in.
     * </p>
     */
    inline DBInstance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> Specifies the name of the Availability Zone the DB Instance is located in.
     * </p>
     */
    inline DBInstance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> Provides the inforamtion of the subnet group associated with the DB
     * instance, including the name, descrption and subnets in the subnet group. </p>
     */
    inline const DBSubnetGroup& GetDBSubnetGroup() const{ return m_dBSubnetGroup; }

    /**
     * <p> Provides the inforamtion of the subnet group associated with the DB
     * instance, including the name, descrption and subnets in the subnet group. </p>
     */
    inline void SetDBSubnetGroup(const DBSubnetGroup& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = value; }

    /**
     * <p> Provides the inforamtion of the subnet group associated with the DB
     * instance, including the name, descrption and subnets in the subnet group. </p>
     */
    inline void SetDBSubnetGroup(DBSubnetGroup&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = value; }

    /**
     * <p> Provides the inforamtion of the subnet group associated with the DB
     * instance, including the name, descrption and subnets in the subnet group. </p>
     */
    inline DBInstance& WithDBSubnetGroup(const DBSubnetGroup& value) { SetDBSubnetGroup(value); return *this;}

    /**
     * <p> Provides the inforamtion of the subnet group associated with the DB
     * instance, including the name, descrption and subnets in the subnet group. </p>
     */
    inline DBInstance& WithDBSubnetGroup(DBSubnetGroup&& value) { SetDBSubnetGroup(value); return *this;}

    /**
     * <p> Specifies the weekly time range (in UTC) during which system maintenance can
     * occur. </p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p> Specifies the weekly time range (in UTC) during which system maintenance can
     * occur. </p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p> Specifies the weekly time range (in UTC) during which system maintenance can
     * occur. </p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p> Specifies the weekly time range (in UTC) during which system maintenance can
     * occur. </p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p> Specifies the weekly time range (in UTC) during which system maintenance can
     * occur. </p>
     */
    inline DBInstance& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> Specifies the weekly time range (in UTC) during which system maintenance can
     * occur. </p>
     */
    inline DBInstance& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> Specifies the weekly time range (in UTC) during which system maintenance can
     * occur. </p>
     */
    inline DBInstance& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p> Specifies that changes to the DB Instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements. </p>
     */
    inline const PendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    /**
     * <p> Specifies that changes to the DB Instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements. </p>
     */
    inline void SetPendingModifiedValues(const PendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p> Specifies that changes to the DB Instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements. </p>
     */
    inline void SetPendingModifiedValues(PendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p> Specifies that changes to the DB Instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements. </p>
     */
    inline DBInstance& WithPendingModifiedValues(const PendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p> Specifies that changes to the DB Instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements. </p>
     */
    inline DBInstance& WithPendingModifiedValues(PendingModifiedValues&& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p> Specifies the latest time to which a database can be restored with
     * point-in-time restore. </p>
     */
    inline double GetLatestRestorableTime() const{ return m_latestRestorableTime; }

    /**
     * <p> Specifies the latest time to which a database can be restored with
     * point-in-time restore. </p>
     */
    inline void SetLatestRestorableTime(double value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }

    /**
     * <p> Specifies the latest time to which a database can be restored with
     * point-in-time restore. </p>
     */
    inline DBInstance& WithLatestRestorableTime(double value) { SetLatestRestorableTime(value); return *this;}

    /**
     * <p> Specifies if the DB Instance is a Multi-AZ deployment. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p> Specifies if the DB Instance is a Multi-AZ deployment. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p> Specifies if the DB Instance is a Multi-AZ deployment. </p>
     */
    inline DBInstance& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline DBInstance& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline DBInstance& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> Indicates the database engine version. </p>
     */
    inline DBInstance& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p> Indicates that minor version patches are applied automatically. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p> Indicates that minor version patches are applied automatically. </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p> Indicates that minor version patches are applied automatically. </p>
     */
    inline DBInstance& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p> Contains the identifier of the source DB Instance if this DB Instance is a
     * Read Replica. </p>
     */
    inline const Aws::String& GetReadReplicaSourceDBInstanceIdentifier() const{ return m_readReplicaSourceDBInstanceIdentifier; }

    /**
     * <p> Contains the identifier of the source DB Instance if this DB Instance is a
     * Read Replica. </p>
     */
    inline void SetReadReplicaSourceDBInstanceIdentifier(const Aws::String& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = value; }

    /**
     * <p> Contains the identifier of the source DB Instance if this DB Instance is a
     * Read Replica. </p>
     */
    inline void SetReadReplicaSourceDBInstanceIdentifier(Aws::String&& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = value; }

    /**
     * <p> Contains the identifier of the source DB Instance if this DB Instance is a
     * Read Replica. </p>
     */
    inline void SetReadReplicaSourceDBInstanceIdentifier(const char* value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier.assign(value); }

    /**
     * <p> Contains the identifier of the source DB Instance if this DB Instance is a
     * Read Replica. </p>
     */
    inline DBInstance& WithReadReplicaSourceDBInstanceIdentifier(const Aws::String& value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Contains the identifier of the source DB Instance if this DB Instance is a
     * Read Replica. </p>
     */
    inline DBInstance& WithReadReplicaSourceDBInstanceIdentifier(Aws::String&& value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Contains the identifier of the source DB Instance if this DB Instance is a
     * Read Replica. </p>
     */
    inline DBInstance& WithReadReplicaSourceDBInstanceIdentifier(const char* value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Contains one or more identifiers of the Read Replicas associated with this
     * DB Instance. </p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBInstanceIdentifiers() const{ return m_readReplicaDBInstanceIdentifiers; }

    /**
     * <p> Contains one or more identifiers of the Read Replicas associated with this
     * DB Instance. </p>
     */
    inline void SetReadReplicaDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = value; }

    /**
     * <p> Contains one or more identifiers of the Read Replicas associated with this
     * DB Instance. </p>
     */
    inline void SetReadReplicaDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = value; }

    /**
     * <p> Contains one or more identifiers of the Read Replicas associated with this
     * DB Instance. </p>
     */
    inline DBInstance& WithReadReplicaDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaDBInstanceIdentifiers(value); return *this;}

    /**
     * <p> Contains one or more identifiers of the Read Replicas associated with this
     * DB Instance. </p>
     */
    inline DBInstance& WithReadReplicaDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaDBInstanceIdentifiers(value); return *this;}

    /**
     * <p> Contains one or more identifiers of the Read Replicas associated with this
     * DB Instance. </p>
     */
    inline DBInstance& AddReadReplicaDBInstanceIdentifiers(const Aws::String& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }

    /**
     * <p> Contains one or more identifiers of the Read Replicas associated with this
     * DB Instance. </p>
     */
    inline DBInstance& AddReadReplicaDBInstanceIdentifiers(Aws::String&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }

    /**
     * <p> Contains one or more identifiers of the Read Replicas associated with this
     * DB Instance. </p>
     */
    inline DBInstance& AddReadReplicaDBInstanceIdentifiers(const char* value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }

    /**
     * <p> License model information for this DB Instance. </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p> License model information for this DB Instance. </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p> License model information for this DB Instance. </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p> License model information for this DB Instance. </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p> License model information for this DB Instance. </p>
     */
    inline DBInstance& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p> License model information for this DB Instance. </p>
     */
    inline DBInstance& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /**
     * <p> License model information for this DB Instance. </p>
     */
    inline DBInstance& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /**
     * <p> Specifies the Provisioned IOPS (I/O operations per second) value. </p>
     */
    inline long GetIops() const{ return m_iops; }

    /**
     * <p> Specifies the Provisioned IOPS (I/O operations per second) value. </p>
     */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p> Specifies the Provisioned IOPS (I/O operations per second) value. </p>
     */
    inline DBInstance& WithIops(long value) { SetIops(value); return *this;}

    /**
     * <p> Specifies the name and status of the option group that this instance belongs
     * to. </p>
     */
    inline const OptionGroupMembership& GetOptionGroupMembership() const{ return m_optionGroupMembership; }

    /**
     * <p> Specifies the name and status of the option group that this instance belongs
     * to. </p>
     */
    inline void SetOptionGroupMembership(const OptionGroupMembership& value) { m_optionGroupMembershipHasBeenSet = true; m_optionGroupMembership = value; }

    /**
     * <p> Specifies the name and status of the option group that this instance belongs
     * to. </p>
     */
    inline void SetOptionGroupMembership(OptionGroupMembership&& value) { m_optionGroupMembershipHasBeenSet = true; m_optionGroupMembership = value; }

    /**
     * <p> Specifies the name and status of the option group that this instance belongs
     * to. </p>
     */
    inline DBInstance& WithOptionGroupMembership(const OptionGroupMembership& value) { SetOptionGroupMembership(value); return *this;}

    /**
     * <p> Specifies the name and status of the option group that this instance belongs
     * to. </p>
     */
    inline DBInstance& WithOptionGroupMembership(OptionGroupMembership&& value) { SetOptionGroupMembership(value); return *this;}

    /**
     * <p> If present, specifies the name of the character set that this instance is
     * associated with. </p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p> If present, specifies the name of the character set that this instance is
     * associated with. </p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p> If present, specifies the name of the character set that this instance is
     * associated with. </p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p> If present, specifies the name of the character set that this instance is
     * associated with. </p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p> If present, specifies the name of the character set that this instance is
     * associated with. </p>
     */
    inline DBInstance& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p> If present, specifies the name of the character set that this instance is
     * associated with. </p>
     */
    inline DBInstance& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p> If present, specifies the name of the character set that this instance is
     * associated with. </p>
     */
    inline DBInstance& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}

    /**
     * <p> If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support. </p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const{ return m_secondaryAvailabilityZone; }

    /**
     * <p> If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support. </p>
     */
    inline void SetSecondaryAvailabilityZone(const Aws::String& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = value; }

    /**
     * <p> If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support. </p>
     */
    inline void SetSecondaryAvailabilityZone(Aws::String&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = value; }

    /**
     * <p> If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support. </p>
     */
    inline void SetSecondaryAvailabilityZone(const char* value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone.assign(value); }

    /**
     * <p> If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support. </p>
     */
    inline DBInstance& WithSecondaryAvailabilityZone(const Aws::String& value) { SetSecondaryAvailabilityZone(value); return *this;}

    /**
     * <p> If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support. </p>
     */
    inline DBInstance& WithSecondaryAvailabilityZone(Aws::String&& value) { SetSecondaryAvailabilityZone(value); return *this;}

    /**
     * <p> If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support. </p>
     */
    inline DBInstance& WithSecondaryAvailabilityZone(const char* value) { SetSecondaryAvailabilityZone(value); return *this;}

    
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    
    inline DBInstance& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    Aws::String m_dBInstanceStatus;
    bool m_dBInstanceStatusHasBeenSet;
    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;
    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;
    Endpoint m_endpoint;
    bool m_endpointHasBeenSet;
    long m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;
    double m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet;
    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;
    long m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;
    Aws::Vector<DBSecurityGroupMembership> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet;
    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroups;
    bool m_vpcSecurityGroupsHasBeenSet;
    Aws::Vector<DBParameterGroupStatus> m_dBParameterGroups;
    bool m_dBParameterGroupsHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    DBSubnetGroup m_dBSubnetGroup;
    bool m_dBSubnetGroupHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    PendingModifiedValues m_pendingModifiedValues;
    bool m_pendingModifiedValuesHasBeenSet;
    double m_latestRestorableTime;
    bool m_latestRestorableTimeHasBeenSet;
    bool m_multiAZ;
    bool m_multiAZHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    Aws::String m_readReplicaSourceDBInstanceIdentifier;
    bool m_readReplicaSourceDBInstanceIdentifierHasBeenSet;
    Aws::Vector<Aws::String> m_readReplicaDBInstanceIdentifiers;
    bool m_readReplicaDBInstanceIdentifiersHasBeenSet;
    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;
    long m_iops;
    bool m_iopsHasBeenSet;
    OptionGroupMembership m_optionGroupMembership;
    bool m_optionGroupMembershipHasBeenSet;
    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet;
    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
