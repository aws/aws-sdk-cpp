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
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CreateDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API CreateDBClusterRequest : public RDSRequest
  {
  public:
    CreateDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBCluster"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created. For information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User Guide</i>.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created. For information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User Guide</i>.
     * </p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created. For information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User Guide</i>.
     * </p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created. For information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User Guide</i>.
     * </p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created. For information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User Guide</i>.
     * </p>
     */
    inline CreateDBClusterRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created. For information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User Guide</i>.
     * </p>
     */
    inline CreateDBClusterRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created. For information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User Guide</i>.
     * </p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created. For information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User Guide</i>.
     * </p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Availability Zones (AZs) where instances in the DB cluster can be
     * created. For information on AWS Regions and Availability Zones, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Concepts.RegionsAndAvailabilityZones.html">Choosing
     * the Regions and Availability Zones</a> in the <i>Amazon Aurora User Guide</i>.
     * </p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Default:
     * 1</p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li>
     * </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Default:
     * 1</p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li>
     * </ul>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Default:
     * 1</p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li>
     * </ul>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained.</p> <p>Default:
     * 1</p> <p>Constraints:</p> <ul> <li> <p>Must be a value from 1 to 35</p> </li>
     * </ul>
     */
    inline CreateDBClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p>
     */
    inline const Aws::String& GetCharacterSetName() const{ return m_characterSetName; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p>
     */
    inline bool CharacterSetNameHasBeenSet() const { return m_characterSetNameHasBeenSet; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p>
     */
    inline void SetCharacterSetName(const Aws::String& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = value; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p>
     */
    inline void SetCharacterSetName(Aws::String&& value) { m_characterSetNameHasBeenSet = true; m_characterSetName = std::move(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p>
     */
    inline void SetCharacterSetName(const char* value) { m_characterSetNameHasBeenSet = true; m_characterSetName.assign(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p>
     */
    inline CreateDBClusterRequest& WithCharacterSetName(const Aws::String& value) { SetCharacterSetName(value); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p>
     */
    inline CreateDBClusterRequest& WithCharacterSetName(Aws::String&& value) { SetCharacterSetName(std::move(value)); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified CharacterSet.</p>
     */
    inline CreateDBClusterRequest& WithCharacterSetName(const char* value) { SetCharacterSetName(value); return *this;}


    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon RDS will not create a database in the DB cluster you
     * are creating.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon RDS will not create a database in the DB cluster you
     * are creating.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon RDS will not create a database in the DB cluster you
     * are creating.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon RDS will not create a database in the DB cluster you
     * are creating.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon RDS will not create a database in the DB cluster you
     * are creating.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon RDS will not create a database in the DB cluster you
     * are creating.</p>
     */
    inline CreateDBClusterRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon RDS will not create a database in the DB cluster you
     * are creating.</p>
     */
    inline CreateDBClusterRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name for your database of up to 64 alpha-numeric characters. If you do
     * not provide a name, Amazon RDS will not create a database in the DB cluster you
     * are creating.</p>
     */
    inline CreateDBClusterRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier. This parameter is stored as a lowercase
     * string.</p> <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters,
     * numbers, or hyphens.</p> </li> <li> <p>First character must be a letter.</p>
     * </li> <li> <p>Can't end with a hyphen or contain two consecutive hyphens.</p>
     * </li> </ul> <p>Example: <code>my-cluster1</code> </p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is used.
     * </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an
     * existing DB cluster parameter group.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is used.
     * </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an
     * existing DB cluster parameter group.</p> </li> </ul>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is used.
     * </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an
     * existing DB cluster parameter group.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is used.
     * </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an
     * existing DB cluster parameter group.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is used.
     * </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an
     * existing DB cluster parameter group.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is used.
     * </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an
     * existing DB cluster parameter group.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is used.
     * </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an
     * existing DB cluster parameter group.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p> The name of the DB cluster parameter group to associate with this DB
     * cluster. If this argument is omitted, <code>default.aurora5.6</code> is used.
     * </p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match the name of an
     * existing DB cluster parameter group.</p> </li> </ul>
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
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora),
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora), and
     * <code>aurora-postgresql</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora),
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora), and
     * <code>aurora-postgresql</code> </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora),
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora), and
     * <code>aurora-postgresql</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora),
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora), and
     * <code>aurora-postgresql</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora),
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora), and
     * <code>aurora-postgresql</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora),
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora), and
     * <code>aurora-postgresql</code> </p>
     */
    inline CreateDBClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora),
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora), and
     * <code>aurora-postgresql</code> </p>
     */
    inline CreateDBClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this DB cluster.</p> <p>Valid
     * Values: <code>aurora</code> (for MySQL 5.6-compatible Aurora),
     * <code>aurora-mysql</code> (for MySQL 5.7-compatible Aurora), and
     * <code>aurora-postgresql</code> </p>
     */
    inline CreateDBClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora MySQL</b>
     * </p> <p>Example: <code>5.6.10a</code>, <code>5.7.12</code> </p> <p> <b>Aurora
     * PostgreSQL</b> </p> <p>Example: <code>9.6.3</code> </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora MySQL</b>
     * </p> <p>Example: <code>5.6.10a</code>, <code>5.7.12</code> </p> <p> <b>Aurora
     * PostgreSQL</b> </p> <p>Example: <code>9.6.3</code> </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora MySQL</b>
     * </p> <p>Example: <code>5.6.10a</code>, <code>5.7.12</code> </p> <p> <b>Aurora
     * PostgreSQL</b> </p> <p>Example: <code>9.6.3</code> </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora MySQL</b>
     * </p> <p>Example: <code>5.6.10a</code>, <code>5.7.12</code> </p> <p> <b>Aurora
     * PostgreSQL</b> </p> <p>Example: <code>9.6.3</code> </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora MySQL</b>
     * </p> <p>Example: <code>5.6.10a</code>, <code>5.7.12</code> </p> <p> <b>Aurora
     * PostgreSQL</b> </p> <p>Example: <code>9.6.3</code> </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora MySQL</b>
     * </p> <p>Example: <code>5.6.10a</code>, <code>5.7.12</code> </p> <p> <b>Aurora
     * PostgreSQL</b> </p> <p>Example: <code>9.6.3</code> </p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora MySQL</b>
     * </p> <p>Example: <code>5.6.10a</code>, <code>5.7.12</code> </p> <p> <b>Aurora
     * PostgreSQL</b> </p> <p>Example: <code>9.6.3</code> </p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use.</p> <p> <b>Aurora MySQL</b>
     * </p> <p>Example: <code>5.6.10a</code>, <code>5.7.12</code> </p> <p> <b>Aurora
     * PostgreSQL</b> </p> <p>Example: <code>9.6.3</code> </p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> Default: <code>3306</code> if engine is set as aurora or
     * <code>5432</code> if set to aurora-postgresql. </p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> Default: <code>3306</code> if engine is set as aurora or
     * <code>5432</code> if set to aurora-postgresql. </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> Default: <code>3306</code> if engine is set as aurora or
     * <code>5432</code> if set to aurora-postgresql. </p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the instances in the DB cluster accept
     * connections.</p> <p> Default: <code>3306</code> if engine is set as aurora or
     * <code>5432</code> if set to aurora-postgresql. </p>
     */
    inline CreateDBClusterRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name of the master user for the DB cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be 1 to 16 letters or numbers.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Can't be a reserved word for the chosen
     * database engine.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


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
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

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
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

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
    inline CreateDBClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints: Must
     * contain from 8 to 41 characters.</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>Permanent options can't be removed from an option
     * group. The option group can't be removed from a DB cluster once it is associated
     * with a DB cluster.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>Permanent options can't be removed from an option
     * group. The option group can't be removed from a DB cluster once it is associated
     * with a DB cluster.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>Permanent options can't be removed from an option
     * group. The option group can't be removed from a DB cluster once it is associated
     * with a DB cluster.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>Permanent options can't be removed from an option
     * group. The option group can't be removed from a DB cluster once it is associated
     * with a DB cluster.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>Permanent options can't be removed from an option
     * group. The option group can't be removed from a DB cluster once it is associated
     * with a DB cluster.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>Permanent options can't be removed from an option
     * group. The option group can't be removed from a DB cluster once it is associated
     * with a DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>Permanent options can't be removed from an option
     * group. The option group can't be removed from a DB cluster once it is associated
     * with a DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>Permanent options can't be removed from an option
     * group. The option group can't be removed from a DB cluster once it is associated
     * with a DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region. To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal
     * Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred
     * maintenance window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li>
     * </ul>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each AWS Region, occurring on a random day of the week. To see the time
     * blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide.</i> </p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat,
     * Sun.</p> <p>Constraints: Minimum 30-minute window.</p>
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
     * <p>Tags to assign to the DB cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to assign to the DB cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to assign to the DB cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to assign to the DB cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to assign to the DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to assign to the DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to assign to the DB cluster.</p>
     */
    inline CreateDBClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to assign to the DB cluster.</p>
     */
    inline CreateDBClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A value that indicates whether the DB cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>A value that indicates whether the DB cluster is encrypted.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>A value that indicates whether the DB cluster is encrypted.</p>
     */
    inline CreateDBClusterRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The AWS KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KMS encryption key.</p> <p>If an encryption key is
     * not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the encryption key used to encrypt the source. Otherwise,
     * Amazon RDS will use your default encryption key. </p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon RDS will
     * use your default encryption key.</p> </li> </ul> <p>AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS Region.</p> <p>If you create a Read Replica of an
     * encrypted DB cluster in another AWS Region, you must set <code>KmsKeyId</code>
     * to a KMS key ID that is valid in the destination AWS Region. This key is used to
     * encrypt the Read Replica in that AWS Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KMS encryption key.</p> <p>If an encryption key is
     * not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the encryption key used to encrypt the source. Otherwise,
     * Amazon RDS will use your default encryption key. </p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon RDS will
     * use your default encryption key.</p> </li> </ul> <p>AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS Region.</p> <p>If you create a Read Replica of an
     * encrypted DB cluster in another AWS Region, you must set <code>KmsKeyId</code>
     * to a KMS key ID that is valid in the destination AWS Region. This key is used to
     * encrypt the Read Replica in that AWS Region.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KMS encryption key.</p> <p>If an encryption key is
     * not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the encryption key used to encrypt the source. Otherwise,
     * Amazon RDS will use your default encryption key. </p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon RDS will
     * use your default encryption key.</p> </li> </ul> <p>AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS Region.</p> <p>If you create a Read Replica of an
     * encrypted DB cluster in another AWS Region, you must set <code>KmsKeyId</code>
     * to a KMS key ID that is valid in the destination AWS Region. This key is used to
     * encrypt the Read Replica in that AWS Region.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KMS encryption key.</p> <p>If an encryption key is
     * not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the encryption key used to encrypt the source. Otherwise,
     * Amazon RDS will use your default encryption key. </p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon RDS will
     * use your default encryption key.</p> </li> </ul> <p>AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS Region.</p> <p>If you create a Read Replica of an
     * encrypted DB cluster in another AWS Region, you must set <code>KmsKeyId</code>
     * to a KMS key ID that is valid in the destination AWS Region. This key is used to
     * encrypt the Read Replica in that AWS Region.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KMS encryption key.</p> <p>If an encryption key is
     * not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the encryption key used to encrypt the source. Otherwise,
     * Amazon RDS will use your default encryption key. </p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon RDS will
     * use your default encryption key.</p> </li> </ul> <p>AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS Region.</p> <p>If you create a Read Replica of an
     * encrypted DB cluster in another AWS Region, you must set <code>KmsKeyId</code>
     * to a KMS key ID that is valid in the destination AWS Region. This key is used to
     * encrypt the Read Replica in that AWS Region.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KMS encryption key.</p> <p>If an encryption key is
     * not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the encryption key used to encrypt the source. Otherwise,
     * Amazon RDS will use your default encryption key. </p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon RDS will
     * use your default encryption key.</p> </li> </ul> <p>AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS Region.</p> <p>If you create a Read Replica of an
     * encrypted DB cluster in another AWS Region, you must set <code>KmsKeyId</code>
     * to a KMS key ID that is valid in the destination AWS Region. This key is used to
     * encrypt the Read Replica in that AWS Region.</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KMS encryption key.</p> <p>If an encryption key is
     * not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the encryption key used to encrypt the source. Otherwise,
     * Amazon RDS will use your default encryption key. </p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon RDS will
     * use your default encryption key.</p> </li> </ul> <p>AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS Region.</p> <p>If you create a Read Replica of an
     * encrypted DB cluster in another AWS Region, you must set <code>KmsKeyId</code>
     * to a KMS key ID that is valid in the destination AWS Region. This key is used to
     * encrypt the Read Replica in that AWS Region.</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier for an encrypted DB cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a DB cluster with the same AWS account that owns the KMS encryption
     * key used to encrypt the new DB cluster, then you can use the KMS key alias
     * instead of the ARN for the KMS encryption key.</p> <p>If an encryption key is
     * not specified in <code>KmsKeyId</code>:</p> <ul> <li> <p>If
     * <code>ReplicationSourceIdentifier</code> identifies an encrypted source, then
     * Amazon RDS will use the encryption key used to encrypt the source. Otherwise,
     * Amazon RDS will use your default encryption key. </p> </li> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is enabled and
     * <code>ReplicationSourceIdentifier</code> is not specified, then Amazon RDS will
     * use your default encryption key.</p> </li> </ul> <p>AWS KMS creates the default
     * encryption key for your AWS account. Your AWS account has a different default
     * encryption key for each AWS Region.</p> <p>If you create a Read Replica of an
     * encrypted DB cluster in another AWS Region, you must set <code>KmsKeyId</code>
     * to a KMS key ID that is valid in the destination AWS Region. This key is used to
     * encrypt the Read Replica in that AWS Region.</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>A URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBCluster</code> action to be called in the source AWS Region where
     * the DB cluster is replicated from. You only need to specify
     * <code>PreSignedUrl</code> when you are performing cross-region replication from
     * an encrypted DB cluster.</p> <p>The pre-signed URL must be a valid request for
     * the <code>CreateDBCluster</code> API action that can be executed in the source
     * AWS Region that contains the encrypted DB cluster to be copied.</p> <p>The
     * pre-signed URL request must contain the following parameter values:</p> <ul>
     * <li> <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use
     * to encrypt the copy of the DB cluster in the destination AWS Region. This should
     * refer to the same KMS key for both the <code>CreateDBCluster</code> action that
     * is called in the destination AWS Region, and the action contained in the
     * pre-signed URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of
     * the AWS Region that Aurora Read Replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted DB cluster from the us-west-2 AWS Region, then your
     * <code>ReplicationSourceIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>A URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBCluster</code> action to be called in the source AWS Region where
     * the DB cluster is replicated from. You only need to specify
     * <code>PreSignedUrl</code> when you are performing cross-region replication from
     * an encrypted DB cluster.</p> <p>The pre-signed URL must be a valid request for
     * the <code>CreateDBCluster</code> API action that can be executed in the source
     * AWS Region that contains the encrypted DB cluster to be copied.</p> <p>The
     * pre-signed URL request must contain the following parameter values:</p> <ul>
     * <li> <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use
     * to encrypt the copy of the DB cluster in the destination AWS Region. This should
     * refer to the same KMS key for both the <code>CreateDBCluster</code> action that
     * is called in the destination AWS Region, and the action contained in the
     * pre-signed URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of
     * the AWS Region that Aurora Read Replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted DB cluster from the us-west-2 AWS Region, then your
     * <code>ReplicationSourceIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>A URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBCluster</code> action to be called in the source AWS Region where
     * the DB cluster is replicated from. You only need to specify
     * <code>PreSignedUrl</code> when you are performing cross-region replication from
     * an encrypted DB cluster.</p> <p>The pre-signed URL must be a valid request for
     * the <code>CreateDBCluster</code> API action that can be executed in the source
     * AWS Region that contains the encrypted DB cluster to be copied.</p> <p>The
     * pre-signed URL request must contain the following parameter values:</p> <ul>
     * <li> <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use
     * to encrypt the copy of the DB cluster in the destination AWS Region. This should
     * refer to the same KMS key for both the <code>CreateDBCluster</code> action that
     * is called in the destination AWS Region, and the action contained in the
     * pre-signed URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of
     * the AWS Region that Aurora Read Replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted DB cluster from the us-west-2 AWS Region, then your
     * <code>ReplicationSourceIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>A URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBCluster</code> action to be called in the source AWS Region where
     * the DB cluster is replicated from. You only need to specify
     * <code>PreSignedUrl</code> when you are performing cross-region replication from
     * an encrypted DB cluster.</p> <p>The pre-signed URL must be a valid request for
     * the <code>CreateDBCluster</code> API action that can be executed in the source
     * AWS Region that contains the encrypted DB cluster to be copied.</p> <p>The
     * pre-signed URL request must contain the following parameter values:</p> <ul>
     * <li> <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use
     * to encrypt the copy of the DB cluster in the destination AWS Region. This should
     * refer to the same KMS key for both the <code>CreateDBCluster</code> action that
     * is called in the destination AWS Region, and the action contained in the
     * pre-signed URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of
     * the AWS Region that Aurora Read Replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted DB cluster from the us-west-2 AWS Region, then your
     * <code>ReplicationSourceIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>A URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBCluster</code> action to be called in the source AWS Region where
     * the DB cluster is replicated from. You only need to specify
     * <code>PreSignedUrl</code> when you are performing cross-region replication from
     * an encrypted DB cluster.</p> <p>The pre-signed URL must be a valid request for
     * the <code>CreateDBCluster</code> API action that can be executed in the source
     * AWS Region that contains the encrypted DB cluster to be copied.</p> <p>The
     * pre-signed URL request must contain the following parameter values:</p> <ul>
     * <li> <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use
     * to encrypt the copy of the DB cluster in the destination AWS Region. This should
     * refer to the same KMS key for both the <code>CreateDBCluster</code> action that
     * is called in the destination AWS Region, and the action contained in the
     * pre-signed URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of
     * the AWS Region that Aurora Read Replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted DB cluster from the us-west-2 AWS Region, then your
     * <code>ReplicationSourceIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>A URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBCluster</code> action to be called in the source AWS Region where
     * the DB cluster is replicated from. You only need to specify
     * <code>PreSignedUrl</code> when you are performing cross-region replication from
     * an encrypted DB cluster.</p> <p>The pre-signed URL must be a valid request for
     * the <code>CreateDBCluster</code> API action that can be executed in the source
     * AWS Region that contains the encrypted DB cluster to be copied.</p> <p>The
     * pre-signed URL request must contain the following parameter values:</p> <ul>
     * <li> <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use
     * to encrypt the copy of the DB cluster in the destination AWS Region. This should
     * refer to the same KMS key for both the <code>CreateDBCluster</code> action that
     * is called in the destination AWS Region, and the action contained in the
     * pre-signed URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of
     * the AWS Region that Aurora Read Replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted DB cluster from the us-west-2 AWS Region, then your
     * <code>ReplicationSourceIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>A URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBCluster</code> action to be called in the source AWS Region where
     * the DB cluster is replicated from. You only need to specify
     * <code>PreSignedUrl</code> when you are performing cross-region replication from
     * an encrypted DB cluster.</p> <p>The pre-signed URL must be a valid request for
     * the <code>CreateDBCluster</code> API action that can be executed in the source
     * AWS Region that contains the encrypted DB cluster to be copied.</p> <p>The
     * pre-signed URL request must contain the following parameter values:</p> <ul>
     * <li> <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use
     * to encrypt the copy of the DB cluster in the destination AWS Region. This should
     * refer to the same KMS key for both the <code>CreateDBCluster</code> action that
     * is called in the destination AWS Region, and the action contained in the
     * pre-signed URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of
     * the AWS Region that Aurora Read Replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted DB cluster from the us-west-2 AWS Region, then your
     * <code>ReplicationSourceIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>A URL that contains a Signature Version 4 signed request for the
     * <code>CreateDBCluster</code> action to be called in the source AWS Region where
     * the DB cluster is replicated from. You only need to specify
     * <code>PreSignedUrl</code> when you are performing cross-region replication from
     * an encrypted DB cluster.</p> <p>The pre-signed URL must be a valid request for
     * the <code>CreateDBCluster</code> API action that can be executed in the source
     * AWS Region that contains the encrypted DB cluster to be copied.</p> <p>The
     * pre-signed URL request must contain the following parameter values:</p> <ul>
     * <li> <p> <code>KmsKeyId</code> - The AWS KMS key identifier for the key to use
     * to encrypt the copy of the DB cluster in the destination AWS Region. This should
     * refer to the same KMS key for both the <code>CreateDBCluster</code> action that
     * is called in the destination AWS Region, and the action contained in the
     * pre-signed URL.</p> </li> <li> <p> <code>DestinationRegion</code> - The name of
     * the AWS Region that Aurora Read Replica will be created in.</p> </li> <li> <p>
     * <code>ReplicationSourceIdentifier</code> - The DB cluster identifier for the
     * encrypted DB cluster to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source AWS Region. For example, if you are
     * copying an encrypted DB cluster from the us-west-2 AWS Region, then your
     * <code>ReplicationSourceIdentifier</code> would look like Example:
     * <code>arn:aws:rds:us-west-2:123456789012:cluster:aurora-cluster1</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">
     * Authenticating Requests: Using Query Parameters (AWS Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">
     * Signature Version 4 Signing Process</a>.</p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


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
    inline CreateDBClusterRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0. </p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If
     * specified, this value must be set to a number from 0 to 259,200 (72 hours).</p>
     * </li> </ul>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0. </p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If
     * specified, this value must be set to a number from 0 to 259,200 (72 hours).</p>
     * </li> </ul>
     */
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0. </p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If
     * specified, this value must be set to a number from 0 to 259,200 (72 hours).</p>
     * </li> </ul>
     */
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0. </p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If
     * specified, this value must be set to a number from 0 to 259,200 (72 hours).</p>
     * </li> </ul>
     */
    inline CreateDBClusterRequest& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}


    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of log types that need to be enabled for exporting to CloudWatch
     * Logs. The values in the list depend on the DB engine being used. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p>
     */
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, or <code>global</code>.</p>
     */
    inline const Aws::String& GetEngineMode() const{ return m_engineMode; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, or <code>global</code>.</p>
     */
    inline bool EngineModeHasBeenSet() const { return m_engineModeHasBeenSet; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, or <code>global</code>.</p>
     */
    inline void SetEngineMode(const Aws::String& value) { m_engineModeHasBeenSet = true; m_engineMode = value; }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, or <code>global</code>.</p>
     */
    inline void SetEngineMode(Aws::String&& value) { m_engineModeHasBeenSet = true; m_engineMode = std::move(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, or <code>global</code>.</p>
     */
    inline void SetEngineMode(const char* value) { m_engineModeHasBeenSet = true; m_engineMode.assign(value); }

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, or <code>global</code>.</p>
     */
    inline CreateDBClusterRequest& WithEngineMode(const Aws::String& value) { SetEngineMode(value); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, or <code>global</code>.</p>
     */
    inline CreateDBClusterRequest& WithEngineMode(Aws::String&& value) { SetEngineMode(std::move(value)); return *this;}

    /**
     * <p>The DB engine mode of the DB cluster, either <code>provisioned</code>,
     * <code>serverless</code>, <code>parallelquery</code>, or <code>global</code>.</p>
     */
    inline CreateDBClusterRequest& WithEngineMode(const char* value) { SetEngineMode(value); return *this;}


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
    inline CreateDBClusterRequest& WithScalingConfiguration(const ScalingConfiguration& value) { SetScalingConfiguration(value); return *this;}

    /**
     * <p>For DB clusters in <code>serverless</code> DB engine mode, the scaling
     * properties of the DB cluster.</p>
     */
    inline CreateDBClusterRequest& WithScalingConfiguration(ScalingConfiguration&& value) { SetScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection is disabled.</p>
     */
    inline CreateDBClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p> The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster. </p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p> The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster. </p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p> The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster. </p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p> The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster. </p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p> The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster. </p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p> The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster. </p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p> The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster. </p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p> The global cluster ID of an Aurora cluster that becomes the primary cluster
     * in the new global database cluster. </p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p>
     */
    inline CreateDBClusterRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}

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

    Aws::String m_replicationSourceIdentifier;
    bool m_replicationSourceIdentifierHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    bool m_storageEncrypted;
    bool m_storageEncryptedHasBeenSet;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet;

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

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet;

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
