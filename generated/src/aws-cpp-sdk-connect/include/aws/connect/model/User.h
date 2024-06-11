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


    ///@{
    /**
     * <p>The identifier of the user account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline User& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline User& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline User& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline User& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline User& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline User& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }
    inline User& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline User& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline User& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the user identity.</p>
     */
    inline const UserIdentityInfo& GetIdentityInfo() const{ return m_identityInfo; }
    inline bool IdentityInfoHasBeenSet() const { return m_identityInfoHasBeenSet; }
    inline void SetIdentityInfo(const UserIdentityInfo& value) { m_identityInfoHasBeenSet = true; m_identityInfo = value; }
    inline void SetIdentityInfo(UserIdentityInfo&& value) { m_identityInfoHasBeenSet = true; m_identityInfo = std::move(value); }
    inline User& WithIdentityInfo(const UserIdentityInfo& value) { SetIdentityInfo(value); return *this;}
    inline User& WithIdentityInfo(UserIdentityInfo&& value) { SetIdentityInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the phone configuration for the user.</p>
     */
    inline const UserPhoneConfig& GetPhoneConfig() const{ return m_phoneConfig; }
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }
    inline void SetPhoneConfig(const UserPhoneConfig& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = value; }
    inline void SetPhoneConfig(UserPhoneConfig&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::move(value); }
    inline User& WithPhoneConfig(const UserPhoneConfig& value) { SetPhoneConfig(value); return *this;}
    inline User& WithPhoneConfig(UserPhoneConfig&& value) { SetPhoneConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline const Aws::String& GetDirectoryUserId() const{ return m_directoryUserId; }
    inline bool DirectoryUserIdHasBeenSet() const { return m_directoryUserIdHasBeenSet; }
    inline void SetDirectoryUserId(const Aws::String& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = value; }
    inline void SetDirectoryUserId(Aws::String&& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = std::move(value); }
    inline void SetDirectoryUserId(const char* value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId.assign(value); }
    inline User& WithDirectoryUserId(const Aws::String& value) { SetDirectoryUserId(value); return *this;}
    inline User& WithDirectoryUserId(Aws::String&& value) { SetDirectoryUserId(std::move(value)); return *this;}
    inline User& WithDirectoryUserId(const char* value) { SetDirectoryUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityProfileIds() const{ return m_securityProfileIds; }
    inline bool SecurityProfileIdsHasBeenSet() const { return m_securityProfileIdsHasBeenSet; }
    inline void SetSecurityProfileIds(const Aws::Vector<Aws::String>& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = value; }
    inline void SetSecurityProfileIds(Aws::Vector<Aws::String>&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = std::move(value); }
    inline User& WithSecurityProfileIds(const Aws::Vector<Aws::String>& value) { SetSecurityProfileIds(value); return *this;}
    inline User& WithSecurityProfileIds(Aws::Vector<Aws::String>&& value) { SetSecurityProfileIds(std::move(value)); return *this;}
    inline User& AddSecurityProfileIds(const Aws::String& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }
    inline User& AddSecurityProfileIds(Aws::String&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(std::move(value)); return *this; }
    inline User& AddSecurityProfileIds(const char* value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the routing profile for the user.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }
    inline User& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}
    inline User& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}
    inline User& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the hierarchy group for the user.</p>
     */
    inline const Aws::String& GetHierarchyGroupId() const{ return m_hierarchyGroupId; }
    inline bool HierarchyGroupIdHasBeenSet() const { return m_hierarchyGroupIdHasBeenSet; }
    inline void SetHierarchyGroupId(const Aws::String& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = value; }
    inline void SetHierarchyGroupId(Aws::String&& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = std::move(value); }
    inline void SetHierarchyGroupId(const char* value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId.assign(value); }
    inline User& WithHierarchyGroupId(const Aws::String& value) { SetHierarchyGroupId(value); return *this;}
    inline User& WithHierarchyGroupId(Aws::String&& value) { SetHierarchyGroupId(std::move(value)); return *this;}
    inline User& WithHierarchyGroupId(const char* value) { SetHierarchyGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline User& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline User& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline User& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline User& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline User& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline User& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline User& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline User& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline User& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp when this resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline User& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline User& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
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
    inline User& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}
    inline User& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}
    inline User& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}
    ///@}
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

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
