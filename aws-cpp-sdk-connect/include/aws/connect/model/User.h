/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UserIdentityInfo.h>
#include <aws/connect/model/UserPhoneConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Contains information about a user account for an Amazon Connect
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/User">AWS API
   * Reference</a></p>
   */
  class User
  {
  public:
    AWS_CONNECT_API User();
    AWS_CONNECT_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the user account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the user account.</p>
     */
    inline User& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the user account.</p>
     */
    inline User& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user account.</p>
     */
    inline User& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline User& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline User& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline User& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline User& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline User& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline User& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>Information about the user identity.</p>
     */
    inline const UserIdentityInfo& GetIdentityInfo() const{ return m_identityInfo; }

    /**
     * <p>Information about the user identity.</p>
     */
    inline bool IdentityInfoHasBeenSet() const { return m_identityInfoHasBeenSet; }

    /**
     * <p>Information about the user identity.</p>
     */
    inline void SetIdentityInfo(const UserIdentityInfo& value) { m_identityInfoHasBeenSet = true; m_identityInfo = value; }

    /**
     * <p>Information about the user identity.</p>
     */
    inline void SetIdentityInfo(UserIdentityInfo&& value) { m_identityInfoHasBeenSet = true; m_identityInfo = std::move(value); }

    /**
     * <p>Information about the user identity.</p>
     */
    inline User& WithIdentityInfo(const UserIdentityInfo& value) { SetIdentityInfo(value); return *this;}

    /**
     * <p>Information about the user identity.</p>
     */
    inline User& WithIdentityInfo(UserIdentityInfo&& value) { SetIdentityInfo(std::move(value)); return *this;}


    /**
     * <p>Information about the phone configuration for the user.</p>
     */
    inline const UserPhoneConfig& GetPhoneConfig() const{ return m_phoneConfig; }

    /**
     * <p>Information about the phone configuration for the user.</p>
     */
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }

    /**
     * <p>Information about the phone configuration for the user.</p>
     */
    inline void SetPhoneConfig(const UserPhoneConfig& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = value; }

    /**
     * <p>Information about the phone configuration for the user.</p>
     */
    inline void SetPhoneConfig(UserPhoneConfig&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::move(value); }

    /**
     * <p>Information about the phone configuration for the user.</p>
     */
    inline User& WithPhoneConfig(const UserPhoneConfig& value) { SetPhoneConfig(value); return *this;}

    /**
     * <p>Information about the phone configuration for the user.</p>
     */
    inline User& WithPhoneConfig(UserPhoneConfig&& value) { SetPhoneConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline const Aws::String& GetDirectoryUserId() const{ return m_directoryUserId; }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline bool DirectoryUserIdHasBeenSet() const { return m_directoryUserIdHasBeenSet; }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline void SetDirectoryUserId(const Aws::String& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = value; }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline void SetDirectoryUserId(Aws::String&& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = std::move(value); }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline void SetDirectoryUserId(const char* value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId.assign(value); }

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline User& WithDirectoryUserId(const Aws::String& value) { SetDirectoryUserId(value); return *this;}

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline User& WithDirectoryUserId(Aws::String&& value) { SetDirectoryUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline User& WithDirectoryUserId(const char* value) { SetDirectoryUserId(value); return *this;}


    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityProfileIds() const{ return m_securityProfileIds; }

    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline bool SecurityProfileIdsHasBeenSet() const { return m_securityProfileIdsHasBeenSet; }

    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline void SetSecurityProfileIds(const Aws::Vector<Aws::String>& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = value; }

    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline void SetSecurityProfileIds(Aws::Vector<Aws::String>&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = std::move(value); }

    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline User& WithSecurityProfileIds(const Aws::Vector<Aws::String>& value) { SetSecurityProfileIds(value); return *this;}

    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline User& WithSecurityProfileIds(Aws::Vector<Aws::String>&& value) { SetSecurityProfileIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline User& AddSecurityProfileIds(const Aws::String& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline User& AddSecurityProfileIds(Aws::String&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline User& AddSecurityProfileIds(const char* value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }


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
    inline User& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}

    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline User& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline User& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}


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
    inline User& WithHierarchyGroupId(const Aws::String& value) { SetHierarchyGroupId(value); return *this;}

    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline User& WithHierarchyGroupId(Aws::String&& value) { SetHierarchyGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline User& WithHierarchyGroupId(const char* value) { SetHierarchyGroupId(value); return *this;}


    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags.</p>
     */
    inline User& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline User& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline User& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline User& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline User& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline User& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline User& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline User& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags.</p>
     */
    inline User& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
