/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/CloudwatchLogsExportConfiguration.h>
#include <aws/rds/model/ScalingConfiguration.h>
#include <aws/rds/model/ServerlessV2ScalingConfiguration.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class ModifyDBClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints: This identifier must match the
     * identifier of an existing DB cluster.</p> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}


    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetNewDBClusterIdentifier() const{ return m_newDBClusterIdentifier; }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool NewDBClusterIdentifierHasBeenSet() const { return m_newDBClusterIdentifierHasBeenSet; }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetNewDBClusterIdentifier(const Aws::String& value) { m_newDBClusterIdentifierHasBeenSet = true; m_newDBClusterIdentifier = value; }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetNewDBClusterIdentifier(Aws::String&& value) { m_newDBClusterIdentifierHasBeenSet = true; m_newDBClusterIdentifier = std::move(value); }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetNewDBClusterIdentifier(const char* value) { m_newDBClusterIdentifierHasBeenSet = true; m_newDBClusterIdentifier.assign(value); }

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithNewDBClusterIdentifier(const Aws::String& value) { SetNewDBClusterIdentifier(value); return *this;}

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithNewDBClusterIdentifier(Aws::String&& value) { SetNewDBClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The new DB cluster identifier for the DB cluster when renaming a DB cluster.
     * This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must contain from 1 to 63 letters, numbers, or hyphens</p> </li> <li> <p>The
     * first character must be a letter</p> </li> <li> <p>Can't end with a hyphen or
     * contain two consecutive hyphens</p> </li> </ul> <p>Example:
     * <code>my-cluster2</code> </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithNewDBClusterIdentifier(const char* value) { SetNewDBClusterIdentifier(value); return *this;}


    /**
     * <p>A value that indicates whether the modifications in this request and any
     * pending modifications are asynchronously applied as soon as possible, regardless
     * of the <code>PreferredMaintenanceWindow</code> setting for the DB cluster. If
     * this parameter is disabled, changes to the DB cluster are applied during the
     * next maintenance window.</p> <p>The <code>ApplyImmediately</code> parameter only
     * affects the <code>EnableIAMDatabaseAuthentication</code>,
     * <code>MasterUserPassword</code>, and <code>NewDBClusterIdentifier</code> values.
     * If the <code>ApplyImmediately</code> parameter is disabled, then changes to the
     * <code>EnableIAMDatabaseAuthentication</code>, <code>MasterUserPassword</code>,
     * and <code>NewDBClusterIdentifier</code> values are applied during the next
     * maintenance window. All other changes are applied immediately, regardless of the
     * value of the <code>ApplyImmediately</code> parameter.</p> <p>By default, this
     * parameter is disabled.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>A value that indicates whether the modifications in this request and any
     * pending modifications are asynchronously applied as soon as possible, regardless
     * of the <code>PreferredMaintenanceWindow</code> setting for the DB cluster. If
     * this parameter is disabled, changes to the DB cluster are applied during the
     * next maintenance window.</p> <p>The <code>ApplyImmediately</code> parameter only
     * affects the <code>EnableIAMDatabaseAuthentication</code>,
     * <code>MasterUserPassword</code>, and <code>NewDBClusterIdentifier</code> values.
     * If the <code>ApplyImmediately</code> parameter is disabled, then changes to the
     * <code>EnableIAMDatabaseAuthentication</code>, <code>MasterUserPassword</code>,
     * and <code>NewDBClusterIdentifier</code> values are applied during the next
     * maintenance window. All other changes are applied immediately, regardless of the
     * value of the <code>ApplyImmediately</code> parameter.</p> <p>By default, this
     * parameter is disabled.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>A value that indicates whether the modifications in this request and any
     * pending modifications are asynchronously applied as soon as possible, regardless
     * of the <code>PreferredMaintenanceWindow</code> setting for the DB cluster. If
     * this parameter is disabled, changes to the DB cluster are applied during the
     * next maintenance window.</p> <p>The <code>ApplyImmediately</code> parameter only
     * affects the <code>EnableIAMDatabaseAuthentication</code>,
     * <code>MasterUserPassword</code>, and <code>NewDBClusterIdentifier</code> values.
     * If the <code>ApplyImmediately</code> parameter is disabled, then changes to the
     * <code>EnableIAMDatabaseAuthentication</code>, <code>MasterUserPassword</code>,
     * and <code>NewDBClusterIdentifier</code> values are applied during the next
     * maintenance window. All other changes are applied immediately, regardless of the
     * value of the <code>ApplyImmediately</code> parameter.</p> <p>By default, this
     * parameter is disabled.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>A value that indicates whether the modifications in this request and any
     * pending modifications are asynchronously applied as soon as possible, regardless
     * of the <code>PreferredMaintenanceWindow</code> setting for the DB cluster. If
     * this parameter is disabled, changes to the DB cluster are applied during the
     * next maintenance window.</p> <p>The <code>ApplyImmediately</code> parameter only
     * affects the <code>EnableIAMDatabaseAuthentication</code>,
     * <code>MasterUserPassword</code>, and <code>NewDBClusterIdentifier</code> values.
     * If the <code>ApplyImmediately</code> parameter is disabled, then changes to the
     * <code>EnableIAMDatabaseAuthentication</code>, <code>MasterUserPassword</code>,
     * and <code>NewDBClusterIdentifier</code> values are applied during the next
     * maintenance window. All other changes are applied immediately, regardless of the
     * value of the <code>ApplyImmediately</code> parameter.</p> <p>By default, this
     * parameter is disabled.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline ModifyDBClusterRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>The number of days for which automated backups are retained. Specify a
     * minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a value from 1 to 35</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days for which automated backups are retained. Specify a
     * minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a value from 1 to 35</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days for which automated backups are retained. Specify a
     * minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a value from 1 to 35</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days for which automated backups are retained. Specify a
     * minimum value of 1.</p> <p>Default: 1</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be a value from 1 to 35</p> </li> </ul> <p>Valid for: Aurora DB clusters and
     * Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group to use for the DB cluster.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}


    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC security groups that the DB cluster will belong to.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>The port number on which the DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline int GetPort() const{ return m_port; }

    /**
     * <p>The port number on which the DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port number on which the DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port number on which the DB cluster accepts connections.</p>
     * <p>Constraints: Value must be <code>1150-65535</code> </p> <p>Default: The same
     * port as the original DB cluster.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithPort(int value) { SetPort(value); return *this;}


    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The new password for the master database user. This password can contain any
     * printable ASCII character except "/", """, or "@".</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 8 to 41 characters.</p> </li> <li> <p>Can't be
     * specified if <code>ManageMasterUserPassword</code> is turned on.</p> </li> </ul>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline ModifyDBClusterRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline ModifyDBClusterRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p>A value that indicates that the DB cluster should be associated with the
     * specified option group.</p> <p>DB clusters are associated with a default option
     * group that can't be modified.</p>
     */
    inline ModifyDBClusterRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p>The daily time range during which automated backups are created if automated
     * backups are enabled, using the <code>BackupRetentionPeriod</code> parameter.</p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region. To view the time blocks available, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/Aurora.Managing.Backups.html#Aurora.Managing.Backups.BackupWindow">
     * Backup window</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format
     * <code>hh24:mi-hh24:mi</code>.</p> </li> <li> <p>Must be in Universal Coordinated
     * Time (UTC).</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window.</p> </li> <li> <p>Must be at least 30 minutes.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range during which system maintenance can occur, in Universal
     * Coordinated Time (UTC).</p> <p>Format: <code>ddd:hh24:mi-ddd:hh24:mi</code> </p>
     * <p>The default is a 30-minute window selected at random from an 8-hour block of
     * time for each Amazon Web Services Region, occurring on a random day of the week.
     * To see the time blocks available, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_UpgradeDBInstance.Maintenance.html#AdjustingTheMaintenanceWindow.Aurora">
     * Adjusting the Preferred DB Cluster Maintenance Window</a> in the <i>Amazon
     * Aurora User Guide</i>.</p> <p>Valid Days: Mon, Tue, Wed, Thu, Fri, Sat, Sun.</p>
     * <p>Constraints: Minimum 30-minute window.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>A value that indicates whether to enable mapping of Amazon Web Services
     * Identity and Access Management (IAM) accounts to database accounts. By default,
     * mapping isn't enabled.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/UsingWithRDS.IAMDBAuth.html">
     * IAM Database Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     * <p>Valid for: Aurora MySQL DB clusters only</p>
     */
    inline long long GetBacktrackWindow() const{ return m_backtrackWindow; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     * <p>Valid for: Aurora MySQL DB clusters only</p>
     */
    inline bool BacktrackWindowHasBeenSet() const { return m_backtrackWindowHasBeenSet; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     * <p>Valid for: Aurora MySQL DB clusters only</p>
     */
    inline void SetBacktrackWindow(long long value) { m_backtrackWindowHasBeenSet = true; m_backtrackWindow = value; }

    /**
     * <p>The target backtrack window, in seconds. To disable backtracking, set this
     * value to 0.</p> <p>Default: 0</p> <p>Constraints:</p> <ul> <li> <p>If specified,
     * this value must be set to a number from 0 to 259,200 (72 hours).</p> </li> </ul>
     * <p>Valid for: Aurora MySQL DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithBacktrackWindow(long long value) { SetBacktrackWindow(value); return *this;}


    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster. The values in the list depend on the
     * DB engine being used.</p> <p> <b>RDS for MySQL</b> </p> <p>Possible values are
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>RDS for PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code>
     * and <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values
     * are <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">
     * Publishing Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const CloudwatchLogsExportConfiguration& GetCloudwatchLogsExportConfiguration() const{ return m_cloudwatchLogsExportConfiguration; }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster. The values in the list depend on the
     * DB engine being used.</p> <p> <b>RDS for MySQL</b> </p> <p>Possible values are
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>RDS for PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code>
     * and <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values
     * are <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">
     * Publishing Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool CloudwatchLogsExportConfigurationHasBeenSet() const { return m_cloudwatchLogsExportConfigurationHasBeenSet; }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster. The values in the list depend on the
     * DB engine being used.</p> <p> <b>RDS for MySQL</b> </p> <p>Possible values are
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>RDS for PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code>
     * and <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values
     * are <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">
     * Publishing Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = value; }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster. The values in the list depend on the
     * DB engine being used.</p> <p> <b>RDS for MySQL</b> </p> <p>Possible values are
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>RDS for PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code>
     * and <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values
     * are <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">
     * Publishing Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = std::move(value); }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster. The values in the list depend on the
     * DB engine being used.</p> <p> <b>RDS for MySQL</b> </p> <p>Possible values are
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>RDS for PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code>
     * and <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values
     * are <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">
     * Publishing Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { SetCloudwatchLogsExportConfiguration(value); return *this;}

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB cluster. The values in the list depend on the
     * DB engine being used.</p> <p> <b>RDS for MySQL</b> </p> <p>Possible values are
     * <code>error</code>, <code>general</code>, and <code>slowquery</code>.</p> <p>
     * <b>RDS for PostgreSQL</b> </p> <p>Possible values are <code>postgresql</code>
     * and <code>upgrade</code>.</p> <p> <b>Aurora MySQL</b> </p> <p>Possible values
     * are <code>audit</code>, <code>error</code>, <code>general</code>, and
     * <code>slowquery</code>.</p> <p> <b>Aurora PostgreSQL</b> </p> <p>Possible value
     * is <code>postgresql</code>.</p> <p>For more information about exporting
     * CloudWatch Logs for Amazon RDS, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">
     * Publishing Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon RDS User
     * Guide</i>.</p> <p>For more information about exporting CloudWatch Logs for
     * Amazon Aurora, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_LogAccess.html#USER_LogAccess.Procedural.UploadtoCloudWatch">Publishing
     * Database Logs to Amazon CloudWatch Logs</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { SetCloudwatchLogsExportConfiguration(std::move(value)); return *this;}


    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for MySQL 5.6-compatible Aurora,
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for MySQL 5.6-compatible Aurora,
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for MySQL 5.6-compatible Aurora,
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for MySQL 5.6-compatible Aurora,
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for MySQL 5.6-compatible Aurora,
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for MySQL 5.6-compatible Aurora,
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for MySQL 5.6-compatible Aurora,
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The version number of the database engine to which you want to upgrade.
     * Changing this parameter results in an outage. The change is applied during the
     * next maintenance window unless <code>ApplyImmediately</code> is enabled.</p>
     * <p>To list all of the available engine versions for MySQL 5.6-compatible Aurora,
     * use the following command:</p> <p> <code>aws rds describe-db-engine-versions
     * --engine aurora --query "DBEngineVersions[].EngineVersion"</code> </p> <p>To
     * list all of the available engine versions for MySQL 5.7-compatible and MySQL
     * 8.0-compatible Aurora, use the following command:</p> <p> <code>aws rds
     * describe-db-engine-versions --engine aurora-mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for Aurora PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine aurora-postgresql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for MySQL, use the following command:</p> <p> <code>aws
     * rds describe-db-engine-versions --engine mysql --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>To list all of the available
     * engine versions for RDS for PostgreSQL, use the following command:</p> <p>
     * <code>aws rds describe-db-engine-versions --engine postgres --query
     * "DBEngineVersions[].EngineVersion"</code> </p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades when specifying a value
     * for the <code>EngineVersion</code> parameter that is a different major version
     * than the DB cluster's current version.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline bool GetAllowMajorVersionUpgrade() const{ return m_allowMajorVersionUpgrade; }

    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades when specifying a value
     * for the <code>EngineVersion</code> parameter that is a different major version
     * than the DB cluster's current version.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline bool AllowMajorVersionUpgradeHasBeenSet() const { return m_allowMajorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades when specifying a value
     * for the <code>EngineVersion</code> parameter that is a different major version
     * than the DB cluster's current version.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether major version upgrades are allowed.</p>
     * <p>Constraints: You must allow major version upgrades when specifying a value
     * for the <code>EngineVersion</code> parameter that is a different major version
     * than the DB cluster's current version.</p> <p>Valid for: Aurora DB clusters
     * only</p>
     */
    inline ModifyDBClusterRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}


    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster.</p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes are applied immediately rather
     * than during the next maintenance window.</p>  <p>Default: The existing
     * name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter group must be
     * in the same DB parameter group family as this DB cluster.</p> </li> <li> <p>The
     * <code>DBInstanceParameterGroupName</code> parameter is valid in combination with
     * the <code>AllowMajorVersionUpgrade</code> parameter for a major version upgrade
     * only.</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDBInstanceParameterGroupName() const{ return m_dBInstanceParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster.</p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes are applied immediately rather
     * than during the next maintenance window.</p>  <p>Default: The existing
     * name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter group must be
     * in the same DB parameter group family as this DB cluster.</p> </li> <li> <p>The
     * <code>DBInstanceParameterGroupName</code> parameter is valid in combination with
     * the <code>AllowMajorVersionUpgrade</code> parameter for a major version upgrade
     * only.</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool DBInstanceParameterGroupNameHasBeenSet() const { return m_dBInstanceParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster.</p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes are applied immediately rather
     * than during the next maintenance window.</p>  <p>Default: The existing
     * name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter group must be
     * in the same DB parameter group family as this DB cluster.</p> </li> <li> <p>The
     * <code>DBInstanceParameterGroupName</code> parameter is valid in combination with
     * the <code>AllowMajorVersionUpgrade</code> parameter for a major version upgrade
     * only.</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetDBInstanceParameterGroupName(const Aws::String& value) { m_dBInstanceParameterGroupNameHasBeenSet = true; m_dBInstanceParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster.</p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes are applied immediately rather
     * than during the next maintenance window.</p>  <p>Default: The existing
     * name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter group must be
     * in the same DB parameter group family as this DB cluster.</p> </li> <li> <p>The
     * <code>DBInstanceParameterGroupName</code> parameter is valid in combination with
     * the <code>AllowMajorVersionUpgrade</code> parameter for a major version upgrade
     * only.</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetDBInstanceParameterGroupName(Aws::String&& value) { m_dBInstanceParameterGroupNameHasBeenSet = true; m_dBInstanceParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster.</p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes are applied immediately rather
     * than during the next maintenance window.</p>  <p>Default: The existing
     * name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter group must be
     * in the same DB parameter group family as this DB cluster.</p> </li> <li> <p>The
     * <code>DBInstanceParameterGroupName</code> parameter is valid in combination with
     * the <code>AllowMajorVersionUpgrade</code> parameter for a major version upgrade
     * only.</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetDBInstanceParameterGroupName(const char* value) { m_dBInstanceParameterGroupNameHasBeenSet = true; m_dBInstanceParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster.</p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes are applied immediately rather
     * than during the next maintenance window.</p>  <p>Default: The existing
     * name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter group must be
     * in the same DB parameter group family as this DB cluster.</p> </li> <li> <p>The
     * <code>DBInstanceParameterGroupName</code> parameter is valid in combination with
     * the <code>AllowMajorVersionUpgrade</code> parameter for a major version upgrade
     * only.</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDBInstanceParameterGroupName(const Aws::String& value) { SetDBInstanceParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster.</p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes are applied immediately rather
     * than during the next maintenance window.</p>  <p>Default: The existing
     * name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter group must be
     * in the same DB parameter group family as this DB cluster.</p> </li> <li> <p>The
     * <code>DBInstanceParameterGroupName</code> parameter is valid in combination with
     * the <code>AllowMajorVersionUpgrade</code> parameter for a major version upgrade
     * only.</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDBInstanceParameterGroupName(Aws::String&& value) { SetDBInstanceParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to apply to all instances of the DB
     * cluster.</p>  <p>When you apply a parameter group using the
     * <code>DBInstanceParameterGroupName</code> parameter, the DB cluster isn't
     * rebooted automatically. Also, parameter changes are applied immediately rather
     * than during the next maintenance window.</p>  <p>Default: The existing
     * name setting</p> <p>Constraints:</p> <ul> <li> <p>The DB parameter group must be
     * in the same DB parameter group family as this DB cluster.</p> </li> <li> <p>The
     * <code>DBInstanceParameterGroupName</code> parameter is valid in combination with
     * the <code>AllowMajorVersionUpgrade</code> parameter for a major version upgrade
     * only.</p> </li> </ul> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDBInstanceParameterGroupName(const char* value) { SetDBInstanceParameterGroupName(value); return *this;}


    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The Active Directory directory ID to move the DB cluster to. Specify
     * <code>none</code> to remove the cluster from its current domain. The domain must
     * be created prior to this operation.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/kerberos-authentication.html">Kerberos
     * Authentication</a> in the <i>Amazon Aurora User Guide</i>.</p> <p>Valid for:
     * Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the IAM role to be used when making API calls to the
     * Directory Service.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline const ScalingConfiguration& GetScalingConfiguration() const{ return m_scalingConfiguration; }

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool ScalingConfigurationHasBeenSet() const { return m_scalingConfigurationHasBeenSet; }

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetScalingConfiguration(const ScalingConfiguration& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = value; }

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetScalingConfiguration(ScalingConfiguration&& value) { m_scalingConfigurationHasBeenSet = true; m_scalingConfiguration = std::move(value); }

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithScalingConfiguration(const ScalingConfiguration& value) { SetScalingConfiguration(value); return *this;}

    /**
     * <p>The scaling properties of the DB cluster. You can only modify scaling
     * properties for DB clusters in <code>serverless</code> DB engine mode.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithScalingConfiguration(ScalingConfiguration&& value) { SetScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool GetDeletionProtection() const{ return m_deletionProtection; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline void SetDeletionProtection(bool value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }

    /**
     * <p>A value that indicates whether the DB cluster has deletion protection
     * enabled. The database can't be deleted when deletion protection is enabled. By
     * default, deletion protection isn't enabled.</p> <p>Valid for: Aurora DB clusters
     * and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithDeletionProtection(bool value) { SetDeletionProtection(value); return *this;}


    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless v1 DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless v1 DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless v1</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool GetEnableHttpEndpoint() const{ return m_enableHttpEndpoint; }

    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless v1 DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless v1 DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless v1</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool EnableHttpEndpointHasBeenSet() const { return m_enableHttpEndpointHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless v1 DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless v1 DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless v1</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetEnableHttpEndpoint(bool value) { m_enableHttpEndpointHasBeenSet = true; m_enableHttpEndpoint = value; }

    /**
     * <p>A value that indicates whether to enable the HTTP endpoint for an Aurora
     * Serverless v1 DB cluster. By default, the HTTP endpoint is disabled.</p> <p>When
     * enabled, the HTTP endpoint provides a connectionless web service API for running
     * SQL queries on the Aurora Serverless v1 DB cluster. You can also query your
     * database from inside the RDS console with the query editor.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/data-api.html">Using
     * the Data API for Aurora Serverless v1</a> in the <i>Amazon Aurora User
     * Guide</i>.</p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithEnableHttpEndpoint(bool value) { SetEnableHttpEndpoint(value); return *this;}


    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>A value that indicates whether to copy all tags from the DB cluster to
     * snapshots of the DB cluster. The default is not to copy them.</p> <p>Valid for:
     * Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>A value that indicates whether to enable this DB cluster to forward write
     * operations to the primary cluster of an Aurora global database
     * (<a>GlobalCluster</a>). By default, write operations are not allowed on Aurora
     * DB clusters that are secondary clusters in an Aurora global database.</p> <p>You
     * can set this value only on Aurora DB clusters that are members of an Aurora
     * global database. With this parameter enabled, a secondary cluster can forward
     * writes to the current primary cluster and the resulting changes are replicated
     * back to this cluster. For the primary DB cluster of an Aurora global database,
     * this value is used immediately if the primary is demoted by the
     * <a>FailoverGlobalCluster</a> API operation, but it does nothing until then.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool GetEnableGlobalWriteForwarding() const{ return m_enableGlobalWriteForwarding; }

    /**
     * <p>A value that indicates whether to enable this DB cluster to forward write
     * operations to the primary cluster of an Aurora global database
     * (<a>GlobalCluster</a>). By default, write operations are not allowed on Aurora
     * DB clusters that are secondary clusters in an Aurora global database.</p> <p>You
     * can set this value only on Aurora DB clusters that are members of an Aurora
     * global database. With this parameter enabled, a secondary cluster can forward
     * writes to the current primary cluster and the resulting changes are replicated
     * back to this cluster. For the primary DB cluster of an Aurora global database,
     * this value is used immediately if the primary is demoted by the
     * <a>FailoverGlobalCluster</a> API operation, but it does nothing until then.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline bool EnableGlobalWriteForwardingHasBeenSet() const { return m_enableGlobalWriteForwardingHasBeenSet; }

    /**
     * <p>A value that indicates whether to enable this DB cluster to forward write
     * operations to the primary cluster of an Aurora global database
     * (<a>GlobalCluster</a>). By default, write operations are not allowed on Aurora
     * DB clusters that are secondary clusters in an Aurora global database.</p> <p>You
     * can set this value only on Aurora DB clusters that are members of an Aurora
     * global database. With this parameter enabled, a secondary cluster can forward
     * writes to the current primary cluster and the resulting changes are replicated
     * back to this cluster. For the primary DB cluster of an Aurora global database,
     * this value is used immediately if the primary is demoted by the
     * <a>FailoverGlobalCluster</a> API operation, but it does nothing until then.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline void SetEnableGlobalWriteForwarding(bool value) { m_enableGlobalWriteForwardingHasBeenSet = true; m_enableGlobalWriteForwarding = value; }

    /**
     * <p>A value that indicates whether to enable this DB cluster to forward write
     * operations to the primary cluster of an Aurora global database
     * (<a>GlobalCluster</a>). By default, write operations are not allowed on Aurora
     * DB clusters that are secondary clusters in an Aurora global database.</p> <p>You
     * can set this value only on Aurora DB clusters that are members of an Aurora
     * global database. With this parameter enabled, a secondary cluster can forward
     * writes to the current primary cluster and the resulting changes are replicated
     * back to this cluster. For the primary DB cluster of an Aurora global database,
     * this value is used immediately if the primary is demoted by the
     * <a>FailoverGlobalCluster</a> API operation, but it does nothing until then.</p>
     * <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithEnableGlobalWriteForwarding(bool value) { SetEnableGlobalWriteForwarding(value); return *this;}


    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">
     * DB Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetDBClusterInstanceClass() const{ return m_dBClusterInstanceClass; }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">
     * DB Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline bool DBClusterInstanceClassHasBeenSet() const { return m_dBClusterInstanceClassHasBeenSet; }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">
     * DB Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetDBClusterInstanceClass(const Aws::String& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = value; }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">
     * DB Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetDBClusterInstanceClass(Aws::String&& value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass = std::move(value); }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">
     * DB Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetDBClusterInstanceClass(const char* value) { m_dBClusterInstanceClassHasBeenSet = true; m_dBClusterInstanceClass.assign(value); }

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">
     * DB Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterInstanceClass(const Aws::String& value) { SetDBClusterInstanceClass(value); return *this;}

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">
     * DB Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterInstanceClass(Aws::String&& value) { SetDBClusterInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The compute and memory capacity of each DB instance in the Multi-AZ DB
     * cluster, for example db.m6gd.xlarge. Not all DB instance classes are available
     * in all Amazon Web Services Regions, or for all database engines.</p> <p>For the
     * full list of DB instance classes and availability for your engine, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">
     * DB Instance Class</a> in the <i>Amazon RDS User Guide</i>.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithDBClusterInstanceClass(const char* value) { SetDBClusterInstanceClass(value); return *this;}


    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>Type: Integer</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>Type: Integer</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>Type: Integer</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The amount of storage in gibibytes (GiB) to allocate to each DB instance in
     * the Multi-AZ DB cluster.</p> <p>Type: Integer</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline ModifyDBClusterRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>Valid
     * values: <code>io1</code> </p> <p>When specified, a value for the
     * <code>Iops</code> parameter is required.</p> <p>Default: <code>io1</code> </p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>Valid
     * values: <code>io1</code> </p> <p>When specified, a value for the
     * <code>Iops</code> parameter is required.</p> <p>Default: <code>io1</code> </p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>Valid
     * values: <code>io1</code> </p> <p>When specified, a value for the
     * <code>Iops</code> parameter is required.</p> <p>Default: <code>io1</code> </p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>Valid
     * values: <code>io1</code> </p> <p>When specified, a value for the
     * <code>Iops</code> parameter is required.</p> <p>Default: <code>io1</code> </p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>Valid
     * values: <code>io1</code> </p> <p>When specified, a value for the
     * <code>Iops</code> parameter is required.</p> <p>Default: <code>io1</code> </p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>Valid
     * values: <code>io1</code> </p> <p>When specified, a value for the
     * <code>Iops</code> parameter is required.</p> <p>Default: <code>io1</code> </p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>Valid
     * values: <code>io1</code> </p> <p>When specified, a value for the
     * <code>Iops</code> parameter is required.</p> <p>Default: <code>io1</code> </p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB cluster.</p> <p>Valid
     * values: <code>io1</code> </p> <p>When specified, a value for the
     * <code>Iops</code> parameter is required.</p> <p>Default: <code>io1</code> </p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints: Must be a multiple between .5 and 50 of the storage amount for
     * the DB cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints: Must be a multiple between .5 and 50 of the storage amount for
     * the DB cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints: Must be a multiple between .5 and 50 of the storage amount for
     * the DB cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The amount of Provisioned IOPS (input/output operations per second) to be
     * initially allocated for each DB instance in the Multi-AZ DB cluster.</p> <p>For
     * information about valid IOPS values, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/CHAP_Storage.html#USER_PIOPS">Amazon
     * RDS Provisioned IOPS storage</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Constraints: Must be a multiple between .5 and 50 of the storage amount for
     * the DB cluster.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB cluster during the maintenance window. By default, minor
     * engine upgrades are applied automatically.</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB cluster during the maintenance window. By default, minor
     * engine upgrades are applied automatically.</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB cluster during the maintenance window. By default, minor
     * engine upgrades are applied automatically.</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p>A value that indicates whether minor engine upgrades are applied
     * automatically to the DB cluster during the maintenance window. By default, minor
     * engine upgrades are applied automatically.</p> <p>Valid for: Multi-AZ DB
     * clusters only</p>
     */
    inline ModifyDBClusterRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, also set <code>MonitoringInterval</code> to a value other than
     * 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, also set <code>MonitoringInterval</code> to a value other than
     * 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, also set <code>MonitoringInterval</code> to a value other than
     * 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB cluster. To turn off collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, also set <code>MonitoringInterval</code> to a value other than
     * 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, supply a <code>MonitoringRoleArn</code> value.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, supply a <code>MonitoringRoleArn</code> value.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, supply a <code>MonitoringRoleArn</code> value.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, supply a <code>MonitoringRoleArn</code> value.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, supply a <code>MonitoringRoleArn</code> value.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, supply a <code>MonitoringRoleArn</code> value.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, supply a <code>MonitoringRoleArn</code> value.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the IAM role that permits RDS to send
     * Enhanced Monitoring metrics to Amazon CloudWatch Logs. An example is
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a> in the <i>Amazon RDS
     * User Guide.</i> </p> <p>If <code>MonitoringInterval</code> is set to a value
     * other than 0, supply a <code>MonitoringRoleArn</code> value.</p> <p>Valid for:
     * Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>A value that indicates whether to turn on Performance Insights for the DB
     * cluster.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    /**
     * <p>A value that indicates whether to turn on Performance Insights for the DB
     * cluster.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }

    /**
     * <p>A value that indicates whether to turn on Performance Insights for the DB
     * cluster.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    /**
     * <p>A value that indicates whether to turn on Performance Insights for the DB
     * cluster.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">
     * Using Amazon Performance Insights</a> in the <i>Amazon RDS User Guide</i>.</p>
     * <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier for encryption of Performance
     * Insights data.</p> <p>The Amazon Web Services KMS key identifier is the key ARN,
     * key ID, alias ARN, or alias name for the KMS key.</p> <p>If you don't specify a
     * value for <code>PerformanceInsightsKMSKeyId</code>, then Amazon RDS uses your
     * default KMS key. There is a default KMS key for your Amazon Web Services
     * account. Your Amazon Web Services account has a different default KMS key for
     * each Amazon Web Services Region.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}


    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline int GetPerformanceInsightsRetentionPeriod() const{ return m_performanceInsightsRetentionPeriod; }

    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline bool PerformanceInsightsRetentionPeriodHasBeenSet() const { return m_performanceInsightsRetentionPeriodHasBeenSet; }

    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline void SetPerformanceInsightsRetentionPeriod(int value) { m_performanceInsightsRetentionPeriodHasBeenSet = true; m_performanceInsightsRetentionPeriod = value; }

    /**
     * <p>The number of days to retain Performance Insights data. The default is 7
     * days. The following values are valid:</p> <ul> <li> <p>7</p> </li> <li> <p>
     * <i>month</i> * 31, where <i>month</i> is a number of months from 1-23</p> </li>
     * <li> <p>731</p> </li> </ul> <p>For example, the following values are valid:</p>
     * <ul> <li> <p>93 (3 months * 31)</p> </li> <li> <p>341 (11 months * 31)</p> </li>
     * <li> <p>589 (19 months * 31)</p> </li> <li> <p>731</p> </li> </ul> <p>If you
     * specify a retention period such as 94, which isn't a valid value, RDS issues an
     * error.</p> <p>Valid for: Multi-AZ DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithPerformanceInsightsRetentionPeriod(int value) { SetPerformanceInsightsRetentionPeriod(value); return *this;}


    
    inline const ServerlessV2ScalingConfiguration& GetServerlessV2ScalingConfiguration() const{ return m_serverlessV2ScalingConfiguration; }

    
    inline bool ServerlessV2ScalingConfigurationHasBeenSet() const { return m_serverlessV2ScalingConfigurationHasBeenSet; }

    
    inline void SetServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = value; }

    
    inline void SetServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { m_serverlessV2ScalingConfigurationHasBeenSet = true; m_serverlessV2ScalingConfiguration = std::move(value); }

    
    inline ModifyDBClusterRequest& WithServerlessV2ScalingConfiguration(const ServerlessV2ScalingConfiguration& value) { SetServerlessV2ScalingConfiguration(value); return *this;}

    
    inline ModifyDBClusterRequest& WithServerlessV2ScalingConfiguration(ServerlessV2ScalingConfiguration&& value) { SetServerlessV2ScalingConfiguration(std::move(value)); return *this;}


    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
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
     * </p> <p>Valid for: Aurora DB clusters only</p>
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
     * </p> <p>Valid for: Aurora DB clusters only</p>
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
     * </p> <p>Valid for: Aurora DB clusters only</p>
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
     * </p> <p>Valid for: Aurora DB clusters only</p>
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
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithNetworkType(const Aws::String& value) { SetNetworkType(value); return *this;}

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithNetworkType(Aws::String&& value) { SetNetworkType(std::move(value)); return *this;}

    /**
     * <p>The network type of the DB cluster.</p> <p>Valid values:</p> <ul> <li> <p>
     * <code>IPV4</code> </p> </li> <li> <p> <code>DUAL</code> </p> </li> </ul> <p>The
     * network type is determined by the <code>DBSubnetGroup</code> specified for the
     * DB cluster. A <code>DBSubnetGroup</code> can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon Aurora User Guide.</i>
     * </p> <p>Valid for: Aurora DB clusters only</p>
     */
    inline ModifyDBClusterRequest& WithNetworkType(const char* value) { SetNetworkType(value); return *this;}


    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster doesn't manage the master
     * user password with Amazon Web Services Secrets Manager, you can turn on this
     * management. In this case, you can't specify <code>MasterUserPassword</code>.</p>
     * <p>If the DB cluster already manages the master user password with Amazon Web
     * Services Secrets Manager, and you specify that the master user password is not
     * managed with Amazon Web Services Secrets Manager, then you must specify
     * <code>MasterUserPassword</code>. In this case, RDS deletes the secret and uses
     * the new password for the master user specified by
     * <code>MasterUserPassword</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool GetManageMasterUserPassword() const{ return m_manageMasterUserPassword; }

    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster doesn't manage the master
     * user password with Amazon Web Services Secrets Manager, you can turn on this
     * management. In this case, you can't specify <code>MasterUserPassword</code>.</p>
     * <p>If the DB cluster already manages the master user password with Amazon Web
     * Services Secrets Manager, and you specify that the master user password is not
     * managed with Amazon Web Services Secrets Manager, then you must specify
     * <code>MasterUserPassword</code>. In this case, RDS deletes the secret and uses
     * the new password for the master user specified by
     * <code>MasterUserPassword</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline bool ManageMasterUserPasswordHasBeenSet() const { return m_manageMasterUserPasswordHasBeenSet; }

    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster doesn't manage the master
     * user password with Amazon Web Services Secrets Manager, you can turn on this
     * management. In this case, you can't specify <code>MasterUserPassword</code>.</p>
     * <p>If the DB cluster already manages the master user password with Amazon Web
     * Services Secrets Manager, and you specify that the master user password is not
     * managed with Amazon Web Services Secrets Manager, then you must specify
     * <code>MasterUserPassword</code>. In this case, RDS deletes the secret and uses
     * the new password for the master user specified by
     * <code>MasterUserPassword</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline void SetManageMasterUserPassword(bool value) { m_manageMasterUserPasswordHasBeenSet = true; m_manageMasterUserPassword = value; }

    /**
     * <p>A value that indicates whether to manage the master user password with Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster doesn't manage the master
     * user password with Amazon Web Services Secrets Manager, you can turn on this
     * management. In this case, you can't specify <code>MasterUserPassword</code>.</p>
     * <p>If the DB cluster already manages the master user password with Amazon Web
     * Services Secrets Manager, and you specify that the master user password is not
     * managed with Amazon Web Services Secrets Manager, then you must specify
     * <code>MasterUserPassword</code>. In this case, RDS deletes the secret and uses
     * the new password for the master user specified by
     * <code>MasterUserPassword</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Valid for: Aurora DB clusters and Multi-AZ DB
     * clusters</p>
     */
    inline ModifyDBClusterRequest& WithManageMasterUserPassword(bool value) { SetManageMasterUserPassword(value); return *this;}


    /**
     * <p>A value that indicates whether to rotate the secret managed by Amazon Web
     * Services Secrets Manager for the master user password.</p> <p>This setting is
     * valid only if the master user password is managed by RDS in Amazon Web Services
     * Secrets Manager for the DB cluster. The secret value contains the updated
     * password.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>You must apply the change
     * immediately when rotating the master user password.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool GetRotateMasterUserPassword() const{ return m_rotateMasterUserPassword; }

    /**
     * <p>A value that indicates whether to rotate the secret managed by Amazon Web
     * Services Secrets Manager for the master user password.</p> <p>This setting is
     * valid only if the master user password is managed by RDS in Amazon Web Services
     * Secrets Manager for the DB cluster. The secret value contains the updated
     * password.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>You must apply the change
     * immediately when rotating the master user password.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool RotateMasterUserPasswordHasBeenSet() const { return m_rotateMasterUserPasswordHasBeenSet; }

    /**
     * <p>A value that indicates whether to rotate the secret managed by Amazon Web
     * Services Secrets Manager for the master user password.</p> <p>This setting is
     * valid only if the master user password is managed by RDS in Amazon Web Services
     * Secrets Manager for the DB cluster. The secret value contains the updated
     * password.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>You must apply the change
     * immediately when rotating the master user password.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetRotateMasterUserPassword(bool value) { m_rotateMasterUserPasswordHasBeenSet = true; m_rotateMasterUserPassword = value; }

    /**
     * <p>A value that indicates whether to rotate the secret managed by Amazon Web
     * Services Secrets Manager for the master user password.</p> <p>This setting is
     * valid only if the master user password is managed by RDS in Amazon Web Services
     * Secrets Manager for the DB cluster. The secret value contains the updated
     * password.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon RDS
     * User Guide</i> and <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/rds-secrets-manager.html">Password
     * management with Amazon Web Services Secrets Manager</a> in the <i>Amazon Aurora
     * User Guide.</i> </p> <p>Constraints:</p> <ul> <li> <p>You must apply the change
     * immediately when rotating the master user password.</p> </li> </ul> <p>Valid
     * for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithRotateMasterUserPassword(bool value) { SetRotateMasterUserPassword(value); return *this;}


    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB cluster doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key that is used to encrypt the secret.</p> </li> <li> <p>You are
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline const Aws::String& GetMasterUserSecretKmsKeyId() const{ return m_masterUserSecretKmsKeyId; }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB cluster doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key that is used to encrypt the secret.</p> </li> <li> <p>You are
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline bool MasterUserSecretKmsKeyIdHasBeenSet() const { return m_masterUserSecretKmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB cluster doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key that is used to encrypt the secret.</p> </li> <li> <p>You are
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetMasterUserSecretKmsKeyId(const Aws::String& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = value; }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB cluster doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key that is used to encrypt the secret.</p> </li> <li> <p>You are
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetMasterUserSecretKmsKeyId(Aws::String&& value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB cluster doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key that is used to encrypt the secret.</p> </li> <li> <p>You are
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline void SetMasterUserSecretKmsKeyId(const char* value) { m_masterUserSecretKmsKeyIdHasBeenSet = true; m_masterUserSecretKmsKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB cluster doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key that is used to encrypt the secret.</p> </li> <li> <p>You are
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithMasterUserSecretKmsKeyId(const Aws::String& value) { SetMasterUserSecretKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB cluster doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key that is used to encrypt the secret.</p> </li> <li> <p>You are
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithMasterUserSecretKmsKeyId(Aws::String&& value) { SetMasterUserSecretKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services KMS key identifier to encrypt a secret that is
     * automatically generated and managed in Amazon Web Services Secrets Manager.</p>
     * <p>This setting is valid only if both of the following conditions are met:</p>
     * <ul> <li> <p>The DB cluster doesn't manage the master user password in Amazon
     * Web Services Secrets Manager.</p> <p>If the DB cluster already manages the
     * master user password in Amazon Web Services Secrets Manager, you can't change
     * the KMS key that is used to encrypt the secret.</p> </li> <li> <p>You are
     * turning on <code>ManageMasterUserPassword</code> to manage the master user
     * password in Amazon Web Services Secrets Manager.</p> <p>If you are turning on
     * <code>ManageMasterUserPassword</code> and don't specify
     * <code>MasterUserSecretKmsKeyId</code>, then the <code>aws/secretsmanager</code>
     * KMS key is used to encrypt the secret. If the secret is in a different Amazon
     * Web Services account, then you can't use the <code>aws/secretsmanager</code> KMS
     * key to encrypt the secret, and you must use a customer managed KMS key.</p>
     * </li> </ul> <p>The Amazon Web Services KMS key identifier is the key ARN, key
     * ID, alias ARN, or alias name for the KMS key. To use a KMS key in a different
     * Amazon Web Services account, specify the key ARN or alias ARN.</p> <p>There is a
     * default KMS key for your Amazon Web Services account. Your Amazon Web Services
     * account has a different default KMS key for each Amazon Web Services Region.</p>
     * <p>Valid for: Aurora DB clusters and Multi-AZ DB clusters</p>
     */
    inline ModifyDBClusterRequest& WithMasterUserSecretKmsKeyId(const char* value) { SetMasterUserSecretKmsKeyId(value); return *this;}

  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::String m_newDBClusterIdentifier;
    bool m_newDBClusterIdentifierHasBeenSet = false;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet = false;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet = false;

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet = false;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet = false;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet = false;

    long long m_backtrackWindow;
    bool m_backtrackWindowHasBeenSet = false;

    CloudwatchLogsExportConfiguration m_cloudwatchLogsExportConfiguration;
    bool m_cloudwatchLogsExportConfigurationHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    bool m_allowMajorVersionUpgrade;
    bool m_allowMajorVersionUpgradeHasBeenSet = false;

    Aws::String m_dBInstanceParameterGroupName;
    bool m_dBInstanceParameterGroupNameHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet = false;

    ScalingConfiguration m_scalingConfiguration;
    bool m_scalingConfigurationHasBeenSet = false;

    bool m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;

    bool m_enableHttpEndpoint;
    bool m_enableHttpEndpointHasBeenSet = false;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet = false;

    bool m_enableGlobalWriteForwarding;
    bool m_enableGlobalWriteForwardingHasBeenSet = false;

    Aws::String m_dBClusterInstanceClass;
    bool m_dBClusterInstanceClassHasBeenSet = false;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    int m_iops;
    bool m_iopsHasBeenSet = false;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet = false;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet = false;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet = false;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet = false;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet = false;

    int m_performanceInsightsRetentionPeriod;
    bool m_performanceInsightsRetentionPeriodHasBeenSet = false;

    ServerlessV2ScalingConfiguration m_serverlessV2ScalingConfiguration;
    bool m_serverlessV2ScalingConfigurationHasBeenSet = false;

    Aws::String m_networkType;
    bool m_networkTypeHasBeenSet = false;

    bool m_manageMasterUserPassword;
    bool m_manageMasterUserPasswordHasBeenSet = false;

    bool m_rotateMasterUserPassword;
    bool m_rotateMasterUserPasswordHasBeenSet = false;

    Aws::String m_masterUserSecretKmsKeyId;
    bool m_masterUserSecretKmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
