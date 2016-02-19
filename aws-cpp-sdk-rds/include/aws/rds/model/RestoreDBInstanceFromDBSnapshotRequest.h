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

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p> </p>
   */
  class AWS_RDS_API RestoreDBInstanceFromDBSnapshotRequest : public RDSRequest
  {
  public:
    RestoreDBInstanceFromDBSnapshotRequest();
    Aws::String SerializePayload() const override;


    /**
     * <p> The identifier for the DB Snapshot to restore from. </p> <p>Constraints:</p>
     * <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p> The identifier for the DB Snapshot to restore from. </p> <p>Constraints:</p>
     * <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> The identifier for the DB Snapshot to restore from. </p> <p>Constraints:</p>
     * <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p> The identifier for the DB Snapshot to restore from. </p> <p>Constraints:</p>
     * <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p> The identifier for the DB Snapshot to restore from. </p> <p>Constraints:</p>
     * <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The identifier for the DB Snapshot to restore from. </p> <p>Constraints:</p>
     * <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The identifier for the DB Snapshot to restore from. </p> <p>Constraints:</p>
     * <ul> <li>Must contain from 1 to 63 alphanumeric characters or hyphens</li>
     * <li>First character must be a letter</li> <li>Cannot end with a hyphen or
     * contain two consecutive hyphens</li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p> Name of the DB Instance to create from the DB Snapshot. This parameter isn't
     * case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-snapshot-id</code></p>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p> Name of the DB Instance to create from the DB Snapshot. This parameter isn't
     * case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-snapshot-id</code></p>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p> Name of the DB Instance to create from the DB Snapshot. This parameter isn't
     * case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-snapshot-id</code></p>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p> Name of the DB Instance to create from the DB Snapshot. This parameter isn't
     * case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-snapshot-id</code></p>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p> Name of the DB Instance to create from the DB Snapshot. This parameter isn't
     * case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-snapshot-id</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> Name of the DB Instance to create from the DB Snapshot. This parameter isn't
     * case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-snapshot-id</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> Name of the DB Instance to create from the DB Snapshot. This parameter isn't
     * case sensitive. </p> <p>Constraints:</p> <ul> <li>Must contain from 1 to 255
     * alphanumeric characters or hyphens</li> <li>First character must be a
     * letter</li> <li>Cannot end with a hyphen or contain two consecutive hyphens</li>
     * </ul> <p>Example: <code>my-snapshot-id</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> The compute and memory capacity of the Amazon RDS DB instance. </p> <p>Valid
     * Values: <code>db.t1.micro | db.m1.small | db.m1.medium | db.m1.large |
     * db.m1.xlarge | db.m2.2xlarge | db.m2.4xlarge</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p> The port number on which the database accepts connections. </p> <p>Default:
     * The same port as the original DB Instance</p> <p>Constraints: Value must be
     * <code>1150-65535</code></p>
     */
    inline long GetPort() const{ return m_port; }

    /**
     * <p> The port number on which the database accepts connections. </p> <p>Default:
     * The same port as the original DB Instance</p> <p>Constraints: Value must be
     * <code>1150-65535</code></p>
     */
    inline void SetPort(long value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p> The port number on which the database accepts connections. </p> <p>Default:
     * The same port as the original DB Instance</p> <p>Constraints: Value must be
     * <code>1150-65535</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithPort(long value) { SetPort(value); return *this;}

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p> <p>Example: <code>us-east-1a</code></p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p> <p>Example: <code>us-east-1a</code></p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p> <p>Example: <code>us-east-1a</code></p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p> <p>Example: <code>us-east-1a</code></p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p> <p>Example: <code>us-east-1a</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p> <p>Example: <code>us-east-1a</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The EC2 Availability Zone that the database instance will be created in.
     * </p> <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p> <p>Example: <code>us-east-1a</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p> The DB Subnet Group name to use for the new instance. </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p> The DB Subnet Group name to use for the new instance. </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p> The DB Subnet Group name to use for the new instance. </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p> The DB Subnet Group name to use for the new instance. </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p> The DB Subnet Group name to use for the new instance. </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p> The DB Subnet Group name to use for the new instance. </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p> The DB Subnet Group name to use for the new instance. </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p> Specifies if the DB Instance is a Multi-AZ deployment. </p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p> Specifies if the DB Instance is a Multi-AZ deployment. </p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p> Specifies if the DB Instance is a Multi-AZ deployment. </p> <p>Constraint:
     * You cannot specify the AvailabilityZone parameter if the MultiAZ parameter is
     * set to <code>true</code>.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}

    
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    
    inline RestoreDBInstanceFromDBSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}

    /**
     * <p> Indicates that minor version upgrades will be applied automatically to the
     * DB Instance during the maintenance window. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p> Indicates that minor version upgrades will be applied automatically to the
     * DB Instance during the maintenance window. </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p> Indicates that minor version upgrades will be applied automatically to the
     * DB Instance during the maintenance window. </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}

    /**
     * <p> License model information for the restored DB Instance. </p> <p> Default:
     * Same as source. </p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p> License model information for the restored DB Instance. </p> <p> Default:
     * Same as source. </p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p> License model information for the restored DB Instance. </p> <p> Default:
     * Same as source. </p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p> License model information for the restored DB Instance. </p> <p> Default:
     * Same as source. </p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p> License model information for the restored DB Instance. </p> <p> Default:
     * Same as source. </p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p> License model information for the restored DB Instance. </p> <p> Default:
     * Same as source. </p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(value); return *this;}

    /**
     * <p> License model information for the restored DB Instance. </p> <p> Default:
     * Same as source. </p> <p> Valid values: <code>license-included</code> |
     * <code>bring-your-own-license</code> | <code>general-public-license</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}

    /**
     * <p> The database name for the restored DB Instance. </p> <note> <p>This
     * parameter doesn't apply to the MySQL engine.</p> </note>
     */
    inline const Aws::String& GetDBName() const{ return m_dBName; }

    /**
     * <p> The database name for the restored DB Instance. </p> <note> <p>This
     * parameter doesn't apply to the MySQL engine.</p> </note>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p> The database name for the restored DB Instance. </p> <note> <p>This
     * parameter doesn't apply to the MySQL engine.</p> </note>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p> The database name for the restored DB Instance. </p> <note> <p>This
     * parameter doesn't apply to the MySQL engine.</p> </note>
     */
    inline void SetDBName(const char* value) { m_dBNameHasBeenSet = true; m_dBName.assign(value); }

    /**
     * <p> The database name for the restored DB Instance. </p> <note> <p>This
     * parameter doesn't apply to the MySQL engine.</p> </note>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(const Aws::String& value) { SetDBName(value); return *this;}

    /**
     * <p> The database name for the restored DB Instance. </p> <note> <p>This
     * parameter doesn't apply to the MySQL engine.</p> </note>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(Aws::String&& value) { SetDBName(value); return *this;}

    /**
     * <p> The database name for the restored DB Instance. </p> <note> <p>This
     * parameter doesn't apply to the MySQL engine.</p> </note>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(const char* value) { SetDBName(value); return *this;}

    /**
     * <p> The database engine to use for the new instance. </p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Example: <code>oracle-ee</code></p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p> The database engine to use for the new instance. </p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Example: <code>oracle-ee</code></p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> The database engine to use for the new instance. </p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Example: <code>oracle-ee</code></p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p> The database engine to use for the new instance. </p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Example: <code>oracle-ee</code></p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p> The database engine to use for the new instance. </p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Example: <code>oracle-ee</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p> The database engine to use for the new instance. </p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Example: <code>oracle-ee</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p> The database engine to use for the new instance. </p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p> <p>Example: <code>oracle-ee</code></p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p> The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB Instance. </p> <p> Constraints: Must be an
     * integer greater than 1000.</p>
     */
    inline long GetIops() const{ return m_iops; }

    /**
     * <p> The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB Instance. </p> <p> Constraints: Must be an
     * integer greater than 1000.</p>
     */
    inline void SetIops(long value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p> The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for the DB Instance. </p> <p> Constraints: Must be an
     * integer greater than 1000.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithIops(long value) { SetIops(value); return *this;}

    
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

  private:
    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;
    Aws::String m_dBSnapshotIdentifier;
    bool m_dBSnapshotIdentifierHasBeenSet;
    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;
    long m_port;
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
    long m_iops;
    bool m_iopsHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
