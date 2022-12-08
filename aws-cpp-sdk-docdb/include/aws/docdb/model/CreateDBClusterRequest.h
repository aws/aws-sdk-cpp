/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb/DocDB_EXPORTS.h>
#include <aws/docdb/DocDBRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DocDB
{
namespace Model
{

  /**
   * <p>Represents the input to <a>CreateDBCluster</a>. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/docdb-2014-10-31/CreateDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class CreateDBClusterRequest : public DocDBRequest
  {
  public:
    AWS_DOCDB_API CreateDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDBCluster"; }

    AWS_DOCDB_API Aws::String SerializePayload() const override;

  protected:
    AWS_DOCDB_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A list of Amazon EC2 Availability Zones that instances in the cluster can be
     * created in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of Amazon EC2 Availability Zones that instances in the cluster can be
     * created in.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of Amazon EC2 Availability Zones that instances in the cluster can be
     * created in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of Amazon EC2 Availability Zones that instances in the cluster can be
     * created in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of Amazon EC2 Availability Zones that instances in the cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of Amazon EC2 Availability Zones that instances in the cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon EC2 Availability Zones that instances in the cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of Amazon EC2 Availability Zones that instances in the cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon EC2 Availability Zones that instances in the cluster can be
     * created in.</p>
     */
    inline CreateDBClusterRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35.</p> </li> </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35.</p> </li> </ul>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35.</p> </li> </ul>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained. You must specify
     * a minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be a value from 1 to 35.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens. </p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens. </p> </li> </ul>
     * <p>Example: <code>my-cluster</code> </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens. </p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens. </p> </li> </ul>
     * <p>Example: <code>my-cluster</code> </p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens. </p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens. </p> </li> </ul>
     * <p>Example: <code>my-cluster</code> </p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens. </p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens. </p> </li> </ul>
     * <p>Example: <code>my-cluster</code> </p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens. </p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens. </p> </li> </ul>
     * <p>Example: <code>my-cluster</code> </p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens. </p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens. </p> </li> </ul>
     * <p>Example: <code>my-cluster</code> </p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens. </p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens. </p> </li> </ul>
     * <p>Example: <code>my-cluster</code> </p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier. This parameter is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must contain from 1 to 63 letters, numbers, or
     * hyphens. </p> </li> <li> <p>The first character must be a letter.</p> </li> <li>
     * <p>Cannot end with a hyphen or contain two consecutive hyphens. </p> </li> </ul>
     * <p>Example: <code>my-cluster</code> </p>
     */
    inline CreateDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The name of the cluster parameter group to associate with this cluster.</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the cluster parameter group to associate with this cluster.</p>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the cluster parameter group to associate with this cluster.</p>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the cluster parameter group to associate with this cluster.</p>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the cluster parameter group to associate with this cluster.</p>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the cluster parameter group to associate with this cluster.</p>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the cluster parameter group to associate with this cluster.</p>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster parameter group to associate with this cluster.</p>
     */
    inline CreateDBClusterRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>A list of EC2 VPC security groups to associate with this cluster. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this cluster. </p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this cluster. </p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this cluster. </p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to associate with this cluster. </p>
     */
    inline CreateDBClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this cluster. </p>
     */
    inline CreateDBClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to associate with this cluster. </p>
     */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this cluster. </p>
     */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to associate with this cluster. </p>
     */
    inline CreateDBClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>A subnet group to associate with this cluster.</p> <p>Constraints: Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>A subnet group to associate with this cluster.</p> <p>Constraints: Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>A subnet group to associate with this cluster.</p> <p>Constraints: Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>A subnet group to associate with this cluster.</p> <p>Constraints: Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>A subnet group to associate with this cluster.</p> <p>Constraints: Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>A subnet group to associate with this cluster.</p> <p>Constraints: Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>A subnet group to associate with this cluster.</p> <p>Constraints: Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>A subnet group to associate with this cluster.</p> <p>Constraints: Must match
     * the name of an existing <code>DBSubnetGroup</code>. Must not be default.</p>
     * <p>Example: <code>mySubnetgroup</code> </p>
     */
    inline CreateDBClusterRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>The name of the database engine to be used for this cluster.</p> <p>Valid
     * values: <code>docdb</code> </p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The name of the database engine to be used for this cluster.</p> <p>Valid
     * values: <code>docdb</code> </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The name of the database engine to be used for this cluster.</p> <p>Valid
     * values: <code>docdb</code> </p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The name of the database engine to be used for this cluster.</p> <p>Valid
     * values: <code>docdb</code> </p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The name of the database engine to be used for this cluster.</p> <p>Valid
     * values: <code>docdb</code> </p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The name of the database engine to be used for this cluster.</p> <p>Valid
     * values: <code>docdb</code> </p>
     */
    inline CreateDBClusterRequest& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The name of the database engine to be used for this cluster.</p> <p>Valid
     * values: <code>docdb</code> </p>
     */
    inline CreateDBClusterRequest& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The name of the database engine to be used for this cluster.</p> <p>Valid
     * values: <code>docdb</code> </p>
     */
    inline CreateDBClusterRequest& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The version number of the database engine to use. The
     * <code>--engine-version</code> will default to the latest major engine version.
     * For production workloads, we recommend explicitly declaring this parameter with
     * the intended major engine version.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to use. The
     * <code>--engine-version</code> will default to the latest major engine version.
     * For production workloads, we recommend explicitly declaring this parameter with
     * the intended major engine version.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to use. The
     * <code>--engine-version</code> will default to the latest major engine version.
     * For production workloads, we recommend explicitly declaring this parameter with
     * the intended major engine version.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to use. The
     * <code>--engine-version</code> will default to the latest major engine version.
     * For production workloads, we recommend explicitly declaring this parameter with
     * the intended major engine version.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to use. The
     * <code>--engine-version</code> will default to the latest major engine version.
     * For production workloads, we recommend explicitly declaring this parameter with
     * the intended major engine version.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to use. The
     * <code>--engine-version</code> will default to the latest major engine version.
     * For production workloads, we recommend explicitly declaring this parameter with
     * the intended major engine version.</p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to use. The
     * <code>--engine-version</code> will default to the latest major engine version.
     * For production workloads, we recommend explicitly declaring this parameter with
     * the intended major engine version.</p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to use. The
     * <code>--engine-version</code> will default to the latest major engine version.
     * For production workloads, we recommend explicitly declaring this parameter with
     * the intended major engine version.</p>
     */
    inline CreateDBClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The port number on which the instances in the cluster accept connections.</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the instances in the cluster accept connections.</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the instances in the cluster accept connections.</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the instances in the cluster accept connections.</p>
     */
    inline CreateDBClusterRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The name of the master user for the cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be from 1 to 63 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine. </p> </li> </ul>
     */
    inline const Aws::String& GetMasterUsername() const{ return m_masterUsername; }

    /**
     * <p>The name of the master user for the cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be from 1 to 63 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine. </p> </li> </ul>
     */
    inline bool MasterUsernameHasBeenSet() const { return m_masterUsernameHasBeenSet; }

    /**
     * <p>The name of the master user for the cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be from 1 to 63 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine. </p> </li> </ul>
     */
    inline void SetMasterUsername(const Aws::String& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = value; }

    /**
     * <p>The name of the master user for the cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be from 1 to 63 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine. </p> </li> </ul>
     */
    inline void SetMasterUsername(Aws::String&& value) { m_masterUsernameHasBeenSet = true; m_masterUsername = std::move(value); }

    /**
     * <p>The name of the master user for the cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be from 1 to 63 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine. </p> </li> </ul>
     */
    inline void SetMasterUsername(const char* value) { m_masterUsernameHasBeenSet = true; m_masterUsername.assign(value); }

    /**
     * <p>The name of the master user for the cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be from 1 to 63 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine. </p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithMasterUsername(const Aws::String& value) { SetMasterUsername(value); return *this;}

    /**
     * <p>The name of the master user for the cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be from 1 to 63 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine. </p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithMasterUsername(Aws::String&& value) { SetMasterUsername(std::move(value)); return *this;}

    /**
     * <p>The name of the master user for the cluster.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must be from 1 to 63 letters or numbers.</p> </li> <li> <p>The first
     * character must be a letter.</p> </li> <li> <p>Cannot be a reserved word for the
     * chosen database engine. </p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithMasterUsername(const char* value) { SetMasterUsername(value); return *this;}


    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except forward slash (/), double quote ("), or the
     * "at" symbol (@).</p> <p>Constraints: Must contain from 8 to 100 characters.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except forward slash (/), double quote ("), or the
     * "at" symbol (@).</p> <p>Constraints: Must contain from 8 to 100 characters.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except forward slash (/), double quote ("), or the
     * "at" symbol (@).</p> <p>Constraints: Must contain from 8 to 100 characters.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except forward slash (/), double quote ("), or the
     * "at" symbol (@).</p> <p>Constraints: Must contain from 8 to 100 characters.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except forward slash (/), double quote ("), or the
     * "at" symbol (@).</p> <p>Constraints: Must contain from 8 to 100 characters.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except forward slash (/), double quote ("), or the
     * "at" symbol (@).</p> <p>Constraints: Must contain from 8 to 100 characters.</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except forward slash (/), double quote ("), or the
     * "at" symbol (@).</p> <p>Constraints: Must contain from 8 to 100 characters.</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the master database user. This password can contain any
     * printable ASCII character except forward slash (/), double quote ("), or the
     * "at" symbol (@).</p> <p>Constraints: Must contain from 8 to 100 characters.</p>
     */
    inline CreateDBClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred maintenance window. </p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred maintenance window. </p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred maintenance window. </p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred maintenance window. </p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred maintenance window. </p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred maintenance window. </p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred maintenance window. </p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled using the <code>BackupRetentionPeriod</code> parameter. </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. </p> <p>Constraints:</p> <ul> <li>
     * <p>Must be in the format <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be
     * in Universal Coordinated Time (UTC).</p> </li> <li> <p>Must not conflict with
     * the preferred maintenance window. </p> </li> <li> <p>Must be at least 30
     * minutes.</p> </li> </ul>
     */
    inline CreateDBClusterRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the
     * week.</p> <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints:
     * Minimum 30-minute window.</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the
     * week.</p> <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints:
     * Minimum 30-minute window.</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the
     * week.</p> <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints:
     * Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the
     * week.</p> <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints:
     * Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the
     * week.</p> <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints:
     * Minimum 30-minute window.</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the
     * week.</p> <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints:
     * Minimum 30-minute window.</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the
     * week.</p> <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints:
     * Minimum 30-minute window.</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the
     * week.</p> <p>Valid days: Mon, Tue, Wed, Thu, Fri, Sat, Sun</p> <p>Constraints:
     * Minimum 30-minute window.</p>
     */
    inline CreateDBClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>The tags to be assigned to the cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be assigned to the cluster.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be assigned to the cluster.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be assigned to the cluster.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be assigned to the cluster.</p>
     */
    inline CreateDBClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be assigned to the cluster.</p>
     */
    inline CreateDBClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be assigned to the cluster.</p>
     */
    inline CreateDBClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to be assigned to the cluster.</p>
     */
    inline CreateDBClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies whether the cluster is encrypted.</p>
     */
    inline bool GetStorageEncrypted() const{ return m_storageEncrypted; }

    /**
     * <p>Specifies whether the cluster is encrypted.</p>
     */
    inline bool StorageEncryptedHasBeenSet() const { return m_storageEncryptedHasBeenSet; }

    /**
     * <p>Specifies whether the cluster is encrypted.</p>
     */
    inline void SetStorageEncrypted(bool value) { m_storageEncryptedHasBeenSet = true; m_storageEncrypted = value; }

    /**
     * <p>Specifies whether the cluster is encrypted.</p>
     */
    inline CreateDBClusterRequest& WithStorageEncrypted(bool value) { SetStorageEncrypted(value); return *this;}


    /**
     * <p>The KMS key identifier for an encrypted cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a cluster using the same Amazon Web Services account that owns the
     * KMS encryption key that is used to encrypt the new cluster, you can use the KMS
     * key alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption
     * key is not specified in <code>KmsKeyId</code>: </p> <ul> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is <code>true</code>, Amazon DocumentDB
     * uses your default encryption key. </p> </li> </ul> <p>KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Regions.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The KMS key identifier for an encrypted cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a cluster using the same Amazon Web Services account that owns the
     * KMS encryption key that is used to encrypt the new cluster, you can use the KMS
     * key alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption
     * key is not specified in <code>KmsKeyId</code>: </p> <ul> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is <code>true</code>, Amazon DocumentDB
     * uses your default encryption key. </p> </li> </ul> <p>KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Regions.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The KMS key identifier for an encrypted cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a cluster using the same Amazon Web Services account that owns the
     * KMS encryption key that is used to encrypt the new cluster, you can use the KMS
     * key alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption
     * key is not specified in <code>KmsKeyId</code>: </p> <ul> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is <code>true</code>, Amazon DocumentDB
     * uses your default encryption key. </p> </li> </ul> <p>KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Regions.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The KMS key identifier for an encrypted cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a cluster using the same Amazon Web Services account that owns the
     * KMS encryption key that is used to encrypt the new cluster, you can use the KMS
     * key alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption
     * key is not specified in <code>KmsKeyId</code>: </p> <ul> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is <code>true</code>, Amazon DocumentDB
     * uses your default encryption key. </p> </li> </ul> <p>KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Regions.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The KMS key identifier for an encrypted cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a cluster using the same Amazon Web Services account that owns the
     * KMS encryption key that is used to encrypt the new cluster, you can use the KMS
     * key alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption
     * key is not specified in <code>KmsKeyId</code>: </p> <ul> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is <code>true</code>, Amazon DocumentDB
     * uses your default encryption key. </p> </li> </ul> <p>KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Regions.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The KMS key identifier for an encrypted cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a cluster using the same Amazon Web Services account that owns the
     * KMS encryption key that is used to encrypt the new cluster, you can use the KMS
     * key alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption
     * key is not specified in <code>KmsKeyId</code>: </p> <ul> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is <code>true</code>, Amazon DocumentDB
     * uses your default encryption key. </p> </li> </ul> <p>KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Regions.</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a cluster using the same Amazon Web Services account that owns the
     * KMS encryption key that is used to encrypt the new cluster, you can use the KMS
     * key alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption
     * key is not specified in <code>KmsKeyId</code>: </p> <ul> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is <code>true</code>, Amazon DocumentDB
     * uses your default encryption key. </p> </li> </ul> <p>KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Regions.</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The KMS key identifier for an encrypted cluster.</p> <p>The KMS key
     * identifier is the Amazon Resource Name (ARN) for the KMS encryption key. If you
     * are creating a cluster using the same Amazon Web Services account that owns the
     * KMS encryption key that is used to encrypt the new cluster, you can use the KMS
     * key alias instead of the ARN for the KMS encryption key.</p> <p>If an encryption
     * key is not specified in <code>KmsKeyId</code>: </p> <ul> <li> <p>If the
     * <code>StorageEncrypted</code> parameter is <code>true</code>, Amazon DocumentDB
     * uses your default encryption key. </p> </li> </ul> <p>KMS creates the default
     * encryption key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default encryption key for each Amazon Web Services
     * Regions.</p>
     */
    inline CreateDBClusterRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Not currently supported. </p>
     */
    inline const Aws::String& GetPreSignedUrl() const{ return m_preSignedUrl; }

    /**
     * <p>Not currently supported. </p>
     */
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }

    /**
     * <p>Not currently supported. </p>
     */
    inline void SetPreSignedUrl(const Aws::String& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = value; }

    /**
     * <p>Not currently supported. </p>
     */
    inline void SetPreSignedUrl(Aws::String&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::move(value); }

    /**
     * <p>Not currently supported. </p>
     */
    inline void SetPreSignedUrl(const char* value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl.assign(value); }

    /**
     * <p>Not currently supported. </p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(const Aws::String& value) { SetPreSignedUrl(value); return *this;}

    /**
     * <p>Not currently supported. </p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(Aws::String&& value) { SetPreSignedUrl(std::move(value)); return *this;}

    /**
     * <p>Not currently supported. </p>
     */
    inline CreateDBClusterRequest& WithPreSignedUrl(const char* value) { SetPreSignedUrl(value); return *this;}


    /**
     * <p>A list of log types that need to be enabled for exporting to Amazon
     * CloudWatch Logs. You can enable audit logs or profiler logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/event-auditing.html">
     * Auditing Amazon DocumentDB Events</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/profiling.html">
     * Profiling Amazon DocumentDB Operations</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEnableCloudwatchLogsExports() const{ return m_enableCloudwatchLogsExports; }

    /**
     * <p>A list of log types that need to be enabled for exporting to Amazon
     * CloudWatch Logs. You can enable audit logs or profiler logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/event-auditing.html">
     * Auditing Amazon DocumentDB Events</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/profiling.html">
     * Profiling Amazon DocumentDB Operations</a>. </p>
     */
    inline bool EnableCloudwatchLogsExportsHasBeenSet() const { return m_enableCloudwatchLogsExportsHasBeenSet; }

    /**
     * <p>A list of log types that need to be enabled for exporting to Amazon
     * CloudWatch Logs. You can enable audit logs or profiler logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/event-auditing.html">
     * Auditing Amazon DocumentDB Events</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/profiling.html">
     * Profiling Amazon DocumentDB Operations</a>. </p>
     */
    inline void SetEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = value; }

    /**
     * <p>A list of log types that need to be enabled for exporting to Amazon
     * CloudWatch Logs. You can enable audit logs or profiler logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/event-auditing.html">
     * Auditing Amazon DocumentDB Events</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/profiling.html">
     * Profiling Amazon DocumentDB Operations</a>. </p>
     */
    inline void SetEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports = std::move(value); }

    /**
     * <p>A list of log types that need to be enabled for exporting to Amazon
     * CloudWatch Logs. You can enable audit logs or profiler logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/event-auditing.html">
     * Auditing Amazon DocumentDB Events</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/profiling.html">
     * Profiling Amazon DocumentDB Operations</a>. </p>
     */
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(const Aws::Vector<Aws::String>& value) { SetEnableCloudwatchLogsExports(value); return *this;}

    /**
     * <p>A list of log types that need to be enabled for exporting to Amazon
     * CloudWatch Logs. You can enable audit logs or profiler logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/event-auditing.html">
     * Auditing Amazon DocumentDB Events</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/profiling.html">
     * Profiling Amazon DocumentDB Operations</a>. </p>
     */
    inline CreateDBClusterRequest& WithEnableCloudwatchLogsExports(Aws::Vector<Aws::String>&& value) { SetEnableCloudwatchLogsExports(std::move(value)); return *this;}

    /**
     * <p>A list of log types that need to be enabled for exporting to Amazon
     * CloudWatch Logs. You can enable audit logs or profiler logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/event-auditing.html">
     * Auditing Amazon DocumentDB Events</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/profiling.html">
     * Profiling Amazon DocumentDB Operations</a>. </p>
     */
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const Aws::String& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }

    /**
     * <p>A list of log types that need to be enabled for exporting to Amazon
     * CloudWatch Logs. You can enable audit logs or profiler logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/event-auditing.html">
     * Auditing Amazon DocumentDB Events</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/profiling.html">
     * Profiling Amazon DocumentDB Operations</a>. </p>
     */
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(Aws::String&& value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of log types that need to be enabled for exporting to Amazon
     * CloudWatch Logs. You can enable audit logs or profiler logs. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/event-auditing.html">
     * Auditing Amazon DocumentDB Events</a> and <a
     * href="https://docs.aws.amazon.com/documentdb/latest/developerguide/profiling.html">
     * Profiling Amazon DocumentDB Operations</a>. </p>
     */
    inline CreateDBClusterRequest& AddEnableCloudwatchLogsExports(const char* value) { m_enableCloudwatchLogsExportsHasBeenSet = true; m_enableCloudwatchLogsExports.push_back(value); return *this; }


    /**
     * <p>Specifies whether this cluster can be deleted. If
     * <code>DeletionProtection</code> is enabled, the cluster cannot be deleted unless
     * it is modified and <code>DeletionProtection</code> is disabled.
     * <code>DeletionProtection</code> protects clusters from being accidentally
     * deleted.</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>Specifies whether this cluster can be deleted. If
     * <code>DeletionProtection</code> is enabled, the cluster cannot be deleted unless
     * it is modified and <code>DeletionProtection</code> is disabled.
     * <code>DeletionProtection</code> protects clusters from being accidentally
     * deleted.</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>Specifies whether this cluster can be deleted. If
     * <code>DeletionProtection</code> is enabled, the cluster cannot be deleted unless
     * it is modified and <code>DeletionProtection</code> is disabled.
     * <code>DeletionProtection</code> protects clusters from being accidentally
     * deleted.</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>Specifies whether this cluster can be deleted. If
     * <code>DeletionProtection</code> is enabled, the cluster cannot be deleted unless
     * it is modified and <code>DeletionProtection</code> is disabled.
     * <code>DeletionProtection</code> protects clusters from being accidentally
     * deleted.</p>
     */
    inline CreateDBClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>The cluster identifier of the new global cluster.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The cluster identifier of the new global cluster.</p>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier of the new global cluster.</p>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The cluster identifier of the new global cluster.</p>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier of the new global cluster.</p>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier of the new global cluster.</p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier of the new global cluster.</p>
     */
    inline CreateDBClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier of the new global cluster.</p>
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

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    Aws::Vector<Aws::String> m_enableCloudwatchLogsExports;
    bool m_enableCloudwatchLogsExportsHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace DocDB
} // namespace Aws
