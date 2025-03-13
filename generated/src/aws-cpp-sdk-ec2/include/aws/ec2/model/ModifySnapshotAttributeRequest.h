/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/ec2/model/SnapshotAttributeName.h>
#include <aws/ec2/model/CreateVolumePermissionModifications.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/OperationType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifySnapshotAttributeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifySnapshotAttributeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySnapshotAttribute"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The snapshot attribute to modify. Only volume creation permissions can be
     * modified.</p>
     */
    inline SnapshotAttributeName GetAttribute() const { return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(SnapshotAttributeName value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline ModifySnapshotAttributeRequest& WithAttribute(SnapshotAttributeName value) { SetAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON representation of the snapshot attribute modification.</p>
     */
    inline const CreateVolumePermissionModifications& GetCreateVolumePermission() const { return m_createVolumePermission; }
    inline bool CreateVolumePermissionHasBeenSet() const { return m_createVolumePermissionHasBeenSet; }
    template<typename CreateVolumePermissionT = CreateVolumePermissionModifications>
    void SetCreateVolumePermission(CreateVolumePermissionT&& value) { m_createVolumePermissionHasBeenSet = true; m_createVolumePermission = std::forward<CreateVolumePermissionT>(value); }
    template<typename CreateVolumePermissionT = CreateVolumePermissionModifications>
    ModifySnapshotAttributeRequest& WithCreateVolumePermission(CreateVolumePermissionT&& value) { SetCreateVolumePermission(std::forward<CreateVolumePermissionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The group to modify for the snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupNames() const { return m_groupNames; }
    inline bool GroupNamesHasBeenSet() const { return m_groupNamesHasBeenSet; }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    void SetGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames = std::forward<GroupNamesT>(value); }
    template<typename GroupNamesT = Aws::Vector<Aws::String>>
    ModifySnapshotAttributeRequest& WithGroupNames(GroupNamesT&& value) { SetGroupNames(std::forward<GroupNamesT>(value)); return *this;}
    template<typename GroupNamesT = Aws::String>
    ModifySnapshotAttributeRequest& AddGroupNames(GroupNamesT&& value) { m_groupNamesHasBeenSet = true; m_groupNames.emplace_back(std::forward<GroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of operation to perform to the attribute.</p>
     */
    inline OperationType GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(OperationType value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline ModifySnapshotAttributeRequest& WithOperationType(OperationType value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    ModifySnapshotAttributeRequest& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID to modify for the snapshot.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    void SetUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds = std::forward<UserIdsT>(value); }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    ModifySnapshotAttributeRequest& WithUserIds(UserIdsT&& value) { SetUserIds(std::forward<UserIdsT>(value)); return *this;}
    template<typename UserIdsT = Aws::String>
    ModifySnapshotAttributeRequest& AddUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds.emplace_back(std::forward<UserIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifySnapshotAttributeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    SnapshotAttributeName m_attribute{SnapshotAttributeName::NOT_SET};
    bool m_attributeHasBeenSet = false;

    CreateVolumePermissionModifications m_createVolumePermission;
    bool m_createVolumePermissionHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupNames;
    bool m_groupNamesHasBeenSet = false;

    OperationType m_operationType{OperationType::NOT_SET};
    bool m_operationTypeHasBeenSet = false;

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
