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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/DBSubnetGroup.h>
#include <aws/rds/model/PendingModifiedValues.h>
#include <aws/rds/model/DBSecurityGroupMembership.h>
#include <aws/rds/model/VpcSecurityGroupMembership.h>
#include <aws/rds/model/DBParameterGroupStatus.h>
#include <aws/rds/model/OptionGroupMembership.h>
#include <aws/rds/model/DBInstanceStatusInfo.h>
#include <aws/rds/model/DomainMembership.h>

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
   * <p>Contains the result of a successful invocation of the following actions:</p>
   * <ul> <li> <p> <a>CreateDBInstance</a> </p> </li> <li> <p>
   * <a>DeleteDBInstance</a> </p> </li> <li> <p> <a>ModifyDBInstance</a> </p> </li>
   * </ul> <p>This data type is used as a response element in the
   * <a>DescribeDBInstances</a> action.</p>
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
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline DBInstance& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
     * key that identifies a DB instance.</p>
     */
    inline DBInstance& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Contains a user-supplied database identifier. This identifier is the unique
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
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>Contains the name of the compute and memory capacity class of the DB
     * instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

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
    inline DBInstance& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

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
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Provides the name of the database engine to be used for this DB instance.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

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
    inline DBInstance& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

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
    inline void SetDBInstanceStatus(const Aws::String& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = value; }

    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline void SetDBInstanceStatus(Aws::String&& value) { m_dBInstanceStatusHasBeenSet = true; m_dBInstanceStatus = value; }

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
    inline DBInstance& WithDBInstanceStatus(Aws::String&& value) { SetDBInstanceStatus(value); return *this;}

    /**
     * <p>Specifies the current state of this database.</p>
     */
    inline DBInstance& WithDBInstanceStatus(const char* value) { SetDBInstanceStatus(value); return *this;}

    /**
     * <p>Contains the master username for the DB instance.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>Contains the master username for the DB instance.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>Contains the master username for the DB instance.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>Contains the master username for the DB instance.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>Contains the master username for the DB instance.</p>
     */
    inline DBInstance& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Contains the master username for the DB instance.</p>
     */
    inline DBInstance& WithMasterUsername(Aws::String&& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Contains the master username for the DB instance.</p>
     */
    inline DBInstance& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use. For example, this value returns MySQL, MariaDB, or PostgreSQL information
     * when returning values from CreateDBInstanceReadReplica since Read Replicas are
     * only supported for these engines.</p> <p> <b>MySQL, MariaDB, SQL Server,
     * PostgreSQL, Amazon Aurora</b> </p> <p>Contains the name of the initial database
     * of this instance that was provided at create time, if one was specified when the
     * DB instance was created. This same name is returned for the life of the DB
     * instance.</p> <p>Type: String</p> <p> <b>Oracle</b> </p> <p>Contains the Oracle
     * System ID (SID) of the created DB instance. Not shown when the returned
     * parameters do not apply to an Oracle DB instance.</p>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use. For example, this value returns MySQL, MariaDB, or PostgreSQL information
     * when returning values from CreateDBInstanceReadReplica since Read Replicas are
     * only supported for these engines.</p> <p> <b>MySQL, MariaDB, SQL Server,
     * PostgreSQL, Amazon Aurora</b> </p> <p>Contains the name of the initial database
     * of this instance that was provided at create time, if one was specified when the
     * DB instance was created. This same name is returned for the life of the DB
     * instance.</p> <p>Type: String</p> <p> <b>Oracle</b> </p> <p>Contains the Oracle
     * System ID (SID) of the created DB instance. Not shown when the returned
     * parameters do not apply to an Oracle DB instance.</p>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use. For example, this value returns MySQL, MariaDB, or PostgreSQL information
     * when returning values from CreateDBInstanceReadReplica since Read Replicas are
     * only supported for these engines.</p> <p> <b>MySQL, MariaDB, SQL Server,
     * PostgreSQL, Amazon Aurora</b> </p> <p>Contains the name of the initial database
     * of this instance that was provided at create time, if one was specified when the
     * DB instance was created. This same name is returned for the life of the DB
     * instance.</p> <p>Type: String</p> <p> <b>Oracle</b> </p> <p>Contains the Oracle
     * System ID (SID) of the created DB instance. Not shown when the returned
     * parameters do not apply to an Oracle DB instance.</p>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use. For example, this value returns MySQL, MariaDB, or PostgreSQL information
     * when returning values from CreateDBInstanceReadReplica since Read Replicas are
     * only supported for these engines.</p> <p> <b>MySQL, MariaDB, SQL Server,
     * PostgreSQL, Amazon Aurora</b> </p> <p>Contains the name of the initial database
     * of this instance that was provided at create time, if one was specified when the
     * DB instance was created. This same name is returned for the life of the DB
     * instance.</p> <p>Type: String</p> <p> <b>Oracle</b> </p> <p>Contains the Oracle
     * System ID (SID) of the created DB instance. Not shown when the returned
     * parameters do not apply to an Oracle DB instance.</p>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use. For example, this value returns MySQL, MariaDB, or PostgreSQL information
     * when returning values from CreateDBInstanceReadReplica since Read Replicas are
     * only supported for these engines.</p> <p> <b>MySQL, MariaDB, SQL Server,
     * PostgreSQL, Amazon Aurora</b> </p> <p>Contains the name of the initial database
     * of this instance that was provided at create time, if one was specified when the
     * DB instance was created. This same name is returned for the life of the DB
     * instance.</p> <p>Type: String</p> <p> <b>Oracle</b> </p> <p>Contains the Oracle
     * System ID (SID) of the created DB instance. Not shown when the returned
     * parameters do not apply to an Oracle DB instance.</p>
     */
    inline DBInstance& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use. For example, this value returns MySQL, MariaDB, or PostgreSQL information
     * when returning values from CreateDBInstanceReadReplica since Read Replicas are
     * only supported for these engines.</p> <p> <b>MySQL, MariaDB, SQL Server,
     * PostgreSQL, Amazon Aurora</b> </p> <p>Contains the name of the initial database
     * of this instance that was provided at create time, if one was specified when the
     * DB instance was created. This same name is returned for the life of the DB
     * instance.</p> <p>Type: String</p> <p> <b>Oracle</b> </p> <p>Contains the Oracle
     * System ID (SID) of the created DB instance. Not shown when the returned
     * parameters do not apply to an Oracle DB instance.</p>
     */
    inline DBInstance& WithDBName(Aws::String&& value) { SetDBName(value); return *this;}

    /**
     * <p>The meaning of this parameter differs according to the database engine you
     * use. For example, this value returns MySQL, MariaDB, or PostgreSQL information
     * when returning values from CreateDBInstanceReadReplica since Read Replicas are
     * only supported for these engines.</p> <p> <b>MySQL, MariaDB, SQL Server,
     * PostgreSQL, Amazon Aurora</b> </p> <p>Contains the name of the initial database
     * of this instance that was provided at create time, if one was specified when the
     * DB instance was created. This same name is returned for the life of the DB
     * instance.</p> <p>Type: String</p> <p> <b>Oracle</b> </p> <p>Contains the Oracle
     * System ID (SID) of the created DB instance. Not shown when the returned
     * parameters do not apply to an Oracle DB instance.</p>
     */
    inline DBInstance& WithDBName(const char* value) { SetDBName(value); return *this;}

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline DBInstance& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>Specifies the connection endpoint.</p>
     */
    inline DBInstance& WithEndpoint(Endpoint&& value) { SetEndpoint(value); return *this;}

    /**
     * <p>Specifies the allocated storage size specified in gigabytes.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>Specifies the allocated storage size specified in gigabytes.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>Specifies the allocated storage size specified in gigabytes.</p>
     */
    inline DBInstance& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInstanceCreateTime() const{ return m_instanceCreateTime; }

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline void SetInstanceCreateTime(const Aws::Utils::DateTime& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline void SetInstanceCreateTime(Aws::Utils::DateTime&& value) { m_instanceCreateTimeHasBeenSet = true; m_instanceCreateTime = value; }

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline DBInstance& WithInstanceCreateTime(const Aws::Utils::DateTime& value) { SetInstanceCreateTime(value); return *this;}

    /**
     * <p>Provides the date and time the DB instance was created.</p>
     */
    inline DBInstance& WithInstanceCreateTime(Aws::Utils::DateTime&& value) { SetInstanceCreateTime(value); return *this;}

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
     * <p>Specifies the number of days for which automatic DB snapshots are
     * retained.</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

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
     * <p> Provides List of DB security group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline const Aws::Vector<DBSecurityGroupMembership>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }

    /**
     * <p> Provides List of DB security group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline void SetDBSecurityGroups(const Aws::Vector<DBSecurityGroupMembership>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p> Provides List of DB security group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline void SetDBSecurityGroups(Aws::Vector<DBSecurityGroupMembership>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p> Provides List of DB security group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline DBInstance& WithDBSecurityGroups(const Aws::Vector<DBSecurityGroupMembership>& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p> Provides List of DB security group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline DBInstance& WithDBSecurityGroups(Aws::Vector<DBSecurityGroupMembership>&& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p> Provides List of DB security group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline DBInstance& AddDBSecurityGroups(const DBSecurityGroupMembership& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p> Provides List of DB security group elements containing only
     * <code>DBSecurityGroup.Name</code> and <code>DBSecurityGroup.Status</code>
     * subelements. </p>
     */
    inline DBInstance& AddDBSecurityGroups(DBSecurityGroupMembership&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroups() const{ return m_vpcSecurityGroups; }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline void SetVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline void SetVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups = value; }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline DBInstance& WithVpcSecurityGroups(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline DBInstance& WithVpcSecurityGroups(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroups(value); return *this;}

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline DBInstance& AddVpcSecurityGroups(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>Provides a list of VPC security group elements that the DB instance belongs
     * to.</p>
     */
    inline DBInstance& AddVpcSecurityGroups(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupsHasBeenSet = true; m_vpcSecurityGroups.push_back(value); return *this; }

    /**
     * <p>Provides the list of DB parameter groups applied to this DB instance.</p>
     */
    inline const Aws::Vector<DBParameterGroupStatus>& GetDBParameterGroups() const{ return m_dBParameterGroups; }

    /**
     * <p>Provides the list of DB parameter groups applied to this DB instance.</p>
     */
    inline void SetDBParameterGroups(const Aws::Vector<DBParameterGroupStatus>& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups = value; }

    /**
     * <p>Provides the list of DB parameter groups applied to this DB instance.</p>
     */
    inline void SetDBParameterGroups(Aws::Vector<DBParameterGroupStatus>&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups = value; }

    /**
     * <p>Provides the list of DB parameter groups applied to this DB instance.</p>
     */
    inline DBInstance& WithDBParameterGroups(const Aws::Vector<DBParameterGroupStatus>& value) { SetDBParameterGroups(value); return *this;}

    /**
     * <p>Provides the list of DB parameter groups applied to this DB instance.</p>
     */
    inline DBInstance& WithDBParameterGroups(Aws::Vector<DBParameterGroupStatus>&& value) { SetDBParameterGroups(value); return *this;}

    /**
     * <p>Provides the list of DB parameter groups applied to this DB instance.</p>
     */
    inline DBInstance& AddDBParameterGroups(const DBParameterGroupStatus& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups.push_back(value); return *this; }

    /**
     * <p>Provides the list of DB parameter groups applied to this DB instance.</p>
     */
    inline DBInstance& AddDBParameterGroups(DBParameterGroupStatus&& value) { m_dBParameterGroupsHasBeenSet = true; m_dBParameterGroups.push_back(value); return *this; }

    /**
     * <p>Specifies the name of the Availability Zone the DB instance is located
     * in.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>Specifies the name of the Availability Zone the DB instance is located
     * in.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>Specifies the name of the Availability Zone the DB instance is located
     * in.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>Specifies the name of the Availability Zone the DB instance is located
     * in.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>Specifies the name of the Availability Zone the DB instance is located
     * in.</p>
     */
    inline DBInstance& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Specifies the name of the Availability Zone the DB instance is located
     * in.</p>
     */
    inline DBInstance& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Specifies the name of the Availability Zone the DB instance is located
     * in.</p>
     */
    inline DBInstance& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>Specifies information on the subnet group associated with the DB instance,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline const DBSubnetGroup& GetDBSubnetGroup() const{ return m_dBSubnetGroup; }

    /**
     * <p>Specifies information on the subnet group associated with the DB instance,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline void SetDBSubnetGroup(const DBSubnetGroup& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = value; }

    /**
     * <p>Specifies information on the subnet group associated with the DB instance,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline void SetDBSubnetGroup(DBSubnetGroup&& value) { m_dBSubnetGroupHasBeenSet = true; m_dBSubnetGroup = value; }

    /**
     * <p>Specifies information on the subnet group associated with the DB instance,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline DBInstance& WithDBSubnetGroup(const DBSubnetGroup& value) { SetDBSubnetGroup(value); return *this;}

    /**
     * <p>Specifies information on the subnet group associated with the DB instance,
     * including the name, description, and subnets in the subnet group.</p>
     */
    inline DBInstance& WithDBSubnetGroup(DBSubnetGroup&& value) { SetDBSubnetGroup(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

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
    inline DBInstance& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies the weekly time range during which system maintenance can occur, in
     * Universal Coordinated Time (UTC).</p>
     */
    inline DBInstance& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline const PendingModifiedValues& GetPendingModifiedValues() const{ return m_pendingModifiedValues; }

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline void SetPendingModifiedValues(const PendingModifiedValues& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline void SetPendingModifiedValues(PendingModifiedValues&& value) { m_pendingModifiedValuesHasBeenSet = true; m_pendingModifiedValues = value; }

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline DBInstance& WithPendingModifiedValues(const PendingModifiedValues& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>Specifies that changes to the DB instance are pending. This element is only
     * included when changes are pending. Specific changes are identified by
     * subelements.</p>
     */
    inline DBInstance& WithPendingModifiedValues(PendingModifiedValues&& value) { SetPendingModifiedValues(value); return *this;}

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline const Aws::Utils::DateTime& GetLatestRestorableTime() const{ return m_latestRestorableTime; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline void SetLatestRestorableTime(const Aws::Utils::DateTime& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline void SetLatestRestorableTime(Aws::Utils::DateTime&& value) { m_latestRestorableTimeHasBeenSet = true; m_latestRestorableTime = value; }

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline DBInstance& WithLatestRestorableTime(const Aws::Utils::DateTime& value) { SetLatestRestorableTime(value); return *this;}

    /**
     * <p>Specifies the latest time to which a database can be restored with
     * point-in-time restore.</p>
     */
    inline DBInstance& WithLatestRestorableTime(Aws::Utils::DateTime&& value) { SetLatestRestorableTime(value); return *this;}

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment.</p>
     */
    inline DBInstance& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>Indicates the database engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

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
    inline DBInstance& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

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
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates that minor version patches are applied automatically.</p>
     */
    inline DBInstance& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p>Contains the identifier of the source DB instance if this DB instance is a
     * Read Replica.</p>
     */
    inline const Aws::String& GetReadReplicaSourceDBInstanceIdentifier() const{ return m_readReplicaSourceDBInstanceIdentifier; }

    /**
     * <p>Contains the identifier of the source DB instance if this DB instance is a
     * Read Replica.</p>
     */
    inline void SetReadReplicaSourceDBInstanceIdentifier(const Aws::String& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = value; }

    /**
     * <p>Contains the identifier of the source DB instance if this DB instance is a
     * Read Replica.</p>
     */
    inline void SetReadReplicaSourceDBInstanceIdentifier(Aws::String&& value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier = value; }

    /**
     * <p>Contains the identifier of the source DB instance if this DB instance is a
     * Read Replica.</p>
     */
    inline void SetReadReplicaSourceDBInstanceIdentifier(const char* value) { m_readReplicaSourceDBInstanceIdentifierHasBeenSet = true; m_readReplicaSourceDBInstanceIdentifier.assign(value); }

    /**
     * <p>Contains the identifier of the source DB instance if this DB instance is a
     * Read Replica.</p>
     */
    inline DBInstance& WithReadReplicaSourceDBInstanceIdentifier(const Aws::String& value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Contains the identifier of the source DB instance if this DB instance is a
     * Read Replica.</p>
     */
    inline DBInstance& WithReadReplicaSourceDBInstanceIdentifier(Aws::String&& value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Contains the identifier of the source DB instance if this DB instance is a
     * Read Replica.</p>
     */
    inline DBInstance& WithReadReplicaSourceDBInstanceIdentifier(const char* value) { SetReadReplicaSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadReplicaDBInstanceIdentifiers() const{ return m_readReplicaDBInstanceIdentifiers; }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * instance.</p>
     */
    inline void SetReadReplicaDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = value; }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * instance.</p>
     */
    inline void SetReadReplicaDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers = value; }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * instance.</p>
     */
    inline DBInstance& WithReadReplicaDBInstanceIdentifiers(const Aws::Vector<Aws::String>& value) { SetReadReplicaDBInstanceIdentifiers(value); return *this;}

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * instance.</p>
     */
    inline DBInstance& WithReadReplicaDBInstanceIdentifiers(Aws::Vector<Aws::String>&& value) { SetReadReplicaDBInstanceIdentifiers(value); return *this;}

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * instance.</p>
     */
    inline DBInstance& AddReadReplicaDBInstanceIdentifiers(const Aws::String& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * instance.</p>
     */
    inline DBInstance& AddReadReplicaDBInstanceIdentifiers(Aws::String&& value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }

    /**
     * <p>Contains one or more identifiers of the Read Replicas associated with this DB
     * instance.</p>
     */
    inline DBInstance& AddReadReplicaDBInstanceIdentifiers(const char* value) { m_readReplicaDBInstanceIdentifiersHasBeenSet = true; m_readReplicaDBInstanceIdentifiers.push_back(value); return *this; }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline DBInstance& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline DBInstance& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for this DB instance.</p>
     */
    inline DBInstance& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /**
     * <p>Specifies the Provisioned IOPS (I/O operations per second) value.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Specifies the Provisioned IOPS (I/O operations per second) value.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Specifies the Provisioned IOPS (I/O operations per second) value.</p>
     */
    inline DBInstance& WithIops(int value) { SetIops(value); return *this;}

    /**
     * <p>Provides the list of option group memberships for this DB instance.</p>
     */
    inline const Aws::Vector<OptionGroupMembership>& GetOptionGroupMemberships() const{ return m_optionGroupMemberships; }

    /**
     * <p>Provides the list of option group memberships for this DB instance.</p>
     */
    inline void SetOptionGroupMemberships(const Aws::Vector<OptionGroupMembership>& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships = value; }

    /**
     * <p>Provides the list of option group memberships for this DB instance.</p>
     */
    inline void SetOptionGroupMemberships(Aws::Vector<OptionGroupMembership>&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships = value; }

    /**
     * <p>Provides the list of option group memberships for this DB instance.</p>
     */
    inline DBInstance& WithOptionGroupMemberships(const Aws::Vector<OptionGroupMembership>& value) { SetOptionGroupMemberships(value); return *this;}

    /**
     * <p>Provides the list of option group memberships for this DB instance.</p>
     */
    inline DBInstance& WithOptionGroupMemberships(Aws::Vector<OptionGroupMembership>&& value) { SetOptionGroupMemberships(value); return *this;}

    /**
     * <p>Provides the list of option group memberships for this DB instance.</p>
     */
    inline DBInstance& AddOptionGroupMemberships(const OptionGroupMembership& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships.push_back(value); return *this; }

    /**
     * <p>Provides the list of option group memberships for this DB instance.</p>
     */
    inline DBInstance& AddOptionGroupMemberships(OptionGroupMembership&& value) { m_optionGroupMembershipsHasBeenSet = true; m_optionGroupMemberships.push_back(value); return *this; }

    /**
     * <p>If present, specifies the name of the character set that this instance is
     * associated with.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>If present, specifies the name of the character set that this instance is
     * associated with.</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>If present, specifies the name of the character set that this instance is
     * associated with.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>If present, specifies the name of the character set that this instance is
     * associated with.</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>If present, specifies the name of the character set that this instance is
     * associated with.</p>
     */
    inline DBInstance& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>If present, specifies the name of the character set that this instance is
     * associated with.</p>
     */
    inline DBInstance& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>If present, specifies the name of the character set that this instance is
     * associated with.</p>
     */
    inline DBInstance& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support.</p>
     */
    inline const Aws::String& GetSecondaryAvailabilityZone() const{ return m_secondaryAvailabilityZone; }

    /**
     * <p>If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support.</p>
     */
    inline void SetSecondaryAvailabilityZone(const Aws::String& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = value; }

    /**
     * <p>If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support.</p>
     */
    inline void SetSecondaryAvailabilityZone(Aws::String&& value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone = value; }

    /**
     * <p>If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support.</p>
     */
    inline void SetSecondaryAvailabilityZone(const char* value) { m_secondaryAvailabilityZoneHasBeenSet = true; m_secondaryAvailabilityZone.assign(value); }

    /**
     * <p>If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support.</p>
     */
    inline DBInstance& WithSecondaryAvailabilityZone(const Aws::String& value) { SetSecondaryAvailabilityZone(value); return *this;}

    /**
     * <p>If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support.</p>
     */
    inline DBInstance& WithSecondaryAvailabilityZone(Aws::String&& value) { SetSecondaryAvailabilityZone(value); return *this;}

    /**
     * <p>If present, specifies the name of the secondary Availability Zone for a DB
     * instance with multi-AZ support.</p>
     */
    inline DBInstance& WithSecondaryAvailabilityZone(const char* value) { SetSecondaryAvailabilityZone(value); return *this;}

    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b>true</p> </li> <li> <p> <b>VPC:</b>false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance will be publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance will
     * be private.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b>true</p> </li> <li> <p> <b>VPC:</b>false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance will be publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance will
     * be private.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b>true</p> </li> <li> <p> <b>VPC:</b>false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance will be publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance will
     * be private.</p>
     */
    inline DBInstance& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

    /**
     * <p>The status of a Read Replica. If the instance is not a Read Replica, this
     * will be blank.</p>
     */
    inline const Aws::Vector<DBInstanceStatusInfo>& GetStatusInfos() const{ return m_statusInfos; }

    /**
     * <p>The status of a Read Replica. If the instance is not a Read Replica, this
     * will be blank.</p>
     */
    inline void SetStatusInfos(const Aws::Vector<DBInstanceStatusInfo>& value) { m_statusInfosHasBeenSet = true; m_statusInfos = value; }

    /**
     * <p>The status of a Read Replica. If the instance is not a Read Replica, this
     * will be blank.</p>
     */
    inline void SetStatusInfos(Aws::Vector<DBInstanceStatusInfo>&& value) { m_statusInfosHasBeenSet = true; m_statusInfos = value; }

    /**
     * <p>The status of a Read Replica. If the instance is not a Read Replica, this
     * will be blank.</p>
     */
    inline DBInstance& WithStatusInfos(const Aws::Vector<DBInstanceStatusInfo>& value) { SetStatusInfos(value); return *this;}

    /**
     * <p>The status of a Read Replica. If the instance is not a Read Replica, this
     * will be blank.</p>
     */
    inline DBInstance& WithStatusInfos(Aws::Vector<DBInstanceStatusInfo>&& value) { SetStatusInfos(value); return *this;}

    /**
     * <p>The status of a Read Replica. If the instance is not a Read Replica, this
     * will be blank.</p>
     */
    inline DBInstance& AddStatusInfos(const DBInstanceStatusInfo& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(value); return *this; }

    /**
     * <p>The status of a Read Replica. If the instance is not a Read Replica, this
     * will be blank.</p>
     */
    inline DBInstance& AddStatusInfos(DBInstanceStatusInfo&& value) { m_statusInfosHasBeenSet = true; m_statusInfos.push_back(value); return *this; }

    /**
     * <p>Specifies the storage type associated with DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type associated with DB instance.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type associated with DB instance.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type associated with DB instance.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type associated with DB instance.</p>
     */
    inline DBInstance& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type associated with DB instance.</p>
     */
    inline DBInstance& WithStorageType(Aws::String&& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type associated with DB instance.</p>
     */
    inline DBInstance& WithStorageType(const char* value) { SetStorageType(value); return *this;}

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline DBInstance& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline DBInstance& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which the instance is associated for TDE
     * encryption.</p>
     */
    inline DBInstance& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>Specifies the port that the DB instance listens on. If the DB instance is
     * part of a DB cluster, this can be a different port than the DB cluster port.</p>
     */
    inline int GetDbInstancePort() const{ return m_dbInstancePort; }

    /**
     * <p>Specifies the port that the DB instance listens on. If the DB instance is
     * part of a DB cluster, this can be a different port than the DB cluster port.</p>
     */
    inline void SetDbInstancePort(int value) { m_dbInstancePortHasBeenSet = true; m_dbInstancePort = value; }

    /**
     * <p>Specifies the port that the DB instance listens on. If the DB instance is
     * part of a DB cluster, this can be a different port than the DB cluster port.</p>
     */
    inline DBInstance& WithDbInstancePort(int value) { SetDbInstancePort(value); return *this;}

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline DBInstance& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline DBInstance& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>If the DB instance is a member of a DB cluster, contains the name of the DB
     * cluster that the DB instance is a member of.</p>
     */
    inline DBInstance& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB instance is encrypted.</p>
     */
    inline DBInstance& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}

    /**
     * <p> If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance. </p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p> If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance. </p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance. </p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p> If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance. </p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p> If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance. </p>
     */
    inline DBInstance& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance. </p>
     */
    inline DBInstance& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p> If <code>StorageEncrypted</code> is true, the KMS key identifier for the
     * encrypted DB instance. </p>
     */
    inline DBInstance& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The region-unique, immutable identifier for the DB instance. This identifier
     * is found in AWS CloudTrail log entries whenever the KMS key for the DB instance
     * is accessed.</p>
     */
    inline const Aws::String& GetDbiResourceId() const{ return m_dbiResourceId; }

    /**
     * <p>The region-unique, immutable identifier for the DB instance. This identifier
     * is found in AWS CloudTrail log entries whenever the KMS key for the DB instance
     * is accessed.</p>
     */
    inline void SetDbiResourceId(const Aws::String& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>The region-unique, immutable identifier for the DB instance. This identifier
     * is found in AWS CloudTrail log entries whenever the KMS key for the DB instance
     * is accessed.</p>
     */
    inline void SetDbiResourceId(Aws::String&& value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId = value; }

    /**
     * <p>The region-unique, immutable identifier for the DB instance. This identifier
     * is found in AWS CloudTrail log entries whenever the KMS key for the DB instance
     * is accessed.</p>
     */
    inline void SetDbiResourceId(const char* value) { m_dbiResourceIdHasBeenSet = true; m_dbiResourceId.assign(value); }

    /**
     * <p>The region-unique, immutable identifier for the DB instance. This identifier
     * is found in AWS CloudTrail log entries whenever the KMS key for the DB instance
     * is accessed.</p>
     */
    inline DBInstance& WithDbiResourceId(const Aws::String& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The region-unique, immutable identifier for the DB instance. This identifier
     * is found in AWS CloudTrail log entries whenever the KMS key for the DB instance
     * is accessed.</p>
     */
    inline DBInstance& WithDbiResourceId(Aws::String&& value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The region-unique, immutable identifier for the DB instance. This identifier
     * is found in AWS CloudTrail log entries whenever the KMS key for the DB instance
     * is accessed.</p>
     */
    inline DBInstance& WithDbiResourceId(const char* value) { SetDbiResourceId(value); return *this;}

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline DBInstance& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline DBInstance& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>The identifier of the CA certificate for this DB instance.</p>
     */
    inline DBInstance& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * instance.</p>
     */
    inline const Aws::Vector<DomainMembership>& GetDomainMemberships() const{ return m_domainMemberships; }

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * instance.</p>
     */
    inline void SetDomainMemberships(const Aws::Vector<DomainMembership>& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = value; }

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * instance.</p>
     */
    inline void SetDomainMemberships(Aws::Vector<DomainMembership>&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships = value; }

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * instance.</p>
     */
    inline DBInstance& WithDomainMemberships(const Aws::Vector<DomainMembership>& value) { SetDomainMemberships(value); return *this;}

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * instance.</p>
     */
    inline DBInstance& WithDomainMemberships(Aws::Vector<DomainMembership>&& value) { SetDomainMemberships(value); return *this;}

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * instance.</p>
     */
    inline DBInstance& AddDomainMemberships(const DomainMembership& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(value); return *this; }

    /**
     * <p>The Active Directory Domain membership records associated with the DB
     * instance.</p>
     */
    inline DBInstance& AddDomainMemberships(DomainMembership&& value) { m_domainMembershipsHasBeenSet = true; m_domainMemberships.push_back(value); return *this; }

    /**
     * <p>Specifies whether tags are copied from the DB instance to snapshots of the DB
     * instance.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>Specifies whether tags are copied from the DB instance to snapshots of the DB
     * instance.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>Specifies whether tags are copied from the DB instance to snapshots of the DB
     * instance.</p>
     */
    inline DBInstance& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance.</p>
     */
    inline DBInstance& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
     * receives the Enhanced Monitoring metrics data for the DB instance.</p>
     */
    inline const Aws::String& GetEnhancedMonitoringResourceArn() const{ return m_enhancedMonitoringResourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
     * receives the Enhanced Monitoring metrics data for the DB instance.</p>
     */
    inline void SetEnhancedMonitoringResourceArn(const Aws::String& value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
     * receives the Enhanced Monitoring metrics data for the DB instance.</p>
     */
    inline void SetEnhancedMonitoringResourceArn(Aws::String&& value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
     * receives the Enhanced Monitoring metrics data for the DB instance.</p>
     */
    inline void SetEnhancedMonitoringResourceArn(const char* value) { m_enhancedMonitoringResourceArnHasBeenSet = true; m_enhancedMonitoringResourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
     * receives the Enhanced Monitoring metrics data for the DB instance.</p>
     */
    inline DBInstance& WithEnhancedMonitoringResourceArn(const Aws::String& value) { SetEnhancedMonitoringResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
     * receives the Enhanced Monitoring metrics data for the DB instance.</p>
     */
    inline DBInstance& WithEnhancedMonitoringResourceArn(Aws::String&& value) { SetEnhancedMonitoringResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon CloudWatch Logs log stream that
     * receives the Enhanced Monitoring metrics data for the DB instance.</p>
     */
    inline DBInstance& WithEnhancedMonitoringResourceArn(const char* value) { SetEnhancedMonitoringResourceArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
     * to CloudWatch Logs.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
     * to CloudWatch Logs.</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
     * to CloudWatch Logs.</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
     * to CloudWatch Logs.</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
     * to CloudWatch Logs.</p>
     */
    inline DBInstance& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
     * to CloudWatch Logs.</p>
     */
    inline DBInstance& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send Enhanced Monitoring metrics
     * to CloudWatch Logs.</p>
     */
    inline DBInstance& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Managing.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a>. </p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Managing.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a>. </p>
     */
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Managing.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a>. </p>
     */
    inline DBInstance& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceArn() const{ return m_dBInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline void SetDBInstanceArn(const Aws::String& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline void SetDBInstanceArn(Aws::String&& value) { m_dBInstanceArnHasBeenSet = true; m_dBInstanceArn = value; }

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
    inline DBInstance& WithDBInstanceArn(Aws::String&& value) { SetDBInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the DB instance.</p>
     */
    inline DBInstance& WithDBInstanceArn(const char* value) { SetDBInstanceArn(value); return *this;}

    /**
     * <p>The time zone of the DB instance. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for Microsoft SQL
     * Server DB instances that were created with a time zone specified. </p>
     */
    inline const Aws::String& GetTimezone() const{ return m_timezone; }

    /**
     * <p>The time zone of the DB instance. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for Microsoft SQL
     * Server DB instances that were created with a time zone specified. </p>
     */
    inline void SetTimezone(const Aws::String& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone of the DB instance. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for Microsoft SQL
     * Server DB instances that were created with a time zone specified. </p>
     */
    inline void SetTimezone(Aws::String&& value) { m_timezoneHasBeenSet = true; m_timezone = value; }

    /**
     * <p>The time zone of the DB instance. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for Microsoft SQL
     * Server DB instances that were created with a time zone specified. </p>
     */
    inline void SetTimezone(const char* value) { m_timezoneHasBeenSet = true; m_timezone.assign(value); }

    /**
     * <p>The time zone of the DB instance. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for Microsoft SQL
     * Server DB instances that were created with a time zone specified. </p>
     */
    inline DBInstance& WithTimezone(const Aws::String& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of the DB instance. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for Microsoft SQL
     * Server DB instances that were created with a time zone specified. </p>
     */
    inline DBInstance& WithTimezone(Aws::String&& value) { SetTimezone(value); return *this;}

    /**
     * <p>The time zone of the DB instance. In most cases, the <code>Timezone</code>
     * element is empty. <code>Timezone</code> content appears only for Microsoft SQL
     * Server DB instances that were created with a time zone specified. </p>
     */
    inline DBInstance& WithTimezone(const char* value) { SetTimezone(value); return *this;}

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
    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;
    Aws::Utils::DateTime m_instanceCreateTime;
    bool m_instanceCreateTimeHasBeenSet;
    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;
    int m_backupRetentionPeriod;
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
    Aws::Utils::DateTime m_latestRestorableTime;
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
    int m_iops;
    bool m_iopsHasBeenSet;
    Aws::Vector<OptionGroupMembership> m_optionGroupMemberships;
    bool m_optionGroupMembershipsHasBeenSet;
    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet;
    Aws::String m_secondaryAvailabilityZone;
    bool m_secondaryAvailabilityZoneHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
    Aws::Vector<DBInstanceStatusInfo> m_statusInfos;
    bool m_statusInfosHasBeenSet;
    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;
    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;
    int m_dbInstancePort;
    bool m_dbInstancePortHasBeenSet;
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
    Aws::String m_dbiResourceId;
    bool m_dbiResourceIdHasBeenSet;
    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet;
    Aws::Vector<DomainMembership> m_domainMemberships;
    bool m_domainMembershipsHasBeenSet;
    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;
    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet;
    Aws::String m_enhancedMonitoringResourceArn;
    bool m_enhancedMonitoringResourceArnHasBeenSet;
    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet;
    int m_promotionTier;
    bool m_promotionTierHasBeenSet;
    Aws::String m_dBInstanceArn;
    bool m_dBInstanceArnHasBeenSet;
    Aws::String m_timezone;
    bool m_timezoneHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
