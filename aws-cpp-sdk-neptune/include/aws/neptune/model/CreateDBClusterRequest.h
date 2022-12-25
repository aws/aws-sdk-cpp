/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune/model/ServerlessV2ScalingConfiguration.h>
#include <aws/neptune/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class CreateDBClusterRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API CreateDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBCluster"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A list of EC2 Availability Zones that instances in the DB cluster can be
     * created in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the DB cluster can be
     * created in.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the DB cluster can be
     * created in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the DB cluster can be
     * created in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of EC2 Availability Zones that instances in the DB cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of EC2 Availability Zones that instances in the DB cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 Availability Zones that instances in the DB cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the DB cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the DB cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline CreateDBClusterRequest& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline CreateDBClusterRequest& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline CreateDBClusterRequest& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


    /**
     * <p> <i>If set to <code>true</code>, tags are copied to any snapshot of the DB
     * cluster that is created.</i> </p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p> <i>If set to <code>true</code>, tags are copied to any snapshot of the DB
     * cluster that is created.</i> </p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p> <i>If set to <code>true</code>, tags are copied to any snapshot of the DB
     * cluster that is created.</i> </p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p> <i>If set to <code>true</code>, tags are copied to any snapshot of the DB
     * cluster that is created.</i> </p>
     */
    inline CreateDBClusterRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Neptune will not create a database in the DB cluster
     * you are creating.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Neptune will not create a database in the DB cluster
     * you are creating.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Neptune will not create a database in the DB cluster
     * you are creating.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Neptune will not create a database in the DB cluster
     * you are creating.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Neptune will not create a database in the DB cluster
     * you are creating.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Neptune will not create a database in the DB cluster
     * you are creating.</p>
     */
    inline CreateDBClusterRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Neptune will not create a database in the DB cluster
     * you are creating.</p>
     */
    inline CreateDBClusterRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon Neptune will not create a database in the DB cluster
     * you are creating.</p>
     */
    inline CreateDBClusterRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Cannot end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, the default is used.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an existing
     * DBClusterParameterGroup.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, the default is used.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an existing
     * DBClusterParameterGroup.</p> </li> </ul>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, the default is used.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an existing
     * DBClusterParameterGroup.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, the default is used.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an existing
     * DBClusterParameterGroup.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, the default is used.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an existing
     * DBClusterParameterGroup.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, the default is used.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an existing
     * DBClusterParameterGroup.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, the default is used.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an existing
     * DBClusterParameterGroup.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, the default is used.</p>
     * <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an existing
     * DBClusterParameterGroup.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this DB cluster.</p>
     */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>Constraints: Must
     * match the name of an existing DBSubnetGroup. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>Constraints: Must
     * match the name of an existing DBSubnetGroup. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>Constraints: Must
     * match the name of an existing DBSubnetGroup. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>Constraints: Must
     * match the name of an existing DBSubnetGroup. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>Constraints: Must
     * match the name of an existing DBSubnetGroup. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>Constraints: Must
     * match the name of an existing DBSubnetGroup. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>Constraints: Must
     * match the name of an existing DBSubnetGroup. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>A DB subnet group to associate with this DB cluster.</p> <p>Constraints: Must
     * match the name of an existing DBSubnetGroup. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline CreateDBClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline CreateDBClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>neptune</code> </p>
     */
    inline CreateDBClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the database engine to use for the new DB cluster.</p>
     * <p>Example: <code>1.0.2.1</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use for the new DB cluster.</p>
     * <p>Example: <code>1.0.2.1</code> </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to use for the new DB cluster.</p>
     * <p>Example: <code>1.0.2.1</code> </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use for the new DB cluster.</p>
     * <p>Example: <code>1.0.2.1</code> </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use for the new DB cluster.</p>
     * <p>Example: <code>1.0.2.1</code> </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use for the new DB cluster.</p>
     * <p>Example: <code>1.0.2.1</code> </p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use for the new DB cluster.</p>
     * <p>Example: <code>1.0.2.1</code> </p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use for the new DB cluster.</p>
     * <p>Example: <code>1.0.2.1</code> </p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> Default: <code>8182</code> </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> Default: <code>8182</code> </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> Default: <code>8182</code> </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> Default: <code>8182</code> </p>
     */
    inline CreateDBClusterRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline CreateDBClusterRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline CreateDBClusterRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline CreateDBClusterRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>Not supported by Neptune.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>Not supported by Neptune.</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline CreateDBClusterRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline CreateDBClusterRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p> <i>(Not supported by Neptune)</i> </p>
     */
    inline CreateDBClusterRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region, occurring on a random day of the week. To see the
     * time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region, occurring on a random day of the week. To see the
     * time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region, occurring on a random day of the week. To see the
     * time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region, occurring on a random day of the week. To see the
     * time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region, occurring on a random day of the week. To see the
     * time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region, occurring on a random day of the week. To see the
     * time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region, occurring on a random day of the week. To see the
     * time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Region, occurring on a random day of the week. To see the
     * time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Neptune User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a Read Replica.</p>
     */
    inline const Aws::String& GetReplicationSourceIdentifier() const{ return m_replicationSourceIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a Read Replica.</p>
     */
    inline bool ReplicationSourceIdentifierHasBeenSet() const { return m_replicationSourceIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a Read Replica.</p>
     */
    inline void SetReplicationSourceIdentifier(const Aws::String& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a Read Replica.</p>
     */
    inline void SetReplicationSourceIdentifier(Aws::String&& value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a Read Replica.</p>
     */
    inline void SetReplicationSourceIdentifier(const char* value) { m_replicationSourceIdentifierHasBeenSet = true; m_replicationSourceIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a Read Replica.</p>
     */
    inline CreateDBClusterRequest& WithReplicationSourceIdentifier(const Aws::String& value) { SetReplicationSourceIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a Read Replica.</p>
     */
    inline CreateDBClusterRequest& WithReplicationSourceIdentifier(Aws::String&& value) { SetReplicationSourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source DB instance or DB cluster if
     * this DB cluster is created as a Read Replica.</p>
     */
    inline CreateDBClusterRequest& WithReplicationSourceIdentifier(const char* value) { SetReplicationSourceIdentifier(value); return *this;}


    /**
     * <p>The tags to assign to the new DB cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the new DB cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the new DB cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the new DB cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the new DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the new DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the new DB cluster.</p>
     */
    inline CreateDBClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the new DB cluster.</p>
     */
    inline CreateDBClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the DB cluster is encrypted.</p>
     */
    inline CreateDBClusterRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The Amazon KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same Amazon account that owns the KMS
     * encryption key used to encrypt the new DB cluster, then you can use the KMS key
     * alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption key
     * is not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon Neptune will use the encryption key used to encrypt the source.
     * Otherwise, Amazon Neptune will use your default encryption key.</p> </li> <li>
     * <p>If the <code>StorageEncrypted</code> parameter is true and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon Neptune
     * will use your default encryption key.</p> </li> </ul> <p>Amazon KMS creates the
     * default encryption key for your Amazon account. Your Amazon account has a
     * different default encryption key for each Amazon Region.</p> <p>If you create a
     * Read Replica of an encrypted DB cluster in another Amazon Region, you must set
     * <code>KmsKeyId</code> to a KMS key ID that is valid in the destination Amazon
     * Region. This key is used to encrypt the Read Replica in that Amazon Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same Amazon account that owns the KMS
     * encryption key used to encrypt the new DB cluster, then you can use the KMS key
     * alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption key
     * is not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon Neptune will use the encryption key used to encrypt the source.
     * Otherwise, Amazon Neptune will use your default encryption key.</p> </li> <li>
     * <p>If the <code>StorageEncrypted</code> parameter is true and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon Neptune
     * will use your default encryption key.</p> </li> </ul> <p>Amazon KMS creates the
     * default encryption key for your Amazon account. Your Amazon account has a
     * different default encryption key for each Amazon Region.</p> <p>If you create a
     * Read Replica of an encrypted DB cluster in another Amazon Region, you must set
     * <code>KmsKeyId</code> to a KMS key ID that is valid in the destination Amazon
     * Region. This key is used to encrypt the Read Replica in that Amazon Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same Amazon account that owns the KMS
     * encryption key used to encrypt the new DB cluster, then you can use the KMS key
     * alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption key
     * is not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon Neptune will use the encryption key used to encrypt the source.
     * Otherwise, Amazon Neptune will use your default encryption key.</p> </li> <li>
     * <p>If the <code>StorageEncrypted</code> parameter is true and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon Neptune
     * will use your default encryption key.</p> </li> </ul> <p>Amazon KMS creates the
     * default encryption key for your Amazon account. Your Amazon account has a
     * different default encryption key for each Amazon Region.</p> <p>If you create a
     * Read Replica of an encrypted DB cluster in another Amazon Region, you must set
     * <code>KmsKeyId</code> to a KMS key ID that is valid in the destination Amazon
     * Region. This key is used to encrypt the Read Replica in that Amazon Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same Amazon account that owns the KMS
     * encryption key used to encrypt the new DB cluster, then you can use the KMS key
     * alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption key
     * is not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon Neptune will use the encryption key used to encrypt the source.
     * Otherwise, Amazon Neptune will use your default encryption key.</p> </li> <li>
     * <p>If the <code>StorageEncrypted</code> parameter is true and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon Neptune
     * will use your default encryption key.</p> </li> </ul> <p>Amazon KMS creates the
     * default encryption key for your Amazon account. Your Amazon account has a
     * different default encryption key for each Amazon Region.</p> <p>If you create a
     * Read Replica of an encrypted DB cluster in another Amazon Region, you must set
     * <code>KmsKeyId</code> to a KMS key ID that is valid in the destination Amazon
     * Region. This key is used to encrypt the Read Replica in that Amazon Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same Amazon account that owns the KMS
     * encryption key used to encrypt the new DB cluster, then you can use the KMS key
     * alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption key
     * is not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon Neptune will use the encryption key used to encrypt the source.
     * Otherwise, Amazon Neptune will use your default encryption key.</p> </li> <li>
     * <p>If the <code>StorageEncrypted</code> parameter is true and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon Neptune
     * will use your default encryption key.</p> </li> </ul> <p>Amazon KMS creates the
     * default encryption key for your Amazon account. Your Amazon account has a
     * different default encryption key for each Amazon Region.</p> <p>If you create a
     * Read Replica of an encrypted DB cluster in another Amazon Region, you must set
     * <code>KmsKeyId</code> to a KMS key ID that is valid in the destination Amazon
     * Region. This key is used to encrypt the Read Replica in that Amazon Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same Amazon account that owns the KMS
     * encryption key used to encrypt the new DB cluster, then you can use the KMS key
     * alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption key
     * is not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon Neptune will use the encryption key used to encrypt the source.
     * Otherwise, Amazon Neptune will use your default encryption key.</p> </li> <li>
     * <p>If the <code>StorageEncrypted</code> parameter is true and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon Neptune
     * will use your default encryption key.</p> </li> </ul> <p>Amazon KMS creates the
     * default encryption key for your Amazon account. Your Amazon account has a
     * different default encryption key for each Amazon Region.</p> <p>If you create a
     * Read Replica of an encrypted DB cluster in another Amazon Region, you must set
     * <code>KmsKeyId</code> to a KMS key ID that is valid in the destination Amazon
     * Region. This key is used to encrypt the Read Replica in that Amazon Region.</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same Amazon account that owns the KMS
     * encryption key used to encrypt the new DB cluster, then you can use the KMS key
     * alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption key
     * is not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon Neptune will use the encryption key used to encrypt the source.
     * Otherwise, Amazon Neptune will use your default encryption key.</p> </li> <li>
     * <p>If the <code>StorageEncrypted</code> parameter is true and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon Neptune
     * will use your default encryption key.</p> </li> </ul> <p>Amazon KMS creates the
     * default encryption key for your Amazon account. Your Amazon account has a
     * different default encryption key for each Amazon Region.</p> <p>If you create a
     * Read Replica of an encrypted DB cluster in another Amazon Region, you must set
     * <code>KmsKeyId</code> to a KMS key ID that is valid in the destination Amazon
     * Region. This key is used to encrypt the Read Replica in that Amazon Region.</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same Amazon account that owns the KMS
     * encryption key used to encrypt the new DB cluster, then you can use the KMS key
     * alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption key
     * is not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon Neptune will use the encryption key used to encrypt the source.
     * Otherwise, Amazon Neptune will use your default encryption key.</p> </li> <li>
     * <p>If the <code>StorageEncrypted</code> parameter is true and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon Neptune
     * will use your default encryption key.</p> </li> </ul> <p>Amazon KMS creates the
     * default encryption key for your Amazon account. Your Amazon account has a
     * different default encryption key for each Amazon Region.</p> <p>If you create a
     * Read Replica of an encrypted DB cluster in another Amazon Region, you must set
     * <code>KmsKeyId</code> to a KMS key ID that is valid in the destination Amazon
     * Region. This key is used to encrypt the Read Replica in that Amazon Region.</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>This parameter is not currently supported.</p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    /**
     * <p>If set to <code>true</code>, enables Amazon Identity and Access Management
     * (IAM) authentication for the entire DB cluster (this cannot be set at an
     * instance level).</p> <p>Default: <code>false</code>.</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>If set to <code>true</code>, enables Amazon Identity and Access Management
     * (IAM) authentication for the entire DB cluster (this cannot be set at an
     * instance level).</p> <p>Default: <code>false</code>.</p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>If set to <code>true</code>, enables Amazon Identity and Access Management
     * (IAM) authentication for the entire DB cluster (this cannot be set at an
     * instance level).</p> <p>Default: <code>false</code>.</p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>If set to <code>true</code>, enables Amazon Identity and Access Management
     * (IAM) authentication for the entire DB cluster (this cannot be set at an
     * instance level).</p> <p>Default: <code>false</code>.</p>
     */
    inline CreateDBClusterRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs.</p>
     */
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is enabled.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is enabled.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is enabled.</p>
     */
    inline CreateDBClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }

    
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }

    
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }

    
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }

    
    inline CreateDBClusterRequest& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { SetServerlessV2ScalingConfiguration(value); return *this;}

    
    inline CreateDBClusterRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The ID of the Neptune global database to which this new DB cluster should be
     * added.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The ID of the Neptune global database to which this new DB cluster should be
     * added.</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The ID of the Neptune global database to which this new DB cluster should be
     * added.</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The ID of the Neptune global database to which this new DB cluster should be
     * added.</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The ID of the Neptune global database to which this new DB cluster should be
     * added.</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The ID of the Neptune global database to which this new DB cluster should be
     * added.</p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The ID of the Neptune global database to which this new DB cluster should be
     * added.</p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the Neptune global database to which this new DB cluster should be
     * added.</p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CreateDBClusterRequest& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CreateDBClusterRequest& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline CreateDBClusterRequest& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    Aws::String m_replicationSourceIdentifier;
    bool m_replicationSourceIdentifierHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
