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
   */
  class AWS_RDS_API RestoreDBClusterFromS3Request : public RDSRequest
  {
  public:
    RestoreDBClusterFromS3Request();
    Aws::String SerializePayload() const override;

    /**
     * <p>A list of EC2 Availability Zones that instances in the restored DB cluster
     * can be created in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the restored DB cluster
     * can be created in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the restored DB cluster
     * can be created in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the restored DB cluster
     * can be created in.</p>
     */
    inline RestoreDBClusterFromS3Request& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of EC2 Availability Zones that instances in the restored DB cluster
     * can be created in.</p>
     */
    inline RestoreDBClusterFromS3Request& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of EC2 Availability Zones that instances in the restored DB cluster
     * can be created in.</p>
     */
    inline RestoreDBClusterFromS3Request& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the restored DB cluster
     * can be created in.</p>
     */
    inline RestoreDBClusterFromS3Request& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of EC2 Availability Zones that instances in the restored DB cluster
     * can be created in.</p>
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
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified CharacterSet.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

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
    inline RestoreDBClusterFromS3Request& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(value); return *this;}

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
    inline RestoreDBClusterFromS3Request& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDatabaseName(Aws::String&& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The database name for the restored DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the DB cluster to create from the source data in the S3 bucket.
     * This parameter is isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The name of the DB cluster to create from the source data in the S3 bucket.
     * This parameter is isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to create from the source data in the S3 bucket.
     * This parameter is isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The name of the DB cluster to create from the source data in the S3 bucket.
     * This parameter is isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The name of the DB cluster to create from the source data in the S3 bucket.
     * This parameter is isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to create from the source data in the S3 bucket.
     * This parameter is isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster to create from the source data in the S3 bucket.
     * This parameter is isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li>
     * <p>First character must be a letter.</p> </li> <li> <p>Cannot end with a hyphen
     * or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>my-cluster1</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> will be
     * used. </p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> will be
     * used. </p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> will be
     * used. </p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> will be
     * used. </p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> will be
     * used. </p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> will be
     * used. </p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to associate with the restored DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> will be
     * used. </p> <p>Constraints:</p> <ul> <li> <p>Must be 1 to 255 alphanumeric
     * characters</p> </li> <li> <p>First character must be a letter</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens</p> </li> </ul>
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
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with the restored DB
     * cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>A DB subnet group to associate with the restored DB cluster.</p>
     * <p>Constraints: Must contain no more than 255 alphanumeric characters, periods,
     * underscores, spaces, or hyphens. Must not be default.</p> <p>Example:
     * <code>mySubnetgroup</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the database engine to be used for the restored DB cluster.</p>
     * <p>Valid Values: <code>aurora</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for the restored DB cluster.</p>
     * <p>Valid Values: <code>aurora</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for the restored DB cluster.</p>
     * <p>Valid Values: <code>aurora</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for the restored DB cluster.</p>
     * <p>Valid Values: <code>aurora</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for the restored DB cluster.</p>
     * <p>Valid Values: <code>aurora</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for the restored DB cluster.</p>
     * <p>Valid Values: <code>aurora</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithEngine(Aws::String&& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for the restored DB cluster.</p>
     * <p>Valid Values: <code>aurora</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithEngine(const char* value) { SetEngine(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora</b> </p>
     * <p>Example: <code>5.6.10a</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora</b> </p>
     * <p>Example: <code>5.6.10a</code> </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora</b> </p>
     * <p>Example: <code>5.6.10a</code> </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora</b> </p>
     * <p>Example: <code>5.6.10a</code> </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora</b> </p>
     * <p>Example: <code>5.6.10a</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora</b> </p>
     * <p>Example: <code>5.6.10a</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithEngineVersion(Aws::String&& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora</b> </p>
     * <p>Example: <code>5.6.10a</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The port number on which the instances in the restored DB cluster accept
     * connections.</p> <p> Default: <code>3306</code> </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the instances in the restored DB cluster accept
     * connections.</p> <p> Default: <code>3306</code> </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the instances in the restored DB cluster accept
     * connections.</p> <p> Default: <code>3306</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithPort(int value) { SetPort(value); return *this;}

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUsername(Aws::String&& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name of the master user for the restored DB cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be 1 to 16 alphanumeric characters.</p>
     * </li> <li> <p>First character must be a letter.</p> </li> <li> <p>Cannot be a
     * reserved word for the chosen database engine.</p> </li> </ul>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline RestoreDBClusterFromS3Request& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options cannot be removed from an
     * option group. An option group cannot be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options cannot be removed from an
     * option group. An option group cannot be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options cannot be removed from an
     * option group. An option group cannot be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options cannot be removed from an
     * option group. An option group cannot be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options cannot be removed from an
     * option group. An option group cannot be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options cannot be removed from an
     * option group. An option group cannot be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>A value that indicates that the restored DB cluster should be associated with
     * the specified option group.</p> <p>Permanent options cannot be removed from an
     * option group. An option group cannot be removed from a DB cluster once it is
     * associated with a DB cluster.</p>
     */
    inline RestoreDBClusterFromS3Request& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>Default: A 30-minute window selected at random from an 8-hour block of time
     * per region. To see the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>Default: A 30-minute window selected at random from an 8-hour block of time
     * per region. To see the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>Default: A 30-minute window selected at random from an 8-hour block of time
     * per region. To see the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>Default: A 30-minute window selected at random from an 8-hour block of time
     * per region. To see the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>Default: A 30-minute window selected at random from an 8-hour block of time
     * per region. To see the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>Default: A 30-minute window selected at random from an 8-hour block of time
     * per region. To see the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>Default: A 30-minute window selected at random from an 8-hour block of time
     * per region. To see the time blocks available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Times should be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week. To see the time blocks
     * available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week. To see the time blocks
     * available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week. To see the time blocks
     * available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week. To see the time blocks
     * available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week. To see the time blocks
     * available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week. To see the time blocks
     * available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p> Format: <code>ddd:hh24:mi-ddd:hh24:mi</code>
     * </p> <p>Default: A 30-minute window selected at random from an 8-hour block of
     * time per region, occurring on a random day of the week. To see the time blocks
     * available, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/AdjustingTheMaintenanceWindow.html">
     * Adjusting the Preferred Maintenance Window</a> in the <i>Amazon RDS User
     * Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p>
     * <p>Constraints: Minimum 30-minute window.</p>
     */
    inline RestoreDBClusterFromS3Request& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}

    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline RestoreDBClusterFromS3Request& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline RestoreDBClusterFromS3Request& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    
    inline RestoreDBClusterFromS3Request& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline RestoreDBClusterFromS3Request& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies whether the restored DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the restored DB cluster is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the restored DB cluster is encrypted.</p>
     */
    inline RestoreDBClusterFromS3Request& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KM encryption key.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KM encryption key.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KM encryption key.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KM encryption key.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KM encryption key.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS region.</p>
     */
    inline RestoreDBClusterFromS3Request& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KM encryption key.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS region.</p>
     */
    inline RestoreDBClusterFromS3Request& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KM encryption key.</p> <p>If the
     * <code>StorageEncrypted</code> parameter is true, and you do not specify a value
     * for the <code>KmsKeyId</code> parameter, then Amazon RDS will use your default
     * encryption key. AWS KMS creates the default encryption key for your AWS account.
     * Your AWS account has a different default encryption key for each AWS region.</p>
     */
    inline RestoreDBClusterFromS3Request& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket. </p> <p>Valid values: <code>mysql</code> </p>
     */
    inline const Aws::String& GetSourceEngine() const{ return m_sourceEngine; }

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket. </p> <p>Valid values: <code>mysql</code> </p>
     */
    inline void SetSourceEngine(const Aws::String& value) { m_sourceEngineHasBeenSet = true; m_sourceEngine = value; }

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket. </p> <p>Valid values: <code>mysql</code> </p>
     */
    inline void SetSourceEngine(Aws::String&& value) { m_sourceEngineHasBeenSet = true; m_sourceEngine = value; }

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket. </p> <p>Valid values: <code>mysql</code> </p>
     */
    inline void SetSourceEngine(const char* value) { m_sourceEngineHasBeenSet = true; m_sourceEngine.assign(value); }

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket. </p> <p>Valid values: <code>mysql</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngine(const Aws::String& value) { SetSourceEngine(value); return *this;}

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket. </p> <p>Valid values: <code>mysql</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngine(Aws::String&& value) { SetSourceEngine(value); return *this;}

    /**
     * <p>The identifier for the database engine that was backed up to create the files
     * stored in the Amazon S3 bucket. </p> <p>Valid values: <code>mysql</code> </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngine(const char* value) { SetSourceEngine(value); return *this;}

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL version 5.5 and 5.6 are supported. </p> <p>Example: <code>5.6.22</code>
     * </p>
     */
    inline const Aws::String& GetSourceEngineVersion() const{ return m_sourceEngineVersion; }

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL version 5.5 and 5.6 are supported. </p> <p>Example: <code>5.6.22</code>
     * </p>
     */
    inline void SetSourceEngineVersion(const Aws::String& value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion = value; }

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL version 5.5 and 5.6 are supported. </p> <p>Example: <code>5.6.22</code>
     * </p>
     */
    inline void SetSourceEngineVersion(Aws::String&& value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion = value; }

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL version 5.5 and 5.6 are supported. </p> <p>Example: <code>5.6.22</code>
     * </p>
     */
    inline void SetSourceEngineVersion(const char* value) { m_sourceEngineVersionHasBeenSet = true; m_sourceEngineVersion.assign(value); }

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL version 5.5 and 5.6 are supported. </p> <p>Example: <code>5.6.22</code>
     * </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngineVersion(const Aws::String& value) { SetSourceEngineVersion(value); return *this;}

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL version 5.5 and 5.6 are supported. </p> <p>Example: <code>5.6.22</code>
     * </p>
     */
    inline RestoreDBClusterFromS3Request& WithSourceEngineVersion(Aws::String&& value) { SetSourceEngineVersion(value); return *this;}

    /**
     * <p>The version of the database that the backup files were created from.</p>
     * <p>MySQL version 5.5 and 5.6 are supported. </p> <p>Example: <code>5.6.22</code>
     * </p>
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
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket that contains the data used to create the
     * Amazon Aurora DB cluster.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

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
    inline RestoreDBClusterFromS3Request& WithS3BucketName(Aws::String&& value) { SetS3BucketName(value); return *this;}

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
    inline void SetS3Prefix(const Aws::String& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline void SetS3Prefix(Aws::String&& value) { m_s3PrefixHasBeenSet = true; m_s3Prefix = value; }

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
    inline RestoreDBClusterFromS3Request& WithS3Prefix(Aws::String&& value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The prefix for all of the file names that contain the data used to create the
     * Amazon Aurora DB cluster. If you do not specify a <b>SourceS3Prefix</b> value,
     * then the Amazon Aurora DB cluster is created by using all of the files in the
     * Amazon S3 bucket.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3Prefix(const char* value) { SetS3Prefix(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket on your
     * behalf.</p>
     */
    inline const Aws::String& GetS3IngestionRoleArn() const{ return m_s3IngestionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket on your
     * behalf.</p>
     */
    inline void SetS3IngestionRoleArn(const Aws::String& value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket on your
     * behalf.</p>
     */
    inline void SetS3IngestionRoleArn(Aws::String&& value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket on your
     * behalf.</p>
     */
    inline void SetS3IngestionRoleArn(const char* value) { m_s3IngestionRoleArnHasBeenSet = true; m_s3IngestionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket on your
     * behalf.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3IngestionRoleArn(const Aws::String& value) { SetS3IngestionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket on your
     * behalf.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3IngestionRoleArn(Aws::String&& value) { SetS3IngestionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
     * (IAM) role that authorizes Amazon RDS to access the Amazon S3 bucket on your
     * behalf.</p>
     */
    inline RestoreDBClusterFromS3Request& WithS3IngestionRoleArn(const char* value) { SetS3IngestionRoleArn(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;
    Aws::String m_characterSetName;
    bool m_characterSetNameHasBeenSet;
    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet;
    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet;
    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet;
    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;
    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;
    Aws::String m_engine;
    bool m_engineHasBeenSet;
    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;
    int m_port;
    bool m_portHasBeenSet;
    Aws::String m_masterUsername;
    bool m_masterUsernameHasBeenSet;
    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;
    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;
    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;
    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;
    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;
    Aws::String m_sourceEngine;
    bool m_sourceEngineHasBeenSet;
    Aws::String m_sourceEngineVersion;
    bool m_sourceEngineVersionHasBeenSet;
    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet;
    Aws::String m_s3Prefix;
    bool m_s3PrefixHasBeenSet;
    Aws::String m_s3IngestionRoleArn;
    bool m_s3IngestionRoleArnHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
