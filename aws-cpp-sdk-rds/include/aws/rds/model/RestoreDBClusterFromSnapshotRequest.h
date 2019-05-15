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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ScalingConfiguration.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBClusterFromSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API RestoreDBClusterFromSnapshotRequest : public RDSRequest
  {
  public:
    RestoreDBClusterFromSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBClusterFromSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>Provides the list of Availability Zones (AZs) where instances in the restored
     * DB cluster can be created.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster to create from the DB snapshot or DB cluster
     * snapshot. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li>
     * <p>First character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-snapshot-id</code> </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the DB snapshot or DB cluster snapshot to restore
     * from.</p> <p>You can use either the name or the Amazon Resource Name (ARN) to
     * specify a DB cluster snapshot. However, you can use only the ARN to specify a DB
     * snapshot.</p> <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an
     * existing Snapshot.</p> </li> </ul>
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
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

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
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

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
    inline RestoreDBClusterFromSnapshotRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

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
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

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
    inline RestoreDBClusterFromSnapshotRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the database engine to use for the new DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: This value must be <code>1150-65535</code> </p> <p>Default: The
     * same port as the original DB cluster.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: This value must be <code>1150-65535</code> </p> <p>Default: The
     * same port as the original DB cluster.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: This value must be <code>1150-65535</code> </p> <p>Default: The
     * same port as the original DB cluster.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the new DB cluster accepts connections.</p>
     * <p>Constraints: This value must be <code>1150-65535</code> </p> <p>Default: The
     * same port as the original DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB subnet group to use for the new DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing DB subnet
     * group.</p> <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

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
    inline RestoreDBClusterFromSnapshotRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

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
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to use for the restored DB cluster.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

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
    inline RestoreDBClusterFromSnapshotRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

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
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups that the new DB cluster will belong to.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

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
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The AWS KMS key identifier to use when restoring an encrypted DB cluster from
     * a DB snapshot or DB cluster snapshot.</p> <p>The KMS key identifier is the
     * Amazon Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same AWS account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>If you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is not
     * encrypted, then the restored DB cluster is not encrypted.</p> </li> </ul>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key identifier to use when restoring an encrypted DB cluster from
     * a DB snapshot or DB cluster snapshot.</p> <p>The KMS key identifier is the
     * Amazon Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same AWS account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>If you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is not
     * encrypted, then the restored DB cluster is not encrypted.</p> </li> </ul>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key identifier to use when restoring an encrypted DB cluster from
     * a DB snapshot or DB cluster snapshot.</p> <p>The KMS key identifier is the
     * Amazon Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same AWS account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>If you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is not
     * encrypted, then the restored DB cluster is not encrypted.</p> </li> </ul>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key identifier to use when restoring an encrypted DB cluster from
     * a DB snapshot or DB cluster snapshot.</p> <p>The KMS key identifier is the
     * Amazon Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same AWS account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>If you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is not
     * encrypted, then the restored DB cluster is not encrypted.</p> </li> </ul>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier to use when restoring an encrypted DB cluster from
     * a DB snapshot or DB cluster snapshot.</p> <p>The KMS key identifier is the
     * Amazon Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same AWS account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>If you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is not
     * encrypted, then the restored DB cluster is not encrypted.</p> </li> </ul>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier to use when restoring an encrypted DB cluster from
     * a DB snapshot or DB cluster snapshot.</p> <p>The KMS key identifier is the
     * Amazon Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same AWS account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>If you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is not
     * encrypted, then the restored DB cluster is not encrypted.</p> </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier to use when restoring an encrypted DB cluster from
     * a DB snapshot or DB cluster snapshot.</p> <p>The KMS key identifier is the
     * Amazon Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same AWS account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>If you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is not
     * encrypted, then the restored DB cluster is not encrypted.</p> </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier to use when restoring an encrypted DB cluster from
     * a DB snapshot or DB cluster snapshot.</p> <p>The KMS key identifier is the
     * Amazon Resource Name (ARN) for the KMS encryption key. If you are restoring a DB
     * cluster with the same AWS account that owns the KMS encryption key used to
     * encrypt the new DB cluster, then you can use the KMS key alias instead of the
     * ARN for the KMS encryption key.</p> <p>If you don't specify a value for the
     * <code>KmsKeyId</code> parameter, then the following occurs:</p> <ul> <li> <p>If
     * the DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is
     * encrypted, then the restored DB cluster is encrypted using the KMS key that was
     * used to encrypt the DB snapshot or DB cluster snapshot.</p> </li> <li> <p>If the
     * DB snapshot or DB cluster snapshot in <code>SnapshotIdentifier</code> is not
     * encrypted, then the restored DB cluster is not encrypted.</p> </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     */
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     */
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}


    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to Amazon
     * CloudWatch Logs. The values in the list depend on the DB engine being used. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs </a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, or <code>parallelquery</code>.</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, or <code>parallelquery</code>.</p>
     */
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, or <code>parallelquery</code>.</p>
     */
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, or <code>parallelquery</code>.</p>
     */
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, or <code>parallelquery</code>.</p>
     */
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, or <code>parallelquery</code>.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, or <code>parallelquery</code>.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, or <code>parallelquery</code>.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}


    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p>
     */
    inline const ScalingConfiguration& GetScalingConfiguration() const{ return m_scalingConfiguration; }

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p>
     */
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p>
     */
    inline void SetScalingConfiguration(const ScalingConfiguration& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p>
     */
    inline void SetScalingConfiguration(ScalingConfiguration&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithScalingConfiguration(const ScalingConfiguration& value) { SetScalingConfiguration(value); return *this;}

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithScalingConfiguration(ScalingConfiguration&& value) { SetScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with this DB cluster.
     * If this argument is omitted, the default DB cluster parameter group for the
     * specified engine is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match the name of an existing default DB cluster parameter group.</p> </li> <li>
     * <p>Must be 1 to 255 letters, numbers, or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. </p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the restored DB cluster
     * to snapshots of the restored DB cluster. The default is not to copy them.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB cluster
     * to snapshots of the restored DB cluster. The default is not to copy them.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB cluster
     * to snapshots of the restored DB cluster. The default is not to copy them.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB cluster
     * to snapshots of the restored DB cluster. The default is not to copy them.</p>
     */
    inline RestoreDBClusterFromSnapshotRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}

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

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    long long m_backtrackWindow;
    bool m_backtrackWindowHasBeenSet;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet;

    Aws::String m_engineMode;
    bool m_engineModeHasBeenSet;

    ScalingConfiguration m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
