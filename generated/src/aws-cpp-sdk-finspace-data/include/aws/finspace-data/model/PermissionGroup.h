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
    AWS_FINSPACEDATA_API PermissionGroup();
    AWS_FINSPACEDATA_API PermissionGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API PermissionGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier for the permission group.</p>
     */
    inline const Aws::String& GetPermissionGroupId() const{ return m_permissionGroupId; }
    inline bool PermissionGroupIdHasBeenSet() const { return m_permissionGroupIdHasBeenSet; }
    inline void SetPermissionGroupId(const Aws::String& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = value; }
    inline void SetPermissionGroupId(Aws::String&& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = std::move(value); }
    inline void SetPermissionGroupId(const char* value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId.assign(value); }
    inline PermissionGroup& WithPermissionGroupId(const Aws::String& value) { SetPermissionGroupId(value); return *this;}
    inline PermissionGroup& WithPermissionGroupId(Aws::String&& value) { SetPermissionGroupId(std::move(value)); return *this;}
    inline PermissionGroup& WithPermissionGroupId(const char* value) { SetPermissionGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the permission group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PermissionGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PermissionGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PermissionGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A brief description for the permission group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PermissionGroup& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PermissionGroup& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PermissionGroup& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline const Aws::Vector<ApplicationPermission>& GetApplicationPermissions() const{ return m_applicationPermissions; }
    inline bool ApplicationPermissionsHasBeenSet() const { return m_applicationPermissionsHasBeenSet; }
    inline void SetApplicationPermissions(const Aws::Vector<ApplicationPermission>& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions = value; }
    inline void SetApplicationPermissions(Aws::Vector<ApplicationPermission>&& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions = std::move(value); }
    inline PermissionGroup& WithApplicationPermissions(const Aws::Vector<ApplicationPermission>& value) { SetApplicationPermissions(value); return *this;}
    inline PermissionGroup& WithApplicationPermissions(Aws::Vector<ApplicationPermission>&& value) { SetApplicationPermissions(std::move(value)); return *this;}
    inline PermissionGroup& AddApplicationPermissions(const ApplicationPermission& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions.push_back(value); return *this; }
    inline PermissionGroup& AddApplicationPermissions(ApplicationPermission&& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the group was created in FinSpace. The value is
     * determined as epoch time in milliseconds. </p>
     */
    inline long long GetCreateTime() const{ return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    inline void SetCreateTime(long long value) { m_createTimeHasBeenSet = true; m_createTime = value; }
    inline PermissionGroup& WithCreateTime(long long value) { SetCreateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the last time the permission group was updated. The value is
     * determined as epoch time in milliseconds. </p>
     */
    inline long long GetLastModifiedTime() const{ return m_lastModifiedTime; }
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
    inline const PermissionGroupMembershipStatus& GetMembershipStatus() const{ return m_membershipStatus; }
    inline bool MembershipStatusHasBeenSet() const { return m_membershipStatusHasBeenSet; }
    inline void SetMembershipStatus(const PermissionGroupMembershipStatus& value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = value; }
    inline void SetMembershipStatus(PermissionGroupMembershipStatus&& value) { m_membershipStatusHasBeenSet = true; m_membershipStatus = std::move(value); }
    inline PermissionGroup& WithMembershipStatus(const PermissionGroupMembershipStatus& value) { SetMembershipStatus(value); return *this;}
    inline PermissionGroup& WithMembershipStatus(PermissionGroupMembershipStatus&& value) { SetMembershipStatus(std::move(value)); return *this;}
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

    long long m_createTime;
    bool m_createTimeHasBeenSet = false;

    long long m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    PermissionGroupMembershipStatus m_membershipStatus;
    bool m_membershipStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
