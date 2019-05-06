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
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/UserIdentityInfo.h>
#include <aws/connect/model/UserPhoneConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API CreateUserRequest : public ConnectRequest
  {
  public:
    CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The user name in Amazon Connect for the account to create. If you are using
     * SAML for identity management in your Amazon Connect, the value for
     * <code>Username</code> can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name in Amazon Connect for the account to create. If you are using
     * SAML for identity management in your Amazon Connect, the value for
     * <code>Username</code> can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The user name in Amazon Connect for the account to create. If you are using
     * SAML for identity management in your Amazon Connect, the value for
     * <code>Username</code> can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The user name in Amazon Connect for the account to create. If you are using
     * SAML for identity management in your Amazon Connect, the value for
     * <code>Username</code> can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The user name in Amazon Connect for the account to create. If you are using
     * SAML for identity management in your Amazon Connect, the value for
     * <code>Username</code> can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The user name in Amazon Connect for the account to create. If you are using
     * SAML for identity management in your Amazon Connect, the value for
     * <code>Username</code> can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline CreateUserRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name in Amazon Connect for the account to create. If you are using
     * SAML for identity management in your Amazon Connect, the value for
     * <code>Username</code> can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline CreateUserRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name in Amazon Connect for the account to create. If you are using
     * SAML for identity management in your Amazon Connect, the value for
     * <code>Username</code> can include up to 64 characters from
     * [a-zA-Z0-9_-.\@]+.</p>
     */
    inline CreateUserRequest& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>The password for the user account to create. This is required if you are
     * using Amazon Connect for identity management. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password for the user account to create. This is required if you are
     * using Amazon Connect for identity management. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password for the user account to create. This is required if you are
     * using Amazon Connect for identity management. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password for the user account to create. This is required if you are
     * using Amazon Connect for identity management. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password for the user account to create. This is required if you are
     * using Amazon Connect for identity management. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password for the user account to create. This is required if you are
     * using Amazon Connect for identity management. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline CreateUserRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password for the user account to create. This is required if you are
     * using Amazon Connect for identity management. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline CreateUserRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password for the user account to create. This is required if you are
     * using Amazon Connect for identity management. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline CreateUserRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>Information about the user, including email address, first name, and last
     * name.</p>
     */
    inline const UserIdentityInfo& GetIdentityInfo() const{ return m_identityInfo; }

    /**
     * <p>Information about the user, including email address, first name, and last
     * name.</p>
     */
    inline bool IdentityInfoHasBeenSet() const { return m_identityInfoHasBeenSet; }

    /**
     * <p>Information about the user, including email address, first name, and last
     * name.</p>
     */
    inline void SetIdentityInfo(const UserIdentityInfo& value) { m_identityInfoHasBeenSet = true; m_identityInfo = value; }

    /**
     * <p>Information about the user, including email address, first name, and last
     * name.</p>
     */
    inline void SetIdentityInfo(UserIdentityInfo&& value) { m_identityInfoHasBeenSet = true; m_identityInfo = std::move(value); }

    /**
     * <p>Information about the user, including email address, first name, and last
     * name.</p>
     */
    inline CreateUserRequest& WithIdentityInfo(const UserIdentityInfo& value) { SetIdentityInfo(value); return *this;}

    /**
     * <p>Information about the user, including email address, first name, and last
     * name.</p>
     */
    inline CreateUserRequest& WithIdentityInfo(UserIdentityInfo&& value) { SetIdentityInfo(std::move(value)); return *this;}


    /**
     * <p>Specifies the phone settings for the user, including
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code>.</p>
     */
    inline const UserPhoneConfig& GetPhoneConfig() const{ return m_phoneConfig; }

    /**
     * <p>Specifies the phone settings for the user, including
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code>.</p>
     */
    inline bool PhoneConfigHasBeenSet() const { return m_phoneConfigHasBeenSet; }

    /**
     * <p>Specifies the phone settings for the user, including
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code>.</p>
     */
    inline void SetPhoneConfig(const UserPhoneConfig& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = value; }

    /**
     * <p>Specifies the phone settings for the user, including
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code>.</p>
     */
    inline void SetPhoneConfig(UserPhoneConfig&& value) { m_phoneConfigHasBeenSet = true; m_phoneConfig = std::move(value); }

    /**
     * <p>Specifies the phone settings for the user, including
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code>.</p>
     */
    inline CreateUserRequest& WithPhoneConfig(const UserPhoneConfig& value) { SetPhoneConfig(value); return *this;}

    /**
     * <p>Specifies the phone settings for the user, including
     * <code>AfterContactWorkTimeLimit</code>, <code>AutoAccept</code>,
     * <code>DeskPhoneNumber</code>, and <code>PhoneType</code>.</p>
     */
    inline CreateUserRequest& WithPhoneConfig(UserPhoneConfig&& value) { SetPhoneConfig(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the user account in the directory service directory
     * used for identity management. If Amazon Connect is unable to access the existing
     * directory, you can use the <code>DirectoryUserId</code> to authenticate users.
     * If you include the parameter, it is assumed that Amazon Connect cannot access
     * the directory. If the parameter is not included, the
     * <code>UserIdentityInfo</code> is used to authenticate users from your existing
     * directory.</p> <p>This parameter is required if you are using an existing
     * directory for identity management in Amazon Connect when Amazon Connect cannot
     * access your directory to authenticate users. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline const Aws::String& GetDirectoryUserId() const{ return m_directoryUserId; }

    /**
     * <p>The unique identifier for the user account in the directory service directory
     * used for identity management. If Amazon Connect is unable to access the existing
     * directory, you can use the <code>DirectoryUserId</code> to authenticate users.
     * If you include the parameter, it is assumed that Amazon Connect cannot access
     * the directory. If the parameter is not included, the
     * <code>UserIdentityInfo</code> is used to authenticate users from your existing
     * directory.</p> <p>This parameter is required if you are using an existing
     * directory for identity management in Amazon Connect when Amazon Connect cannot
     * access your directory to authenticate users. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline bool DirectoryUserIdHasBeenSet() const { return m_directoryUserIdHasBeenSet; }

    /**
     * <p>The unique identifier for the user account in the directory service directory
     * used for identity management. If Amazon Connect is unable to access the existing
     * directory, you can use the <code>DirectoryUserId</code> to authenticate users.
     * If you include the parameter, it is assumed that Amazon Connect cannot access
     * the directory. If the parameter is not included, the
     * <code>UserIdentityInfo</code> is used to authenticate users from your existing
     * directory.</p> <p>This parameter is required if you are using an existing
     * directory for identity management in Amazon Connect when Amazon Connect cannot
     * access your directory to authenticate users. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline void SetDirectoryUserId(const Aws::String& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = value; }

    /**
     * <p>The unique identifier for the user account in the directory service directory
     * used for identity management. If Amazon Connect is unable to access the existing
     * directory, you can use the <code>DirectoryUserId</code> to authenticate users.
     * If you include the parameter, it is assumed that Amazon Connect cannot access
     * the directory. If the parameter is not included, the
     * <code>UserIdentityInfo</code> is used to authenticate users from your existing
     * directory.</p> <p>This parameter is required if you are using an existing
     * directory for identity management in Amazon Connect when Amazon Connect cannot
     * access your directory to authenticate users. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline void SetDirectoryUserId(Aws::String&& value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId = std::move(value); }

    /**
     * <p>The unique identifier for the user account in the directory service directory
     * used for identity management. If Amazon Connect is unable to access the existing
     * directory, you can use the <code>DirectoryUserId</code> to authenticate users.
     * If you include the parameter, it is assumed that Amazon Connect cannot access
     * the directory. If the parameter is not included, the
     * <code>UserIdentityInfo</code> is used to authenticate users from your existing
     * directory.</p> <p>This parameter is required if you are using an existing
     * directory for identity management in Amazon Connect when Amazon Connect cannot
     * access your directory to authenticate users. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline void SetDirectoryUserId(const char* value) { m_directoryUserIdHasBeenSet = true; m_directoryUserId.assign(value); }

    /**
     * <p>The unique identifier for the user account in the directory service directory
     * used for identity management. If Amazon Connect is unable to access the existing
     * directory, you can use the <code>DirectoryUserId</code> to authenticate users.
     * If you include the parameter, it is assumed that Amazon Connect cannot access
     * the directory. If the parameter is not included, the
     * <code>UserIdentityInfo</code> is used to authenticate users from your existing
     * directory.</p> <p>This parameter is required if you are using an existing
     * directory for identity management in Amazon Connect when Amazon Connect cannot
     * access your directory to authenticate users. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline CreateUserRequest& WithDirectoryUserId(const Aws::String& value) { SetDirectoryUserId(value); return *this;}

    /**
     * <p>The unique identifier for the user account in the directory service directory
     * used for identity management. If Amazon Connect is unable to access the existing
     * directory, you can use the <code>DirectoryUserId</code> to authenticate users.
     * If you include the parameter, it is assumed that Amazon Connect cannot access
     * the directory. If the parameter is not included, the
     * <code>UserIdentityInfo</code> is used to authenticate users from your existing
     * directory.</p> <p>This parameter is required if you are using an existing
     * directory for identity management in Amazon Connect when Amazon Connect cannot
     * access your directory to authenticate users. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline CreateUserRequest& WithDirectoryUserId(Aws::String&& value) { SetDirectoryUserId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the user account in the directory service directory
     * used for identity management. If Amazon Connect is unable to access the existing
     * directory, you can use the <code>DirectoryUserId</code> to authenticate users.
     * If you include the parameter, it is assumed that Amazon Connect cannot access
     * the directory. If the parameter is not included, the
     * <code>UserIdentityInfo</code> is used to authenticate users from your existing
     * directory.</p> <p>This parameter is required if you are using an existing
     * directory for identity management in Amazon Connect when Amazon Connect cannot
     * access your directory to authenticate users. If you are using SAML for identity
     * management and include this parameter, an <code>InvalidRequestException</code>
     * is returned.</p>
     */
    inline CreateUserRequest& WithDirectoryUserId(const char* value) { SetDirectoryUserId(value); return *this;}


    /**
     * <p>The unique identifier of the security profile to assign to the user
     * created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityProfileIds() const{ return m_securityProfileIds; }

    /**
     * <p>The unique identifier of the security profile to assign to the user
     * created.</p>
     */
    inline bool SecurityProfileIdsHasBeenSet() const { return m_securityProfileIdsHasBeenSet; }

    /**
     * <p>The unique identifier of the security profile to assign to the user
     * created.</p>
     */
    inline void SetSecurityProfileIds(const Aws::Vector<Aws::String>& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = value; }

    /**
     * <p>The unique identifier of the security profile to assign to the user
     * created.</p>
     */
    inline void SetSecurityProfileIds(Aws::Vector<Aws::String>&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds = std::move(value); }

    /**
     * <p>The unique identifier of the security profile to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& WithSecurityProfileIds(const Aws::Vector<Aws::String>& value) { SetSecurityProfileIds(value); return *this;}

    /**
     * <p>The unique identifier of the security profile to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& WithSecurityProfileIds(Aws::Vector<Aws::String>&& value) { SetSecurityProfileIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the security profile to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& AddSecurityProfileIds(const Aws::String& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }

    /**
     * <p>The unique identifier of the security profile to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& AddSecurityProfileIds(Aws::String&& value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifier of the security profile to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& AddSecurityProfileIds(const char* value) { m_securityProfileIdsHasBeenSet = true; m_securityProfileIds.push_back(value); return *this; }


    /**
     * <p>The unique identifier for the routing profile to assign to the user
     * created.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }

    /**
     * <p>The unique identifier for the routing profile to assign to the user
     * created.</p>
     */
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }

    /**
     * <p>The unique identifier for the routing profile to assign to the user
     * created.</p>
     */
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }

    /**
     * <p>The unique identifier for the routing profile to assign to the user
     * created.</p>
     */
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }

    /**
     * <p>The unique identifier for the routing profile to assign to the user
     * created.</p>
     */
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }

    /**
     * <p>The unique identifier for the routing profile to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}

    /**
     * <p>The unique identifier for the routing profile to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the routing profile to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}


    /**
     * <p>The unique identifier for the hierarchy group to assign to the user
     * created.</p>
     */
    inline const Aws::String& GetHierarchyGroupId() const{ return m_hierarchyGroupId; }

    /**
     * <p>The unique identifier for the hierarchy group to assign to the user
     * created.</p>
     */
    inline bool HierarchyGroupIdHasBeenSet() const { return m_hierarchyGroupIdHasBeenSet; }

    /**
     * <p>The unique identifier for the hierarchy group to assign to the user
     * created.</p>
     */
    inline void SetHierarchyGroupId(const Aws::String& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = value; }

    /**
     * <p>The unique identifier for the hierarchy group to assign to the user
     * created.</p>
     */
    inline void SetHierarchyGroupId(Aws::String&& value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId = std::move(value); }

    /**
     * <p>The unique identifier for the hierarchy group to assign to the user
     * created.</p>
     */
    inline void SetHierarchyGroupId(const char* value) { m_hierarchyGroupIdHasBeenSet = true; m_hierarchyGroupId.assign(value); }

    /**
     * <p>The unique identifier for the hierarchy group to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& WithHierarchyGroupId(const Aws::String& value) { SetHierarchyGroupId(value); return *this;}

    /**
     * <p>The unique identifier for the hierarchy group to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& WithHierarchyGroupId(Aws::String&& value) { SetHierarchyGroupId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the hierarchy group to assign to the user
     * created.</p>
     */
    inline CreateUserRequest& WithHierarchyGroupId(const char* value) { SetHierarchyGroupId(value); return *this;}


    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline CreateUserRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline CreateUserRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your Amazon Connect instance. To find the ID of your
     * instance, open the AWS console and select Amazon Connect. Select the alias of
     * the instance in the Instance alias column. The instance ID is displayed in the
     * Overview section of your instance settings. For example, the instance ID is the
     * set of characters at the end of the instance ARN, after instance/, such as
     * 10a4c4eb-f57e-4d4c-b602-bf39176ced07.</p>
     */
    inline CreateUserRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

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

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
