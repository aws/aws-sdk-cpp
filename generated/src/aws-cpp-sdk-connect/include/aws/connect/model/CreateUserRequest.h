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
    AWS_CONNECT_API CreateUserRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The user name for the account. For instances not using SAML for identity
     * management, the user name can include up to 20 characters. If you are using SAML
     * for identity management, the user name can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p> <p>Username can include @ only if used in an email
     * format. For example:</p> <ul> <li> <p>Correct: testuser</p> </li> <li>
     * <p>Correct: testuser@example.com</p> </li> <li> <p>Incorrect:
     * testuser@example</p> </li> </ul>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    CreateUserRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password for the user account. A password is required if you are using
     * Amazon Connect for identity management. Otherwise, it is an error to include a
     * password.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    CreateUserRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information about the identity of the user.</p>
     */
    inline const UserIdentityInfo& GetIdentityInfo() const { return m_identityInfo; }
    inline bool IdentityInfoHasBeenSet() const { return m_identityInfoHasBeenSet; }
    template<typename IdentityInfoT = UserIdentityInfo>
    void SetIdentityInfo(IdentityInfoT&& value) { m_identityInfoHasBeenSet = true; m_identityInfo = std::forward<IdentityInfoT>(value); }
    template<typename IdentityInfoT = UserIdentityInfo>
    CreateUserRequest& WithIdentityInfo(IdentityInfoT&& value) { SetIdentityInfo(std::forward<IdentityInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone settings for the user.</p>
     */
    inline const UserPhoneConfig& GetPhoneConfig() const { return m_phoneConfig; }
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }
    template<typename PhoneConfigT = UserPhoneConfig>
    void SetPhoneConfig(PhoneConfigT&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::forward<PhoneConfigT>(value); }
    template<typename PhoneConfigT = UserPhoneConfig>
    CreateUserRequest& WithPhoneConfig(PhoneConfigT&& value) { SetPhoneConfig(std::forward<PhoneConfigT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetDirectoryUserId() const { return m_directoryUserId; }
    inline bool DirectoryUserIdHasBeenSet() const { return m_directoryUserIdHasBeenSet; }
    template<typename DirectoryUserIdT = Aws::String>
    void SetDirectoryUserId(DirectoryUserIdT&& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = std::forward<DirectoryUserIdT>(value); }
    template<typename DirectoryUserIdT = Aws::String>
    CreateUserRequest& WithDirectoryUserId(DirectoryUserIdT&& value) { SetDirectoryUserId(std::forward<DirectoryUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the security profile for the user.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityProfileIds() const { return m_securityProfileIds; }
    inline bool SecurityProfileIdsHasBeenSet() const { return m_securityProfileIdsHasBeenSet; }
    template<typename SecurityProfileIdsT = Aws::Vector<Aws::String>>
    void SetSecurityProfileIds(SecurityProfileIdsT&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = std::forward<SecurityProfileIdsT>(value); }
    template<typename SecurityProfileIdsT = Aws::Vector<Aws::String>>
    CreateUserRequest& WithSecurityProfileIds(SecurityProfileIdsT&& value) { SetSecurityProfileIds(std::forward<SecurityProfileIdsT>(value)); return *this;}
    template<typename SecurityProfileIdsT = Aws::String>
    CreateUserRequest& AddSecurityProfileIds(SecurityProfileIdsT&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.emplace_back(std::forward<SecurityProfileIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const { return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    template<typename RoutingProfileIdT = Aws::String>
    void SetRoutingProfileId(RoutingProfileIdT&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::forward<RoutingProfileIdT>(value); }
    template<typename RoutingProfileIdT = Aws::String>
    CreateUserRequest& WithRoutingProfileId(RoutingProfileIdT&& value) { SetRoutingProfileId(std::forward<RoutingProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline const Aws::String& GetHierarchyGroupId() const { return m_hierarchyGroupId; }
    inline bool HierarchyGroupIdHasBeenSet() const { return m_hierarchyGroupIdHasBeenSet; }
    template<typename HierarchyGroupIdT = Aws::String>
    void SetHierarchyGroupId(HierarchyGroupIdT&& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = std::forward<HierarchyGroupIdT>(value); }
    template<typename HierarchyGroupIdT = Aws::String>
    CreateUserRequest& WithHierarchyGroupId(HierarchyGroupIdT&& value) { SetHierarchyGroupId(std::forward<HierarchyGroupIdT>(value)); return *this;}
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
    CreateUserRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
    CreateUserRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateUserRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
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
