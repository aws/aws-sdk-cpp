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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <aws/rds/model/ProcessorFeature.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/RestoreDBInstanceFromDBSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API RestoreDBInstanceFromDBSnapshotRequest : public RDSRequest
  {
  public:
    RestoreDBInstanceFromDBSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBInstanceFromDBSnapshot"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * numbers, letters, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * numbers, letters, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * numbers, letters, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * numbers, letters, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * numbers, letters, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * numbers, letters, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * numbers, letters, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Name of the DB instance to create from the DB snapshot. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63
     * numbers, letters, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-snapshot-id</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the identifier of an existing DBSnapshot.</p> </li> <li>
     * <p>If you are restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetDBSnapshotIdentifier() const{ return m_dBSnapshotIdentifier; }

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the identifier of an existing DBSnapshot.</p> </li> <li>
     * <p>If you are restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     * </li> </ul>
     */
    inline bool DBSnapshotIdentifierHasBeenSet() const { return m_dBSnapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the identifier of an existing DBSnapshot.</p> </li> <li>
     * <p>If you are restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     * </li> </ul>
     */
    inline void SetDBSnapshotIdentifier(const Aws::String& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = value; }

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the identifier of an existing DBSnapshot.</p> </li> <li>
     * <p>If you are restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     * </li> </ul>
     */
    inline void SetDBSnapshotIdentifier(Aws::String&& value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the identifier of an existing DBSnapshot.</p> </li> <li>
     * <p>If you are restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     * </li> </ul>
     */
    inline void SetDBSnapshotIdentifier(const char* value) { m_dBSnapshotIdentifierHasBeenSet = true; m_dBSnapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the identifier of an existing DBSnapshot.</p> </li> <li>
     * <p>If you are restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     * </li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(const Aws::String& value) { SetDBSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the identifier of an existing DBSnapshot.</p> </li> <li>
     * <p>If you are restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     * </li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(Aws::String&& value) { SetDBSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the DB snapshot to restore from.</p> <p>Constraints:</p>
     * <ul> <li> <p>Must match the identifier of an existing DBSnapshot.</p> </li> <li>
     * <p>If you are restoring from a shared manual DB snapshot, the
     * <code>DBSnapshotIdentifier</code> must be the ARN of the shared DB snapshot.</p>
     * </li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSnapshotIdentifier(const char* value) { SetDBSnapshotIdentifier(value); return *this;}


    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of the Amazon RDS DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the <i>Amazon RDS User Guide.</i> </p> <p>Default: The
     * same DBInstanceClass as the original DB instance.</p>
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
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

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
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone (AZ) where the DB instance will be created.</p>
     * <p>Default: A random, system-chosen Availability Zone.</p> <p>Constraint: You
     * can't specify the <code>AvailabilityZone</code> parameter if the DB instance is
     * a Multi-AZ deployment.</p> <p>Example: <code>us-east-1a</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The DB subnet group name to use for the new instance.</p> <p>Constraints: If
     * supplied, must match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment.</p>
     * <p>Constraint: You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment.</p>
     * <p>Constraint: You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment.</p>
     * <p>Constraint: You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>A value that indicates whether the DB instance is a Multi-AZ deployment.</p>
     * <p>Constraint: You can't specify the <code>AvailabilityZone</code> parameter if
     * the DB instance is a Multi-AZ deployment.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline bool PubliclyAccessibleHasBeenSet() const { return m_publiclyAccessibleHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>A value that indicates whether the DB instance is publicly accessible. When
     * the DB instance is publicly accessible, it is an Internet-facing instance with a
     * publicly resolvable DNS name, which resolves to a public IP address. When the DB
     * instance is not publicly accessible, it is an internal instance with a DNS name
     * that resolves to a private IP address. For more information, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>A value that indicates whether minor version upgrades are applied
     * automatically to the DB instance during the maintenance window.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>A value that indicates whether minor version upgrades are applied
     * automatically to the DB instance during the maintenance window.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether minor version upgrades are applied
     * automatically to the DB instance during the maintenance window.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether minor version upgrades are applied
     * automatically to the DB instance during the maintenance window.</p>
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
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

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
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

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
    inline RestoreDBInstanceFromDBSnapshotRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

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
    inline bool DBNameHasBeenSet() const { return m_dBNameHasBeenSet; }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline void SetDBName(const Aws::String& value) { m_dBNameHasBeenSet = true; m_dBName = value; }

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline void SetDBName(Aws::String&& value) { m_dBNameHasBeenSet = true; m_dBName = std::move(value); }

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
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(Aws::String&& value) { SetDBName(std::move(value)); return *this;}

    /**
     * <p>The database name for the restored DB instance.</p> <note> <p>This parameter
     * doesn't apply to the MySQL, PostgreSQL, or MariaDB engines.</p> </note>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBName(const char* value) { SetDBName(value); return *this;}


    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source. For
     * example, you can restore a MariaDB 10.1 DB instance from a MySQL 5.6
     * snapshot.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-se2</code> </p> </li> <li> <p>
     * <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code>
     * </p> </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source. For
     * example, you can restore a MariaDB 10.1 DB instance from a MySQL 5.6
     * snapshot.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-se2</code> </p> </li> <li> <p>
     * <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code>
     * </p> </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source. For
     * example, you can restore a MariaDB 10.1 DB instance from a MySQL 5.6
     * snapshot.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-se2</code> </p> </li> <li> <p>
     * <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code>
     * </p> </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source. For
     * example, you can restore a MariaDB 10.1 DB instance from a MySQL 5.6
     * snapshot.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-se2</code> </p> </li> <li> <p>
     * <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code>
     * </p> </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source. For
     * example, you can restore a MariaDB 10.1 DB instance from a MySQL 5.6
     * snapshot.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-se2</code> </p> </li> <li> <p>
     * <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code>
     * </p> </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source. For
     * example, you can restore a MariaDB 10.1 DB instance from a MySQL 5.6
     * snapshot.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-se2</code> </p> </li> <li> <p>
     * <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code>
     * </p> </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source. For
     * example, you can restore a MariaDB 10.1 DB instance from a MySQL 5.6
     * snapshot.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-se2</code> </p> </li> <li> <p>
     * <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code>
     * </p> </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The database engine to use for the new instance.</p> <p>Default: The same as
     * source</p> <p>Constraint: Must be compatible with the engine of the source. For
     * example, you can restore a MariaDB 10.1 DB instance from a MySQL 5.6
     * snapshot.</p> <p>Valid Values:</p> <ul> <li> <p> <code>mariadb</code> </p> </li>
     * <li> <p> <code>mysql</code> </p> </li> <li> <p> <code>oracle-ee</code> </p>
     * </li> <li> <p> <code>oracle-se2</code> </p> </li> <li> <p>
     * <code>oracle-se1</code> </p> </li> <li> <p> <code>oracle-se</code> </p> </li>
     * <li> <p> <code>postgres</code> </p> </li> <li> <p> <code>sqlserver-ee</code>
     * </p> </li> <li> <p> <code>sqlserver-se</code> </p> </li> <li> <p>
     * <code>sqlserver-ex</code> </p> </li> <li> <p> <code>sqlserver-web</code> </p>
     * </li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>Specifies the amount of provisioned IOPS for the DB instance, expressed in
     * I/O operations per second. If this parameter is not specified, the IOPS value is
     * taken from the backup. If this parameter is set to 0, the new instance is
     * converted to a non-PIOPS instance. The conversion takes additional time, though
     * your DB instance is available for connections before the conversion starts. </p>
     * <p>The provisioned IOPS value must follow the requirements for your database
     * engine. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS Storage to Improve Performance</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints: Must be an integer greater than 1000.</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>Specifies the amount of provisioned IOPS for the DB instance, expressed in
     * I/O operations per second. If this parameter is not specified, the IOPS value is
     * taken from the backup. If this parameter is set to 0, the new instance is
     * converted to a non-PIOPS instance. The conversion takes additional time, though
     * your DB instance is available for connections before the conversion starts. </p>
     * <p>The provisioned IOPS value must follow the requirements for your database
     * engine. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS Storage to Improve Performance</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints: Must be an integer greater than 1000.</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>Specifies the amount of provisioned IOPS for the DB instance, expressed in
     * I/O operations per second. If this parameter is not specified, the IOPS value is
     * taken from the backup. If this parameter is set to 0, the new instance is
     * converted to a non-PIOPS instance. The conversion takes additional time, though
     * your DB instance is available for connections before the conversion starts. </p>
     * <p>The provisioned IOPS value must follow the requirements for your database
     * engine. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS Storage to Improve Performance</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints: Must be an integer greater than 1000.</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>Specifies the amount of provisioned IOPS for the DB instance, expressed in
     * I/O operations per second. If this parameter is not specified, the IOPS value is
     * taken from the backup. If this parameter is set to 0, the new instance is
     * converted to a non-PIOPS instance. The conversion takes additional time, though
     * your DB instance is available for connections before the conversion starts. </p>
     * <p>The provisioned IOPS value must follow the requirements for your database
     * engine. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS Storage to Improve Performance</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>Constraints: Must be an integer greater than 1000.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the option group to be used for the restored DB instance.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline RestoreDBInstanceFromDBSnapshotRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline RestoreDBInstanceFromDBSnapshotRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance.</p> <p>
     * Valid values: <code>standard | gp2 | io1</code> </p> <p> If you specify
     * <code>io1</code>, you must also include a value for the <code>Iops</code>
     * parameter. </p> <p> Default: <code>io1</code> if the <code>Iops</code> parameter
     * is specified, otherwise <code>gp2</code> </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline bool TdeCredentialArnHasBeenSet() const { return m_tdeCredentialArnHasBeenSet; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const Aws::String& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = value; }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(Aws::String&& value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn = std::move(value); }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline void SetTdeCredentialArn(const char* value) { m_tdeCredentialArnHasBeenSet = true; m_tdeCredentialArn.assign(value); }

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}


    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline bool TdeCredentialPasswordHasBeenSet() const { return m_tdeCredentialPasswordHasBeenSet; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const Aws::String& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = value; }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(Aws::String&& value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword = std::move(value); }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline void SetTdeCredentialPassword(const char* value) { m_tdeCredentialPasswordHasBeenSet = true; m_tdeCredentialPassword.assign(value); }

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}


    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of EC2 VPC security groups to associate with this DB instance. </p>
     * <p> Default: The default EC2 VPC security group for the DB subnet group's VPC.
     * </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

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
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Specify the Active Directory Domain to restore the instance in.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the restored DB instance
     * to snapshots of the DB instance. By default, tags are not copied.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB instance
     * to snapshots of the DB instance. By default, tags are not copied.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB instance
     * to snapshots of the DB instance. By default, tags are not copied.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the restored DB instance
     * to snapshots of the DB instance. By default, tags are not copied.</p>
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
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

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
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * </ul>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * </ul>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * </ul>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of AWS Identity and Access
     * Management (IAM) accounts to database accounts. By default, mapping is
     * disabled.</p> <p>You can enable IAM database authentication for the following
     * database engines</p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or
     * higher</p> </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li>
     * </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the restored DB instance is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline const Aws::Vector<ProcessorFeature>& GetProcessorFeatures() const{ return m_processorFeatures; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline bool ProcessorFeaturesHasBeenSet() const { return m_processorFeaturesHasBeenSet; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline void SetProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = value; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline void SetProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures = std::move(value); }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithProcessorFeatures(const Aws::Vector<ProcessorFeature>& value) { SetProcessorFeatures(value); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithProcessorFeatures(Aws::Vector<ProcessorFeature>&& value) { SetProcessorFeatures(std::move(value)); return *this;}

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& AddProcessorFeatures(const ProcessorFeature& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(value); return *this; }

    /**
     * <p>The number of CPU cores and the number of threads per core for the DB
     * instance class of the DB instance.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& AddProcessorFeatures(ProcessorFeature&& value) { m_processorFeaturesHasBeenSet = true; m_processorFeatures.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline bool GetUseDefaultProcessorFeatures() const{ return m_useDefaultProcessorFeatures; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline bool UseDefaultProcessorFeaturesHasBeenSet() const { return m_useDefaultProcessorFeaturesHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline void SetUseDefaultProcessorFeatures(bool value) { m_useDefaultProcessorFeaturesHasBeenSet = true; m_useDefaultProcessorFeatures = value; }

    /**
     * <p>A value that indicates whether the DB instance class of the DB instance uses
     * its default processor features.</p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithUseDefaultProcessorFeatures(bool value) { SetUseDefaultProcessorFeatures(value); return *this;}


    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to associate with this DB instance. If
     * this argument is omitted, the default DBParameterGroup for the specified engine
     * is used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name
     * of an existing DBParameterGroup.</p> </li> <li> <p>Must be 1 to 255 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB instance has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_DeleteInstance.html">
     * Deleting a DB Instance</a>. </p>
     */
    inline RestoreDBInstanceFromDBSnapshotRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}

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

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet;

    Aws::Vector<ProcessorFeature> m_processorFeatures;
    bool m_processorFeaturesHasBeenSet;

    bool m_useDefaultProcessorFeatures;
    bool m_useDefaultProcessorFeaturesHasBeenSet;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
