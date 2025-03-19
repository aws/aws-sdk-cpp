/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a security profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/SecurityProfile">AWS
   * API Reference</a></p>
   */
  class SecurityProfile
  {
  public:
    AWS_CONNECT_API SecurityProfile() = default;
    AWS_CONNECT_API SecurityProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SecurityProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the security profile.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SecurityProfile& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline const Aws::String& GetOrganizationResourceId() const { return m_organizationResourceId; }
    inline bool OrganizationResourceIdHasBeenSet() const { return m_organizationResourceIdHasBeenSet; }
    template<typename OrganizationResourceIdT = Aws::String>
    void SetOrganizationResourceId(OrganizationResourceIdT&& value) { m_organizationResourceIdHasBeenSet = true; m_organizationResourceId = std::forward<OrganizationResourceIdT>(value); }
    template<typename OrganizationResourceIdT = Aws::String>
    SecurityProfile& WithOrganizationResourceId(OrganizationResourceIdT&& value) { SetOrganizationResourceId(std::forward<OrganizationResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SecurityProfile& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    SecurityProfile& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
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
    SecurityProfile& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    SecurityProfile& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SecurityProfile& AddTags(TagsKeyT&& key, TagsValueT&& value) {
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
    SecurityProfile& WithAllowedAccessControlTags(AllowedAccessControlTagsT&& value) { SetAllowedAccessControlTags(std::forward<AllowedAccessControlTagsT>(value)); return *this;}
    template<typename AllowedAccessControlTagsKeyT = Aws::String, typename AllowedAccessControlTagsValueT = Aws::String>
    SecurityProfile& AddAllowedAccessControlTags(AllowedAccessControlTagsKeyT&& key, AllowedAccessControlTagsValueT&& value) {
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
    SecurityProfile& WithTagRestrictedResources(TagRestrictedResourcesT&& value) { SetTagRestrictedResources(std::forward<TagRestrictedResourcesT>(value)); return *this;}
    template<typename TagRestrictedResourcesT = Aws::String>
    SecurityProfile& AddTagRestrictedResources(TagRestrictedResourcesT&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.emplace_back(std::forward<TagRestrictedResourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    SecurityProfile& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const { return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    template<typename LastModifiedRegionT = Aws::String>
    void SetLastModifiedRegion(LastModifiedRegionT&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::forward<LastModifiedRegionT>(value); }
    template<typename LastModifiedRegionT = Aws::String>
    SecurityProfile& WithLastModifiedRegion(LastModifiedRegionT&& value) { SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value)); return *this;}
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
    SecurityProfile& WithHierarchyRestrictedResources(HierarchyRestrictedResourcesT&& value) { SetHierarchyRestrictedResources(std::forward<HierarchyRestrictedResourcesT>(value)); return *this;}
    template<typename HierarchyRestrictedResourcesT = Aws::String>
    SecurityProfile& AddHierarchyRestrictedResources(HierarchyRestrictedResourcesT&& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources.emplace_back(std::forward<HierarchyRestrictedResourcesT>(value)); return *this; }
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
    SecurityProfile& WithAllowedAccessControlHierarchyGroupId(AllowedAccessControlHierarchyGroupIdT&& value) { SetAllowedAccessControlHierarchyGroupId(std::forward<AllowedAccessControlHierarchyGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_organizationResourceId;
    bool m_organizationResourceIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_allowedAccessControlTags;
    bool m_allowedAccessControlTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagRestrictedResources;
    bool m_tagRestrictedResourcesHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;

    Aws::Vector<Aws::String> m_hierarchyRestrictedResources;
    bool m_hierarchyRestrictedResourcesHasBeenSet = false;

    Aws::String m_allowedAccessControlHierarchyGroupId;
    bool m_allowedAccessControlHierarchyGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
