/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/finspace-data/FinSpaceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace-data/model/ApplicationPermission.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FinSpaceData
{
namespace Model
{

  /**
   */
  class UpdatePermissionGroupRequest : public FinSpaceDataRequest
  {
  public:
    AWS_FINSPACEDATA_API UpdatePermissionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePermissionGroup"; }

    AWS_FINSPACEDATA_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier for the permission group to update.</p>
     */
    inline const Aws::String& GetPermissionGroupId() const{ return m_permissionGroupId; }

    /**
     * <p>The unique identifier for the permission group to update.</p>
     */
    inline bool PermissionGroupIdHasBeenSet() const { return m_permissionGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier for the permission group to update.</p>
     */
    inline void SetPermissionGroupId(const Aws::String& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = value; }

    /**
     * <p>The unique identifier for the permission group to update.</p>
     */
    inline void SetPermissionGroupId(Aws::String&& value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId = std::move(value); }

    /**
     * <p>The unique identifier for the permission group to update.</p>
     */
    inline void SetPermissionGroupId(const char* value) { m_permissionGroupIdHasBeenSet = true; m_permissionGroupId.assign(value); }

    /**
     * <p>The unique identifier for the permission group to update.</p>
     */
    inline UpdatePermissionGroupRequest& WithPermissionGroupId(const Aws::String& value) { SetPermissionGroupId(value); return *this;}

    /**
     * <p>The unique identifier for the permission group to update.</p>
     */
    inline UpdatePermissionGroupRequest& WithPermissionGroupId(Aws::String&& value) { SetPermissionGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the permission group to update.</p>
     */
    inline UpdatePermissionGroupRequest& WithPermissionGroupId(const char* value) { SetPermissionGroupId(value); return *this;}


    /**
     * <p>The name of the permission group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the permission group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the permission group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the permission group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the permission group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the permission group.</p>
     */
    inline UpdatePermissionGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the permission group.</p>
     */
    inline UpdatePermissionGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the permission group.</p>
     */
    inline UpdatePermissionGroupRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A brief description for the permission group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description for the permission group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description for the permission group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description for the permission group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description for the permission group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description for the permission group.</p>
     */
    inline UpdatePermissionGroupRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description for the permission group.</p>
     */
    inline UpdatePermissionGroupRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description for the permission group.</p>
     */
    inline UpdatePermissionGroupRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The permissions that are granted to a specific group for accessing the
     * FinSpace application.</p>  <p>When assigning application permissions,
     * be aware that the permission <code>ManageUsersAndGroups</code> allows users to
     * grant themselves or others access to any functionality in their FinSpace
     * environment's application. It should only be granted to trusted users.</p>
     *  <ul> <li> <p> <code>CreateDataset</code> – Group members can create
     * new datasets.</p> </li> <li> <p> <code>ManageClusters</code> – Group members can
     * manage Apache Spark clusters from FinSpace notebooks.</p> </li> <li> <p>
     * <code>ManageUsersAndGroups</code> – Group members can manage users and
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

    /**
     * <p>The permissions that are granted to a specific group for accessing the
     * FinSpace application.</p>  <p>When assigning application permissions,
     * be aware that the permission <code>ManageUsersAndGroups</code> allows users to
     * grant themselves or others access to any functionality in their FinSpace
     * environment's application. It should only be granted to trusted users.</p>
     *  <ul> <li> <p> <code>CreateDataset</code> – Group members can create
     * new datasets.</p> </li> <li> <p> <code>ManageClusters</code> – Group members can
     * manage Apache Spark clusters from FinSpace notebooks.</p> </li> <li> <p>
     * <code>ManageUsersAndGroups</code> – Group members can manage users and
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
    inline bool ApplicationPermissionsHasBeenSet() const { return m_applicationPermissionsHasBeenSet; }

    /**
     * <p>The permissions that are granted to a specific group for accessing the
     * FinSpace application.</p>  <p>When assigning application permissions,
     * be aware that the permission <code>ManageUsersAndGroups</code> allows users to
     * grant themselves or others access to any functionality in their FinSpace
     * environment's application. It should only be granted to trusted users.</p>
     *  <ul> <li> <p> <code>CreateDataset</code> – Group members can create
     * new datasets.</p> </li> <li> <p> <code>ManageClusters</code> – Group members can
     * manage Apache Spark clusters from FinSpace notebooks.</p> </li> <li> <p>
     * <code>ManageUsersAndGroups</code> – Group members can manage users and
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
    inline void SetApplicationPermissions(const Aws::Vector<ApplicationPermission>& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions = value; }

    /**
     * <p>The permissions that are granted to a specific group for accessing the
     * FinSpace application.</p>  <p>When assigning application permissions,
     * be aware that the permission <code>ManageUsersAndGroups</code> allows users to
     * grant themselves or others access to any functionality in their FinSpace
     * environment's application. It should only be granted to trusted users.</p>
     *  <ul> <li> <p> <code>CreateDataset</code> – Group members can create
     * new datasets.</p> </li> <li> <p> <code>ManageClusters</code> – Group members can
     * manage Apache Spark clusters from FinSpace notebooks.</p> </li> <li> <p>
     * <code>ManageUsersAndGroups</code> – Group members can manage users and
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
    inline void SetApplicationPermissions(Aws::Vector<ApplicationPermission>&& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions = std::move(value); }

    /**
     * <p>The permissions that are granted to a specific group for accessing the
     * FinSpace application.</p>  <p>When assigning application permissions,
     * be aware that the permission <code>ManageUsersAndGroups</code> allows users to
     * grant themselves or others access to any functionality in their FinSpace
     * environment's application. It should only be granted to trusted users.</p>
     *  <ul> <li> <p> <code>CreateDataset</code> – Group members can create
     * new datasets.</p> </li> <li> <p> <code>ManageClusters</code> – Group members can
     * manage Apache Spark clusters from FinSpace notebooks.</p> </li> <li> <p>
     * <code>ManageUsersAndGroups</code> – Group members can manage users and
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
    inline UpdatePermissionGroupRequest& WithApplicationPermissions(const Aws::Vector<ApplicationPermission>& value) { SetApplicationPermissions(value); return *this;}

    /**
     * <p>The permissions that are granted to a specific group for accessing the
     * FinSpace application.</p>  <p>When assigning application permissions,
     * be aware that the permission <code>ManageUsersAndGroups</code> allows users to
     * grant themselves or others access to any functionality in their FinSpace
     * environment's application. It should only be granted to trusted users.</p>
     *  <ul> <li> <p> <code>CreateDataset</code> – Group members can create
     * new datasets.</p> </li> <li> <p> <code>ManageClusters</code> – Group members can
     * manage Apache Spark clusters from FinSpace notebooks.</p> </li> <li> <p>
     * <code>ManageUsersAndGroups</code> – Group members can manage users and
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
    inline UpdatePermissionGroupRequest& WithApplicationPermissions(Aws::Vector<ApplicationPermission>&& value) { SetApplicationPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions that are granted to a specific group for accessing the
     * FinSpace application.</p>  <p>When assigning application permissions,
     * be aware that the permission <code>ManageUsersAndGroups</code> allows users to
     * grant themselves or others access to any functionality in their FinSpace
     * environment's application. It should only be granted to trusted users.</p>
     *  <ul> <li> <p> <code>CreateDataset</code> – Group members can create
     * new datasets.</p> </li> <li> <p> <code>ManageClusters</code> – Group members can
     * manage Apache Spark clusters from FinSpace notebooks.</p> </li> <li> <p>
     * <code>ManageUsersAndGroups</code> – Group members can manage users and
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
    inline UpdatePermissionGroupRequest& AddApplicationPermissions(const ApplicationPermission& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions.push_back(value); return *this; }

    /**
     * <p>The permissions that are granted to a specific group for accessing the
     * FinSpace application.</p>  <p>When assigning application permissions,
     * be aware that the permission <code>ManageUsersAndGroups</code> allows users to
     * grant themselves or others access to any functionality in their FinSpace
     * environment's application. It should only be granted to trusted users.</p>
     *  <ul> <li> <p> <code>CreateDataset</code> – Group members can create
     * new datasets.</p> </li> <li> <p> <code>ManageClusters</code> – Group members can
     * manage Apache Spark clusters from FinSpace notebooks.</p> </li> <li> <p>
     * <code>ManageUsersAndGroups</code> – Group members can manage users and
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
    inline UpdatePermissionGroupRequest& AddApplicationPermissions(ApplicationPermission&& value) { m_applicationPermissionsHasBeenSet = true; m_applicationPermissions.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdatePermissionGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdatePermissionGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures idempotency. This token expires in 10 minutes.</p>
     */
    inline UpdatePermissionGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_permissionGroupId;
    bool m_permissionGroupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ApplicationPermission> m_applicationPermissions;
    bool m_applicationPermissionsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
