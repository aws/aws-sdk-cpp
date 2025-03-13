/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace-data/model/PermissionGroupMembershipStatus.h>
#include <aws/finspace-data/model/ApplicationPermission.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p>The structure for a permission group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/PermissionGroup">AWS
   * API Reference</a></p>
   */
  class PermissionGroup
  {
  public:
    AWS_FINSPACEDATA_API PermissionGroup() = default;
    AWS_FINSPACEDATA_API PermissionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API PermissionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the permission group.</p>
     */
    inline const Aws::String& GetPermissionGroupId() const { return m_permissionGroupId; }
    inline bool PermissionGroupIdHasBeenSet() const { return m_permissionGroupIdHasBeenSet; }
    template<typename PermissionGroupIdT = Aws::String>
    void SetPermissionGroupId(PermissionGroupIdT&& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = std::forward<PermissionGroupIdT>(value); }
    template<typename PermissionGroupIdT = Aws::String>
    PermissionGroup& WithPermissionGroupId(PermissionGroupIdT&& value) { SetPermissionGroupId(std::forward<PermissionGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the permission group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PermissionGroup& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A brief description for the permission group.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PermissionGroup& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the permissions that are granted to a specific group for accessing
     * the FinSpace application.</p>  <p>When assigning application
     * permissions, be aware that the permission <code>ManageUsersAndGroups</code>
     * allows users to grant themselves or others access to any functionality in their
     * FinSpace environment's application. It should only be granted to trusted
     * users.</p>  <ul> <li> <p> <code>CreateDataset</code> – Group members
     * can create new datasets.</p> </li> <li> <p> <code>ManageClusters</code> – Group
     * members can manage Apache Spark clusters from FinSpace notebooks.</p> </li> <li>
     * <p> <code>ManageUsersAndGroups</code> – Group members can manage users and
     * permission groups. This is a privileged permission that allows users to grant
     * themselves or others access to any functionality in the application. It should
     * only be granted to trusted users.</p> </li> <li> <p>
     * <code>ManageAttributeSets</code> – Group members can manage attribute sets.</p>
     * </li> <li> <p> <code>ViewAuditData</code> – Group members can view audit
     * data.</p> </li> <li> <p> <code>AccessNotebooks</code> – Group members will have
     * access to FinSpace notebooks.</p> </li> <li> <p>
     * <code>GetTemporaryCredentials</code> – Group members can get temporary API
     * credentials.</p> </li> </ul>
     */
    inline const Aws::Vector<ApplicationPermission>& GetApplicationPermissions() const { return m_applicationPermissions; }
    inline bool ApplicationPermissionsHasBeenSet() const { return m_applicationPermissionsHasBeenSet; }
    template<typename ApplicationPermissionsT = Aws::Vector<ApplicationPermission>>
    void SetApplicationPermissions(ApplicationPermissionsT&& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions = std::forward<ApplicationPermissionsT>(value); }
    template<typename ApplicationPermissionsT = Aws::Vector<ApplicationPermission>>
    PermissionGroup& WithApplicationPermissions(ApplicationPermissionsT&& value) { SetApplicationPermissions(std::forward<ApplicationPermissionsT>(value)); return *this;}
    inline PermissionGroup& AddApplicationPermissions(ApplicationPermission value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the group was created in FinSpace. The value is
     * determined as epoch time in milliseconds. </p>
     */
    inline long long GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline PermissionGroup& WithCreateTime(long long value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the last time the permission group was updated. The value is
     * determined as epoch time in milliseconds. </p>
     */
    inline long long GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(long long value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline PermissionGroup& WithLastModifiedTime(long long value) { SetLastModifiedTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of the user within a permission group.</p> <ul> <li> <p>
     * <code>ADDITION_IN_PROGRESS</code> – The user is currently being added to the
     * permission group.</p> </li> <li> <p> <code>ADDITION_SUCCESS</code> – The user is
     * successfully added to the permission group.</p> </li> <li> <p>
     * <code>REMOVAL_IN_PROGRESS</code> – The user is currently being removed from the
     * permission group.</p> </li> </ul>
     */
    inline PermissionGroupMembershipStatus GetMembershipStatus() const { return m_membershipStatus; }
    inline bool MembershipStatusHasBeenSet() const { return m_membershipStatusHasBeenSet; }
    inline void SetMembershipStatus(PermissionGroupMembershipStatus value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = value; }
    inline PermissionGroup& WithMembershipStatus(PermissionGroupMembershipStatus value) { SetMembershipStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_permissionGroupId;
    bool m_permissionGroupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ApplicationPermission> m_applicationPermissions;
    bool m_applicationPermissionsHasBeenSet = false;

    long long m_createTime{0};
    bool m_createTimeHasBeenSet = false;

    long long m_lastModifiedTime{0};
    bool m_lastModifiedTimeHasBeenSet = false;

    PermissionGroupMembershipStatus m_membershipStatus{PermissionGroupMembershipStatus::NOT_SET};
    bool m_membershipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
