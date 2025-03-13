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
  class CreateSecurityProfileRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateSecurityProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityProfile"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    CreateSecurityProfileRequest& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the security profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSecurityProfileRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const { return m_permissions; }
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }
    template<typename PermissionsT = Aws::Vector<Aws::String>>
    void SetPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions = std::forward<PermissionsT>(value); }
    template<typename PermissionsT = Aws::Vector<Aws::String>>
    CreateSecurityProfileRequest& WithPermissions(PermissionsT&& value) { SetPermissions(std::forward<PermissionsT>(value)); return *this;}
    template<typename PermissionsT = Aws::String>
    CreateSecurityProfileRequest& AddPermissions(PermissionsT&& value) { m_permissionsHasBeenSet = true; m_permissions.emplace_back(std::forward<PermissionsT>(value)); return *this; }
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
    CreateSecurityProfileRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateSecurityProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateSecurityProfileRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    CreateSecurityProfileRequest& WithAllowedAccessControlTags(AllowedAccessControlTagsT&& value) { SetAllowedAccessControlTags(std::forward<AllowedAccessControlTagsT>(value)); return *this;}
    template<typename AllowedAccessControlTagsKeyT = Aws::String, typename AllowedAccessControlTagsValueT = Aws::String>
    CreateSecurityProfileRequest& AddAllowedAccessControlTags(AllowedAccessControlTagsKeyT&& key, AllowedAccessControlTagsValueT&& value) {
      m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::forward<AllowedAccessControlTagsKeyT>(key), std::forward<AllowedAccessControlTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. For a list of Amazon Connect resources that you can tag, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/tagging.html">Add
     * tags to resources in Amazon Connect</a> in the <i>Amazon Connect Administrator
     * Guide</i>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagRestrictedResources() const { return m_tagRestrictedResources; }
    inline bool TagRestrictedResourcesHasBeenSet() const { return m_tagRestrictedResourcesHasBeenSet; }
    template<typename TagRestrictedResourcesT = Aws::Vector<Aws::String>>
    void SetTagRestrictedResources(TagRestrictedResourcesT&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources = std::forward<TagRestrictedResourcesT>(value); }
    template<typename TagRestrictedResourcesT = Aws::Vector<Aws::String>>
    CreateSecurityProfileRequest& WithTagRestrictedResources(TagRestrictedResourcesT&& value) { SetTagRestrictedResources(std::forward<TagRestrictedResourcesT>(value)); return *this;}
    template<typename TagRestrictedResourcesT = Aws::String>
    CreateSecurityProfileRequest& AddTagRestrictedResources(TagRestrictedResourcesT&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.emplace_back(std::forward<TagRestrictedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of third-party applications that the security profile will give access
     * to.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const { return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    template<typename ApplicationsT = Aws::Vector<Application>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<Application>>
    CreateSecurityProfileRequest& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = Application>
    CreateSecurityProfileRequest& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
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
    CreateSecurityProfileRequest& WithHierarchyRestrictedResources(HierarchyRestrictedResourcesT&& value) { SetHierarchyRestrictedResources(std::forward<HierarchyRestrictedResourcesT>(value)); return *this;}
    template<typename HierarchyRestrictedResourcesT = Aws::String>
    CreateSecurityProfileRequest& AddHierarchyRestrictedResources(HierarchyRestrictedResourcesT&& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources.emplace_back(std::forward<HierarchyRestrictedResourcesT>(value)); return *this; }
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
    CreateSecurityProfileRequest& WithAllowedAccessControlHierarchyGroupId(AllowedAccessControlHierarchyGroupIdT&& value) { SetAllowedAccessControlHierarchyGroupId(std::forward<AllowedAccessControlHierarchyGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_permissions;
    bool m_permissionsHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

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
