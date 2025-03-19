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
    AWS_CONNECT_API User() = default;
    AWS_CONNECT_API User(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API User& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the user account.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    User& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the user account.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    User& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user name assigned to the user account.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    User& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the user identity.</p>
     */
    inline const UserIdentityInfo& GetIdentityInfo() const { return m_identityInfo; }
    inline bool IdentityInfoHasBeenSet() const { return m_identityInfoHasBeenSet; }
    template<typename IdentityInfoT = UserIdentityInfo>
    void SetIdentityInfo(IdentityInfoT&& value) { m_identityInfoHasBeenSet = true; m_identityInfo = std::forward<IdentityInfoT>(value); }
    template<typename IdentityInfoT = UserIdentityInfo>
    User& WithIdentityInfo(IdentityInfoT&& value) { SetIdentityInfo(std::forward<IdentityInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the phone configuration for the user.</p>
     */
    inline const UserPhoneConfig& GetPhoneConfig() const { return m_phoneConfig; }
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }
    template<typename PhoneConfigT = UserPhoneConfig>
    void SetPhoneConfig(PhoneConfigT&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::forward<PhoneConfigT>(value); }
    template<typename PhoneConfigT = UserPhoneConfig>
    User& WithPhoneConfig(PhoneConfigT&& value) { SetPhoneConfig(std::forward<PhoneConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user account in the directory used for identity
     * management.</p>
     */
    inline const Aws::String& GetDirectoryUserId() const { return m_directoryUserId; }
    inline bool DirectoryUserIdHasBeenSet() const { return m_directoryUserIdHasBeenSet; }
    template<typename DirectoryUserIdT = Aws::String>
    void SetDirectoryUserId(DirectoryUserIdT&& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = std::forward<DirectoryUserIdT>(value); }
    template<typename DirectoryUserIdT = Aws::String>
    User& WithDirectoryUserId(DirectoryUserIdT&& value) { SetDirectoryUserId(std::forward<DirectoryUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of the security profiles for the user.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityProfileIds() const { return m_securityProfileIds; }
    inline bool SecurityProfileIdsHasBeenSet() const { return m_securityProfileIdsHasBeenSet; }
    template<typename SecurityProfileIdsT = Aws::Vector<Aws::String>>
    void SetSecurityProfileIds(SecurityProfileIdsT&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = std::forward<SecurityProfileIdsT>(value); }
    template<typename SecurityProfileIdsT = Aws::Vector<Aws::String>>
    User& WithSecurityProfileIds(SecurityProfileIdsT&& value) { SetSecurityProfileIds(std::forward<SecurityProfileIdsT>(value)); return *this;}
    template<typename SecurityProfileIdsT = Aws::String>
    User& AddSecurityProfileIds(SecurityProfileIdsT&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.emplace_back(std::forward<SecurityProfileIdsT>(value)); return *this; }
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
    User& WithRoutingProfileId(RoutingProfileIdT&& value) { SetRoutingProfileId(std::forward<RoutingProfileIdT>(value)); return *this;}
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
    User& WithHierarchyGroupId(HierarchyGroupIdT&& value) { SetHierarchyGroupId(std::forward<HierarchyGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    User& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    User& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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
    User& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
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
    User& WithLastModifiedRegion(LastModifiedRegionT&& value) { SetLastModifiedRegion(std::forward<LastModifiedRegionT>(value)); return *this;}
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

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
