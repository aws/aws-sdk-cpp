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
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/CloudwatchLogsExportConfiguration.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class AWS_NEPTUNE_API ModifyDBInstanceRequest : public NeptuneRequest
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
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

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
     * <p>The new amount of storage (in gibibytes) to allocate for the DB instance.</p>
     * <p>Not applicable. Storage is managed by the DB Cluster.</p>
     */
    inline int GetAllocatedStorage() const{ return m_allocatedStorage; }

    /**
     * <p>The new amount of storage (in gibibytes) to allocate for the DB instance.</p>
     * <p>Not applicable. Storage is managed by the DB Cluster.</p>
     */
    inline bool AllocatedStorageHasBeenSet() const { return m_allocatedStorageHasBeenSet; }

    /**
     * <p>The new amount of storage (in gibibytes) to allocate for the DB instance.</p>
     * <p>Not applicable. Storage is managed by the DB Cluster.</p>
     */
    inline void SetAllocatedStorage(int value) { m_allocatedStorageHasBeenSet = true; m_allocatedStorage = value; }

    /**
     * <p>The new amount of storage (in gibibytes) to allocate for the DB instance.</p>
     * <p>Not applicable. Storage is managed by the DB Cluster.</p>
     */
    inline ModifyDBInstanceRequest& WithAllocatedStorage(int value) { SetAllocatedStorage(value); return *this;}


    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p> <p>If you modify the DB instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p> <p>If you modify the DB instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p> <p>If you modify the DB instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p> <p>If you modify the DB instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p> <p>If you modify the DB instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p> <p>If you modify the DB instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p> <p>If you modify the DB instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}

    /**
     * <p>The new compute and memory capacity of the DB instance, for example,
     * <code>db.m4.large</code>. Not all DB instance classes are available in all AWS
     * Regions.</p> <p>If you modify the DB instance class, an outage occurs during the
     * change. The change is applied during the next maintenance window, unless
     * <code>ApplyImmediately</code> is specified as <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline ModifyDBInstanceRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}


    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC.</p> <p>Changing the subnet group
     * causes an outage during the change. The change is applied during the next
     * maintenance window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter.</p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline const Aws::String& GetDBSubnetGroupName() const{ return m_dBSubnetGroupName; }

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC.</p> <p>Changing the subnet group
     * causes an outage during the change. The change is applied during the next
     * maintenance window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter.</p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline bool DBSubnetGroupNameHasBeenSet() const { return m_dBSubnetGroupNameHasBeenSet; }

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC.</p> <p>Changing the subnet group
     * causes an outage during the change. The change is applied during the next
     * maintenance window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter.</p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const Aws::String& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = value; }

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC.</p> <p>Changing the subnet group
     * causes an outage during the change. The change is applied during the next
     * maintenance window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter.</p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline void SetDBSubnetGroupName(Aws::String&& value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName = std::move(value); }

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC.</p> <p>Changing the subnet group
     * causes an outage during the change. The change is applied during the next
     * maintenance window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter.</p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline void SetDBSubnetGroupName(const char* value) { m_dBSubnetGroupNameHasBeenSet = true; m_dBSubnetGroupName.assign(value); }

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC.</p> <p>Changing the subnet group
     * causes an outage during the change. The change is applied during the next
     * maintenance window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter.</p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(const Aws::String& value) { SetDBSubnetGroupName(value); return *this;}

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC.</p> <p>Changing the subnet group
     * causes an outage during the change. The change is applied during the next
     * maintenance window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter.</p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(Aws::String&& value) { SetDBSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The new DB subnet group for the DB instance. You can use this parameter to
     * move your DB instance to a different VPC.</p> <p>Changing the subnet group
     * causes an outage during the change. The change is applied during the next
     * maintenance window, unless you specify <code>true</code> for the
     * <code>ApplyImmediately</code> parameter.</p> <p>Constraints: If supplied, must
     * match the name of an existing DBSubnetGroup.</p> <p>Example:
     * <code>mySubnetGroup</code> </p>
     */
    inline ModifyDBInstanceRequest& WithDBSubnetGroupName(const char* value) { SetDBSubnetGroupName(value); return *this;}


    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroups() const{ return m_dBSecurityGroups; }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline bool DBSecurityGroupsHasBeenSet() const { return m_dBSecurityGroupsHasBeenSet; }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline void SetDBSecurityGroups(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = value; }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline void SetDBSecurityGroups(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups = std::move(value); }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroups(value); return *this;}

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithDBSecurityGroups(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const Aws::String& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(Aws::String&& value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of DB security groups to authorize on this DB instance. Changing this
     * setting doesn't result in an outage and the change is asynchronously applied as
     * soon as possible.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match
     * existing DBSecurityGroups.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddDBSecurityGroups(const char* value) { m_dBSecurityGroupsHasBeenSet = true; m_dBSecurityGroups.push_back(value); return *this; }


    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupIds() const{ return m_vpcSecurityGroupIds; }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline bool VpcSecurityGroupIdsHasBeenSet() const { return m_vpcSecurityGroupIdsHasBeenSet; }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline void SetVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = value; }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline void SetVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds = std::move(value); }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupIds(value); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithVpcSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const Aws::String& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(Aws::String&& value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of EC2 VPC security groups to authorize on this DB instance. This
     * change is asynchronously applied as soon as possible.</p> <p>Not applicable. The
     * associated list of EC2 VPC security groups is managed by the DB cluster. For
     * more information, see <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li>
     * <p>If supplied, must match existing VpcSecurityGroupIds.</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& AddVpcSecurityGroupIds(const char* value) { m_vpcSecurityGroupIdsHasBeenSet = true; m_vpcSecurityGroupIds.push_back(value); return *this; }


    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB instance.</p> <p> If
     * this parameter is set to <code>false</code>, changes to the DB instance are
     * applied during the next maintenance window. Some parameter changes can cause an
     * outage and are applied on the next call to <a>RebootDBInstance</a>, or the next
     * failure reboot.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetApplyImmediately() const{ return m_applyImmediately; }

    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB instance.</p> <p> If
     * this parameter is set to <code>false</code>, changes to the DB instance are
     * applied during the next maintenance window. Some parameter changes can cause an
     * outage and are applied on the next call to <a>RebootDBInstance</a>, or the next
     * failure reboot.</p> <p>Default: <code>false</code> </p>
     */
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }

    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB instance.</p> <p> If
     * this parameter is set to <code>false</code>, changes to the DB instance are
     * applied during the next maintenance window. Some parameter changes can cause an
     * outage and are applied on the next call to <a>RebootDBInstance</a>, or the next
     * failure reboot.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }

    /**
     * <p>Specifies whether the modifications in this request and any pending
     * modifications are asynchronously applied as soon as possible, regardless of the
     * <code>PreferredMaintenanceWindow</code> setting for the DB instance.</p> <p> If
     * this parameter is set to <code>false</code>, changes to the DB instance are
     * applied during the next maintenance window. Some parameter changes can cause an
     * outage and are applied on the next call to <a>RebootDBInstance</a>, or the next
     * failure reboot.</p> <p>Default: <code>false</code> </p>
     */
    inline ModifyDBInstanceRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}


    /**
     * <p>Not applicable.</p>
     */
    inline const Aws::String& GetMasterUserPassword() const{ return m_masterUserPassword; }

    /**
     * <p>Not applicable.</p>
     */
    inline bool MasterUserPasswordHasBeenSet() const { return m_masterUserPasswordHasBeenSet; }

    /**
     * <p>Not applicable.</p>
     */
    inline void SetMasterUserPassword(const Aws::String& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = value; }

    /**
     * <p>Not applicable.</p>
     */
    inline void SetMasterUserPassword(Aws::String&& value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword = std::move(value); }

    /**
     * <p>Not applicable.</p>
     */
    inline void SetMasterUserPassword(const char* value) { m_masterUserPasswordHasBeenSet = true; m_masterUserPassword.assign(value); }

    /**
     * <p>Not applicable.</p>
     */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const Aws::String& value) { SetMasterUserPassword(value); return *this;}

    /**
     * <p>Not applicable.</p>
     */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(Aws::String&& value) { SetMasterUserPassword(std::move(value)); return *this;}

    /**
     * <p>Not applicable.</p>
     */
    inline ModifyDBInstanceRequest& WithMasterUserPassword(const char* value) { SetMasterUserPassword(value); return *this;}


    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting doesn't result in an outage. The parameter group name itself is changed
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
     * setting doesn't result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group to apply to the DB instance. Changing this
     * setting doesn't result in an outage. The parameter group name itself is changed
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
     * setting doesn't result in an outage. The parameter group name itself is changed
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
     * setting doesn't result in an outage. The parameter group name itself is changed
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
     * setting doesn't result in an outage. The parameter group name itself is changed
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
     * setting doesn't result in an outage. The parameter group name itself is changed
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
     * setting doesn't result in an outage. The parameter group name itself is changed
     * immediately, but the actual parameter changes are not applied until you reboot
     * the instance without failover. The db instance will NOT be rebooted
     * automatically and the parameter changes will NOT be applied during the next
     * maintenance window.</p> <p>Default: Uses existing setting</p> <p>Constraints:
     * The DB parameter group must be in the same DB parameter group family as this DB
     * instance.</p>
     */
    inline ModifyDBInstanceRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}


    /**
     * <p>Not applicable. The retention period for automated backups is managed by the
     * DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>Default:
     * Uses existing setting</p>
     */
    inline int GetBackupRetentionPeriod() const{ return m_backupRetentionPeriod; }

    /**
     * <p>Not applicable. The retention period for automated backups is managed by the
     * DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>Default:
     * Uses existing setting</p>
     */
    inline bool BackupRetentionPeriodHasBeenSet() const { return m_backupRetentionPeriodHasBeenSet; }

    /**
     * <p>Not applicable. The retention period for automated backups is managed by the
     * DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>Default:
     * Uses existing setting</p>
     */
    inline void SetBackupRetentionPeriod(int value) { m_backupRetentionPeriodHasBeenSet = true; m_backupRetentionPeriod = value; }

    /**
     * <p>Not applicable. The retention period for automated backups is managed by the
     * DB cluster. For more information, see <a>ModifyDBCluster</a>.</p> <p>Default:
     * Uses existing setting</p>
     */
    inline ModifyDBInstanceRequest& WithBackupRetentionPeriod(int value) { SetBackupRetentionPeriod(value); return *this;}


    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled.</p> <p>Not applicable. The daily time range for creating
     * automated backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format hh24:mi-hh24:mi</p> </li> <li> <p>Must be in Universal Time Coordinated
     * (UTC)</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window</p> </li> <li> <p>Must be at least 30 minutes</p> </li> </ul>
     */
    inline const Aws::String& GetPreferredBackupWindow() const{ return m_preferredBackupWindow; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled.</p> <p>Not applicable. The daily time range for creating
     * automated backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format hh24:mi-hh24:mi</p> </li> <li> <p>Must be in Universal Time Coordinated
     * (UTC)</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window</p> </li> <li> <p>Must be at least 30 minutes</p> </li> </ul>
     */
    inline bool PreferredBackupWindowHasBeenSet() const { return m_preferredBackupWindowHasBeenSet; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled.</p> <p>Not applicable. The daily time range for creating
     * automated backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format hh24:mi-hh24:mi</p> </li> <li> <p>Must be in Universal Time Coordinated
     * (UTC)</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window</p> </li> <li> <p>Must be at least 30 minutes</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const Aws::String& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = value; }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled.</p> <p>Not applicable. The daily time range for creating
     * automated backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format hh24:mi-hh24:mi</p> </li> <li> <p>Must be in Universal Time Coordinated
     * (UTC)</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window</p> </li> <li> <p>Must be at least 30 minutes</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(Aws::String&& value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow = std::move(value); }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled.</p> <p>Not applicable. The daily time range for creating
     * automated backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format hh24:mi-hh24:mi</p> </li> <li> <p>Must be in Universal Time Coordinated
     * (UTC)</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window</p> </li> <li> <p>Must be at least 30 minutes</p> </li> </ul>
     */
    inline void SetPreferredBackupWindow(const char* value) { m_preferredBackupWindowHasBeenSet = true; m_preferredBackupWindow.assign(value); }

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled.</p> <p>Not applicable. The daily time range for creating
     * automated backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format hh24:mi-hh24:mi</p> </li> <li> <p>Must be in Universal Time Coordinated
     * (UTC)</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window</p> </li> <li> <p>Must be at least 30 minutes</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const Aws::String& value) { SetPreferredBackupWindow(value); return *this;}

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled.</p> <p>Not applicable. The daily time range for creating
     * automated backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format hh24:mi-hh24:mi</p> </li> <li> <p>Must be in Universal Time Coordinated
     * (UTC)</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window</p> </li> <li> <p>Must be at least 30 minutes</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(Aws::String&& value) { SetPreferredBackupWindow(std::move(value)); return *this;}

    /**
     * <p> The daily time range during which automated backups are created if automated
     * backups are enabled.</p> <p>Not applicable. The daily time range for creating
     * automated backups is managed by the DB cluster. For more information, see
     * <a>ModifyDBCluster</a>.</p> <p>Constraints:</p> <ul> <li> <p>Must be in the
     * format hh24:mi-hh24:mi</p> </li> <li> <p>Must be in Universal Time Coordinated
     * (UTC)</p> </li> <li> <p>Must not conflict with the preferred maintenance
     * window</p> </li> <li> <p>Must be at least 30 minutes</p> </li> </ul>
     */
    inline ModifyDBInstanceRequest& WithPreferredBackupWindow(const char* value) { SetPreferredBackupWindow(value); return *this;}


    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
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
     * which might result in an outage. Changing this parameter doesn't result in an
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
    inline bool PreferredMaintenanceWindowHasBeenSet() const { return m_preferredMaintenanceWindowHasBeenSet; }

    /**
     * <p>The weekly time range (in UTC) during which system maintenance can occur,
     * which might result in an outage. Changing this parameter doesn't result in an
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
     * which might result in an outage. Changing this parameter doesn't result in an
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
     * which might result in an outage. Changing this parameter doesn't result in an
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
     * which might result in an outage. Changing this parameter doesn't result in an
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
     * which might result in an outage. Changing this parameter doesn't result in an
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
     * which might result in an outage. Changing this parameter doesn't result in an
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
     * parameter doesn't result in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. Changing this
     * parameter doesn't result in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p>
     */
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. Changing this
     * parameter doesn't result in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p>
     */
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }

    /**
     * <p>Specifies if the DB instance is a Multi-AZ deployment. Changing this
     * parameter doesn't result in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p>
     */
    inline ModifyDBInstanceRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}


    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p>
     */
    inline ModifyDBInstanceRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p>
     */
    inline ModifyDBInstanceRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p> The version number of the database engine to upgrade to. Changing this
     * parameter results in an outage and the change is applied during the next
     * maintenance window unless the <code>ApplyImmediately</code> parameter is set to
     * <code>true</code> for this request.</p> <p>For major version upgrades, if a
     * nondefault DB parameter group is currently in use, a new DB parameter group in
     * the DB parameter group family for the new engine version must be specified. The
     * new DB parameter group can be the default for that DB parameter group
     * family.</p>
     */
    inline ModifyDBInstanceRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * doesn't result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the EngineVersion parameter that is a different major version than
     * the DB instance's current version.</p>
     */
    inline bool GetAllowMajorVersionUpgrade() const{ return m_allowMajorVersionUpgrade; }

    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * doesn't result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the EngineVersion parameter that is a different major version than
     * the DB instance's current version.</p>
     */
    inline bool AllowMajorVersionUpgradeHasBeenSet() const { return m_allowMajorVersionUpgradeHasBeenSet; }

    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * doesn't result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the EngineVersion parameter that is a different major version than
     * the DB instance's current version.</p>
     */
    inline void SetAllowMajorVersionUpgrade(bool value) { m_allowMajorVersionUpgradeHasBeenSet = true; m_allowMajorVersionUpgrade = value; }

    /**
     * <p>Indicates that major version upgrades are allowed. Changing this parameter
     * doesn't result in an outage and the change is asynchronously applied as soon as
     * possible.</p> <p>Constraints: This parameter must be set to true when specifying
     * a value for the EngineVersion parameter that is a different major version than
     * the DB instance's current version.</p>
     */
    inline ModifyDBInstanceRequest& WithAllowMajorVersionUpgrade(bool value) { SetAllowMajorVersionUpgrade(value); return *this;}


    /**
     * <p> Indicates that minor version upgrades are applied automatically to the DB
     * instance during the maintenance window. Changing this parameter doesn't result
     * in an outage except in the following case and the change is asynchronously
     * applied as soon as possible. An outage will result if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and Neptune has enabled auto patching for that engine version.</p>
     */
    inline bool GetAutoMinorVersionUpgrade() const{ return m_autoMinorVersionUpgrade; }

    /**
     * <p> Indicates that minor version upgrades are applied automatically to the DB
     * instance during the maintenance window. Changing this parameter doesn't result
     * in an outage except in the following case and the change is asynchronously
     * applied as soon as possible. An outage will result if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and Neptune has enabled auto patching for that engine version.</p>
     */
    inline bool AutoMinorVersionUpgradeHasBeenSet() const { return m_autoMinorVersionUpgradeHasBeenSet; }

    /**
     * <p> Indicates that minor version upgrades are applied automatically to the DB
     * instance during the maintenance window. Changing this parameter doesn't result
     * in an outage except in the following case and the change is asynchronously
     * applied as soon as possible. An outage will result if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and Neptune has enabled auto patching for that engine version.</p>
     */
    inline void SetAutoMinorVersionUpgrade(bool value) { m_autoMinorVersionUpgradeHasBeenSet = true; m_autoMinorVersionUpgrade = value; }

    /**
     * <p> Indicates that minor version upgrades are applied automatically to the DB
     * instance during the maintenance window. Changing this parameter doesn't result
     * in an outage except in the following case and the change is asynchronously
     * applied as soon as possible. An outage will result if this parameter is set to
     * <code>true</code> during the maintenance window, and a newer minor version is
     * available, and Neptune has enabled auto patching for that engine version.</p>
     */
    inline ModifyDBInstanceRequest& WithAutoMinorVersionUpgrade(bool value) { SetAutoMinorVersionUpgrade(value); return *this;}


    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }

    /**
     * <p>Not supported.</p>
     */
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }

    /**
     * <p>Not supported.</p>
     */
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}


    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the
     * instance.</p> <p>Changing this setting doesn't result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline int GetIops() const{ return m_iops; }

    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the
     * instance.</p> <p>Changing this setting doesn't result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline bool IopsHasBeenSet() const { return m_iopsHasBeenSet; }

    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the
     * instance.</p> <p>Changing this setting doesn't result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline void SetIops(int value) { m_iopsHasBeenSet = true; m_iops = value; }

    /**
     * <p>The new Provisioned IOPS (I/O operations per second) value for the
     * instance.</p> <p>Changing this setting doesn't result in an outage and the
     * change is applied during the next maintenance window unless the
     * <code>ApplyImmediately</code> parameter is set to <code>true</code> for this
     * request.</p> <p>Default: Uses existing setting</p>
     */
    inline ModifyDBInstanceRequest& WithIops(int value) { SetIops(value); return *this;}


    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter doesn't result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline const Aws::String& GetOptionGroupName() const{ return m_optionGroupName; }

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter doesn't result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter doesn't result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const Aws::String& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = value; }

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter doesn't result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(Aws::String&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::move(value); }

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter doesn't result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline void SetOptionGroupName(const char* value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName.assign(value); }

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter doesn't result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline ModifyDBInstanceRequest& WithOptionGroupName(const Aws::String& value) { SetOptionGroupName(value); return *this;}

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter doesn't result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted.</p>
     * <p>Permanent options, such as the TDE option for Oracle Advanced Security TDE,
     * can't be removed from an option group, and that option group can't be removed
     * from a DB instance once it is associated with a DB instance</p>
     */
    inline ModifyDBInstanceRequest& WithOptionGroupName(Aws::String&& value) { SetOptionGroupName(std::move(value)); return *this;}

    /**
     * <p> Indicates that the DB instance should be associated with the specified
     * option group. Changing this parameter doesn't result in an outage except in the
     * following case and the change is applied during the next maintenance window
     * unless the <code>ApplyImmediately</code> parameter is set to <code>true</code>
     * for this request. If the parameter change results in an option group that
     * enables OEM, this change can cause a brief (sub-second) period during which new
     * connections are rejected but existing connections are not interrupted.</p>
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
     * false. This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul>
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
     * false. This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline bool NewDBInstanceIdentifierHasBeenSet() const { return m_newDBInstanceIdentifierHasBeenSet; }

    /**
     * <p> The new DB instance identifier for the DB instance when renaming a DB
     * instance. When you change the DB instance identifier, an instance reboot will
     * occur immediately if you set <code>Apply Immediately</code> to true, or will
     * occur during the next maintenance window if <code>Apply Immediately</code> to
     * false. This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul>
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
     * false. This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul>
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
     * false. This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul>
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
     * false. This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul>
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
     * false. This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul>
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
     * false. This value is stored as a lowercase string.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must contain from 1 to 63 letters, numbers, or hyphens.</p> </li> <li>
     * <p>The first character must be a letter.</p> </li> <li> <p>Cannot end with a
     * hyphen or contain two consecutive hyphens.</p> </li> </ul> <p>Example:
     * <code>mydbinstance</code> </p>
     */
    inline ModifyDBInstanceRequest& WithNewDBInstanceIdentifier(const char* value) { SetNewDBInstanceIdentifier(value); return *this;}


    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Not supported.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Not supported.</p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Not supported.</p>
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
    inline bool CACertificateIdentifierHasBeenSet() const { return m_cACertificateIdentifierHasBeenSet; }

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
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Not supported.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Not supported.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Not supported.</p>
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
    inline bool CopyTagsToSnapshotHasBeenSet() const { return m_copyTagsToSnapshotHasBeenSet; }

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
    inline bool MonitoringIntervalHasBeenSet() const { return m_monitoringIntervalHasBeenSet; }

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
     * Default: <code>8182</code> </p>
     */
    inline int GetDBPortNumber() const{ return m_dBPortNumber; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>The value
     * of the <code>DBPortNumber</code> parameter must not match any of the port values
     * specified for options in the option group for the DB instance.</p> <p>Your
     * database will restart when you change the <code>DBPortNumber</code> value
     * regardless of the value of the <code>ApplyImmediately</code> parameter.</p> <p>
     * Default: <code>8182</code> </p>
     */
    inline bool DBPortNumberHasBeenSet() const { return m_dBPortNumberHasBeenSet; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>The value
     * of the <code>DBPortNumber</code> parameter must not match any of the port values
     * specified for options in the option group for the DB instance.</p> <p>Your
     * database will restart when you change the <code>DBPortNumber</code> value
     * regardless of the value of the <code>ApplyImmediately</code> parameter.</p> <p>
     * Default: <code>8182</code> </p>
     */
    inline void SetDBPortNumber(int value) { m_dBPortNumberHasBeenSet = true; m_dBPortNumber = value; }

    /**
     * <p>The port number on which the database accepts connections.</p> <p>The value
     * of the <code>DBPortNumber</code> parameter must not match any of the port values
     * specified for options in the option group for the DB instance.</p> <p>Your
     * database will restart when you change the <code>DBPortNumber</code> value
     * regardless of the value of the <code>ApplyImmediately</code> parameter.</p> <p>
     * Default: <code>8182</code> </p>
     */
    inline ModifyDBInstanceRequest& WithDBPortNumber(int value) { SetDBPortNumber(value); return *this;}


    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline const Aws::String& GetMonitoringRoleArn() const{ return m_monitoringRoleArn; }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline bool MonitoringRoleArnHasBeenSet() const { return m_monitoringRoleArnHasBeenSet; }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const Aws::String& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = value; }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(Aws::String&& value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn = std::move(value); }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline void SetMonitoringRoleArn(const char* value) { m_monitoringRoleArnHasBeenSet = true; m_monitoringRoleArn.assign(value); }

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(const Aws::String& value) { SetMonitoringRoleArn(value); return *this;}

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(Aws::String&& value) { SetMonitoringRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the IAM role that permits Neptune to send enhanced monitoring
     * metrics to Amazon CloudWatch Logs. For example,
     * <code>arn:aws:iam:123456789012:role/emaccess</code>.</p> <p>If
     * <code>MonitoringInterval</code> is set to a value other than 0, then you must
     * supply a <code>MonitoringRoleArn</code> value.</p>
     */
    inline ModifyDBInstanceRequest& WithMonitoringRoleArn(const char* value) { SetMonitoringRoleArn(value); return *this;}


    /**
     * <p>Not supported</p>
     */
    inline const Aws::String& GetDomainIAMRoleName() const{ return m_domainIAMRoleName; }

    /**
     * <p>Not supported</p>
     */
    inline bool DomainIAMRoleNameHasBeenSet() const { return m_domainIAMRoleNameHasBeenSet; }

    /**
     * <p>Not supported</p>
     */
    inline void SetDomainIAMRoleName(const Aws::String& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = value; }

    /**
     * <p>Not supported</p>
     */
    inline void SetDomainIAMRoleName(Aws::String&& value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName = std::move(value); }

    /**
     * <p>Not supported</p>
     */
    inline void SetDomainIAMRoleName(const char* value) { m_domainIAMRoleNameHasBeenSet = true; m_domainIAMRoleName.assign(value); }

    /**
     * <p>Not supported</p>
     */
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(const Aws::String& value) { SetDomainIAMRoleName(value); return *this;}

    /**
     * <p>Not supported</p>
     */
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(Aws::String&& value) { SetDomainIAMRoleName(std::move(value)); return *this;}

    /**
     * <p>Not supported</p>
     */
    inline ModifyDBInstanceRequest& WithDomainIAMRoleName(const char* value) { SetDomainIAMRoleName(value); return *this;}


    /**
     * <p>A value that specifies the order in which a Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance.</p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline int GetPromotionTier() const{ return m_promotionTier; }

    /**
     * <p>A value that specifies the order in which a Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance.</p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline bool PromotionTierHasBeenSet() const { return m_promotionTierHasBeenSet; }

    /**
     * <p>A value that specifies the order in which a Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance.</p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline void SetPromotionTier(int value) { m_promotionTierHasBeenSet = true; m_promotionTier = value; }

    /**
     * <p>A value that specifies the order in which a Read Replica is promoted to the
     * primary instance after a failure of the existing primary instance.</p>
     * <p>Default: 1</p> <p>Valid Values: 0 - 15</p>
     */
    inline ModifyDBInstanceRequest& WithPromotionTier(int value) { SetPromotionTier(value); return *this;}


    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <p>Not applicable. Mapping
     * AWS IAM accounts to database accounts is managed by the DB cluster. For more
     * information, see <a>ModifyDBCluster</a>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool GetEnableIAMDatabaseAuthentication() const{ return m_enableIAMDatabaseAuthentication; }

    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <p>Not applicable. Mapping
     * AWS IAM accounts to database accounts is managed by the DB cluster. For more
     * information, see <a>ModifyDBCluster</a>.</p> <p>Default: <code>false</code> </p>
     */
    inline bool EnableIAMDatabaseAuthenticationHasBeenSet() const { return m_enableIAMDatabaseAuthenticationHasBeenSet; }

    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <p>Not applicable. Mapping
     * AWS IAM accounts to database accounts is managed by the DB cluster. For more
     * information, see <a>ModifyDBCluster</a>.</p> <p>Default: <code>false</code> </p>
     */
    inline void SetEnableIAMDatabaseAuthentication(bool value) { m_enableIAMDatabaseAuthenticationHasBeenSet = true; m_enableIAMDatabaseAuthentication = value; }

    /**
     * <p>True to enable mapping of AWS Identity and Access Management (IAM) accounts
     * to database accounts, and otherwise false.</p> <p>You can enable IAM database
     * authentication for the following database engines</p> <p>Not applicable. Mapping
     * AWS IAM accounts to database accounts is managed by the DB cluster. For more
     * information, see <a>ModifyDBCluster</a>.</p> <p>Default: <code>false</code> </p>
     */
    inline ModifyDBInstanceRequest& WithEnableIAMDatabaseAuthentication(bool value) { SetEnableIAMDatabaseAuthentication(value); return *this;}


    /**
     * <p>Not supported.</p>
     */
    inline bool GetEnablePerformanceInsights() const{ return m_enablePerformanceInsights; }

    /**
     * <p>Not supported.</p>
     */
    inline bool EnablePerformanceInsightsHasBeenSet() const { return m_enablePerformanceInsightsHasBeenSet; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetEnablePerformanceInsights(bool value) { m_enablePerformanceInsightsHasBeenSet = true; m_enablePerformanceInsights = value; }

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithEnablePerformanceInsights(bool value) { SetEnablePerformanceInsights(value); return *this;}


    /**
     * <p>Not supported.</p>
     */
    inline const Aws::String& GetPerformanceInsightsKMSKeyId() const{ return m_performanceInsightsKMSKeyId; }

    /**
     * <p>Not supported.</p>
     */
    inline bool PerformanceInsightsKMSKeyIdHasBeenSet() const { return m_performanceInsightsKMSKeyIdHasBeenSet; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const Aws::String& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = value; }

    /**
     * <p>Not supported.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(Aws::String&& value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId = std::move(value); }

    /**
     * <p>Not supported.</p>
     */
    inline void SetPerformanceInsightsKMSKeyId(const char* value) { m_performanceInsightsKMSKeyIdHasBeenSet = true; m_performanceInsightsKMSKeyId.assign(value); }

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(const Aws::String& value) { SetPerformanceInsightsKMSKeyId(value); return *this;}

    /**
     * <p>Not supported.</p>
     */
    inline ModifyDBInstanceRequest& WithPerformanceInsightsKMSKeyId(Aws::String&& value) { SetPerformanceInsightsKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>Not supported.</p>
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
    inline bool CloudwatchLogsExportConfigurationHasBeenSet() const { return m_cloudwatchLogsExportConfigurationHasBeenSet; }

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
} // namespace Neptune
} // namespace Aws
