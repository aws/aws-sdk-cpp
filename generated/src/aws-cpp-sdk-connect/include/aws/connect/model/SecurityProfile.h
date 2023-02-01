/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The identifier for the security profile.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier for the security profile.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier for the security profile.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier for the security profile.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier for the security profile.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier for the security profile.</p>
     */
    inline SecurityProfile& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier for the security profile.</p>
     */
    inline SecurityProfile& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the security profile.</p>
     */
    inline SecurityProfile& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline const Aws::String& GetOrganizationResourceId() const{ return m_organizationResourceId; }

    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline bool OrganizationResourceIdHasBeenSet() const { return m_organizationResourceIdHasBeenSet; }

    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline void SetOrganizationResourceId(const Aws::String& value) { m_organizationResourceIdHasBeenSet = true; m_organizationResourceId = value; }

    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline void SetOrganizationResourceId(Aws::String&& value) { m_organizationResourceIdHasBeenSet = true; m_organizationResourceId = std::move(value); }

    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline void SetOrganizationResourceId(const char* value) { m_organizationResourceIdHasBeenSet = true; m_organizationResourceId.assign(value); }

    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline SecurityProfile& WithOrganizationResourceId(const Aws::String& value) { SetOrganizationResourceId(value); return *this;}

    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline SecurityProfile& WithOrganizationResourceId(Aws::String&& value) { SetOrganizationResourceId(std::move(value)); return *this;}

    /**
     * <p>The organization resource identifier for the security profile.</p>
     */
    inline SecurityProfile& WithOrganizationResourceId(const char* value) { SetOrganizationResourceId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the secruity profile.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the secruity profile.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the secruity profile.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the secruity profile.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the secruity profile.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the secruity profile.</p>
     */
    inline SecurityProfile& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the secruity profile.</p>
     */
    inline SecurityProfile& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the secruity profile.</p>
     */
    inline SecurityProfile& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name for the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The name for the security profile.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The name for the security profile.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The name for the security profile.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The name for the security profile.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The name for the security profile.</p>
     */
    inline SecurityProfile& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The name for the security profile.</p>
     */
    inline SecurityProfile& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The name for the security profile.</p>
     */
    inline SecurityProfile& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


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
    inline SecurityProfile& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the security profile.</p>
     */
    inline SecurityProfile& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the security profile.</p>
     */
    inline SecurityProfile& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline SecurityProfile& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline SecurityProfile& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline SecurityProfile& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline SecurityProfile& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline SecurityProfile& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline SecurityProfile& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline SecurityProfile& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline SecurityProfile& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline SecurityProfile& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline SecurityProfile& WithAllowedAccessControlTags(const Aws::Map<Aws::String, Aws::String>& value) { SetAllowedAccessControlTags(value); return *this;}

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline SecurityProfile& WithAllowedAccessControlTags(Aws::Map<Aws::String, Aws::String>&& value) { SetAllowedAccessControlTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline SecurityProfile& AddAllowedAccessControlTags(const Aws::String& key, const Aws::String& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, value); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline SecurityProfile& AddAllowedAccessControlTags(Aws::String&& key, const Aws::String& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline SecurityProfile& AddAllowedAccessControlTags(const Aws::String& key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline SecurityProfile& AddAllowedAccessControlTags(Aws::String&& key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline SecurityProfile& AddAllowedAccessControlTags(const char* key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline SecurityProfile& AddAllowedAccessControlTags(Aws::String&& key, const char* value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline SecurityProfile& AddAllowedAccessControlTags(const char* key, const char* value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, value); return *this; }


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
    inline SecurityProfile& WithTagRestrictedResources(const Aws::Vector<Aws::String>& value) { SetTagRestrictedResources(value); return *this;}

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline SecurityProfile& WithTagRestrictedResources(Aws::Vector<Aws::String>&& value) { SetTagRestrictedResources(std::move(value)); return *this;}

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline SecurityProfile& AddTagRestrictedResources(const Aws::String& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(value); return *this; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline SecurityProfile& AddTagRestrictedResources(Aws::String&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect.</p>
     */
    inline SecurityProfile& AddTagRestrictedResources(const char* value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(value); return *this; }

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
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
