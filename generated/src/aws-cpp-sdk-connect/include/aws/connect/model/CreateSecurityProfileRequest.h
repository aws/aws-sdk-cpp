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
    AWS_CONNECT_API CreateSecurityProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecurityProfile"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the security profile.</p>
     */
    inline const Aws::String& GetSecurityProfileName() const{ return m_securityProfileName; }

    /**
     * <p>The name of the security profile.</p>
     */
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }

    /**
     * <p>The name of the security profile.</p>
     */
    inline void SetSecurityProfileName(const Aws::String& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = value; }

    /**
     * <p>The name of the security profile.</p>
     */
    inline void SetSecurityProfileName(Aws::String&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::move(value); }

    /**
     * <p>The name of the security profile.</p>
     */
    inline void SetSecurityProfileName(const char* value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName.assign(value); }

    /**
     * <p>The name of the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithSecurityProfileName(const Aws::String& value) { SetSecurityProfileName(value); return *this;}

    /**
     * <p>The name of the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithSecurityProfileName(Aws::String&& value) { SetSecurityProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithSecurityProfileName(const char* value) { SetSecurityProfileName(value); return *this;}


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
    inline CreateSecurityProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the security profile.</p>
     */
    inline CreateSecurityProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetPermissions() const{ return m_permissions; }

    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline bool PermissionsHasBeenSet() const { return m_permissionsHasBeenSet; }

    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline void SetPermissions(const Aws::Vector<Aws::String>& value) { m_permissionsHasBeenSet = true; m_permissions = value; }

    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline void SetPermissions(Aws::Vector<Aws::String>&& value) { m_permissionsHasBeenSet = true; m_permissions = std::move(value); }

    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline CreateSecurityProfileRequest& WithPermissions(const Aws::Vector<Aws::String>& value) { SetPermissions(value); return *this;}

    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline CreateSecurityProfileRequest& WithPermissions(Aws::Vector<Aws::String>&& value) { SetPermissions(std::move(value)); return *this;}

    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline CreateSecurityProfileRequest& AddPermissions(const Aws::String& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }

    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline CreateSecurityProfileRequest& AddPermissions(Aws::String&& value) { m_permissionsHasBeenSet = true; m_permissions.push_back(std::move(value)); return *this; }

    /**
     * <p>Permissions assigned to the security profile. For a list of valid
     * permissions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/security-profile-list.html">List
     * of security profile permissions</a>. </p>
     */
    inline CreateSecurityProfileRequest& AddPermissions(const char* value) { m_permissionsHasBeenSet = true; m_permissions.push_back(value); return *this; }


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateSecurityProfileRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateSecurityProfileRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateSecurityProfileRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline CreateSecurityProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateSecurityProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateSecurityProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateSecurityProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateSecurityProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateSecurityProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateSecurityProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateSecurityProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateSecurityProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


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
    inline CreateSecurityProfileRequest& WithAllowedAccessControlTags(const Aws::Map<Aws::String, Aws::String>& value) { SetAllowedAccessControlTags(value); return *this;}

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline CreateSecurityProfileRequest& WithAllowedAccessControlTags(Aws::Map<Aws::String, Aws::String>&& value) { SetAllowedAccessControlTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline CreateSecurityProfileRequest& AddAllowedAccessControlTags(const Aws::String& key, const Aws::String& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, value); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline CreateSecurityProfileRequest& AddAllowedAccessControlTags(Aws::String&& key, const Aws::String& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline CreateSecurityProfileRequest& AddAllowedAccessControlTags(const Aws::String& key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline CreateSecurityProfileRequest& AddAllowedAccessControlTags(Aws::String&& key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline CreateSecurityProfileRequest& AddAllowedAccessControlTags(const char* key, Aws::String&& value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline CreateSecurityProfileRequest& AddAllowedAccessControlTags(Aws::String&& key, const char* value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tags that a security profile uses to restrict access to resources
     * in Amazon Connect.</p>
     */
    inline CreateSecurityProfileRequest& AddAllowedAccessControlTags(const char* key, const char* value) { m_allowedAccessControlTagsHasBeenSet = true; m_allowedAccessControlTags.emplace(key, value); return *this; }


    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. Following are acceptable ResourceNames: <code>User</code> |
     * <code>SecurityProfile</code> | <code>Queue</code> | <code>RoutingProfile</code>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagRestrictedResources() const{ return m_tagRestrictedResources; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. Following are acceptable ResourceNames: <code>User</code> |
     * <code>SecurityProfile</code> | <code>Queue</code> | <code>RoutingProfile</code>
     * </p>
     */
    inline bool TagRestrictedResourcesHasBeenSet() const { return m_tagRestrictedResourcesHasBeenSet; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. Following are acceptable ResourceNames: <code>User</code> |
     * <code>SecurityProfile</code> | <code>Queue</code> | <code>RoutingProfile</code>
     * </p>
     */
    inline void SetTagRestrictedResources(const Aws::Vector<Aws::String>& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources = value; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. Following are acceptable ResourceNames: <code>User</code> |
     * <code>SecurityProfile</code> | <code>Queue</code> | <code>RoutingProfile</code>
     * </p>
     */
    inline void SetTagRestrictedResources(Aws::Vector<Aws::String>&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources = std::move(value); }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. Following are acceptable ResourceNames: <code>User</code> |
     * <code>SecurityProfile</code> | <code>Queue</code> | <code>RoutingProfile</code>
     * </p>
     */
    inline CreateSecurityProfileRequest& WithTagRestrictedResources(const Aws::Vector<Aws::String>& value) { SetTagRestrictedResources(value); return *this;}

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. Following are acceptable ResourceNames: <code>User</code> |
     * <code>SecurityProfile</code> | <code>Queue</code> | <code>RoutingProfile</code>
     * </p>
     */
    inline CreateSecurityProfileRequest& WithTagRestrictedResources(Aws::Vector<Aws::String>&& value) { SetTagRestrictedResources(std::move(value)); return *this;}

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. Following are acceptable ResourceNames: <code>User</code> |
     * <code>SecurityProfile</code> | <code>Queue</code> | <code>RoutingProfile</code>
     * </p>
     */
    inline CreateSecurityProfileRequest& AddTagRestrictedResources(const Aws::String& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(value); return *this; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. Following are acceptable ResourceNames: <code>User</code> |
     * <code>SecurityProfile</code> | <code>Queue</code> | <code>RoutingProfile</code>
     * </p>
     */
    inline CreateSecurityProfileRequest& AddTagRestrictedResources(Aws::String&& value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of resources that a security profile applies tag restrictions to in
     * Amazon Connect. Following are acceptable ResourceNames: <code>User</code> |
     * <code>SecurityProfile</code> | <code>Queue</code> | <code>RoutingProfile</code>
     * </p>
     */
    inline CreateSecurityProfileRequest& AddTagRestrictedResources(const char* value) { m_tagRestrictedResourcesHasBeenSet = true; m_tagRestrictedResources.push_back(value); return *this; }

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
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
