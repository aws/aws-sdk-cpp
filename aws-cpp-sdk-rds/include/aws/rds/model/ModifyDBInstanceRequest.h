﻿/*
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
#include <aws/rds/model/CloudwatchLogsExportConfiguration.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ModifyDBInstanceMessage">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ModifyDBInstanceRequest : public RDSRequest
  {
  public:
    ModifyDBInstanceRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBInstance"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBInstance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBInstance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBInstance.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBInstance.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier. This value is stored as a lowercase string.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must match the identifier of an existing
     * DBInstance.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}


    /**
     * <p>The new amount of storage (in gibibytes) to allocate for the DB instance.
     * </p> <p>For MariaDB, MySQL, Oracle, and PostgreSQL, the value supplied must be
     * at least 10% greater than the current value. Values that are not at least 10%
     * greater than the existing value are rounded up so that they are 10% greater than
     * the current value. </p> <p>For the valid values for allocated storage for each
     * engine, see <a>CreateDBInstance</a>. </p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The new amount of storage (in gibibytes) to allocate for the DB instance.
     * </p> <p>For MariaDB, MySQL, Oracle, and PostgreSQL, the value supplied must be
     * at least 10% greater than the current value. Values that are not at least 10%
     * greater than the existing value are rounded up so that they are 10% greater than
     * the current value. </p> <p>For the valid values for allocated storage for each
     * engine, see <a>CreateDBInstance</a>. </p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The new amount of storage (in gibibytes) to allocate for the DB instance.
     * </p> <p>For MariaDB, MySQL, Oracle, and PostgreSQL, the value supplied must be
     * at least 10% greater than the current value. Values that are not at least 10%
     * greater than the existing value are rounded up so that they are 10% greater than
     * the current value. </p> <p>For the valid values for allocated storage for each
     * engine, see <a>CreateDBInstance</a>. </p>
     */
    inline ModifyDBInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>If you modify the DB
     * instance class, an outage occurs during the change. The change is applied during
     * the next maintenance window, unless <code>ApplyImmediately</code> is specified
     * as <code>true</code> for this request. </p> <p>Default: Uses existing
     * setting</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>If you modify the DB
     * instance class, an outage occurs during the change. The change is applied during
     * the next maintenance window, unless <code>ApplyImmediately</code> is specified
     * as <code>true</code> for this request. </p> <p>Default: Uses existing
     * setting</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>If you modify the DB
     * instance class, an outage occurs during the change. The change is applied during
     * the next maintenance window, unless <code>ApplyImmediately</code> is specified
     * as <code>true</code> for this request. </p> <p>Default: Uses existing
     * setting</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>If you modify the DB
     * instance class, an outage occurs during the change. The change is applied during
     * the next maintenance window, unless <code>ApplyImmediately</code> is specified
     * as <code>true</code> for this request. </p> <p>Default: Uses existing
     * setting</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>If you modify the DB
     * instance class, an outage occurs during the change. The change is applied during
     * the next maintenance window, unless <code>ApplyImmediately</code> is specified
     * as <code>true</code> for this request. </p> <p>Default: Uses existing
     * setting</p>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>If you modify the DB
     * instance class, an outage occurs during the change. The change is applied during
     * the next maintenance window, unless <code>ApplyImmediately</code> is specified
     * as <code>true</code> for this request. </p> <p>Default: Uses existing
     * setting</p>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions, or for all database engines. For the full list of DB instance classes,
     * and availability for your engine, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Concepts.DBInstanceClass.html">DB
     * Instance Class</a> in the Amazon RDS User Guide. </p> <p>If you modify the DB
     * instance class, an outage occurs during the change. The change is applied during
     * the next maintenance window, unless <code>ApplyImmediately</code> is specified
     * as <code>true</code> for this request. </p> <p>Default: Uses existing
     * setting</p>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC. If your DB instance is not in a VPC,
     * you can also use this parameter to move your DB instance into a VPC. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html#USER_VPC.Non-VPC2VPC">Updating
     * the VPC for a DB Instance</a>. </p> <p>Changing the subnet group causes an
     * outage during the change. The change is applied during the next maintenance
     * window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter. </p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC. If your DB instance is not in a VPC,
     * you can also use this parameter to move your DB instance into a VPC. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html#USER_VPC.Non-VPC2VPC">Updating
     * the VPC for a DB Instance</a>. </p> <p>Changing the subnet group causes an
     * outage during the change. The change is applied during the next maintenance
     * window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter. </p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC. If your DB instance is not in a VPC,
     * you can also use this parameter to move your DB instance into a VPC. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html#USER_VPC.Non-VPC2VPC">Updating
     * the VPC for a DB Instance</a>. </p> <p>Changing the subnet group causes an
     * outage during the change. The change is applied during the next maintenance
     * window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter. </p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC. If your DB instance is not in a VPC,
     * you can also use this parameter to move your DB instance into a VPC. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html#USER_VPC.Non-VPC2VPC">Updating
     * the VPC for a DB Instance</a>. </p> <p>Changing the subnet group causes an
     * outage during the change. The change is applied during the next maintenance
     * window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter. </p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC. If your DB instance is not in a VPC,
     * you can also use this parameter to move your DB instance into a VPC. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html#USER_VPC.Non-VPC2VPC">Updating
     * the VPC for a DB Instance</a>. </p> <p>Changing the subnet group causes an
     * outage during the change. The change is applied during the next maintenance
     * window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter. </p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC. If your DB instance is not in a VPC,
     * you can also use this parameter to move your DB instance into a VPC. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html#USER_VPC.Non-VPC2VPC">Updating
     * the VPC for a DB Instance</a>. </p> <p>Changing the subnet group causes an
     * outage during the change. The change is applied during the next maintenance
     * window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter. </p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC. If your DB instance is not in a VPC,
     * you can also use this parameter to move your DB instance into a VPC. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html#USER_VPC.Non-VPC2VPC">Updating
     * the VPC for a DB Instance</a>. </p> <p>Changing the subnet group causes an
     * outage during the change. The change is applied during the next maintenance
     * window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter. </p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting does not result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting does not result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting does not result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline void SetDBSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::move(value); }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting does not result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting does not result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting does not result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting does not result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting does not result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }


    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p> <b>Amazon
     * Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC security
     * groups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p> <b>Amazon
     * Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC security
     * groups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p> <b>Amazon
     * Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC security
     * groups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p> <b>Amazon
     * Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC security
     * groups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p> <b>Amazon
     * Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC security
     * groups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p> <b>Amazon
     * Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC security
     * groups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p> <b>Amazon
     * Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC security
     * groups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p> <b>Amazon
     * Aurora</b> </p> <p>Not applicable. The associated list of EC2 VPC security
     * groups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must
     * match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB instance. </p> <p> If
     * this parameter is set to <code>false</code>, changes to the DB instance are
     * applied during the next maintenance window. Some parameter changes can cause an
     * outage and are applied on the next call to <a>RebootDBInstance</a>, or the next
     * failure reboot. Review the table of parameters in <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.DBInstance.Modifying.html">Modifying
     * a DB Instance and Using the Apply Immediately Parameter</a> to see the impact
     * that setting <code>ApplyImmediately</code> to <code>true</code> or
     * <code>false</code> has for each modified parameter and to determine when the
     * changes are applied. </p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB instance. </p> <p> If
     * this parameter is set to <code>false</code>, changes to the DB instance are
     * applied during the next maintenance window. Some parameter changes can cause an
     * outage and are applied on the next call to <a>RebootDBInstance</a>, or the next
     * failure reboot. Review the table of parameters in <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.DBInstance.Modifying.html">Modifying
     * a DB Instance and Using the Apply Immediately Parameter</a> to see the impact
     * that setting <code>ApplyImmediately</code> to <code>true</code> or
     * <code>false</code> has for each modified parameter and to determine when the
     * changes are applied. </p> <p>Default: <code>false</code> </p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB instance. </p> <p> If
     * this parameter is set to <code>false</code>, changes to the DB instance are
     * applied during the next maintenance window. Some parameter changes can cause an
     * outage and are applied on the next call to <a>RebootDBInstance</a>, or the next
     * failure reboot. Review the table of parameters in <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Overview.DBInstance.Modifying.html">Modifying
     * a DB Instance and Using the Apply Immediately Parameter</a> to see the impact
     * that setting <code>ApplyImmediately</code> to <code>true</code> or
     * <code>false</code> has for each modified parameter and to determine when the
     * changes are applied. </p> <p>Default: <code>false</code> </p>
     */
    inline ModifyDBInstanceRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>The new password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Changing this parameter does
     * not result in an outage and the change is asynchronously applied as soon as
     * possible. Between the time of the request and the completion of the request, the
     * <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The password for the master user is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.
     * </p> <p>Default: Uses existing setting</p> <p> <b>MariaDB</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL
     * Server</b> </p> <p>Constraints: Must contain from 8 to 128 characters.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>Oracle</b> </p> <p>Constraints: Must contain from 8 to 30 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p> <note> <p>Amazon RDS API actions never return the password, so
     * this action provides a way to regain access to a primary instance user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked. </p> </note>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>The new password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Changing this parameter does
     * not result in an outage and the change is asynchronously applied as soon as
     * possible. Between the time of the request and the completion of the request, the
     * <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The password for the master user is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.
     * </p> <p>Default: Uses existing setting</p> <p> <b>MariaDB</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL
     * Server</b> </p> <p>Constraints: Must contain from 8 to 128 characters.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>Oracle</b> </p> <p>Constraints: Must contain from 8 to 30 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p> <note> <p>Amazon RDS API actions never return the password, so
     * this action provides a way to regain access to a primary instance user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked. </p> </note>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>The new password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Changing this parameter does
     * not result in an outage and the change is asynchronously applied as soon as
     * possible. Between the time of the request and the completion of the request, the
     * <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The password for the master user is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.
     * </p> <p>Default: Uses existing setting</p> <p> <b>MariaDB</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL
     * Server</b> </p> <p>Constraints: Must contain from 8 to 128 characters.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>Oracle</b> </p> <p>Constraints: Must contain from 8 to 30 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p> <note> <p>Amazon RDS API actions never return the password, so
     * this action provides a way to regain access to a primary instance user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked. </p> </note>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>The new password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Changing this parameter does
     * not result in an outage and the change is asynchronously applied as soon as
     * possible. Between the time of the request and the completion of the request, the
     * <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The password for the master user is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.
     * </p> <p>Default: Uses existing setting</p> <p> <b>MariaDB</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL
     * Server</b> </p> <p>Constraints: Must contain from 8 to 128 characters.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>Oracle</b> </p> <p>Constraints: Must contain from 8 to 30 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p> <note> <p>Amazon RDS API actions never return the password, so
     * this action provides a way to regain access to a primary instance user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked. </p> </note>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>The new password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Changing this parameter does
     * not result in an outage and the change is asynchronously applied as soon as
     * possible. Between the time of the request and the completion of the request, the
     * <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The password for the master user is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.
     * </p> <p>Default: Uses existing setting</p> <p> <b>MariaDB</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL
     * Server</b> </p> <p>Constraints: Must contain from 8 to 128 characters.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>Oracle</b> </p> <p>Constraints: Must contain from 8 to 30 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p> <note> <p>Amazon RDS API actions never return the password, so
     * this action provides a way to regain access to a primary instance user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked. </p> </note>
     */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>The new password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Changing this parameter does
     * not result in an outage and the change is asynchronously applied as soon as
     * possible. Between the time of the request and the completion of the request, the
     * <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The password for the master user is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.
     * </p> <p>Default: Uses existing setting</p> <p> <b>MariaDB</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL
     * Server</b> </p> <p>Constraints: Must contain from 8 to 128 characters.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>Oracle</b> </p> <p>Constraints: Must contain from 8 to 30 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p> <note> <p>Amazon RDS API actions never return the password, so
     * this action provides a way to regain access to a primary instance user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked. </p> </note>
     */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>The new password for the master user. The password can include any printable
     * ASCII character except "/", """, or "@".</p> <p> Changing this parameter does
     * not result in an outage and the change is asynchronously applied as soon as
     * possible. Between the time of the request and the completion of the request, the
     * <code>MasterUserPassword</code> element exists in the
     * <code>PendingModifiedValues</code> element of the operation response. </p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The password for the master user is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.
     * </p> <p>Default: Uses existing setting</p> <p> <b>MariaDB</b> </p>
     * <p>Constraints: Must contain from 8 to 41 characters.</p> <p> <b>Microsoft SQL
     * Server</b> </p> <p>Constraints: Must contain from 8 to 128 characters.</p> <p>
     * <b>MySQL</b> </p> <p>Constraints: Must contain from 8 to 41 characters.</p> <p>
     * <b>Oracle</b> </p> <p>Constraints: Must contain from 8 to 30 characters.</p> <p>
     * <b>PostgreSQL</b> </p> <p>Constraints: Must contain from 8 to 128
     * characters.</p> <note> <p>Amazon RDS API actions never return the password, so
     * this action provides a way to regain access to a primary instance user if the
     * password is lost. This includes restoring privileges that might have been
     * accidentally revoked. </p> </note>
     */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting does not result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting does not result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting does not result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting does not result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting does not result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting does not result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting does not result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>The number of days to retain automated backups. Setting this parameter to a
     * positive number enables backups. Setting this parameter to 0 disables automated
     * backups.</p> <p>Changing this parameter can result in an outage if you change
     * from 0 to a non-zero value or from a non-zero value to 0. These changes are
     * applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request. If you change the parameter from one non-zero value to another non-zero
     * value, the change is asynchronously applied as soon as possible.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The retention period for automated
     * backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Default: Uses existing setting</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Can be specified for a MySQL Read Replica only if the source is running MySQL
     * 5.6</p> </li> <li> <p>Can be specified for a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5</p> </li> <li> <p>Cannot be set to 0 if the
     * DB instance is a source to Read Replicas</p> </li> </ul>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>The number of days to retain automated backups. Setting this parameter to a
     * positive number enables backups. Setting this parameter to 0 disables automated
     * backups.</p> <p>Changing this parameter can result in an outage if you change
     * from 0 to a non-zero value or from a non-zero value to 0. These changes are
     * applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request. If you change the parameter from one non-zero value to another non-zero
     * value, the change is asynchronously applied as soon as possible.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The retention period for automated
     * backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Default: Uses existing setting</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Can be specified for a MySQL Read Replica only if the source is running MySQL
     * 5.6</p> </li> <li> <p>Can be specified for a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5</p> </li> <li> <p>Cannot be set to 0 if the
     * DB instance is a source to Read Replicas</p> </li> </ul>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>The number of days to retain automated backups. Setting this parameter to a
     * positive number enables backups. Setting this parameter to 0 disables automated
     * backups.</p> <p>Changing this parameter can result in an outage if you change
     * from 0 to a non-zero value or from a non-zero value to 0. These changes are
     * applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request. If you change the parameter from one non-zero value to another non-zero
     * value, the change is asynchronously applied as soon as possible.</p> <p>
     * <b>Amazon Aurora</b> </p> <p>Not applicable. The retention period for automated
     * backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Default: Uses existing setting</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be a value from 0 to 35</p> </li> <li>
     * <p>Can be specified for a MySQL Read Replica only if the source is running MySQL
     * 5.6</p> </li> <li> <p>Can be specified for a PostgreSQL Read Replica only if the
     * source is running PostgreSQL 9.3.5</p> </li> <li> <p>Cannot be set to 0 if the
     * DB instance is a source to Read Replicas</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the <code>BackupRetentionPeriod</code>
     * parameter. Changing this parameter does not result in an outage and the change
     * is asynchronously applied as soon as possible. </p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The daily time range for creating automated backups is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format hh24:mi-hh24:mi</p> </li>
     * <li> <p>Must be in Universal Time Coordinated (UTC)</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window</p> </li> <li> <p>Must be at
     * least 30 minutes</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the <code>BackupRetentionPeriod</code>
     * parameter. Changing this parameter does not result in an outage and the change
     * is asynchronously applied as soon as possible. </p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The daily time range for creating automated backups is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format hh24:mi-hh24:mi</p> </li>
     * <li> <p>Must be in Universal Time Coordinated (UTC)</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window</p> </li> <li> <p>Must be at
     * least 30 minutes</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the <code>BackupRetentionPeriod</code>
     * parameter. Changing this parameter does not result in an outage and the change
     * is asynchronously applied as soon as possible. </p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The daily time range for creating automated backups is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format hh24:mi-hh24:mi</p> </li>
     * <li> <p>Must be in Universal Time Coordinated (UTC)</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window</p> </li> <li> <p>Must be at
     * least 30 minutes</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the <code>BackupRetentionPeriod</code>
     * parameter. Changing this parameter does not result in an outage and the change
     * is asynchronously applied as soon as possible. </p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The daily time range for creating automated backups is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format hh24:mi-hh24:mi</p> </li>
     * <li> <p>Must be in Universal Time Coordinated (UTC)</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window</p> </li> <li> <p>Must be at
     * least 30 minutes</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the <code>BackupRetentionPeriod</code>
     * parameter. Changing this parameter does not result in an outage and the change
     * is asynchronously applied as soon as possible. </p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The daily time range for creating automated backups is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format hh24:mi-hh24:mi</p> </li>
     * <li> <p>Must be in Universal Time Coordinated (UTC)</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window</p> </li> <li> <p>Must be at
     * least 30 minutes</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the <code>BackupRetentionPeriod</code>
     * parameter. Changing this parameter does not result in an outage and the change
     * is asynchronously applied as soon as possible. </p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The daily time range for creating automated backups is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format hh24:mi-hh24:mi</p> </li>
     * <li> <p>Must be in Universal Time Coordinated (UTC)</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window</p> </li> <li> <p>Must be at
     * least 30 minutes</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled, as determined by the <code>BackupRetentionPeriod</code>
     * parameter. Changing this parameter does not result in an outage and the change
     * is asynchronously applied as soon as possible. </p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. The daily time range for creating automated backups is
     * managed by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the format hh24:mi-hh24:mi</p> </li>
     * <li> <p>Must be in Universal Time Coordinated (UTC)</p> </li> <li> <p>Must not
     * conflict with the preferred maintenance window</p> </li> <li> <p>Must be at
     * least 30 minutes</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, then changing
     * this parameter will cause a reboot of the DB instance. If moving this window to
     * the current time, there must be at least 30 minutes between the current time and
     * end of the window to ensure pending changes are applied.</p> <p>Default: Uses
     * existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon |
     * Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30
     * minutes</p>
     */
    inline const Aws::String& GetPreferredMaintenanceWindow() const{ return m_preferredMaintenanceWindow; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, then changing
     * this parameter will cause a reboot of the DB instance. If moving this window to
     * the current time, there must be at least 30 minutes between the current time and
     * end of the window to ensure pending changes are applied.</p> <p>Default: Uses
     * existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon |
     * Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30
     * minutes</p>
     */
    inline void SetPreferredMaintenanceWindow(const Aws::String& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = value; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, then changing
     * this parameter will cause a reboot of the DB instance. If moving this window to
     * the current time, there must be at least 30 minutes between the current time and
     * end of the window to ensure pending changes are applied.</p> <p>Default: Uses
     * existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon |
     * Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30
     * minutes</p>
     */
    inline void SetPreferredMaintenanceWindow(Aws::String&& value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow = std::move(value); }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, then changing
     * this parameter will cause a reboot of the DB instance. If moving this window to
     * the current time, there must be at least 30 minutes between the current time and
     * end of the window to ensure pending changes are applied.</p> <p>Default: Uses
     * existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon |
     * Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30
     * minutes</p>
     */
    inline void SetPreferredMaintenanceWindow(const char* value) { m_preferredMaintenanceWindowHasBeenSet = true; m_preferredMaintenanceWindow.assign(value); }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, then changing
     * this parameter will cause a reboot of the DB instance. If moving this window to
     * the current time, there must be at least 30 minutes between the current time and
     * end of the window to ensure pending changes are applied.</p> <p>Default: Uses
     * existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon |
     * Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30
     * minutes</p>
     */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const Aws::String& value) { SetPreferredMaintenanceWindow(value); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, then changing
     * this parameter will cause a reboot of the DB instance. If moving this window to
     * the current time, there must be at least 30 minutes between the current time and
     * end of the window to ensure pending changes are applied.</p> <p>Default: Uses
     * existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon |
     * Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30
     * minutes</p>
     */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(Aws::String&& value) { SetPreferredMaintenanceWindow(std::move(value)); return *this;}

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter does not result in an
     * outage, except in the following situation, and the change is asynchronously
     * applied as soon as possible. If there are pending actions that cause a reboot,
     * and the maintenance window is changed to include the current time, then changing
     * this parameter will cause a reboot of the DB instance. If moving this window to
     * the current time, there must be at least 30 minutes between the current time and
     * end of the window to ensure pending changes are applied.</p> <p>Default: Uses
     * existing setting</p> <p>Format: ddd:hh24:mi-ddd:hh24:mi</p> <p>Valid Days: Mon |
     * Tue | Wed | Thu | Fri | Sat | Sun</p> <p>Constraints: Must be at least 30
     * minutes</p>
     */
    inline ModifyDBInstanceRequest& WithPreferredMaintenanceWindow(const char* value) { SetPreferredMaintenanceWindow(value); return *this;}


    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. Changing this
     * parameter does not result in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. Changing this
     * parameter does not result in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. Changing this
     * parameter does not result in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p>
     */
    inline ModifyDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p> <p>For a list of valid engine versions, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p> <p>For a list of valid engine versions, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p> <p>For a list of valid engine versions, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p> <p>For a list of valid engine versions, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p> <p>For a list of valid engine versions, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline ModifyDBInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p> <p>For a list of valid engine versions, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline ModifyDBInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request. </p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p> <p>For a list of valid engine versions, see
     * <a>CreateDBInstance</a>.</p>
     */
    inline ModifyDBInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * does not result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the EngineVersion parameter that is a different major version than
     * the DB instance's current version.</p>
     */
    inline bool GetAllowMajorVersionUpgrade() const{ return m_allowMajorVersionUpgrade; }

    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * does not result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the EngineVersion parameter that is a different major version than
     * the DB instance's current version.</p>
     */
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }

    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * does not result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the EngineVersion parameter that is a different major version than
     * the DB instance's current version.</p>
     */
    inline ModifyDBInstanceRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}


    /**
     * <p> Indicates that minor version upgrades are applied automatically to the DB
     * instance during the maintenance window. Changing this parameter does not result
     * in an outage except in the following case and the change is asynchronously
     * applied as soon as possible. An outage will result if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and RDS has enabled auto patching for that engine version. </p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p> Indicates that minor version upgrades are applied automatically to the DB
     * instance during the maintenance window. Changing this parameter does not result
     * in an outage except in the following case and the change is asynchronously
     * applied as soon as possible. An outage will result if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and RDS has enabled auto patching for that engine version. </p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p> Indicates that minor version upgrades are applied automatically to the DB
     * instance during the maintenance window. Changing this parameter does not result
     * in an outage except in the following case and the change is asynchronously
     * applied as soon as possible. An outage will result if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and RDS has enabled auto patching for that engine version. </p>
     */
    inline ModifyDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline ModifyDBInstanceRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline ModifyDBInstanceRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>The license model for the DB instance.</p> <p>Valid values:
     * <code>license-included</code> | <code>bring-your-own-license</code> |
     * <code>general-public-license</code> </p>
     */
    inline ModifyDBInstanceRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the RDS
     * instance. </p> <p>Changing this setting does not result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request. If you are migrating from Provisioned IOPS to standard storage, set
     * this value to 0. The DB instance will require a reboot for the change in storage
     * type to take effect. </p> <p>If you choose to migrate your DB instance from
     * using standard storage to using Provisioned IOPS, or from using Provisioned IOPS
     * to using standard storage, the process can take time. The duration of the
     * migration depends on several factors such as database load, storage size,
     * storage type (standard or Provisioned IOPS), amount of IOPS provisioned (if
     * any), and the number of prior scale storage operations. Typical migration times
     * are under 24 hours, but the process can take up to several days in some cases.
     * During the migration, the DB instance is available for use, but might experience
     * performance degradation. While the migration takes place, nightly backups for
     * the instance are suspended. No other Amazon RDS operations can take place for
     * the instance, including modifying the instance, rebooting the instance, deleting
     * the instance, creating a Read Replica for the instance, and creating a DB
     * snapshot of the instance. </p> <p>Constraints: For MariaDB, MySQL, Oracle, and
     * PostgreSQL, the value supplied must be at least 10% greater than the current
     * value. Values that are not at least 10% greater than the existing value are
     * rounded up so that they are 10% greater than the current value. </p> <p>Default:
     * Uses existing setting</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the RDS
     * instance. </p> <p>Changing this setting does not result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request. If you are migrating from Provisioned IOPS to standard storage, set
     * this value to 0. The DB instance will require a reboot for the change in storage
     * type to take effect. </p> <p>If you choose to migrate your DB instance from
     * using standard storage to using Provisioned IOPS, or from using Provisioned IOPS
     * to using standard storage, the process can take time. The duration of the
     * migration depends on several factors such as database load, storage size,
     * storage type (standard or Provisioned IOPS), amount of IOPS provisioned (if
     * any), and the number of prior scale storage operations. Typical migration times
     * are under 24 hours, but the process can take up to several days in some cases.
     * During the migration, the DB instance is available for use, but might experience
     * performance degradation. While the migration takes place, nightly backups for
     * the instance are suspended. No other Amazon RDS operations can take place for
     * the instance, including modifying the instance, rebooting the instance, deleting
     * the instance, creating a Read Replica for the instance, and creating a DB
     * snapshot of the instance. </p> <p>Constraints: For MariaDB, MySQL, Oracle, and
     * PostgreSQL, the value supplied must be at least 10% greater than the current
     * value. Values that are not at least 10% greater than the existing value are
     * rounded up so that they are 10% greater than the current value. </p> <p>Default:
     * Uses existing setting</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the RDS
     * instance. </p> <p>Changing this setting does not result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request. If you are migrating from Provisioned IOPS to standard storage, set
     * this value to 0. The DB instance will require a reboot for the change in storage
     * type to take effect. </p> <p>If you choose to migrate your DB instance from
     * using standard storage to using Provisioned IOPS, or from using Provisioned IOPS
     * to using standard storage, the process can take time. The duration of the
     * migration depends on several factors such as database load, storage size,
     * storage type (standard or Provisioned IOPS), amount of IOPS provisioned (if
     * any), and the number of prior scale storage operations. Typical migration times
     * are under 24 hours, but the process can take up to several days in some cases.
     * During the migration, the DB instance is available for use, but might experience
     * performance degradation. While the migration takes place, nightly backups for
     * the instance are suspended. No other Amazon RDS operations can take place for
     * the instance, including modifying the instance, rebooting the instance, deleting
     * the instance, creating a Read Replica for the instance, and creating a DB
     * snapshot of the instance. </p> <p>Constraints: For MariaDB, MySQL, Oracle, and
     * PostgreSQL, the value supplied must be at least 10% greater than the current
     * value. Values that are not at least 10% greater than the existing value are
     * rounded up so that they are 10% greater than the current value. </p> <p>Default:
     * Uses existing setting</p>
     */
    inline ModifyDBInstanceRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter does not result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted. </p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter does not result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted. </p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter does not result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted. </p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter does not result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted. </p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter does not result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted. </p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline ModifyDBInstanceRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter does not result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted. </p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline ModifyDBInstanceRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter does not result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted. </p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline ModifyDBInstanceRequest& WithOptionGroupName(const char* value) { SetOptionGroupName(value); return *this;}


    /**
     * <p> The new DB instance identifier for the DB instance when renaming a DB
     * instance. When you change the DB instance identifier, an instance reboot will
     * occur immediately if you set <code>Apply Immediately</code> to true, or will
     * occur during the next maintenance window if <code>Apply Immediately</code> to
     * false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline const Aws::String& GetNewDBInstanceIdentifier() const{ return m_newDBInstanceIdentifier; }

    /**
     * <p> The new DB instance identifier for the DB instance when renaming a DB
     * instance. When you change the DB instance identifier, an instance reboot will
     * occur immediately if you set <code>Apply Immediately</code> to true, or will
     * occur during the next maintenance window if <code>Apply Immediately</code> to
     * false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline void SetNewDBInstanceIdentifier(const Aws::String& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = value; }

    /**
     * <p> The new DB instance identifier for the DB instance when renaming a DB
     * instance. When you change the DB instance identifier, an instance reboot will
     * occur immediately if you set <code>Apply Immediately</code> to true, or will
     * occur during the next maintenance window if <code>Apply Immediately</code> to
     * false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline void SetNewDBInstanceIdentifier(Aws::String&& value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier = std::move(value); }

    /**
     * <p> The new DB instance identifier for the DB instance when renaming a DB
     * instance. When you change the DB instance identifier, an instance reboot will
     * occur immediately if you set <code>Apply Immediately</code> to true, or will
     * occur during the next maintenance window if <code>Apply Immediately</code> to
     * false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline void SetNewDBInstanceIdentifier(const char* value) { m_newDBInstanceIdentifierHasBeenSet = true; m_newDBInstanceIdentifier.assign(value); }

    /**
     * <p> The new DB instance identifier for the DB instance when renaming a DB
     * instance. When you change the DB instance identifier, an instance reboot will
     * occur immediately if you set <code>Apply Immediately</code> to true, or will
     * occur during the next maintenance window if <code>Apply Immediately</code> to
     * false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const Aws::String& value) { SetNewDBInstanceIdentifier(value); return *this;}

    /**
     * <p> The new DB instance identifier for the DB instance when renaming a DB
     * instance. When you change the DB instance identifier, an instance reboot will
     * occur immediately if you set <code>Apply Immediately</code> to true, or will
     * occur during the next maintenance window if <code>Apply Immediately</code> to
     * false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(Aws::String&& value) { SetNewDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p> The new DB instance identifier for the DB instance when renaming a DB
     * instance. When you change the DB instance identifier, an instance reboot will
     * occur immediately if you set <code>Apply Immediately</code> to true, or will
     * occur during the next maintenance window if <code>Apply Immediately</code> to
     * false. This value is stored as a lowercase string. </p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const char* value) { SetNewDBInstanceIdentifier(value); return *this;}


    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p> <p>If
     * you specify Provisioned IOPS (<code>io1</code>), you must also include a value
     * for the <code>Iops</code> parameter. </p> <p>If you choose to migrate your DB
     * instance from using standard storage to using Provisioned IOPS, or from using
     * Provisioned IOPS to using standard storage, the process can take time. The
     * duration of the migration depends on several factors such as database load,
     * storage size, storage type (standard or Provisioned IOPS), amount of IOPS
     * provisioned (if any), and the number of prior scale storage operations. Typical
     * migration times are under 24 hours, but the process can take up to several days
     * in some cases. During the migration, the DB instance is available for use, but
     * might experience performance degradation. While the migration takes place,
     * nightly backups for the instance are suspended. No other Amazon RDS operations
     * can take place for the instance, including modifying the instance, rebooting the
     * instance, deleting the instance, creating a Read Replica for the instance, and
     * creating a DB snapshot of the instance. </p> <p> Valid values: <code>standard |
     * gp2 | io1</code> </p> <p>Default: <code>io1</code> if the <code>Iops</code>
     * parameter is specified, otherwise <code>standard</code> </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p> <p>If
     * you specify Provisioned IOPS (<code>io1</code>), you must also include a value
     * for the <code>Iops</code> parameter. </p> <p>If you choose to migrate your DB
     * instance from using standard storage to using Provisioned IOPS, or from using
     * Provisioned IOPS to using standard storage, the process can take time. The
     * duration of the migration depends on several factors such as database load,
     * storage size, storage type (standard or Provisioned IOPS), amount of IOPS
     * provisioned (if any), and the number of prior scale storage operations. Typical
     * migration times are under 24 hours, but the process can take up to several days
     * in some cases. During the migration, the DB instance is available for use, but
     * might experience performance degradation. While the migration takes place,
     * nightly backups for the instance are suspended. No other Amazon RDS operations
     * can take place for the instance, including modifying the instance, rebooting the
     * instance, deleting the instance, creating a Read Replica for the instance, and
     * creating a DB snapshot of the instance. </p> <p> Valid values: <code>standard |
     * gp2 | io1</code> </p> <p>Default: <code>io1</code> if the <code>Iops</code>
     * parameter is specified, otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p> <p>If
     * you specify Provisioned IOPS (<code>io1</code>), you must also include a value
     * for the <code>Iops</code> parameter. </p> <p>If you choose to migrate your DB
     * instance from using standard storage to using Provisioned IOPS, or from using
     * Provisioned IOPS to using standard storage, the process can take time. The
     * duration of the migration depends on several factors such as database load,
     * storage size, storage type (standard or Provisioned IOPS), amount of IOPS
     * provisioned (if any), and the number of prior scale storage operations. Typical
     * migration times are under 24 hours, but the process can take up to several days
     * in some cases. During the migration, the DB instance is available for use, but
     * might experience performance degradation. While the migration takes place,
     * nightly backups for the instance are suspended. No other Amazon RDS operations
     * can take place for the instance, including modifying the instance, rebooting the
     * instance, deleting the instance, creating a Read Replica for the instance, and
     * creating a DB snapshot of the instance. </p> <p> Valid values: <code>standard |
     * gp2 | io1</code> </p> <p>Default: <code>io1</code> if the <code>Iops</code>
     * parameter is specified, otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p> <p>If
     * you specify Provisioned IOPS (<code>io1</code>), you must also include a value
     * for the <code>Iops</code> parameter. </p> <p>If you choose to migrate your DB
     * instance from using standard storage to using Provisioned IOPS, or from using
     * Provisioned IOPS to using standard storage, the process can take time. The
     * duration of the migration depends on several factors such as database load,
     * storage size, storage type (standard or Provisioned IOPS), amount of IOPS
     * provisioned (if any), and the number of prior scale storage operations. Typical
     * migration times are under 24 hours, but the process can take up to several days
     * in some cases. During the migration, the DB instance is available for use, but
     * might experience performance degradation. While the migration takes place,
     * nightly backups for the instance are suspended. No other Amazon RDS operations
     * can take place for the instance, including modifying the instance, rebooting the
     * instance, deleting the instance, creating a Read Replica for the instance, and
     * creating a DB snapshot of the instance. </p> <p> Valid values: <code>standard |
     * gp2 | io1</code> </p> <p>Default: <code>io1</code> if the <code>Iops</code>
     * parameter is specified, otherwise <code>standard</code> </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p> <p>If
     * you specify Provisioned IOPS (<code>io1</code>), you must also include a value
     * for the <code>Iops</code> parameter. </p> <p>If you choose to migrate your DB
     * instance from using standard storage to using Provisioned IOPS, or from using
     * Provisioned IOPS to using standard storage, the process can take time. The
     * duration of the migration depends on several factors such as database load,
     * storage size, storage type (standard or Provisioned IOPS), amount of IOPS
     * provisioned (if any), and the number of prior scale storage operations. Typical
     * migration times are under 24 hours, but the process can take up to several days
     * in some cases. During the migration, the DB instance is available for use, but
     * might experience performance degradation. While the migration takes place,
     * nightly backups for the instance are suspended. No other Amazon RDS operations
     * can take place for the instance, including modifying the instance, rebooting the
     * instance, deleting the instance, creating a Read Replica for the instance, and
     * creating a DB snapshot of the instance. </p> <p> Valid values: <code>standard |
     * gp2 | io1</code> </p> <p>Default: <code>io1</code> if the <code>Iops</code>
     * parameter is specified, otherwise <code>standard</code> </p>
     */
    inline ModifyDBInstanceRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p> <p>If
     * you specify Provisioned IOPS (<code>io1</code>), you must also include a value
     * for the <code>Iops</code> parameter. </p> <p>If you choose to migrate your DB
     * instance from using standard storage to using Provisioned IOPS, or from using
     * Provisioned IOPS to using standard storage, the process can take time. The
     * duration of the migration depends on several factors such as database load,
     * storage size, storage type (standard or Provisioned IOPS), amount of IOPS
     * provisioned (if any), and the number of prior scale storage operations. Typical
     * migration times are under 24 hours, but the process can take up to several days
     * in some cases. During the migration, the DB instance is available for use, but
     * might experience performance degradation. While the migration takes place,
     * nightly backups for the instance are suspended. No other Amazon RDS operations
     * can take place for the instance, including modifying the instance, rebooting the
     * instance, deleting the instance, creating a Read Replica for the instance, and
     * creating a DB snapshot of the instance. </p> <p> Valid values: <code>standard |
     * gp2 | io1</code> </p> <p>Default: <code>io1</code> if the <code>Iops</code>
     * parameter is specified, otherwise <code>standard</code> </p>
     */
    inline ModifyDBInstanceRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage type to be associated with the DB instance. </p> <p>If
     * you specify Provisioned IOPS (<code>io1</code>), you must also include a value
     * for the <code>Iops</code> parameter. </p> <p>If you choose to migrate your DB
     * instance from using standard storage to using Provisioned IOPS, or from using
     * Provisioned IOPS to using standard storage, the process can take time. The
     * duration of the migration depends on several factors such as database load,
     * storage size, storage type (standard or Provisioned IOPS), amount of IOPS
     * provisioned (if any), and the number of prior scale storage operations. Typical
     * migration times are under 24 hours, but the process can take up to several days
     * in some cases. During the migration, the DB instance is available for use, but
     * might experience performance degradation. While the migration takes place,
     * nightly backups for the instance are suspended. No other Amazon RDS operations
     * can take place for the instance, including modifying the instance, rebooting the
     * instance, deleting the instance, creating a Read Replica for the instance, and
     * creating a DB snapshot of the instance. </p> <p> Valid values: <code>standard |
     * gp2 | io1</code> </p> <p>Default: <code>io1</code> if the <code>Iops</code>
     * parameter is specified, otherwise <code>standard</code> </p>
     */
    inline ModifyDBInstanceRequest& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline const Aws::String& GetTdeCredentialArn() const{ return m_tdeCredentialArn; }

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
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(const Aws::String& value) { SetTdeCredentialArn(value); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(Aws::String&& value) { SetTdeCredentialArn(std::move(value)); return *this;}

    /**
     * <p>The ARN from the key store with which to associate the instance for TDE
     * encryption.</p>
     */
    inline ModifyDBInstanceRequest& WithTdeCredentialArn(const char* value) { SetTdeCredentialArn(value); return *this;}


    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline const Aws::String& GetTdeCredentialPassword() const{ return m_tdeCredentialPassword; }

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
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(const Aws::String& value) { SetTdeCredentialPassword(value); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(Aws::String&& value) { SetTdeCredentialPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the given ARN from the key store in order to access the
     * device.</p>
     */
    inline ModifyDBInstanceRequest& WithTdeCredentialPassword(const char* value) { SetTdeCredentialPassword(value); return *this;}


    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline const Aws::String& GetCACertificateIdentifier() const{ return m_cACertificateIdentifier; }

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline void SetCACertificateIdentifier(const Aws::String& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = value; }

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline void SetCACertificateIdentifier(Aws::String&& value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier = std::move(value); }

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline void SetCACertificateIdentifier(const char* value) { m_cACertificateIdentifierHasBeenSet = true; m_cACertificateIdentifier.assign(value); }

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(const Aws::String& value) { SetCACertificateIdentifier(value); return *this;}

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(Aws::String&& value) { SetCACertificateIdentifier(std::move(value)); return *this;}

    /**
     * <p>Indicates the certificate that needs to be associated with the instance.</p>
     */
    inline ModifyDBInstanceRequest& WithCACertificateIdentifier(const char* value) { SetCACertificateIdentifier(value); return *this;}


    /**
     * <p>The Active Directory Domain to move the instance to. Specify
     * <code>none</code> to remove the instance from its current domain. The domain
     * must be created prior to this operation. Currently only a Microsoft SQL Server
     * instance can be created in a Active Directory Domain. </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The Active Directory Domain to move the instance to. Specify
     * <code>none</code> to remove the instance from its current domain. The domain
     * must be created prior to this operation. Currently only a Microsoft SQL Server
     * instance can be created in a Active Directory Domain. </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The Active Directory Domain to move the instance to. Specify
     * <code>none</code> to remove the instance from its current domain. The domain
     * must be created prior to this operation. Currently only a Microsoft SQL Server
     * instance can be created in a Active Directory Domain. </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The Active Directory Domain to move the instance to. Specify
     * <code>none</code> to remove the instance from its current domain. The domain
     * must be created prior to this operation. Currently only a Microsoft SQL Server
     * instance can be created in a Active Directory Domain. </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The Active Directory Domain to move the instance to. Specify
     * <code>none</code> to remove the instance from its current domain. The domain
     * must be created prior to this operation. Currently only a Microsoft SQL Server
     * instance can be created in a Active Directory Domain. </p>
     */
    inline ModifyDBInstanceRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The Active Directory Domain to move the instance to. Specify
     * <code>none</code> to remove the instance from its current domain. The domain
     * must be created prior to this operation. Currently only a Microsoft SQL Server
     * instance can be created in a Active Directory Domain. </p>
     */
    inline ModifyDBInstanceRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The Active Directory Domain to move the instance to. Specify
     * <code>none</code> to remove the instance from its current domain. The domain
     * must be created prior to this operation. Currently only a Microsoft SQL Server
     * instance can be created in a Active Directory Domain. </p>
     */
    inline ModifyDBInstanceRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline bool GetCopyTagsToSnapshot() const{ return m_copyTagsToSnapshot; }

    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline void SetCopyTagsToSnapshot(bool value) { m_copyTagsToSnapshotHasBeenSet = true; m_copyTagsToSnapshot = value; }

    /**
     * <p>True to copy all tags from the DB instance to snapshots of the DB instance,
     * and otherwise false. The default is false.</p>
     */
    inline ModifyDBInstanceRequest& WithCopyTagsToSnapshot(bool value) { SetCopyTagsToSnapshot(value); return *this;}


    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline int GetMonitoringInterval() const{ return m_monitoringInterval; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline void SetMonitoringInterval(int value) { m_monitoringIntervalHasBeenSet = true; m_monitoringInterval = value; }

    /**
     * <p>The interval, in seconds, between points when Enhanced Monitoring metrics are
     * collected for the DB instance. To disable collecting Enhanced Monitoring
     * metrics, specify 0. The default is 0.</p> <p>If <code>MonitoringRoleArn</code>
     * is specified, then you must also set <code>MonitoringInterval</code> to a value
     * other than 0.</p> <p>Valid Values: <code>0, 1, 5, 10, 15, 30, 60</code> </p>
     */
    inline ModifyDBInstanceRequest& WithMonitoringInterval(int value) { SetMonitoringInterval(value); return *this;}


    /**
     * <p>The port number on which the database accepts connections.</p> <p>The value
     * of the <code>DBPortNumber</code> parameter must not match any of the port values
     * specified for options in the option group for the DB instance.</p> <p>Your
     * database will restart when you change the <code>DBPortNumber</code> value
     * regardless of the value of the <code>ApplyImmediately</code> parameter.</p> <p>
     * <b>MySQL</b> </p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p> <b>MariaDB</b> </p> <p> Default:
     * <code>3306</code> </p> <p> Valid Values: <code>1150-65535</code> </p> <p>
     * <b>PostgreSQL</b> </p> <p> Default: <code>5432</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer</p> <p> <b>Oracle</b> </p> <p>
     * Default: <code>1521</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     * <p> <b>SQL Server</b> </p> <p> Default: <code>1433</code> </p> <p> Valid Values:
     * <code>1150-65535</code> except for <code>1434</code>, <code>3389</code>,
     * <code>47001</code>, <code>49152</code>, and <code>49152</code> through
     * <code>49156</code>. </p> <p> <b>Amazon Aurora</b> </p> <p> Default:
     * <code>3306</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     */
    inline int GetDBPortNumber() const{ return m_dBPortNumber; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>The value
     * of the <code>DBPortNumber</code> parameter must not match any of the port values
     * specified for options in the option group for the DB instance.</p> <p>Your
     * database will restart when you change the <code>DBPortNumber</code> value
     * regardless of the value of the <code>ApplyImmediately</code> parameter.</p> <p>
     * <b>MySQL</b> </p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p> <b>MariaDB</b> </p> <p> Default:
     * <code>3306</code> </p> <p> Valid Values: <code>1150-65535</code> </p> <p>
     * <b>PostgreSQL</b> </p> <p> Default: <code>5432</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer</p> <p> <b>Oracle</b> </p> <p>
     * Default: <code>1521</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     * <p> <b>SQL Server</b> </p> <p> Default: <code>1433</code> </p> <p> Valid Values:
     * <code>1150-65535</code> except for <code>1434</code>, <code>3389</code>,
     * <code>47001</code>, <code>49152</code>, and <code>49152</code> through
     * <code>49156</code>. </p> <p> <b>Amazon Aurora</b> </p> <p> Default:
     * <code>3306</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     */
    inline void SetDBPortNumber(int value) { m_dBPortNumberHasBeenSet = true; m_dBPortNumber = value; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>The value
     * of the <code>DBPortNumber</code> parameter must not match any of the port values
     * specified for options in the option group for the DB instance.</p> <p>Your
     * database will restart when you change the <code>DBPortNumber</code> value
     * regardless of the value of the <code>ApplyImmediately</code> parameter.</p> <p>
     * <b>MySQL</b> </p> <p> Default: <code>3306</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p> <b>MariaDB</b> </p> <p> Default:
     * <code>3306</code> </p> <p> Valid Values: <code>1150-65535</code> </p> <p>
     * <b>PostgreSQL</b> </p> <p> Default: <code>5432</code> </p> <p> Valid Values:
     * <code>1150-65535</code> </p> <p>Type: Integer</p> <p> <b>Oracle</b> </p> <p>
     * Default: <code>1521</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     * <p> <b>SQL Server</b> </p> <p> Default: <code>1433</code> </p> <p> Valid Values:
     * <code>1150-65535</code> except for <code>1434</code>, <code>3389</code>,
     * <code>47001</code>, <code>49152</code>, and <code>49152</code> through
     * <code>49156</code>. </p> <p> <b>Amazon Aurora</b> </p> <p> Default:
     * <code>3306</code> </p> <p> Valid Values: <code>1150-65535</code> </p>
     */
    inline ModifyDBInstanceRequest& WithDBPortNumber(int value) { SetDBPortNumber(value); return *this;}


    /**
     * <p>Boolean value that indicates if the DB instance has a publicly resolvable DNS
     * name. Set to <code>True</code> to make the DB instance Internet-facing with a
     * publicly resolvable DNS name, which resolves to a public IP address. Set to
     * <code>False</code> to make the DB instance internal with a DNS name that
     * resolves to a private IP address. </p> <p> <code>PubliclyAccessible</code> only
     * applies to DB instances in a VPC. The DB instance must be part of a public
     * subnet and <code>PubliclyAccessible</code> must be true in order for it to be
     * publicly accessible. </p> <p>Changes to the <code>PubliclyAccessible</code>
     * parameter are applied immediately regardless of the value of the
     * <code>ApplyImmediately</code> parameter.</p> <p>Default: false</p>
     */
    inline bool GetPubliclyAccessible() const{ return m_publiclyAccessible; }

    /**
     * <p>Boolean value that indicates if the DB instance has a publicly resolvable DNS
     * name. Set to <code>True</code> to make the DB instance Internet-facing with a
     * publicly resolvable DNS name, which resolves to a public IP address. Set to
     * <code>False</code> to make the DB instance internal with a DNS name that
     * resolves to a private IP address. </p> <p> <code>PubliclyAccessible</code> only
     * applies to DB instances in a VPC. The DB instance must be part of a public
     * subnet and <code>PubliclyAccessible</code> must be true in order for it to be
     * publicly accessible. </p> <p>Changes to the <code>PubliclyAccessible</code>
     * parameter are applied immediately regardless of the value of the
     * <code>ApplyImmediately</code> parameter.</p> <p>Default: false</p>
     */
    inline void SetPubliclyAccessible(bool value) { m_publiclyAccessibleHasBeenSet = true; m_publiclyAccessible = value; }

    /**
     * <p>Boolean value that indicates if the DB instance has a publicly resolvable DNS
     * name. Set to <code>True</code> to make the DB instance Internet-facing with a
     * publicly resolvable DNS name, which resolves to a public IP address. Set to
     * <code>False</code> to make the DB instance internal with a DNS name that
     * resolves to a private IP address. </p> <p> <code>PubliclyAccessible</code> only
     * applies to DB instances in a VPC. The DB instance must be part of a public
     * subnet and <code>PubliclyAccessible</code> must be true in order for it to be
     * publicly accessible. </p> <p>Changes to the <code>PubliclyAccessible</code>
     * parameter are applied immediately regardless of the value of the
     * <code>ApplyImmediately</code> parameter.</p> <p>Default: false</p>
     */
    inline ModifyDBInstanceRequest& WithPubliclyAccessible(bool value) { SetPubliclyAccessible(value); return *this;}


    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that permits RDS to send enhanced monitoring metrics
     * to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>. For information on creating
     * a monitoring role, go to <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_Monitoring.html#USER_Monitoring.OS.IAMRole">To
     * create an IAM role for Amazon RDS Enhanced Monitoring</a>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM role to use when making API calls to the Directory
     * Service.</p>
     */
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Managing.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a>. </p> <p>Default: 1</p> <p>Valid
     * Values: 0 - 15</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Managing.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a>. </p> <p>Default: 1</p> <p>Valid
     * Values: 0 - 15</p>
     */
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }

    /**
     * <p>A value that specifies the order in which an Aurora Replica is promoted to
     * the primary instance after a failure of the existing primary instance. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Aurora.Managing.html#Aurora.Managing.FaultTolerance">
     * Fault Tolerance for an Aurora DB Cluster</a>. </p> <p>Default: 1</p> <p>Valid
     * Values: 0 - 15</p>
     */
    inline ModifyDBInstanceRequest& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}


    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. Mapping AWS IAM accounts to database accounts is managed
     * by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>
     * <b>MySQL</b> </p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or higher</p>
     * </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li> </ul>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. Mapping AWS IAM accounts to database accounts is managed
     * by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>
     * <b>MySQL</b> </p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or higher</p>
     * </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li> </ul>
     * <p>Default: <code>false</code> </p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <p> <b>Amazon Aurora</b>
     * </p> <p>Not applicable. Mapping AWS IAM accounts to database accounts is managed
     * by the DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>
     * <b>MySQL</b> </p> <ul> <li> <p>For MySQL 5.6, minor version 5.6.34 or higher</p>
     * </li> <li> <p>For MySQL 5.7, minor version 5.7.16 or higher</p> </li> </ul>
     * <p>Default: <code>false</code> </p>
     */
    inline ModifyDBInstanceRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>True to enable Performance Insights for the DB instance, and otherwise
     * false.</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    /**
     * <p>True to enable Performance Insights for the DB instance, and otherwise
     * false.</p>
     */
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    /**
     * <p>True to enable Performance Insights for the DB instance, and otherwise
     * false.</p>
     */
    inline ModifyDBInstanceRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The AWS KMS key identifier for encryption of Performance Insights data. The
     * KMS key ID is the Amazon Resource Name (ARN), KMS key identifier, or the KMS key
     * alias for the KMS encryption key.</p>
     */
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const char* value) { SetPerformanceInsightsKMSKeyId(value); return *this;}


    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB instance or DB cluster.</p>
     */
    inline const CloudwatchLogsExportConfiguration& GetCloudwatchLogsExportConfiguration() const{ return m_cloudwatchLogsExportConfiguration; }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB instance or DB cluster.</p>
     */
    inline void SetCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = value; }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB instance or DB cluster.</p>
     */
    inline void SetCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { m_cloudwatchLogsExportConfigurationHasBeenSet = true; m_cloudwatchLogsExportConfiguration = std::move(value); }

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB instance or DB cluster.</p>
     */
    inline ModifyDBInstanceRequest& WithCloudwatchLogsExportConfiguration(const CloudwatchLogsExportConfiguration& value) { SetCloudwatchLogsExportConfiguration(value); return *this;}

    /**
     * <p>The configuration setting for the log types to be enabled for export to
     * CloudWatch Logs for a specific DB instance or DB cluster.</p>
     */
    inline ModifyDBInstanceRequest& WithCloudwatchLogsExportConfiguration(CloudwatchLogsExportConfiguration&& value) { SetCloudwatchLogsExportConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet;

    int m_allocatedStorage;
    bool m_allocatedStorageHasBeenSet;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet;

    Aws::String m_dBSubnetGroupName;
    bool m_dBSubnetGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_dBSecurityGroups;
    bool m_dBSecurityGroupsHasBeenSet;

    Aws::Vector<Aws::String> m_vpcSecurityGroupIds;
    bool m_vpcSecurityGroupIdsHasBeenSet;

    bool m_applyImmediately;
    bool m_applyImmediatelyHasBeenSet;

    Aws::String m_masterUserPassword;
    bool m_masterUserPasswordHasBeenSet;

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet;

    int m_backupRetentionPeriod;
    bool m_backupRetentionPeriodHasBeenSet;

    Aws::String m_preferredBackupWindow;
    bool m_preferredBackupWindowHasBeenSet;

    Aws::String m_preferredMaintenanceWindow;
    bool m_preferredMaintenanceWindowHasBeenSet;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    bool m_allowMajorVersionUpgrade;
    bool m_allowMajorVersionUpgradeHasBeenSet;

    bool m_autoMinorVersionUpgrade;
    bool m_autoMinorVersionUpgradeHasBeenSet;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet;

    int m_iops;
    bool m_iopsHasBeenSet;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet;

    Aws::String m_newDBInstanceIdentifier;
    bool m_newDBInstanceIdentifierHasBeenSet;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet;

    Aws::String m_tdeCredentialArn;
    bool m_tdeCredentialArnHasBeenSet;

    Aws::String m_tdeCredentialPassword;
    bool m_tdeCredentialPasswordHasBeenSet;

    Aws::String m_cACertificateIdentifier;
    bool m_cACertificateIdentifierHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    bool m_copyTagsToSnapshot;
    bool m_copyTagsToSnapshotHasBeenSet;

    int m_monitoringInterval;
    bool m_monitoringIntervalHasBeenSet;

    int m_dBPortNumber;
    bool m_dBPortNumberHasBeenSet;

    bool m_publiclyAccessible;
    bool m_publiclyAccessibleHasBeenSet;

    Aws::String m_monitoringRoleArn;
    bool m_monitoringRoleArnHasBeenSet;

    Aws::String m_domainIAMRoleName;
    bool m_domainIAMRoleNameHasBeenSet;

    int m_promotionTier;
    bool m_promotionTierHasBeenSet;

    bool m_enableIAMDatabaseAuthentication;
    bool m_enableIAMDatabaseAuthenticationHasBeenSet;

    bool m_enablePerformanceInsights;
    bool m_enablePerformanceInsightsHasBeenSet;

    Aws::String m_performanceInsightsKMSKeyId;
    bool m_performanceInsightsKMSKeyIdHasBeenSet;

    CloudwatchLogsExportConfiguration m_cloudwatchLogsExportConfiguration;
    bool m_cloudwatchLogsExportConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
