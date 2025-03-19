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
    AWS_CONNECT_API UpdateSecurityProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecurityProfile"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The description of the security profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateSecurityProfileRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permissions granted to a security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<Aws::String>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<Aws::String>>
    UpdateSecurityProfileRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = Aws::String>
    UpdateSecurityProfileRequest& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for the security profle.</p>
     */
    inline const Aws::String& GetSecurityProfileId() const { return m_securityProfileId; }
    inline bool SecurityProfileIdHasBeenSet() const { return m_securityProfileIdHasBeenSet; }
    template<typename SecurityProfileIdT = Aws::String>
    void SetSecurityProfileId(SecurityProfileIdT&& value) { m_securityProfileIdHasBeenSet = true; m_securityProfileId = std::forward<SecurityProfileIdT>(value); }
    template<typename SecurityProfileIdT = Aws::String>
    UpdateSecurityProfileRequest& WithSecurityProfileId(SecurityProfileIdT&& value) { SetSecurityProfileId(std::forward<SecurityProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    UpdateSecurityProfileRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAllowedAccessControlTags() const { return m_allowedAccessControlTags; }
    inline bool AllowedAccessControlTagsHasBeenSet() const { return m_allowedAccessControlTagsHasBeenSet; }
    template<typename AllowedAccessControlTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetAllowedAccessControlTags(AllowedAccessControlTagsT&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags = std::forward<AllowedAccessControlTagsT>(value); }
    template<typename AllowedAccessControlTagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateSecurityProfileRequest& WithAllowedAccessControlTags(AllowedAccessControlTagsT&& value) { SetAllowedAccessControlTags(std::forward<AllowedAccessControlTagsT>(value)); return *this;}
    template<typename AllowedAccessControlTagsKeyT = Aws::String, typename AllowedAccessControlTagsValueT = Aws::String>
    UpdateSecurityProfileRequest& AddAllowedAccessControlTags(AllowedAccessControlTagsKeyT&& key, AllowedAccessControlTagsValueT&& value) {
      m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::forward<AllowedAccessControlTagsKeyT>(key), std::forward<AllowedAccessControlTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagRestrictedResources() const { return m_tagRestrictedResources; }
    inline bool TagRestrictedResourcesHasBeenSet() const { return m_tagRestrictedResourcesHasBeenSet; }
    template<typename TagRestrictedResourcesT = Aws::Vector<Aws::String>>
    void SetTagRestrictedResources(TagRestrictedResourcesT&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources = std::forward<TagRestrictedResourcesT>(value); }
    template<typename TagRestrictedResourcesT = Aws::Vector<Aws::String>>
    UpdateSecurityProfileRequest& WithTagRestrictedResources(TagRestrictedResourcesT&& value) { SetTagRestrictedResources(std::forward<TagRestrictedResourcesT>(value)); return *this;}
    template<typename TagRestrictedResourcesT = Aws::String>
    UpdateSecurityProfileRequest& AddTagRestrictedResources(TagRestrictedResourcesT&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.emplace_back(std::forward<TagRestrictedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the third-party application's metadata.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const { return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    template<typename ApplicationsT = Aws::Vector<Application>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<Application>>
    UpdateSecurityProfileRequest& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = Application>
    UpdateSecurityProfileRequest& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHierarchyRestrictedResources() const { return m_hierarchyRestrictedResources; }
    inline bool HierarchyRestrictedResourcesHasBeenSet() const { return m_hierarchyRestrictedResourcesHasBeenSet; }
    template<typename HierarchyRestrictedResourcesT = Aws::Vector<Aws::String>>
    void SetHierarchyRestrictedResources(HierarchyRestrictedResourcesT&& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources = std::forward<HierarchyRestrictedResourcesT>(value); }
    template<typename HierarchyRestrictedResourcesT = Aws::Vector<Aws::String>>
    UpdateSecurityProfileRequest& WithHierarchyRestrictedResources(HierarchyRestrictedResourcesT&& value) { SetHierarchyRestrictedResources(std::forward<HierarchyRestrictedResourcesT>(value)); return *this;}
    template<typename HierarchyRestrictedResourcesT = Aws::String>
    UpdateSecurityProfileRequest& AddHierarchyRestrictedResources(HierarchyRestrictedResourcesT&& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources.emplace_back(std::forward<HierarchyRestrictedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline const Aws::String& GetAllowedAccessControlHierarchyGroupId() const { return m_allowedAccessControlHierarchyGroupId; }
    inline bool AllowedAccessControlHierarchyGroupIdHasBeenSet() const { return m_allowedAccessControlHierarchyGroupIdHasBeenSet; }
    template<typename AllowedAccessControlHierarchyGroupIdT = Aws::String>
    void SetAllowedAccessControlHierarchyGroupId(AllowedAccessControlHierarchyGroupIdT&& value) { m_allowedAccessControlHierarchyGroupIdHasBeenSet = true; m_allowedAccessControlHierarchyGroupId = std::forward<AllowedAccessControlHierarchyGroupIdT>(value); }
    template<typename AllowedAccessControlHierarchyGroupIdT = Aws::String>
    UpdateSecurityProfileRequest& WithAllowedAccessControlHierarchyGroupId(AllowedAccessControlHierarchyGroupIdT&& value) { SetAllowedAccessControlHierarchyGroupId(std::forward<AllowedAccessControlHierarchyGroupIdT>(value)); return *this;}
    ///@}
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
