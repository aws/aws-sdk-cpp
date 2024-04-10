/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/connect/model/Application.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateSecurityProfileRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateSecurityProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityProfile"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The description of the security profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the security profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the security profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the security profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the security profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the security profile.</p>
     */
    inline UpdateSecurityProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the security profile.</p>
     */
    inline UpdateSecurityProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the security profile.</p>
     */
    inline UpdateSecurityProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline void SetPermissions(const Aws::Vector<Aws::String>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline void SetPermissions(Aws::Vector<Aws::String>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& WithPermissions(const Aws::Vector<Aws::String>& value) { SetPermissions(value); return *this;}

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& WithPermissions(Aws::Vector<Aws::String>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& AddPermissions(const Aws::String& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& AddPermissions(Aws::String&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }

    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline UpdateSecurityProfileRequest& AddPermissions(const char* value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }


    /**
     * <p>The identifier for the security profle.</p>
     */
    inline const Aws::String& GetSecurityProfileId() const{ return m_securityProfileId; }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline bool SecurityProfileIdHasBeenSet() const { return m_securityProfileIdHasBeenSet; }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline void SetSecurityProfileId(const Aws::String& value) { m_securityProfileIdHasBeenSet = true; m_securityProfileId = value; }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline void SetSecurityProfileId(Aws::String&& value) { m_securityProfileIdHasBeenSet = true; m_securityProfileId = std::move(value); }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline void SetSecurityProfileId(const char* value) { m_securityProfileIdHasBeenSet = true; m_securityProfileId.assign(value); }

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileId(const Aws::String& value) { SetSecurityProfileId(value); return *this;}

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileId(Aws::String&& value) { SetSecurityProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the security profle.</p>
     */
    inline UpdateSecurityProfileRequest& WithSecurityProfileId(const char* value) { SetSecurityProfileId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline UpdateSecurityProfileRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline UpdateSecurityProfileRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline UpdateSecurityProfileRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAllowedAccessControlTags() const{ return m_allowedAccessControlTags; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline bool AllowedAccessControlTagsHasBeenSet() const { return m_allowedAccessControlTagsHasBeenSet; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline void SetAllowedAccessControlTags(const Aws::Map<Aws::String, Aws::String>& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags = value; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline void SetAllowedAccessControlTags(Aws::Map<Aws::String, Aws::String>&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags = std::move(value); }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& WithAllowedAccessControlTags(const Aws::Map<Aws::String, Aws::String>& value) { SetAllowedAccessControlTags(value); return *this;}

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& WithAllowedAccessControlTags(Aws::Map<Aws::String, Aws::String>&& value) { SetAllowedAccessControlTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddAllowedAccessControlTags(const Aws::String& key, const Aws::String& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, value); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddAllowedAccessControlTags(Aws::String&& key, const Aws::String& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddAllowedAccessControlTags(const Aws::String& key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddAllowedAccessControlTags(Aws::String&& key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddAllowedAccessControlTags(const char* key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddAllowedAccessControlTags(Aws::String&& key, const char* value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddAllowedAccessControlTags(const char* key, const char* value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, value); return *this; }


    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagRestrictedResources() const{ return m_tagRestrictedResources; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline bool TagRestrictedResourcesHasBeenSet() const { return m_tagRestrictedResourcesHasBeenSet; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline void SetTagRestrictedResources(const Aws::Vector<Aws::String>& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources = value; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline void SetTagRestrictedResources(Aws::Vector<Aws::String>&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources = std::move(value); }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& WithTagRestrictedResources(const Aws::Vector<Aws::String>& value) { SetTagRestrictedResources(value); return *this;}

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& WithTagRestrictedResources(Aws::Vector<Aws::String>&& value) { SetTagRestrictedResources(std::move(value)); return *this;}

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddTagRestrictedResources(const Aws::String& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(value); return *this; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddTagRestrictedResources(Aws::String&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& AddTagRestrictedResources(const char* value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(value); return *this; }


    /**
     * <p>A list of the third-party application's metadata.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }

    /**
     * <p>A list of the third-party application's metadata.</p>
     */
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }

    /**
     * <p>A list of the third-party application's metadata.</p>
     */
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>A list of the third-party application's metadata.</p>
     */
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }

    /**
     * <p>A list of the third-party application's metadata.</p>
     */
    inline UpdateSecurityProfileRequest& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}

    /**
     * <p>A list of the third-party application's metadata.</p>
     */
    inline UpdateSecurityProfileRequest& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>A list of the third-party application's metadata.</p>
     */
    inline UpdateSecurityProfileRequest& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>A list of the third-party application's metadata.</p>
     */
    inline UpdateSecurityProfileRequest& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }


    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHierarchyRestrictedResources() const{ return m_hierarchyRestrictedResources; }

    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline bool HierarchyRestrictedResourcesHasBeenSet() const { return m_hierarchyRestrictedResourcesHasBeenSet; }

    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline void SetHierarchyRestrictedResources(const Aws::Vector<Aws::String>& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources = value; }

    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline void SetHierarchyRestrictedResources(Aws::Vector<Aws::String>&& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources = std::move(value); }

    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline UpdateSecurityProfileRequest& WithHierarchyRestrictedResources(const Aws::Vector<Aws::String>& value) { SetHierarchyRestrictedResources(value); return *this;}

    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline UpdateSecurityProfileRequest& WithHierarchyRestrictedResources(Aws::Vector<Aws::String>&& value) { SetHierarchyRestrictedResources(std::move(value)); return *this;}

    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline UpdateSecurityProfileRequest& AddHierarchyRestrictedResources(const Aws::String& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources.push_back(value); return *this; }

    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline UpdateSecurityProfileRequest& AddHierarchyRestrictedResources(Aws::String&& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline UpdateSecurityProfileRequest& AddHierarchyRestrictedResources(const char* value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources.push_back(value); return *this; }


    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline const Aws::String& GetAllowedAccessControlHierarchyGroupId() const{ return m_allowedAccessControlHierarchyGroupId; }

    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline bool AllowedAccessControlHierarchyGroupIdHasBeenSet() const { return m_allowedAccessControlHierarchyGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline void SetAllowedAccessControlHierarchyGroupId(const Aws::String& value) { m_allowedAccessControlHierarchyGroupIdHasBeenSet = true; m_allowedAccessControlHierarchyGroupId = value; }

    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline void SetAllowedAccessControlHierarchyGroupId(Aws::String&& value) { m_allowedAccessControlHierarchyGroupIdHasBeenSet = true; m_allowedAccessControlHierarchyGroupId = std::move(value); }

    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline void SetAllowedAccessControlHierarchyGroupId(const char* value) { m_allowedAccessControlHierarchyGroupIdHasBeenSet = true; m_allowedAccessControlHierarchyGroupId.assign(value); }

    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& WithAllowedAccessControlHierarchyGroupId(const Aws::String& value) { SetAllowedAccessControlHierarchyGroupId(value); return *this;}

    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& WithAllowedAccessControlHierarchyGroupId(Aws::String&& value) { SetAllowedAccessControlHierarchyGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline UpdateSecurityProfileRequest& WithAllowedAccessControlHierarchyGroupId(const char* value) { SetAllowedAccessControlHierarchyGroupId(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::String m_securityProfileId;
    bool m_securityProfileIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_allowedAccessControlTags;
    bool m_allowedAccessControlTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagRestrictedResources;
    bool m_tagRestrictedResourcesHasBeenSet = false;

    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet = false;

    Aws::Vector<Aws::String> m_hierarchyRestrictedResources;
    bool m_hierarchyRestrictedResourcesHasBeenSet = false;

    Aws::String m_allowedAccessControlHierarchyGroupId;
    bool m_allowedAccessControlHierarchyGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
