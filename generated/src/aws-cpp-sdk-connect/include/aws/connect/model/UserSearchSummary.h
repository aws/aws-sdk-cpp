/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UserIdentityInfoLite.h>
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
   * <p>Information about the returned users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserSearchSummary">AWS
   * API Reference</a></p>
   */
  class UserSearchSummary
  {
  public:
    AWS_CONNECT_API UserSearchSummary();
    AWS_CONNECT_API UserSearchSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserSearchSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UserSearchSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UserSearchSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UserSearchSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The directory identifier of the user.</p>
     */
    inline const Aws::String& GetDirectoryUserId() const{ return m_directoryUserId; }
    inline bool DirectoryUserIdHasBeenSet() const { return m_directoryUserIdHasBeenSet; }
    inline void SetDirectoryUserId(const Aws::String& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = value; }
    inline void SetDirectoryUserId(Aws::String&& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = std::move(value); }
    inline void SetDirectoryUserId(const char* value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId.assign(value); }
    inline UserSearchSummary& WithDirectoryUserId(const Aws::String& value) { SetDirectoryUserId(value); return *this;}
    inline UserSearchSummary& WithDirectoryUserId(Aws::String&& value) { SetDirectoryUserId(std::move(value)); return *this;}
    inline UserSearchSummary& WithDirectoryUserId(const char* value) { SetDirectoryUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user's hierarchy group.</p>
     */
    inline const Aws::String& GetHierarchyGroupId() const{ return m_hierarchyGroupId; }
    inline bool HierarchyGroupIdHasBeenSet() const { return m_hierarchyGroupIdHasBeenSet; }
    inline void SetHierarchyGroupId(const Aws::String& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = value; }
    inline void SetHierarchyGroupId(Aws::String&& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = std::move(value); }
    inline void SetHierarchyGroupId(const char* value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId.assign(value); }
    inline UserSearchSummary& WithHierarchyGroupId(const Aws::String& value) { SetHierarchyGroupId(value); return *this;}
    inline UserSearchSummary& WithHierarchyGroupId(Aws::String&& value) { SetHierarchyGroupId(std::move(value)); return *this;}
    inline UserSearchSummary& WithHierarchyGroupId(const char* value) { SetHierarchyGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user's summary.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UserSearchSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UserSearchSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UserSearchSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's first name and last name.</p>
     */
    inline const UserIdentityInfoLite& GetIdentityInfo() const{ return m_identityInfo; }
    inline bool IdentityInfoHasBeenSet() const { return m_identityInfoHasBeenSet; }
    inline void SetIdentityInfo(const UserIdentityInfoLite& value) { m_identityInfoHasBeenSet = true; m_identityInfo = value; }
    inline void SetIdentityInfo(UserIdentityInfoLite&& value) { m_identityInfoHasBeenSet = true; m_identityInfo = std::move(value); }
    inline UserSearchSummary& WithIdentityInfo(const UserIdentityInfoLite& value) { SetIdentityInfo(value); return *this;}
    inline UserSearchSummary& WithIdentityInfo(UserIdentityInfoLite&& value) { SetIdentityInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserPhoneConfig& GetPhoneConfig() const{ return m_phoneConfig; }
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }
    inline void SetPhoneConfig(const UserPhoneConfig& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = value; }
    inline void SetPhoneConfig(UserPhoneConfig&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::move(value); }
    inline UserSearchSummary& WithPhoneConfig(const UserPhoneConfig& value) { SetPhoneConfig(value); return *this;}
    inline UserSearchSummary& WithPhoneConfig(UserPhoneConfig&& value) { SetPhoneConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user's routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }
    inline UserSearchSummary& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}
    inline UserSearchSummary& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}
    inline UserSearchSummary& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the user's security profiles.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityProfileIds() const{ return m_securityProfileIds; }
    inline bool SecurityProfileIdsHasBeenSet() const { return m_securityProfileIdsHasBeenSet; }
    inline void SetSecurityProfileIds(const Aws::Vector<Aws::String>& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = value; }
    inline void SetSecurityProfileIds(Aws::Vector<Aws::String>&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = std::move(value); }
    inline UserSearchSummary& WithSecurityProfileIds(const Aws::Vector<Aws::String>& value) { SetSecurityProfileIds(value); return *this;}
    inline UserSearchSummary& WithSecurityProfileIds(Aws::Vector<Aws::String>&& value) { SetSecurityProfileIds(std::move(value)); return *this;}
    inline UserSearchSummary& AddSecurityProfileIds(const Aws::String& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }
    inline UserSearchSummary& AddSecurityProfileIds(Aws::String&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(std::move(value)); return *this; }
    inline UserSearchSummary& AddSecurityProfileIds(const char* value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }
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
    inline UserSearchSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline UserSearchSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline UserSearchSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline UserSearchSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline UserSearchSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline UserSearchSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline UserSearchSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline UserSearchSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline UserSearchSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline UserSearchSummary& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline UserSearchSummary& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline UserSearchSummary& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_directoryUserId;
    bool m_directoryUserIdHasBeenSet = false;

    Aws::String m_hierarchyGroupId;
    bool m_hierarchyGroupIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    UserIdentityInfoLite m_identityInfo;
    bool m_identityInfoHasBeenSet = false;

    UserPhoneConfig m_phoneConfig;
    bool m_phoneConfigHasBeenSet = false;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityProfileIds;
    bool m_securityProfileIdsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
