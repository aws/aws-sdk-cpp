/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ServerlessV2ScalingConfiguration.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class RestoreDBClusterFromS3Request : public RDSRequest
  {
  public:
    AWS_RDS_API RestoreDBClusterFromS3Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreDBClusterFromS3"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A list of Availability Zones (AZs) where instances in the restored DB cluster
     * can be created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the restored DB cluster
     * can be created.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the restored DB cluster
     * can be created.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the restored DB cluster
     * can be created.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the restored DB cluster
     * can be created.</p>
     */
    inline RestoreDBClusterFromS3Request& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones (AZs) where instances in the restored DB cluster
     * can be created.</p>
     */
    inline RestoreDBClusterFromS3Request& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Availability Zones (AZs) where instances in the restored DB cluster
     * can be created.</p>
     */
    inline RestoreDBClusterFromS3Request& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the restored DB cluster
     * can be created.</p>
     */
    inline RestoreDBClusterFromS3Request& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the restored DB cluster
     * can be created.</p>
     */
    inline RestoreDBClusterFromS3Request& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The number of days for which automated backups of the restored DB cluster are
     * retained. You must specify a minimum value of 1.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups of the restored DB cluster are
     * retained. You must specify a minimum value of 1.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups of the restored DB cluster are
     * retained. You must specify a minimum value of 1.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups of the restored DB cluster are
     * retained. You must specify a minimum value of 1.</p> <p>Default: 1</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified CharacterSet.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified CharacterSet.</p>
     */
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified CharacterSet.</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified CharacterSet.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified CharacterSet.</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified CharacterSet.</p>
     */
    inline RestoreDBClusterFromS3Request& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified CharacterSet.</p>
     */
    inline RestoreDBClusterFromS3Request& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified CharacterSet.</p>
     */
    inline RestoreDBClusterFromS3Request& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


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
    inline RestoreDBClusterFromS3Request& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The name of the DB cluster to create from the source data in the Amazon S3
     * bucket. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The name of the DB cluster to create from the source data in the Amazon S3
     * bucket. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The name of the DB cluster to create from the source data in the Amazon S3
     * bucket. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to create from the source data in the Amazon S3
     * bucket. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The name of the DB cluster to create from the source data in the Amazon S3
     * bucket. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The name of the DB cluster to create from the source data in the Amazon S3
     * bucket. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to create from the source data in the Amazon S3
     * bucket. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster to create from the source data in the Amazon S3
     * bucket. This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Can't end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is
     * used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of
     * an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is
     * used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of
     * an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is
     * used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of
     * an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is
     * used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of
     * an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is
     * used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of
     * an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is
     * used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of
     * an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is
     * used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of
     * an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is
     * used.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of
     * an existing DBClusterParameterGroup.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing
     * DBSubnetGroup.</p> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing
     * DBSubnetGroup.</p> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing
     * DBSubnetGroup.</p> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing
     * DBSubnetGroup.</p> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing
     * DBSubnetGroup.</p> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing
     * DBSubnetGroup.</p> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing
     * DBSubnetGroup.</p> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: If supplied, must match the name of an existing
     * DBSubnetGroup.</p> <p>Example: <code>mydbsubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora) and
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora)</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora) and
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora)</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora) and
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora)</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora) and
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora)</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora) and
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora)</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora) and
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora)</p>
     */
    inline RestoreDBClusterFromS3Request& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora) and
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora)</p>
     */
    inline RestoreDBClusterFromS3Request& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora) and
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible and MySQL 8.0-compatible
     * Aurora)</p>
     */
    inline RestoreDBClusterFromS3Request& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible and
     * MySQL 8.0-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>Example: <code>5.6.10a</code>, <code>5.6.mysql_aurora.1.19.2</code>,
     * <code>5.7.mysql_aurora.2.07.1</code>, <code>8.0.mysql_aurora.3.02.0</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible and
     * MySQL 8.0-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>Example: <code>5.6.10a</code>, <code>5.6.mysql_aurora.1.19.2</code>,
     * <code>5.7.mysql_aurora.2.07.1</code>, <code>8.0.mysql_aurora.3.02.0</code> </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible and
     * MySQL 8.0-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>Example: <code>5.6.10a</code>, <code>5.6.mysql_aurora.1.19.2</code>,
     * <code>5.7.mysql_aurora.2.07.1</code>, <code>8.0.mysql_aurora.3.02.0</code> </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible and
     * MySQL 8.0-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>Example: <code>5.6.10a</code>, <code>5.6.mysql_aurora.1.19.2</code>,
     * <code>5.7.mysql_aurora.2.07.1</code>, <code>8.0.mysql_aurora.3.02.0</code> </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible and
     * MySQL 8.0-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>Example: <code>5.6.10a</code>, <code>5.6.mysql_aurora.1.19.2</code>,
     * <code>5.7.mysql_aurora.2.07.1</code>, <code>8.0.mysql_aurora.3.02.0</code> </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible and
     * MySQL 8.0-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>Example: <code>5.6.10a</code>, <code>5.6.mysql_aurora.1.19.2</code>,
     * <code>5.7.mysql_aurora.2.07.1</code>, <code>8.0.mysql_aurora.3.02.0</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible and
     * MySQL 8.0-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>Example: <code>5.6.10a</code>, <code>5.6.mysql_aurora.1.19.2</code>,
     * <code>5.7.mysql_aurora.2.07.1</code>, <code>8.0.mysql_aurora.3.02.0</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p>To list all of the
     * available engine versions for <code>aurora</code> (for MySQL 5.6-compatible
     * Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for <code>aurora-mysql</code> (for MySQL 5.7-compatible and
     * MySQL 8.0-compatible Aurora), use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p> <b>Aurora MySQL</b> </p>
     * <p>Example: <code>5.6.10a</code>, <code>5.6.mysql_aurora.1.19.2</code>,
     * <code>5.7.mysql_aurora.2.07.1</code>, <code>8.0.mysql_aurora.3.02.0</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The port number on which the instances in the restored DB cluster accept
     * connections.</p> <p>Default: <code>3306</code> </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the instances in the restored DB cluster accept
     * connections.</p> <p>Default: <code>3306</code> </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the instances in the restored DB cluster accept
     * connections.</p> <p>Default: <code>3306</code> </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the instances in the restored DB cluster accept
     * connections.</p> <p>Default: <code>3306</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't be a reserved
     * word for the chosen database engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't be a reserved
     * word for the chosen database engine.</p> </li> </ul>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't be a reserved
     * word for the chosen database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't be a reserved
     * word for the chosen database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't be a reserved
     * word for the chosen database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't be a reserved
     * word for the chosen database engine.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't be a reserved
     * word for the chosen database engine.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 letters or numbers.</p> </li>
     * <li> <p>First character must be a letter.</p> </li> <li> <p>Can't be a reserved
     * word for the chosen database engine.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options can't be removed from an
     * option group. An option group can't be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options can't be removed from an
     * option group. An option group can't be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options can't be removed from an
     * option group. An option group can't be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options can't be removed from an
     * option group. An option group can't be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options can't be removed from an
     * option group. An option group can't be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options can't be removed from an
     * option group. An option group can't be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options can't be removed from an
     * option group. An option group can't be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options can't be removed from an
     * option group. An option group can't be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline RestoreDBClusterFromS3Request& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline RestoreDBClusterFromS3Request& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline RestoreDBClusterFromS3Request& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline RestoreDBClusterFromS3Request& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether the restored DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>A value that indicates whether the restored DB cluster is encrypted.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>A value that indicates whether the restored DB cluster is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>A value that indicates whether the restored DB cluster is encrypted.</p>
     */
    inline RestoreDBClusterFromS3Request& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>If the
     * StorageEncrypted parameter is enabled, and you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then Amazon RDS will use your default KMS key.
     * There is a default KMS key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default KMS key for each Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>If the
     * StorageEncrypted parameter is enabled, and you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then Amazon RDS will use your default KMS key.
     * There is a default KMS key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default KMS key for each Amazon Web Services
     * Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>If the
     * StorageEncrypted parameter is enabled, and you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then Amazon RDS will use your default KMS key.
     * There is a default KMS key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default KMS key for each Amazon Web Services
     * Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>If the
     * StorageEncrypted parameter is enabled, and you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then Amazon RDS will use your default KMS key.
     * There is a default KMS key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default KMS key for each Amazon Web Services
     * Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>If the
     * StorageEncrypted parameter is enabled, and you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then Amazon RDS will use your default KMS key.
     * There is a default KMS key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default KMS key for each Amazon Web Services
     * Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>If the
     * StorageEncrypted parameter is enabled, and you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then Amazon RDS will use your default KMS key.
     * There is a default KMS key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default KMS key for each Amazon Web Services
     * Region.</p>
     */
    inline RestoreDBClusterFromS3Request& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>If the
     * StorageEncrypted parameter is enabled, and you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then Amazon RDS will use your default KMS key.
     * There is a default KMS key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default KMS key for each Amazon Web Services
     * Region.</p>
     */
    inline RestoreDBClusterFromS3Request& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB cluster.</p>
     * <p>The Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN,
     * or alias name for the KMS key. To use a KMS key in a different Amazon Web
     * Services account, specify the key ARN or alias ARN.</p> <p>If the
     * StorageEncrypted parameter is enabled, and you do not specify a value for the
     * <code>KmsKeyId</code> parameter, then Amazon RDS will use your default KMS key.
     * There is a default KMS key for your Amazon Web Services account. Your Amazon Web
     * Services account has a different default KMS key for each Amazon Web Services
     * Region.</p>
     */
    inline RestoreDBClusterFromS3Request& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline RestoreDBClusterFromS3Request& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket.</p> <p>Valid values: <code>mysql</code> </p>
     */
    inline const Aws::String& GetSourceEngine() const{ return m_sourceEngine; }

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket.</p> <p>Valid values: <code>mysql</code> </p>
     */
    inline bool SourceEngineHasBeenSet() const { return m_sourceEngineHasBeenSet; }

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket.</p> <p>Valid values: <code>mysql</code> </p>
     */
    inline void SetSourceEngine(const Aws::String& value) { m_sourceEngineHasBeenSet = true; m_sourceEngine = value; }

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket.</p> <p>Valid values: <code>mysql</code> </p>
     */
    inline void SetSourceEngine(Aws::String&& value) { m_sourceEngineHasBeenSet = true; m_sourceEngine = std::move(value); }

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket.</p> <p>Valid values: <code>mysql</code> </p>
     */
    inline void SetSourceEngine(const char* value) { m_sourceEngineHasBeenSet = true; m_sourceEngine.assign(value); }

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket.</p> <p>Valid values: <code>mysql</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngine(const Aws::String& value) { SetSourceEngine(value); return *this;}

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket.</p> <p>Valid values: <code>mysql</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngine(Aws::String&& value) { SetSourceEngine(std::move(value)); return *this;}

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket.</p> <p>Valid values: <code>mysql</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngine(const char* value) { SetSourceEngine(value); return *this;}


    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL versions 5.5, 5.6, and 5.7 are supported.</p> <p>Example:
     * <code>5.6.40</code>, <code>5.7.28</code> </p>
     */
    inline const Aws::String& GetSourceEngineVersion() const{ return m_sourceEngineVersion; }

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL versions 5.5, 5.6, and 5.7 are supported.</p> <p>Example:
     * <code>5.6.40</code>, <code>5.7.28</code> </p>
     */
    inline bool SourceEngineVersionHasBeenSet() const { return m_sourceEngineVersionHasBeenSet; }

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL versions 5.5, 5.6, and 5.7 are supported.</p> <p>Example:
     * <code>5.6.40</code>, <code>5.7.28</code> </p>
     */
    inline void SetSourceEngineVersion(const Aws::String& value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion = value; }

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL versions 5.5, 5.6, and 5.7 are supported.</p> <p>Example:
     * <code>5.6.40</code>, <code>5.7.28</code> </p>
     */
    inline void SetSourceEngineVersion(Aws::String&& value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion = std::move(value); }

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL versions 5.5, 5.6, and 5.7 are supported.</p> <p>Example:
     * <code>5.6.40</code>, <code>5.7.28</code> </p>
     */
    inline void SetSourceEngineVersion(const char* value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion.assign(value); }

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL versions 5.5, 5.6, and 5.7 are supported.</p> <p>Example:
     * <code>5.6.40</code>, <code>5.7.28</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngineVersion(const Aws::String& value) { SetSourceEngineVersion(value); return *this;}

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL versions 5.5, 5.6, and 5.7 are supported.</p> <p>Example:
     * <code>5.6.40</code>, <code>5.7.28</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngineVersion(Aws::String&& value) { SetSourceEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL versions 5.5, 5.6, and 5.7 are supported.</p> <p>Example:
     * <code>5.6.40</code>, <code>5.7.28</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngineVersion(const char* value) { SetSourceEngineVersion(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket that contains the data used to create the
     * Amazon Aurora DB cluster.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the data used to create the
     * Amazon Aurora DB cluster.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the data used to create the
     * Amazon Aurora DB cluster.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the data used to create the
     * Amazon Aurora DB cluster.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket that contains the data used to create the
     * Amazon Aurora DB cluster.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket that contains the data used to create the
     * Amazon Aurora DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that contains the data used to create the
     * Amazon Aurora DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket that contains the data used to create the
     * Amazon Aurora DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetS3Prefix() const{ return m_s3Prefix; }

    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline bool S3PrefixHasBeenSet() const { return m_s3PrefixHasBeenSet; }

    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = std::move(value); }

    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline void SetS3Prefix(const char* value) { m_s3PrefixHasBeenSet = true; m_s3Prefix.assign(value); }

    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3Prefix(const Aws::String& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3Prefix(Aws::String&& value) { SetS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket
     * on your behalf.</p>
     */
    inline const Aws::String& GetS3IngestionRoleArn() const{ return m_s3IngestionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket
     * on your behalf.</p>
     */
    inline bool S3IngestionRoleArnHasBeenSet() const { return m_s3IngestionRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket
     * on your behalf.</p>
     */
    inline void SetS3IngestionRoleArn(const Aws::String& value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket
     * on your behalf.</p>
     */
    inline void SetS3IngestionRoleArn(Aws::String&& value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket
     * on your behalf.</p>
     */
    inline void SetS3IngestionRoleArn(const char* value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket
     * on your behalf.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3IngestionRoleArn(const Aws::String& value) { SetS3IngestionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket
     * on your behalf.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3IngestionRoleArn(Aws::String&& value) { SetS3IngestionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Identity and Access
     * Management (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket
     * on your behalf.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3IngestionRoleArn(const char* value) { SetS3IngestionRoleArn(value); return *this;}


    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul>
     */
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul>
     */
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p>  <p>Currently, Backtrack is only supported for Aurora
     * MySQL DB clusters.</p>  <p>Default: 0</p> <p>Constraints:</p> <ul> <li>
     * <p>If specified, this value must be set to a number from 0 to 259,200 (72
     * hours).</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}


    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p>
     * <b>Aurora MySQL</b> </p> <p>Possible values are <code>audit</code>,
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>Possible value is <code>postgresql</code>.</p>
     * <p>For more information about exporting CloudWatch Logs for Amazon Aurora, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p>
     * <b>Aurora MySQL</b> </p> <p>Possible values are <code>audit</code>,
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>Possible value is <code>postgresql</code>.</p>
     * <p>For more information about exporting CloudWatch Logs for Amazon Aurora, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p>
     * <b>Aurora MySQL</b> </p> <p>Possible values are <code>audit</code>,
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>Possible value is <code>postgresql</code>.</p>
     * <p>For more information about exporting CloudWatch Logs for Amazon Aurora, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p>
     * <b>Aurora MySQL</b> </p> <p>Possible values are <code>audit</code>,
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>Possible value is <code>postgresql</code>.</p>
     * <p>For more information about exporting CloudWatch Logs for Amazon Aurora, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p>
     * <b>Aurora MySQL</b> </p> <p>Possible values are <code>audit</code>,
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>Possible value is <code>postgresql</code>.</p>
     * <p>For more information about exporting CloudWatch Logs for Amazon Aurora, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromS3Request& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p>
     * <b>Aurora MySQL</b> </p> <p>Possible values are <code>audit</code>,
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>Possible value is <code>postgresql</code>.</p>
     * <p>For more information about exporting CloudWatch Logs for Amazon Aurora, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromS3Request& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p>
     * <b>Aurora MySQL</b> </p> <p>Possible values are <code>audit</code>,
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>Possible value is <code>postgresql</code>.</p>
     * <p>For more information about exporting CloudWatch Logs for Amazon Aurora, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromS3Request& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p>
     * <b>Aurora MySQL</b> </p> <p>Possible values are <code>audit</code>,
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>Possible value is <code>postgresql</code>.</p>
     * <p>For more information about exporting CloudWatch Logs for Amazon Aurora, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromS3Request& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of logs that the restored DB cluster is to export to CloudWatch
     * Logs. The values in the list depend on the DB engine being used.</p> <p>
     * <b>Aurora MySQL</b> </p> <p>Possible values are <code>audit</code>,
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>Aurora PostgreSQL</b> </p> <p>Possible value is <code>postgresql</code>.</p>
     * <p>For more information about exporting CloudWatch Logs for Amazon Aurora, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline RestoreDBClusterFromS3Request& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


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
    inline RestoreDBClusterFromS3Request& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation.</p> <p>For Amazon Aurora DB
     * clusters, Amazon RDS can use Kerberos Authentication to authenticate users that
     * connect to the DB cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation.</p> <p>For Amazon Aurora DB
     * clusters, Amazon RDS can use Kerberos Authentication to authenticate users that
     * connect to the DB cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation.</p> <p>For Amazon Aurora DB
     * clusters, Amazon RDS can use Kerberos Authentication to authenticate users that
     * connect to the DB cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation.</p> <p>For Amazon Aurora DB
     * clusters, Amazon RDS can use Kerberos Authentication to authenticate users that
     * connect to the DB cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation.</p> <p>For Amazon Aurora DB
     * clusters, Amazon RDS can use Kerberos Authentication to authenticate users that
     * connect to the DB cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation.</p> <p>For Amazon Aurora DB
     * clusters, Amazon RDS can use Kerberos Authentication to authenticate users that
     * connect to the DB cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation.</p> <p>For Amazon Aurora DB
     * clusters, Amazon RDS can use Kerberos Authentication to authenticate users that
     * connect to the DB cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Specify the Active Directory directory ID to restore the DB cluster in. The
     * domain must be created prior to this operation.</p> <p>For Amazon Aurora DB
     * clusters, Amazon RDS can use Kerberos Authentication to authenticate users that
     * connect to the DB cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDomain(const char* value) { SetDomain(value); return *this;}


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
    inline RestoreDBClusterFromS3Request& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }

    
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }

    
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }

    
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }

    
    inline RestoreDBClusterFromS3Request& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { SetServerlessV2ScalingConfiguration(value); return *this;}

    
    inline RestoreDBClusterFromS3Request& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p>
     */
    inline const Aws::String& GetNetworkType() const{ return m_networkType; }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p>
     */
    inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p>
     */
    inline void SetNetworkType(const Aws::String& value) { m_networkTypeHasBeenSet = true; m_networkType = value; }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p>
     */
    inline void SetNetworkType(Aws::String&& value) { m_networkTypeHasBeenSet = true; m_networkType = std::move(value); }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p>
     */
    inline void SetNetworkType(const char* value) { m_networkTypeHasBeenSet = true; m_networkType.assign(value); }

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p>
     */
    inline RestoreDBClusterFromS3Request& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p>
     */
    inline RestoreDBClusterFromS3Request& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p>
     */
    inline RestoreDBClusterFromS3Request& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}


    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul>
     */
    inline bool GetManageMasterUserPassword() const{ return m_manageMasterUserPassword; }

    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul>
     */
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }

    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul>
     */
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }

    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Can't manage the master
     * user password with Amazon Web Services Secrets Manager if
     * <code>MasterUserPassword</code> is specified.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const{ return m_masterUserSecretKmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline void SetMasterUserSecretKmsKeyId(const Aws::String& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline void SetMasterUserSecretKmsKeyId(Aws::String&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline void SetMasterUserSecretKmsKeyId(const char* value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUserSecretKmsKeyId(const Aws::String& value) { SetMasterUserSecretKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUserSecretKmsKeyId(Aws::String&& value) { SetMasterUserSecretKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if the master user password is managed by RDS in
     * Amazon Web Services Secrets Manager for the DB cluster.</p> <p>The Amazon Web
     * Services KMS key identifier is the key ARN, key ID, alias ARN, or alias name for
     * the KMS key. To use a KMS key in a different Amazon Web Services account,
     * specify the key ARN or alias ARN.</p> <p>If you don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * <p>There is a default KMS key for your Amazon Web Services account. Your Amazon
     * Web Services account has a different default KMS key for each Amazon Web
     * Services Region.</p>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUserSecretKmsKeyId(const char* value) { SetMasterUserSecretKmsKeyId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet = false;

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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    Aws::String m_sourceEngine;
    bool m_sourceEngineHasBeenSet = false;

    Aws::String m_sourceEngineVersion;
    bool m_sourceEngineVersionHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet = false;

    Aws::String m_s3IngestionRoleArn;
    bool m_s3IngestionRoleArnHasBeenSet = false;

    long long m_backtrackWindow;
    bool m_backtrackWindowHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    bool m_manageMasterUserPassword;
    bool m_manageMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
