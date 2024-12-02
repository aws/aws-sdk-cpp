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
    AWS_CONNECT_API SecurityProfile();
    AWS_CONNECT_API SecurityProfile(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API SecurityProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for the security profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline SecurityProfile& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline SecurityProfile& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline SecurityProfile& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline const Aws::String& GetOrganizationResourceId() const{ return m_organizationResourceId; }
    inline bool OrganizationResourceIdHasBeenSet() const { return m_organizationResourceIdHasBeenSet; }
    inline void SetOrganizationResourceId(const Aws::String& value) { m_organizationResourceIdHasBeenSet = true; m_organizationResourceId = value; }
    inline void SetOrganizationResourceId(Aws::String&& value) { m_organizationResourceIdHasBeenSet = true; m_organizationResourceId = std::move(value); }
    inline void SetOrganizationResourceId(const char* value) { m_organizationResourceIdHasBeenSet = true; m_organizationResourceId.assign(value); }
    inline SecurityProfile& WithOrganizationResourceId(const Aws::String& value) { SetOrganizationResourceId(value); return *this;}
    inline SecurityProfile& WithOrganizationResourceId(Aws::String&& value) { SetOrganizationResourceId(std::move(value)); return *this;}
    inline SecurityProfile& WithOrganizationResourceId(const char* value) { SetOrganizationResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the security profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline SecurityProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline SecurityProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline SecurityProfile& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }
    inline SecurityProfile& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}
    inline SecurityProfile& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}
    inline SecurityProfile& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the security profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SecurityProfile& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SecurityProfile& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SecurityProfile& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "Tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SecurityProfile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SecurityProfile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SecurityProfile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SecurityProfile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SecurityProfile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SecurityProfile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SecurityProfile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SecurityProfile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SecurityProfile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAllowedAccessControlTags() const{ return m_allowedAccessControlTags; }
    inline bool AllowedAccessControlTagsHasBeenSet() const { return m_allowedAccessControlTagsHasBeenSet; }
    inline void SetAllowedAccessControlTags(const Aws::Map<Aws::String, Aws::String>& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags = value; }
    inline void SetAllowedAccessControlTags(Aws::Map<Aws::String, Aws::String>&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags = std::move(value); }
    inline SecurityProfile& WithAllowedAccessControlTags(const Aws::Map<Aws::String, Aws::String>& value) { SetAllowedAccessControlTags(value); return *this;}
    inline SecurityProfile& WithAllowedAccessControlTags(Aws::Map<Aws::String, Aws::String>&& value) { SetAllowedAccessControlTags(std::move(value)); return *this;}
    inline SecurityProfile& AddAllowedAccessControlTags(const Aws::String& key, const Aws::String& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, value); return *this; }
    inline SecurityProfile& AddAllowedAccessControlTags(Aws::String&& key, const Aws::String& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), value); return *this; }
    inline SecurityProfile& AddAllowedAccessControlTags(const Aws::String& key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, std::move(value)); return *this; }
    inline SecurityProfile& AddAllowedAccessControlTags(Aws::String&& key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), std::move(value)); return *this; }
    inline SecurityProfile& AddAllowedAccessControlTags(const char* key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, std::move(value)); return *this; }
    inline SecurityProfile& AddAllowedAccessControlTags(Aws::String&& key, const char* value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), value); return *this; }
    inline SecurityProfile& AddAllowedAccessControlTags(const char* key, const char* value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagRestrictedResources() const{ return m_tagRestrictedResources; }
    inline bool TagRestrictedResourcesHasBeenSet() const { return m_tagRestrictedResourcesHasBeenSet; }
    inline void SetTagRestrictedResources(const Aws::Vector<Aws::String>& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources = value; }
    inline void SetTagRestrictedResources(Aws::Vector<Aws::String>&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources = std::move(value); }
    inline SecurityProfile& WithTagRestrictedResources(const Aws::Vector<Aws::String>& value) { SetTagRestrictedResources(value); return *this;}
    inline SecurityProfile& WithTagRestrictedResources(Aws::Vector<Aws::String>&& value) { SetTagRestrictedResources(std::move(value)); return *this;}
    inline SecurityProfile& AddTagRestrictedResources(const Aws::String& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(value); return *this; }
    inline SecurityProfile& AddTagRestrictedResources(Aws::String&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(std::move(value)); return *this; }
    inline SecurityProfile& AddTagRestrictedResources(const char* value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline SecurityProfile& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline SecurityProfile& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where this resource was last modified.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = value; }
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::move(value); }
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion.assign(value); }
    inline SecurityProfile& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline SecurityProfile& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline SecurityProfile& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of resources that a security profile applies hierarchy restrictions
     * to in Amazon Connect. Following are acceptable ResourceNames:
     * <code>User</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHierarchyRestrictedResources() const{ return m_hierarchyRestrictedResources; }
    inline bool HierarchyRestrictedResourcesHasBeenSet() const { return m_hierarchyRestrictedResourcesHasBeenSet; }
    inline void SetHierarchyRestrictedResources(const Aws::Vector<Aws::String>& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources = value; }
    inline void SetHierarchyRestrictedResources(Aws::Vector<Aws::String>&& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources = std::move(value); }
    inline SecurityProfile& WithHierarchyRestrictedResources(const Aws::Vector<Aws::String>& value) { SetHierarchyRestrictedResources(value); return *this;}
    inline SecurityProfile& WithHierarchyRestrictedResources(Aws::Vector<Aws::String>&& value) { SetHierarchyRestrictedResources(std::move(value)); return *this;}
    inline SecurityProfile& AddHierarchyRestrictedResources(const Aws::String& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources.push_back(value); return *this; }
    inline SecurityProfile& AddHierarchyRestrictedResources(Aws::String&& value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources.push_back(std::move(value)); return *this; }
    inline SecurityProfile& AddHierarchyRestrictedResources(const char* value) { m_hierarchyRestrictedResourcesHasBeenSet = true; m_hierarchyRestrictedResources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the hierarchy group that a security profile uses to
     * restrict access to resources in Amazon Connect.</p>
     */
    inline const Aws::String& GetAllowedAccessControlHierarchyGroupId() const{ return m_allowedAccessControlHierarchyGroupId; }
    inline bool AllowedAccessControlHierarchyGroupIdHasBeenSet() const { return m_allowedAccessControlHierarchyGroupIdHasBeenSet; }
    inline void SetAllowedAccessControlHierarchyGroupId(const Aws::String& value) { m_allowedAccessControlHierarchyGroupIdHasBeenSet = true; m_allowedAccessControlHierarchyGroupId = value; }
    inline void SetAllowedAccessControlHierarchyGroupId(Aws::String&& value) { m_allowedAccessControlHierarchyGroupIdHasBeenSet = true; m_allowedAccessControlHierarchyGroupId = std::move(value); }
    inline void SetAllowedAccessControlHierarchyGroupId(const char* value) { m_allowedAccessControlHierarchyGroupIdHasBeenSet = true; m_allowedAccessControlHierarchyGroupId.assign(value); }
    inline SecurityProfile& WithAllowedAccessControlHierarchyGroupId(const Aws::String& value) { SetAllowedAccessControlHierarchyGroupId(value); return *this;}
    inline SecurityProfile& WithAllowedAccessControlHierarchyGroupId(Aws::String&& value) { SetAllowedAccessControlHierarchyGroupId(std::move(value)); return *this;}
    inline SecurityProfile& WithAllowedAccessControlHierarchyGroupId(const char* value) { SetAllowedAccessControlHierarchyGroupId(value); return *this;}
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

    Aws::Utils::DateTime m_lastModifiedTime;
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
