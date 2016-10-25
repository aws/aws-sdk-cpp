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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_RDS_API RestoreDBClusterFromSnapshotRequest : public RDSRequest
  {
  public:
    RestoreDBClusterFromSnapshotRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the restored DB
     * cluster can be created in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the restored DB
     * cluster can be created in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the restored DB
     * cluster can be created in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the restored DB
     * cluster can be created in.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the restored DB
     * cluster can be created in.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the restored DB
     * cluster can be created in.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the restored DB
     * cluster can be created in.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Provides the list of EC2 Availability Zones that instances in the restored DB
     * cluster can be created in.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The name of the DB cluster to create from the DB cluster snapshot. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code>
     * </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The name of the DB cluster to create from the DB cluster snapshot. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code>
     * </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to create from the DB cluster snapshot. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code>
     * </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to create from the DB cluster snapshot. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code>
     * </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The name of the DB cluster to create from the DB cluster snapshot. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code>
     * </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to create from the DB cluster snapshot. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code>
     * </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to create from the DB cluster snapshot. This
     * parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 255 alphanumeric characters or hyphens</p> </li> <li> <p>First
     * character must be a letter</p> </li> <li> <p>Cannot end with a hyphen or contain
     * two consecutive hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code>
     * </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB cluster snapshot to restore from.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 alphanumeric
     * characters or hyphens</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The identifier for the DB cluster snapshot to restore from.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 alphanumeric
     * characters or hyphens</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB cluster snapshot to restore from.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 alphanumeric
     * characters or hyphens</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB cluster snapshot to restore from.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 alphanumeric
     * characters or hyphens</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the DB cluster snapshot to restore from.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 alphanumeric
     * characters or hyphens</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB cluster snapshot to restore from.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 alphanumeric
     * characters or hyphens</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB cluster snapshot to restore from.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 alphanumeric
     * characters or hyphens</p> </li> <li> <p>First character must be a letter</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens</p>
     * </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to use for the new DB cluster.</p> <p>Default: The same
     * as source</p> <p>Constraint: Must be compatible with the engine of the
     * source</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The KMS key identifier to use when restoring an encrypted DB cluster from a
     * DB cluster snapshot.</p> <p>The KMS key identifier is the Amazon Resource Name
     * (ARN) for the KMS encryption key. If you are restoring a DB cluster with the
     * same AWS account that owns the KMS encryption key used to encrypt the new DB
     * cluster, then you can use the KMS key alias instead of the ARN for the KMS
     * encryption key.</p> <p>If you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then the following will occur:</p> <ul> <li>
     * <p>If the DB cluster snapshot is encrypted, then the restored DB cluster is
     * encrypted using the KMS key that was used to encrypt the DB cluster
     * snapshot.</p> </li> <li> <p>If the DB cluster snapshot is not encrypted, then
     * the restored DB cluster is encrypted using the specified encryption key.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier to use when restoring an encrypted DB cluster from a
     * DB cluster snapshot.</p> <p>The KMS key identifier is the Amazon Resource Name
     * (ARN) for the KMS encryption key. If you are restoring a DB cluster with the
     * same AWS account that owns the KMS encryption key used to encrypt the new DB
     * cluster, then you can use the KMS key alias instead of the ARN for the KMS
     * encryption key.</p> <p>If you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then the following will occur:</p> <ul> <li>
     * <p>If the DB cluster snapshot is encrypted, then the restored DB cluster is
     * encrypted using the KMS key that was used to encrypt the DB cluster
     * snapshot.</p> </li> <li> <p>If the DB cluster snapshot is not encrypted, then
     * the restored DB cluster is encrypted using the specified encryption key.</p>
     * </li> </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier to use when restoring an encrypted DB cluster from a
     * DB cluster snapshot.</p> <p>The KMS key identifier is the Amazon Resource Name
     * (ARN) for the KMS encryption key. If you are restoring a DB cluster with the
     * same AWS account that owns the KMS encryption key used to encrypt the new DB
     * cluster, then you can use the KMS key alias instead of the ARN for the KMS
     * encryption key.</p> <p>If you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then the following will occur:</p> <ul> <li>
     * <p>If the DB cluster snapshot is encrypted, then the restored DB cluster is
     * encrypted using the KMS key that was used to encrypt the DB cluster
     * snapshot.</p> </li> <li> <p>If the DB cluster snapshot is not encrypted, then
     * the restored DB cluster is encrypted using the specified encryption key.</p>
     * </li> </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier to use when restoring an encrypted DB cluster from a
     * DB cluster snapshot.</p> <p>The KMS key identifier is the Amazon Resource Name
     * (ARN) for the KMS encryption key. If you are restoring a DB cluster with the
     * same AWS account that owns the KMS encryption key used to encrypt the new DB
     * cluster, then you can use the KMS key alias instead of the ARN for the KMS
     * encryption key.</p> <p>If you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then the following will occur:</p> <ul> <li>
     * <p>If the DB cluster snapshot is encrypted, then the restored DB cluster is
     * encrypted using the KMS key that was used to encrypt the DB cluster
     * snapshot.</p> </li> <li> <p>If the DB cluster snapshot is not encrypted, then
     * the restored DB cluster is encrypted using the specified encryption key.</p>
     * </li> </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier to use when restoring an encrypted DB cluster from a
     * DB cluster snapshot.</p> <p>The KMS key identifier is the Amazon Resource Name
     * (ARN) for the KMS encryption key. If you are restoring a DB cluster with the
     * same AWS account that owns the KMS encryption key used to encrypt the new DB
     * cluster, then you can use the KMS key alias instead of the ARN for the KMS
     * encryption key.</p> <p>If you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then the following will occur:</p> <ul> <li>
     * <p>If the DB cluster snapshot is encrypted, then the restored DB cluster is
     * encrypted using the KMS key that was used to encrypt the DB cluster
     * snapshot.</p> </li> <li> <p>If the DB cluster snapshot is not encrypted, then
     * the restored DB cluster is encrypted using the specified encryption key.</p>
     * </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier to use when restoring an encrypted DB cluster from a
     * DB cluster snapshot.</p> <p>The KMS key identifier is the Amazon Resource Name
     * (ARN) for the KMS encryption key. If you are restoring a DB cluster with the
     * same AWS account that owns the KMS encryption key used to encrypt the new DB
     * cluster, then you can use the KMS key alias instead of the ARN for the KMS
     * encryption key.</p> <p>If you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then the following will occur:</p> <ul> <li>
     * <p>If the DB cluster snapshot is encrypted, then the restored DB cluster is
     * encrypted using the KMS key that was used to encrypt the DB cluster
     * snapshot.</p> </li> <li> <p>If the DB cluster snapshot is not encrypted, then
     * the restored DB cluster is encrypted using the specified encryption key.</p>
     * </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier to use when restoring an encrypted DB cluster from a
     * DB cluster snapshot.</p> <p>The KMS key identifier is the Amazon Resource Name
     * (ARN) for the KMS encryption key. If you are restoring a DB cluster with the
     * same AWS account that owns the KMS encryption key used to encrypt the new DB
     * cluster, then you can use the KMS key alias instead of the ARN for the KMS
     * encryption key.</p> <p>If you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then the following will occur:</p> <ul> <li>
     * <p>If the DB cluster snapshot is encrypted, then the restored DB cluster is
     * encrypted using the KMS key that was used to encrypt the DB cluster
     * snapshot.</p> </li> <li> <p>If the DB cluster snapshot is not encrypted, then
     * the restored DB cluster is encrypted using the specified encryption key.</p>
     * </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet;
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
