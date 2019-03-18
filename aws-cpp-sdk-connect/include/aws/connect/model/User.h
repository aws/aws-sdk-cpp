/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UserIdentityInfo.h>
#include <aws/connect/model/UserPhoneConfig.h>
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
   * <p>A <code>User</code> object that contains information about a user account in
   * your Amazon Connect instance, including configuration settings.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/User">AWS API
   * Reference</a></p>
   */
  class AWS_CONNECT_API User
  {
  public:
    User();
    User(Aws::Utils::Json::JsonView jsonValue);
    User& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The ARN of the user account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the user account.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the user account.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the user account.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the user account.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the user account.</p>
     */
    inline User& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the user account.</p>
     */
    inline User& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user account.</p>
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
     * <p>A <code>UserIdentityInfo</code> object.</p>
     */
    inline const UserIdentityInfo& GetIdentityInfo() const{ return m_identityInfo; }

    /**
     * <p>A <code>UserIdentityInfo</code> object.</p>
     */
    inline bool IdentityInfoHasBeenSet() const { return m_identityInfoHasBeenSet; }

    /**
     * <p>A <code>UserIdentityInfo</code> object.</p>
     */
    inline void SetIdentityInfo(const UserIdentityInfo& value) { m_identityInfoHasBeenSet = true; m_identityInfo = value; }

    /**
     * <p>A <code>UserIdentityInfo</code> object.</p>
     */
    inline void SetIdentityInfo(UserIdentityInfo&& value) { m_identityInfoHasBeenSet = true; m_identityInfo = std::move(value); }

    /**
     * <p>A <code>UserIdentityInfo</code> object.</p>
     */
    inline User& WithIdentityInfo(const UserIdentityInfo& value) { SetIdentityInfo(value); return *this;}

    /**
     * <p>A <code>UserIdentityInfo</code> object.</p>
     */
    inline User& WithIdentityInfo(UserIdentityInfo&& value) { SetIdentityInfo(std::move(value)); return *this;}


    /**
     * <p>A <code>UserPhoneConfig</code> object.</p>
     */
    inline const UserPhoneConfig& GetPhoneConfig() const{ return m_phoneConfig; }

    /**
     * <p>A <code>UserPhoneConfig</code> object.</p>
     */
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }

    /**
     * <p>A <code>UserPhoneConfig</code> object.</p>
     */
    inline void SetPhoneConfig(const UserPhoneConfig& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = value; }

    /**
     * <p>A <code>UserPhoneConfig</code> object.</p>
     */
    inline void SetPhoneConfig(UserPhoneConfig&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::move(value); }

    /**
     * <p>A <code>UserPhoneConfig</code> object.</p>
     */
    inline User& WithPhoneConfig(const UserPhoneConfig& value) { SetPhoneConfig(value); return *this;}

    /**
     * <p>A <code>UserPhoneConfig</code> object.</p>
     */
    inline User& WithPhoneConfig(UserPhoneConfig&& value) { SetPhoneConfig(std::move(value)); return *this;}


    /**
     * <p>The directory Id for the user account in the existing directory used for
     * identity management.</p>
     */
    inline const Aws::String& GetDirectoryUserId() const{ return m_directoryUserId; }

    /**
     * <p>The directory Id for the user account in the existing directory used for
     * identity management.</p>
     */
    inline bool DirectoryUserIdHasBeenSet() const { return m_directoryUserIdHasBeenSet; }

    /**
     * <p>The directory Id for the user account in the existing directory used for
     * identity management.</p>
     */
    inline void SetDirectoryUserId(const Aws::String& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = value; }

    /**
     * <p>The directory Id for the user account in the existing directory used for
     * identity management.</p>
     */
    inline void SetDirectoryUserId(Aws::String&& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = std::move(value); }

    /**
     * <p>The directory Id for the user account in the existing directory used for
     * identity management.</p>
     */
    inline void SetDirectoryUserId(const char* value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId.assign(value); }

    /**
     * <p>The directory Id for the user account in the existing directory used for
     * identity management.</p>
     */
    inline User& WithDirectoryUserId(const Aws::String& value) { SetDirectoryUserId(value); return *this;}

    /**
     * <p>The directory Id for the user account in the existing directory used for
     * identity management.</p>
     */
    inline User& WithDirectoryUserId(Aws::String&& value) { SetDirectoryUserId(std::move(value)); return *this;}

    /**
     * <p>The directory Id for the user account in the existing directory used for
     * identity management.</p>
     */
    inline User& WithDirectoryUserId(const char* value) { SetDirectoryUserId(value); return *this;}


    /**
     * <p>The identifier(s) for the security profile assigned to the user.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityProfileIds() const{ return m_securityProfileIds; }

    /**
     * <p>The identifier(s) for the security profile assigned to the user.</p>
     */
    inline bool SecurityProfileIdsHasBeenSet() const { return m_securityProfileIdsHasBeenSet; }

    /**
     * <p>The identifier(s) for the security profile assigned to the user.</p>
     */
    inline void SetSecurityProfileIds(const Aws::Vector<Aws::String>& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = value; }

    /**
     * <p>The identifier(s) for the security profile assigned to the user.</p>
     */
    inline void SetSecurityProfileIds(Aws::Vector<Aws::String>&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = std::move(value); }

    /**
     * <p>The identifier(s) for the security profile assigned to the user.</p>
     */
    inline User& WithSecurityProfileIds(const Aws::Vector<Aws::String>& value) { SetSecurityProfileIds(value); return *this;}

    /**
     * <p>The identifier(s) for the security profile assigned to the user.</p>
     */
    inline User& WithSecurityProfileIds(Aws::Vector<Aws::String>&& value) { SetSecurityProfileIds(std::move(value)); return *this;}

    /**
     * <p>The identifier(s) for the security profile assigned to the user.</p>
     */
    inline User& AddSecurityProfileIds(const Aws::String& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }

    /**
     * <p>The identifier(s) for the security profile assigned to the user.</p>
     */
    inline User& AddSecurityProfileIds(Aws::String&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifier(s) for the security profile assigned to the user.</p>
     */
    inline User& AddSecurityProfileIds(const char* value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }


    /**
     * <p>The identifier of the routing profile assigned to the user.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }

    /**
     * <p>The identifier of the routing profile assigned to the user.</p>
     */
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }

    /**
     * <p>The identifier of the routing profile assigned to the user.</p>
     */
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }

    /**
     * <p>The identifier of the routing profile assigned to the user.</p>
     */
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }

    /**
     * <p>The identifier of the routing profile assigned to the user.</p>
     */
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }

    /**
     * <p>The identifier of the routing profile assigned to the user.</p>
     */
    inline User& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}

    /**
     * <p>The identifier of the routing profile assigned to the user.</p>
     */
    inline User& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the routing profile assigned to the user.</p>
     */
    inline User& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}


    /**
     * <p>The identifier for the hierarchy group assigned to the user.</p>
     */
    inline const Aws::String& GetHierarchyGroupId() const{ return m_hierarchyGroupId; }

    /**
     * <p>The identifier for the hierarchy group assigned to the user.</p>
     */
    inline bool HierarchyGroupIdHasBeenSet() const { return m_hierarchyGroupIdHasBeenSet; }

    /**
     * <p>The identifier for the hierarchy group assigned to the user.</p>
     */
    inline void SetHierarchyGroupId(const Aws::String& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = value; }

    /**
     * <p>The identifier for the hierarchy group assigned to the user.</p>
     */
    inline void SetHierarchyGroupId(Aws::String&& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = std::move(value); }

    /**
     * <p>The identifier for the hierarchy group assigned to the user.</p>
     */
    inline void SetHierarchyGroupId(const char* value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId.assign(value); }

    /**
     * <p>The identifier for the hierarchy group assigned to the user.</p>
     */
    inline User& WithHierarchyGroupId(const Aws::String& value) { SetHierarchyGroupId(value); return *this;}

    /**
     * <p>The identifier for the hierarchy group assigned to the user.</p>
     */
    inline User& WithHierarchyGroupId(Aws::String&& value) { SetHierarchyGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the hierarchy group assigned to the user.</p>
     */
    inline User& WithHierarchyGroupId(const char* value) { SetHierarchyGroupId(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    UserIdentityInfo m_identityInfo;
    bool m_identityInfoHasBeenSet;

    UserPhoneConfig m_phoneConfig;
    bool m_phoneConfigHasBeenSet;

    Aws::String m_directoryUserId;
    bool m_directoryUserIdHasBeenSet;

    Aws::Vector<Aws::String> m_securityProfileIds;
    bool m_securityProfileIdsHasBeenSet;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet;

    Aws::String m_hierarchyGroupId;
    bool m_hierarchyGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
