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
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API CreateDBInstanceReadReplicaRequest : public RDSRequest
  {
  public:
    CreateDBInstanceReadReplicaRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier of the Read Replica. This identifier is the unique
     * key that identifies a DB instance. This parameter is stored as a lowercase
     * string.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5.</p> </li> <li> <p>The specified DB instance
     * must have automatic backups enabled, its backup retention period must be greater
     * than 0.</p> </li> <li> <p>If the source DB instance is in the same region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceDBInstanceIdentifier() const{ return m_sourceDBInstanceIdentifier; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5.</p> </li> <li> <p>The specified DB instance
     * must have automatic backups enabled, its backup retention period must be greater
     * than 0.</p> </li> <li> <p>If the source DB instance is in the same region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const Aws::String& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5.</p> </li> <li> <p>The specified DB instance
     * must have automatic backups enabled, its backup retention period must be greater
     * than 0.</p> </li> <li> <p>If the source DB instance is in the same region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(Aws::String&& value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier = value; }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5.</p> </li> <li> <p>The specified DB instance
     * must have automatic backups enabled, its backup retention period must be greater
     * than 0.</p> </li> <li> <p>If the source DB instance is in the same region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline void SetSourceDBInstanceIdentifier(const char* value) { m_sourceDBInstanceIdentifierHasBeenSet = true; m_sourceDBInstanceIdentifier.assign(value); }

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5.</p> </li> <li> <p>The specified DB instance
     * must have automatic backups enabled, its backup retention period must be greater
     * than 0.</p> </li> <li> <p>If the source DB instance is in the same region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const Aws::String& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5.</p> </li> <li> <p>The specified DB instance
     * must have automatic backups enabled, its backup retention period must be greater
     * than 0.</p> </li> <li> <p>If the source DB instance is in the same region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(Aws::String&& value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier of the DB instance that will act as the source for the Read
     * Replica. Each DB instance can have up to five Read Replicas.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier of an existing MySQL,
     * MariaDB, or PostgreSQL DB instance.</p> </li> <li> <p>Can specify a DB instance
     * that is a MySQL Read Replica only if the source is running MySQL 5.6.</p> </li>
     * <li> <p>Can specify a DB instance that is a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5.</p> </li> <li> <p>The specified DB instance
     * must have automatic backups enabled, its backup retention period must be greater
     * than 0.</p> </li> <li> <p>If the source DB instance is in the same region as the
     * Read Replica, specify a valid DB instance identifier.</p> </li> <li> <p>If the
     * source DB instance is in a different region than the Read Replica, specify a
     * valid DB instance ARN. For more information, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Tagging.ARN.html#USER_Tagging.ARN.Constructing">
     * Constructing a Amazon RDS Amazon Resource Name (ARN)</a>.</p> </li> </ul>
     */
    inline CreateDBInstanceReadReplicaRequest& WithSourceDBInstanceIdentifier(const char* value) { SetSourceDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Read Replica.</p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge |
     * db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge | db.m4.4xlarge |
     * db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge |
     * db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium | db.t2.large</code>
     * </p> <p>Default: Inherits from the source DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the Read Replica.</p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge |
     * db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge | db.m4.4xlarge |
     * db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge |
     * db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium | db.t2.large</code>
     * </p> <p>Default: Inherits from the source DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the Read Replica.</p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge |
     * db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge | db.m4.4xlarge |
     * db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge |
     * db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium | db.t2.large</code>
     * </p> <p>Default: Inherits from the source DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the Read Replica.</p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge |
     * db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge | db.m4.4xlarge |
     * db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge |
     * db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium | db.t2.large</code>
     * </p> <p>Default: Inherits from the source DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the Read Replica.</p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge |
     * db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge | db.m4.4xlarge |
     * db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge |
     * db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium | db.t2.large</code>
     * </p> <p>Default: Inherits from the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Read Replica.</p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge |
     * db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge | db.m4.4xlarge |
     * db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge |
     * db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium | db.t2.large</code>
     * </p> <p>Default: Inherits from the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Read Replica.</p> <p> Valid Values:
     * <code>db.m1.small | db.m1.medium | db.m1.large | db.m1.xlarge | db.m2.xlarge
     * |db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large | db.m3.xlarge |
     * db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge | db.m4.4xlarge |
     * db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge | db.r3.4xlarge |
     * db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium | db.t2.large</code>
     * </p> <p>Default: Inherits from the source DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Amazon EC2 Availability Zone that the Read Replica will be created
     * in.</p> <p>Default: A random, system-chosen Availability Zone in the endpoint's
     * region.</p> <p> Example: <code>us-east-1d</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number that the DB instance uses for connections.</p> <p>Default:
     * Inherits from the source DB instance</p> <p>Valid Values:
     * <code>1150-65535</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>Indicates that minor engine upgrades will be applied automatically to the
     * Read Replica during the maintenance window.</p> <p>Default: Inherits from the
     * source DB instance</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Indicates that minor engine upgrades will be applied automatically to the
     * Read Replica during the maintenance window.</p> <p>Default: Inherits from the
     * source DB instance</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates that minor engine upgrades will be applied automatically to the
     * Read Replica during the maintenance window.</p> <p>Default: Inherits from the
     * source DB instance</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB instance.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithIops(int value) { SetIops(value); return *this;}

    /**
     * <p>The option group the DB instance will be associated with. If omitted, the
     * default option group for the engine specified will be used.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The option group the DB instance will be associated with. If omitted, the
     * default option group for the engine specified will be used.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The option group the DB instance will be associated with. If omitted, the
     * default option group for the engine specified will be used.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The option group the DB instance will be associated with. If omitted, the
     * default option group for the engine specified will be used.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The option group the DB instance will be associated with. If omitted, the
     * default option group for the engine specified will be used.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The option group the DB instance will be associated with. If omitted, the
     * default option group for the engine specified will be used.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The option group the DB instance will be associated with. If omitted, the
     * default option group for the engine specified will be used.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

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
    inline CreateDBInstanceReadReplicaRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline CreateDBInstanceReadReplicaRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateDBInstanceReadReplicaRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    
    inline CreateDBInstanceReadReplicaRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateDBInstanceReadReplicaRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance will be
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another region.</p> </li> <li> <p>The
     * specified DB subnet group must be in the same region in which the operation is
     * running.</p> </li> <li> <p>All Read Replicas in one region that are created from
     * the same source DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet
     * groups from the same VPC. All these Read Replicas will be created in the same
     * VPC.</p> </li> <li> <p>Not specify a DB subnet group. All these Read Replicas
     * will be created outside of any VPC.</p> </li> </ul> </li> </ul> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance will be
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another region.</p> </li> <li> <p>The
     * specified DB subnet group must be in the same region in which the operation is
     * running.</p> </li> <li> <p>All Read Replicas in one region that are created from
     * the same source DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet
     * groups from the same VPC. All these Read Replicas will be created in the same
     * VPC.</p> </li> <li> <p>Not specify a DB subnet group. All these Read Replicas
     * will be created outside of any VPC.</p> </li> </ul> </li> </ul> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance will be
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another region.</p> </li> <li> <p>The
     * specified DB subnet group must be in the same region in which the operation is
     * running.</p> </li> <li> <p>All Read Replicas in one region that are created from
     * the same source DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet
     * groups from the same VPC. All these Read Replicas will be created in the same
     * VPC.</p> </li> <li> <p>Not specify a DB subnet group. All these Read Replicas
     * will be created outside of any VPC.</p> </li> </ul> </li> </ul> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance will be
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another region.</p> </li> <li> <p>The
     * specified DB subnet group must be in the same region in which the operation is
     * running.</p> </li> <li> <p>All Read Replicas in one region that are created from
     * the same source DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet
     * groups from the same VPC. All these Read Replicas will be created in the same
     * VPC.</p> </li> <li> <p>Not specify a DB subnet group. All these Read Replicas
     * will be created outside of any VPC.</p> </li> </ul> </li> </ul> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance will be
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another region.</p> </li> <li> <p>The
     * specified DB subnet group must be in the same region in which the operation is
     * running.</p> </li> <li> <p>All Read Replicas in one region that are created from
     * the same source DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet
     * groups from the same VPC. All these Read Replicas will be created in the same
     * VPC.</p> </li> <li> <p>Not specify a DB subnet group. All these Read Replicas
     * will be created outside of any VPC.</p> </li> </ul> </li> </ul> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance will be
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another region.</p> </li> <li> <p>The
     * specified DB subnet group must be in the same region in which the operation is
     * running.</p> </li> <li> <p>All Read Replicas in one region that are created from
     * the same source DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet
     * groups from the same VPC. All these Read Replicas will be created in the same
     * VPC.</p> </li> <li> <p>Not specify a DB subnet group. All these Read Replicas
     * will be created outside of any VPC.</p> </li> </ul> </li> </ul> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>Specifies a DB subnet group for the DB instance. The new DB instance will be
     * created in the VPC associated with the DB subnet group. If no DB subnet group is
     * specified, then the new DB instance is not created in a VPC.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can only be specified if the source DB instance
     * identifier specifies a DB instance in another region.</p> </li> <li> <p>The
     * specified DB subnet group must be in the same region in which the operation is
     * running.</p> </li> <li> <p>All Read Replicas in one region that are created from
     * the same source DB instance must either:&gt;</p> <ul> <li> <p>Specify DB subnet
     * groups from the same VPC. All these Read Replicas will be created in the same
     * VPC.</p> </li> <li> <p>Not specify a DB subnet group. All these Read Replicas
     * will be created outside of any VPC.</p> </li> </ul> </li> </ul> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(Aws::String&& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the Read Replica.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}

    /**
     * <p>True to copy all tags from the Read Replica to snapshots of the Read Replica;
     * otherwise false. The default is false.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>True to copy all tags from the Read Replica to snapshots of the Read Replica;
     * otherwise false. The default is false.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>True to copy all tags from the Read Replica to snapshots of the Read Replica;
     * otherwise false. The default is false.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the Read Replica. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline CreateDBInstanceReadReplicaRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    Aws::String m_sourceDBInstanceIdentifier;
    bool m_sourceDBInstanceIdentifierHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    int m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;
    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;
    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet;
    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
