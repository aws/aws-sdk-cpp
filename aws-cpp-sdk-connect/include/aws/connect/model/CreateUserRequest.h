/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UserIdentityInfo.h>
#include <aws/connect/model/UserPhoneConfig.h>
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
  class CreateUserRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The user name for the account. For instances not using SAML for identity
     * management, the user name can include up to 20 characters. If you are using SAML
     * for identity management, the user name can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name for the account. For instances not using SAML for identity
     * management, the user name can include up to 20 characters. If you are using SAML
     * for identity management, the user name can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name for the account. For instances not using SAML for identity
     * management, the user name can include up to 20 characters. If you are using SAML
     * for identity management, the user name can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name for the account. For instances not using SAML for identity
     * management, the user name can include up to 20 characters. If you are using SAML
     * for identity management, the user name can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name for the account. For instances not using SAML for identity
     * management, the user name can include up to 20 characters. If you are using SAML
     * for identity management, the user name can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name for the account. For instances not using SAML for identity
     * management, the user name can include up to 20 characters. If you are using SAML
     * for identity management, the user name can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline CreateUserRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name for the account. For instances not using SAML for identity
     * management, the user name can include up to 20 characters. If you are using SAML
     * for identity management, the user name can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline CreateUserRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name for the account. For instances not using SAML for identity
     * management, the user name can include up to 20 characters. If you are using SAML
     * for identity management, the user name can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline CreateUserRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The password for the user account. A password is required if you are using
     * Amazon Connect for identity management. Otherwise, it is an error to include a
     * password.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the user account. A password is required if you are using
     * Amazon Connect for identity management. Otherwise, it is an error to include a
     * password.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the user account. A password is required if you are using
     * Amazon Connect for identity management. Otherwise, it is an error to include a
     * password.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the user account. A password is required if you are using
     * Amazon Connect for identity management. Otherwise, it is an error to include a
     * password.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the user account. A password is required if you are using
     * Amazon Connect for identity management. Otherwise, it is an error to include a
     * password.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the user account. A password is required if you are using
     * Amazon Connect for identity management. Otherwise, it is an error to include a
     * password.</p>
     */
    inline CreateUserRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the user account. A password is required if you are using
     * Amazon Connect for identity management. Otherwise, it is an error to include a
     * password.</p>
     */
    inline CreateUserRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the user account. A password is required if you are using
     * Amazon Connect for identity management. Otherwise, it is an error to include a
     * password.</p>
     */
    inline CreateUserRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The information about the identity of the user.</p>
     */
    inline const UserIdentityInfo& GetIdentityInfo() const{ return m_identityInfo; }

    /**
     * <p>The information about the identity of the user.</p>
     */
    inline bool IdentityInfoHasBeenSet() const { return m_identityInfoHasBeenSet; }

    /**
     * <p>The information about the identity of the user.</p>
     */
    inline void SetIdentityInfo(const UserIdentityInfo& value) { m_identityInfoHasBeenSet = true; m_identityInfo = value; }

    /**
     * <p>The information about the identity of the user.</p>
     */
    inline void SetIdentityInfo(UserIdentityInfo&& value) { m_identityInfoHasBeenSet = true; m_identityInfo = std::move(value); }

    /**
     * <p>The information about the identity of the user.</p>
     */
    inline CreateUserRequest& WithIdentityInfo(const UserIdentityInfo& value) { SetIdentityInfo(value); return *this;}

    /**
     * <p>The information about the identity of the user.</p>
     */
    inline CreateUserRequest& WithIdentityInfo(UserIdentityInfo&& value) { SetIdentityInfo(std::move(value)); return *this;}


    /**
     * <p>The phone settings for the user.</p>
     */
    inline const UserPhoneConfig& GetPhoneConfig() const{ return m_phoneConfig; }

    /**
     * <p>The phone settings for the user.</p>
     */
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }

    /**
     * <p>The phone settings for the user.</p>
     */
    inline void SetPhoneConfig(const UserPhoneConfig& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = value; }

    /**
     * <p>The phone settings for the user.</p>
     */
    inline void SetPhoneConfig(UserPhoneConfig&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::move(value); }

    /**
     * <p>The phone settings for the user.</p>
     */
    inline CreateUserRequest& WithPhoneConfig(const UserPhoneConfig& value) { SetPhoneConfig(value); return *this;}

    /**
     * <p>The phone settings for the user.</p>
     */
    inline CreateUserRequest& WithPhoneConfig(UserPhoneConfig&& value) { SetPhoneConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier of the user account in the directory used for identity
     * management. If Amazon Connect cannot access the directory, you can specify this
     * identifier to authenticate users. If you include the identifier, we assume that
     * Amazon Connect cannot access the directory. Otherwise, the identity information
     * is used to authenticate users from your directory.</p> <p>This parameter is
     * required if you are using an existing directory for identity management in
     * Amazon Connect when Amazon Connect cannot access your directory to authenticate
     * users. If you are using SAML for identity management and include this parameter,
     * an error is returned.</p>
     */
    inline const Aws::String& GetDirectoryUserId() const{ return m_directoryUserId; }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management. If Amazon Connect cannot access the directory, you can specify this
     * identifier to authenticate users. If you include the identifier, we assume that
     * Amazon Connect cannot access the directory. Otherwise, the identity information
     * is used to authenticate users from your directory.</p> <p>This parameter is
     * required if you are using an existing directory for identity management in
     * Amazon Connect when Amazon Connect cannot access your directory to authenticate
     * users. If you are using SAML for identity management and include this parameter,
     * an error is returned.</p>
     */
    inline bool DirectoryUserIdHasBeenSet() const { return m_directoryUserIdHasBeenSet; }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management. If Amazon Connect cannot access the directory, you can specify this
     * identifier to authenticate users. If you include the identifier, we assume that
     * Amazon Connect cannot access the directory. Otherwise, the identity information
     * is used to authenticate users from your directory.</p> <p>This parameter is
     * required if you are using an existing directory for identity management in
     * Amazon Connect when Amazon Connect cannot access your directory to authenticate
     * users. If you are using SAML for identity management and include this parameter,
     * an error is returned.</p>
     */
    inline void SetDirectoryUserId(const Aws::String& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = value; }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management. If Amazon Connect cannot access the directory, you can specify this
     * identifier to authenticate users. If you include the identifier, we assume that
     * Amazon Connect cannot access the directory. Otherwise, the identity information
     * is used to authenticate users from your directory.</p> <p>This parameter is
     * required if you are using an existing directory for identity management in
     * Amazon Connect when Amazon Connect cannot access your directory to authenticate
     * users. If you are using SAML for identity management and include this parameter,
     * an error is returned.</p>
     */
    inline void SetDirectoryUserId(Aws::String&& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = std::move(value); }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management. If Amazon Connect cannot access the directory, you can specify this
     * identifier to authenticate users. If you include the identifier, we assume that
     * Amazon Connect cannot access the directory. Otherwise, the identity information
     * is used to authenticate users from your directory.</p> <p>This parameter is
     * required if you are using an existing directory for identity management in
     * Amazon Connect when Amazon Connect cannot access your directory to authenticate
     * users. If you are using SAML for identity management and include this parameter,
     * an error is returned.</p>
     */
    inline void SetDirectoryUserId(const char* value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId.assign(value); }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management. If Amazon Connect cannot access the directory, you can specify this
     * identifier to authenticate users. If you include the identifier, we assume that
     * Amazon Connect cannot access the directory. Otherwise, the identity information
     * is used to authenticate users from your directory.</p> <p>This parameter is
     * required if you are using an existing directory for identity management in
     * Amazon Connect when Amazon Connect cannot access your directory to authenticate
     * users. If you are using SAML for identity management and include this parameter,
     * an error is returned.</p>
     */
    inline CreateUserRequest& WithDirectoryUserId(const Aws::String& value) { SetDirectoryUserId(value); return *this;}

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management. If Amazon Connect cannot access the directory, you can specify this
     * identifier to authenticate users. If you include the identifier, we assume that
     * Amazon Connect cannot access the directory. Otherwise, the identity information
     * is used to authenticate users from your directory.</p> <p>This parameter is
     * required if you are using an existing directory for identity management in
     * Amazon Connect when Amazon Connect cannot access your directory to authenticate
     * users. If you are using SAML for identity management and include this parameter,
     * an error is returned.</p>
     */
    inline CreateUserRequest& WithDirectoryUserId(Aws::String&& value) { SetDirectoryUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management. If Amazon Connect cannot access the directory, you can specify this
     * identifier to authenticate users. If you include the identifier, we assume that
     * Amazon Connect cannot access the directory. Otherwise, the identity information
     * is used to authenticate users from your directory.</p> <p>This parameter is
     * required if you are using an existing directory for identity management in
     * Amazon Connect when Amazon Connect cannot access your directory to authenticate
     * users. If you are using SAML for identity management and include this parameter,
     * an error is returned.</p>
     */
    inline CreateUserRequest& WithDirectoryUserId(const char* value) { SetDirectoryUserId(value); return *this;}


    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityProfileIds() const{ return m_securityProfileIds; }

    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline bool SecurityProfileIdsHasBeenSet() const { return m_securityProfileIdsHasBeenSet; }

    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline void SetSecurityProfileIds(const Aws::Vector<Aws::String>& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = value; }

    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline void SetSecurityProfileIds(Aws::Vector<Aws::String>&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = std::move(value); }

    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline CreateUserRequest& WithSecurityProfileIds(const Aws::Vector<Aws::String>& value) { SetSecurityProfileIds(value); return *this;}

    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline CreateUserRequest& WithSecurityProfileIds(Aws::Vector<Aws::String>&& value) { SetSecurityProfileIds(std::move(value)); return *this;}

    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline CreateUserRequest& AddSecurityProfileIds(const Aws::String& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }

    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline CreateUserRequest& AddSecurityProfileIds(Aws::String&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline CreateUserRequest& AddSecurityProfileIds(const char* value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }


    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }

    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }

    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }

    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }

    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }

    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline CreateUserRequest& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}

    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline CreateUserRequest& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline CreateUserRequest& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}


    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline const Aws::String& GetHierarchyGroupId() const{ return m_hierarchyGroupId; }

    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline bool HierarchyGroupIdHasBeenSet() const { return m_hierarchyGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline void SetHierarchyGroupId(const Aws::String& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = value; }

    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline void SetHierarchyGroupId(Aws::String&& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = std::move(value); }

    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline void SetHierarchyGroupId(const char* value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId.assign(value); }

    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline CreateUserRequest& WithHierarchyGroupId(const Aws::String& value) { SetHierarchyGroupId(value); return *this;}

    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline CreateUserRequest& WithHierarchyGroupId(Aws::String&& value) { SetHierarchyGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline CreateUserRequest& WithHierarchyGroupId(const char* value) { SetHierarchyGroupId(value); return *this;}


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
    inline CreateUserRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateUserRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline CreateUserRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline CreateUserRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateUserRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateUserRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateUserRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateUserRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateUserRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateUserRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateUserRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource. For
     * example, { "tags": {"key1":"value1", "key2":"value2"} }.</p>
     */
    inline CreateUserRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    UserIdentityInfo m_identityInfo;
    bool m_identityInfoHasBeenSet = false;

    UserPhoneConfig m_phoneConfig;
    bool m_phoneConfigHasBeenSet = false;

    Aws::String m_directoryUserId;
    bool m_directoryUserIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityProfileIds;
    bool m_securityProfileIdsHasBeenSet = false;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet = false;

    Aws::String m_hierarchyGroupId;
    bool m_hierarchyGroupIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
