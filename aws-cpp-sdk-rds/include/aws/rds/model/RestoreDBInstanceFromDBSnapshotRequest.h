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
   * <p/>
   */
  class AWS_RDS_API RestoreDBInstanceFromDBSnapshotRequest : public RDSRequest
  {
  public:
    RestoreDBInstanceFromDBSnapshotRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens (1 to 15 for SQL Server)</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens (1 to 15 for SQL Server)</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens (1 to 15 for SQL Server)</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens (1 to 15 for SQL Server)</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens (1 to 15 for SQL Server)</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens (1 to 15 for SQL Server)</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * alphanumeric characters or hyphens (1 to 15 for SQL Server)</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul> <p>If you are
     * restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul> <p>If you are
     * restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul> <p>If you are
     * restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul> <p>If you are
     * restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul> <p>If you are
     * restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul> <p>If you are
     * restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must contain from 1 to 255 alphanumeric characters or hyphens</p>
     * </li> <li> <p>First character must be a letter</p> </li> <li> <p>Cannot end with
     * a hyphen or contain two consecutive hyphens</p> </li> </ul> <p>If you are
     * restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance.</p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large |
     * db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge |
     * db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge |
     * db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium |
     * db.t2.large</code> </p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance.</p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large |
     * db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge |
     * db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge |
     * db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium |
     * db.t2.large</code> </p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance.</p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large |
     * db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge |
     * db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge |
     * db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium |
     * db.t2.large</code> </p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance.</p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large |
     * db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge |
     * db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge |
     * db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium |
     * db.t2.large</code> </p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance.</p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large |
     * db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge |
     * db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge |
     * db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium |
     * db.t2.large</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance.</p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large |
     * db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge |
     * db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge |
     * db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium |
     * db.t2.large</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance.</p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge | db.m3.medium | db.m3.large |
     * db.m3.xlarge | db.m3.2xlarge | db.m4.large | db.m4.xlarge | db.m4.2xlarge |
     * db.m4.4xlarge | db.m4.10xlarge | db.r3.large | db.r3.xlarge | db.r3.2xlarge |
     * db.r3.4xlarge | db.r3.8xlarge | db.t2.micro | db.t2.small | db.t2.medium |
     * db.t2.large</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The port number on which the database accepts connections.</p> <p>Default:
     * The same port as the original DB instance</p> <p>Constraints: Value must be
     * <code>1150-65535</code> </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>Default:
     * The same port as the original DB instance</p> <p>Constraints: Value must be
     * <code>1150-65535</code> </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>Default:
     * The same port as the original DB instance</p> <p>Constraints: Value must be
     * <code>1150-65535</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>The EC2 Availability Zone that the database instance will be created in.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The EC2 Availability Zone that the database instance will be created in.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The EC2 Availability Zone that the database instance will be created in.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The EC2 Availability Zone that the database instance will be created in.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The EC2 Availability Zone that the database instance will be created in.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The EC2 Availability Zone that the database instance will be created in.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The EC2 Availability Zone that the database instance will be created in.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints:
     * Must contain no more than 255 alphanumeric characters, periods, underscores,
     * spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment.</p> <p>Constraint: You
     * cannot specify the AvailabilityZone parameter if the MultiAZ parameter is set to
     * <code>true</code>.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    /**
     * <p>Specifies the accessibility options for the DB instance. A value of true
     * specifies an Internet-facing instance with a publicly resolvable DNS name, which
     * resolves to a public IP address. A value of false specifies an internal instance
     * with a DNS name that resolves to a private IP address.</p> <p>Default: The
     * default behavior varies depending on whether a VPC has been requested or not.
     * The following list shows the default behavior in each case.</p> <ul> <li> <p>
     * <b>Default VPC:</b> true</p> </li> <li> <p> <b>VPC:</b> false</p> </li> </ul>
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
     * <b>Default VPC:</b> true</p> </li> <li> <p> <b>VPC:</b> false</p> </li> </ul>
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
     * <b>Default VPC:</b> true</p> </li> <li> <p> <b>VPC:</b> false</p> </li> </ul>
     * <p>If no DB subnet group has been specified as part of the request and the
     * PubliclyAccessible value has not been set, the DB instance will be publicly
     * accessible. If a specific DB subnet group has been specified as part of the
     * request and the PubliclyAccessible value has not been set, the DB instance will
     * be private.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

    /**
     * <p>Indicates that minor version upgrades will be applied automatically to the DB
     * instance during the maintenance window.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>Indicates that minor version upgrades will be applied automatically to the DB
     * instance during the maintenance window.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>Indicates that minor version upgrades will be applied automatically to the DB
     * instance during the maintenance window.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>License model information for the restored DB instance.</p> <p>Default: Same
     * as source.</p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(Aws::String&& value) { SetDBName(value); return *this;}

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(const char* value) { SetDBName(value); return *this;}

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p> Valid Values: <code>MySQL</code> | <code>mariadb</code> |
     * <code>oracle-se1</code> | <code>oracle-se</code> | <code>oracle-ee</code> |
     * <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> | <code>postgres</code> |
     * <code>aurora</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p> Valid Values: <code>MySQL</code> | <code>mariadb</code> |
     * <code>oracle-se1</code> | <code>oracle-se</code> | <code>oracle-ee</code> |
     * <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> | <code>postgres</code> |
     * <code>aurora</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p> Valid Values: <code>MySQL</code> | <code>mariadb</code> |
     * <code>oracle-se1</code> | <code>oracle-se</code> | <code>oracle-ee</code> |
     * <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> | <code>postgres</code> |
     * <code>aurora</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p> Valid Values: <code>MySQL</code> | <code>mariadb</code> |
     * <code>oracle-se1</code> | <code>oracle-se</code> | <code>oracle-ee</code> |
     * <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> | <code>postgres</code> |
     * <code>aurora</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p> Valid Values: <code>MySQL</code> | <code>mariadb</code> |
     * <code>oracle-se1</code> | <code>oracle-se</code> | <code>oracle-ee</code> |
     * <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> | <code>postgres</code> |
     * <code>aurora</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p> Valid Values: <code>MySQL</code> | <code>mariadb</code> |
     * <code>oracle-se1</code> | <code>oracle-se</code> | <code>oracle-ee</code> |
     * <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> | <code>postgres</code> |
     * <code>aurora</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source</p>
     * <p> Valid Values: <code>MySQL</code> | <code>mariadb</code> |
     * <code>oracle-se1</code> | <code>oracle-se</code> | <code>oracle-ee</code> |
     * <code>sqlserver-ee</code> | <code>sqlserver-se</code> |
     * <code>sqlserver-ex</code> | <code>sqlserver-web</code> | <code>postgres</code> |
     * <code>aurora</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p>Specifies the amount of provisioned IOPS for the DB instance, expressed in
     * I/O operations per second. If this parameter is not specified, the IOPS value
     * will be taken from the backup. If this parameter is set to 0, the new instance
     * will be converted to a non-PIOPS instance, which will take additional time,
     * though your DB instance will be available for connections before the conversion
     * starts.</p> <p>Constraints: Must be an integer greater than 1000.</p> <p> <b>SQL
     * Server</b> </p> <p>Setting the IOPS value for the SQL Server database engine is
     * not supported.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Specifies the amount of provisioned IOPS for the DB instance, expressed in
     * I/O operations per second. If this parameter is not specified, the IOPS value
     * will be taken from the backup. If this parameter is set to 0, the new instance
     * will be converted to a non-PIOPS instance, which will take additional time,
     * though your DB instance will be available for connections before the conversion
     * starts.</p> <p>Constraints: Must be an integer greater than 1000.</p> <p> <b>SQL
     * Server</b> </p> <p>Setting the IOPS value for the SQL Server database engine is
     * not supported.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Specifies the amount of provisioned IOPS for the DB instance, expressed in
     * I/O operations per second. If this parameter is not specified, the IOPS value
     * will be taken from the backup. If this parameter is set to 0, the new instance
     * will be converted to a non-PIOPS instance, which will take additional time,
     * though your DB instance will be available for connections before the conversion
     * starts.</p> <p>Constraints: Must be an integer greater than 1000.</p> <p> <b>SQL
     * Server</b> </p> <p>Setting the IOPS value for the SQL Server database engine is
     * not supported.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithIops(int value) { SetIops(value); return *this;}

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * cannot be removed from an option group, and that option group cannot be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * cannot be removed from an option group, and that option group cannot be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * cannot be removed from an option group, and that option group cannot be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * cannot be removed from an option group, and that option group cannot be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * cannot be removed from an option group, and that option group cannot be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * cannot be removed from an option group, and that option group cannot be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * cannot be removed from an option group, and that option group cannot be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    
    inline RestoreDBInstanceFromDBSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline RestoreDBInstanceFromDBSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageType(Aws::String&& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified; otherwise <code>standard</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the Key Store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(Aws::String&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(value); return *this;}

    /**
     * <p>The password for the given ARN from the Key Store in order to access the
     * device.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomain(Aws::String&& value) { SetDomain(value); return *this;}

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomain(const char* value) { SetDomain(value); return *this;}

    /**
     * <p>True to copy all tags from the restored DB instance to snapshots of the DB
     * instance; otherwise false. The default is false.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>True to copy all tags from the restored DB instance to snapshots of the DB
     * instance; otherwise false. The default is false.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>True to copy all tags from the restored DB instance to snapshots of the DB
     * instance; otherwise false. The default is false.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    bool m_multiAZ;
    bool m_multiAZHasBeenSet;
    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;
    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;
    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;
    Aws::String m_dBName;
    bool m_dBNameHasBeenSet;
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    int m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;
    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;
    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet;
    Aws::String m_domain;
    bool m_domainHasBeenSet;
    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;
    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
