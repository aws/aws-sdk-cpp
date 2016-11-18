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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SnapshotAttributeName.h>
#include <aws/ec2/model/OperationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/CreateVolumePermissionModifications.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifySnapshotAttribute.</p>
   */
  class AWS_EC2_API ModifySnapshotAttributeRequest : public EC2Request
  {
  public:
    ModifySnapshotAttributeRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifySnapshotAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The snapshot attribute to modify.</p> <note> <p>Only volume creation
     * permissions may be modified at the customer level.</p> </note>
     */
    inline const SnapshotAttributeName& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The snapshot attribute to modify.</p> <note> <p>Only volume creation
     * permissions may be modified at the customer level.</p> </note>
     */
    inline void SetAttribute(const SnapshotAttributeName& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The snapshot attribute to modify.</p> <note> <p>Only volume creation
     * permissions may be modified at the customer level.</p> </note>
     */
    inline void SetAttribute(SnapshotAttributeName&& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The snapshot attribute to modify.</p> <note> <p>Only volume creation
     * permissions may be modified at the customer level.</p> </note>
     */
    inline ModifySnapshotAttributeRequest& WithAttribute(const SnapshotAttributeName& value) { SetAttribute(value); return *this;}

    /**
     * <p>The snapshot attribute to modify.</p> <note> <p>Only volume creation
     * permissions may be modified at the customer level.</p> </note>
     */
    inline ModifySnapshotAttributeRequest& WithAttribute(SnapshotAttributeName&& value) { SetAttribute(value); return *this;}

    /**
     * <p>The type of operation to perform to the attribute.</p>
     */
    inline const OperationType& GetOperationType() const{ return m_operationType; }

    /**
     * <p>The type of operation to perform to the attribute.</p>
     */
    inline void SetOperationType(const OperationType& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * <p>The type of operation to perform to the attribute.</p>
     */
    inline void SetOperationType(OperationType&& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * <p>The type of operation to perform to the attribute.</p>
     */
    inline ModifySnapshotAttributeRequest& WithOperationType(const OperationType& value) { SetOperationType(value); return *this;}

    /**
     * <p>The type of operation to perform to the attribute.</p>
     */
    inline ModifySnapshotAttributeRequest& WithOperationType(OperationType&& value) { SetOperationType(value); return *this;}

    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const{ return m_userIds; }

    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline void SetUserIds(const Aws::Vector<Aws::String>& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline void SetUserIds(Aws::Vector<Aws::String>&& value) { m_userIdsHasBeenSet = true; m_userIds = value; }

    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& WithUserIds(const Aws::Vector<Aws::String>& value) { SetUserIds(value); return *this;}

    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& WithUserIds(Aws::Vector<Aws::String>&& value) { SetUserIds(value); return *this;}

    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& AddUserIds(const Aws::String& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& AddUserIds(Aws::String&& value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& AddUserIds(const char* value) { m_userIdsHasBeenSet = true; m_userIds.push_back(value); return *this; }

    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const{ return m_groupNames; }

    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline void SetGroupNames(const Aws::Vector<Aws::String>& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }

    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline void SetGroupNames(Aws::Vector<Aws::String>&& value) { m_groupNamesHasBeenSet = true; m_groupNames = value; }

    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& WithGroupNames(const Aws::Vector<Aws::String>& value) { SetGroupNames(value); return *this;}

    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& WithGroupNames(Aws::Vector<Aws::String>&& value) { SetGroupNames(value); return *this;}

    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& AddGroupNames(const Aws::String& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& AddGroupNames(Aws::String&& value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline ModifySnapshotAttributeRequest& AddGroupNames(const char* value) { m_groupNamesHasBeenSet = true; m_groupNames.push_back(value); return *this; }

    /**
     * <p>A JSON representation of the snapshot attribute modification.</p>
     */
    inline const CreateVolumePermissionModifications& GetCreateVolumePermission() const{ return m_createVolumePermission; }

    /**
     * <p>A JSON representation of the snapshot attribute modification.</p>
     */
    inline void SetCreateVolumePermission(const CreateVolumePermissionModifications& value) { m_createVolumePermissionHasBeenSet = true; m_createVolumePermission = value; }

    /**
     * <p>A JSON representation of the snapshot attribute modification.</p>
     */
    inline void SetCreateVolumePermission(CreateVolumePermissionModifications&& value) { m_createVolumePermissionHasBeenSet = true; m_createVolumePermission = value; }

    /**
     * <p>A JSON representation of the snapshot attribute modification.</p>
     */
    inline ModifySnapshotAttributeRequest& WithCreateVolumePermission(const CreateVolumePermissionModifications& value) { SetCreateVolumePermission(value); return *this;}

    /**
     * <p>A JSON representation of the snapshot attribute modification.</p>
     */
    inline ModifySnapshotAttributeRequest& WithCreateVolumePermission(CreateVolumePermissionModifications&& value) { SetCreateVolumePermission(value); return *this;}

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet;
    SnapshotAttributeName m_attribute;
    bool m_attributeHasBeenSet;
    OperationType m_operationType;
    bool m_operationTypeHasBeenSet;
    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet;
    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet;
    CreateVolumePermissionModifications m_createVolumePermission;
    bool m_createVolumePermissionHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
