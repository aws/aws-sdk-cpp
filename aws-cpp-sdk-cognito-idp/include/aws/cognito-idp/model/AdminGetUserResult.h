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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-idp/model/UserStatusType.h>
#include <aws/cognito-idp/model/AttributeType.h>
#include <aws/cognito-idp/model/MFAOptionType.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Represents the response from the server from the request to get the specified
   * user as an administrator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminGetUserResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminGetUserResult
  {
  public:
    AdminGetUserResult();
    AdminGetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AdminGetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_username = value; }

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_username = std::move(value); }

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline void SetUsername(const char* value) { m_username.assign(value); }

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline AdminGetUserResult& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline AdminGetUserResult& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The user name of the user about whom you are receiving information.</p>
     */
    inline AdminGetUserResult& WithUsername(const char* value) { SetUsername(value); return *this;}


    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributes = value; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributes = std::move(value); }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminGetUserResult& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminGetUserResult& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminGetUserResult& AddUserAttributes(const AttributeType& value) { m_userAttributes.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline AdminGetUserResult& AddUserAttributes(AttributeType&& value) { m_userAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The date the user was created.</p>
     */
    inline const Aws::Utils::DateTime& GetUserCreateDate() const{ return m_userCreateDate; }

    /**
     * <p>The date the user was created.</p>
     */
    inline void SetUserCreateDate(const Aws::Utils::DateTime& value) { m_userCreateDate = value; }

    /**
     * <p>The date the user was created.</p>
     */
    inline void SetUserCreateDate(Aws::Utils::DateTime&& value) { m_userCreateDate = std::move(value); }

    /**
     * <p>The date the user was created.</p>
     */
    inline AdminGetUserResult& WithUserCreateDate(const Aws::Utils::DateTime& value) { SetUserCreateDate(value); return *this;}

    /**
     * <p>The date the user was created.</p>
     */
    inline AdminGetUserResult& WithUserCreateDate(Aws::Utils::DateTime&& value) { SetUserCreateDate(std::move(value)); return *this;}


    /**
     * <p>The date the user was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetUserLastModifiedDate() const{ return m_userLastModifiedDate; }

    /**
     * <p>The date the user was last modified.</p>
     */
    inline void SetUserLastModifiedDate(const Aws::Utils::DateTime& value) { m_userLastModifiedDate = value; }

    /**
     * <p>The date the user was last modified.</p>
     */
    inline void SetUserLastModifiedDate(Aws::Utils::DateTime&& value) { m_userLastModifiedDate = std::move(value); }

    /**
     * <p>The date the user was last modified.</p>
     */
    inline AdminGetUserResult& WithUserLastModifiedDate(const Aws::Utils::DateTime& value) { SetUserLastModifiedDate(value); return *this;}

    /**
     * <p>The date the user was last modified.</p>
     */
    inline AdminGetUserResult& WithUserLastModifiedDate(Aws::Utils::DateTime&& value) { SetUserLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>Indicates that the status is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates that the status is enabled.</p>
     */
    inline void SetEnabled(bool value) { m_enabled = value; }

    /**
     * <p>Indicates that the status is enabled.</p>
     */
    inline AdminGetUserResult& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li> <p>UNCONFIRMED -
     * User has been created but not confirmed.</p> </li> <li> <p>CONFIRMED - User has
     * been confirmed.</p> </li> <li> <p>ARCHIVED - User is no longer active.</p> </li>
     * <li> <p>COMPROMISED - User is disabled due to a potential security threat.</p>
     * </li> <li> <p>UNKNOWN - User status is not known.</p> </li> <li>
     * <p>RESET_REQUIRED - User is confirmed, but the user must request a code and
     * reset his or her password before he or she can sign in.</p> </li> <li>
     * <p>FORCE_CHANGE_PASSWORD - The user is confirmed and the user can sign in using
     * a temporary password, but on first sign-in, the user must change his or her
     * password to a new value before doing anything else. </p> </li> </ul>
     */
    inline const UserStatusType& GetUserStatus() const{ return m_userStatus; }

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li> <p>UNCONFIRMED -
     * User has been created but not confirmed.</p> </li> <li> <p>CONFIRMED - User has
     * been confirmed.</p> </li> <li> <p>ARCHIVED - User is no longer active.</p> </li>
     * <li> <p>COMPROMISED - User is disabled due to a potential security threat.</p>
     * </li> <li> <p>UNKNOWN - User status is not known.</p> </li> <li>
     * <p>RESET_REQUIRED - User is confirmed, but the user must request a code and
     * reset his or her password before he or she can sign in.</p> </li> <li>
     * <p>FORCE_CHANGE_PASSWORD - The user is confirmed and the user can sign in using
     * a temporary password, but on first sign-in, the user must change his or her
     * password to a new value before doing anything else. </p> </li> </ul>
     */
    inline void SetUserStatus(const UserStatusType& value) { m_userStatus = value; }

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li> <p>UNCONFIRMED -
     * User has been created but not confirmed.</p> </li> <li> <p>CONFIRMED - User has
     * been confirmed.</p> </li> <li> <p>ARCHIVED - User is no longer active.</p> </li>
     * <li> <p>COMPROMISED - User is disabled due to a potential security threat.</p>
     * </li> <li> <p>UNKNOWN - User status is not known.</p> </li> <li>
     * <p>RESET_REQUIRED - User is confirmed, but the user must request a code and
     * reset his or her password before he or she can sign in.</p> </li> <li>
     * <p>FORCE_CHANGE_PASSWORD - The user is confirmed and the user can sign in using
     * a temporary password, but on first sign-in, the user must change his or her
     * password to a new value before doing anything else. </p> </li> </ul>
     */
    inline void SetUserStatus(UserStatusType&& value) { m_userStatus = std::move(value); }

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li> <p>UNCONFIRMED -
     * User has been created but not confirmed.</p> </li> <li> <p>CONFIRMED - User has
     * been confirmed.</p> </li> <li> <p>ARCHIVED - User is no longer active.</p> </li>
     * <li> <p>COMPROMISED - User is disabled due to a potential security threat.</p>
     * </li> <li> <p>UNKNOWN - User status is not known.</p> </li> <li>
     * <p>RESET_REQUIRED - User is confirmed, but the user must request a code and
     * reset his or her password before he or she can sign in.</p> </li> <li>
     * <p>FORCE_CHANGE_PASSWORD - The user is confirmed and the user can sign in using
     * a temporary password, but on first sign-in, the user must change his or her
     * password to a new value before doing anything else. </p> </li> </ul>
     */
    inline AdminGetUserResult& WithUserStatus(const UserStatusType& value) { SetUserStatus(value); return *this;}

    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li> <p>UNCONFIRMED -
     * User has been created but not confirmed.</p> </li> <li> <p>CONFIRMED - User has
     * been confirmed.</p> </li> <li> <p>ARCHIVED - User is no longer active.</p> </li>
     * <li> <p>COMPROMISED - User is disabled due to a potential security threat.</p>
     * </li> <li> <p>UNKNOWN - User status is not known.</p> </li> <li>
     * <p>RESET_REQUIRED - User is confirmed, but the user must request a code and
     * reset his or her password before he or she can sign in.</p> </li> <li>
     * <p>FORCE_CHANGE_PASSWORD - The user is confirmed and the user can sign in using
     * a temporary password, but on first sign-in, the user must change his or her
     * password to a new value before doing anything else. </p> </li> </ul>
     */
    inline AdminGetUserResult& WithUserStatus(UserStatusType&& value) { SetUserStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline const Aws::Vector<MFAOptionType>& GetMFAOptions() const{ return m_mFAOptions; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline void SetMFAOptions(const Aws::Vector<MFAOptionType>& value) { m_mFAOptions = value; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline void SetMFAOptions(Aws::Vector<MFAOptionType>&& value) { m_mFAOptions = std::move(value); }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline AdminGetUserResult& WithMFAOptions(const Aws::Vector<MFAOptionType>& value) { SetMFAOptions(value); return *this;}

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline AdminGetUserResult& WithMFAOptions(Aws::Vector<MFAOptionType>&& value) { SetMFAOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline AdminGetUserResult& AddMFAOptions(const MFAOptionType& value) { m_mFAOptions.push_back(value); return *this; }

    /**
     * <p>Specifies the options for MFA (e.g., email or phone number).</p>
     */
    inline AdminGetUserResult& AddMFAOptions(MFAOptionType&& value) { m_mFAOptions.push_back(std::move(value)); return *this; }


    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline const Aws::String& GetPreferredMfaSetting() const{ return m_preferredMfaSetting; }

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline void SetPreferredMfaSetting(const Aws::String& value) { m_preferredMfaSetting = value; }

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline void SetPreferredMfaSetting(Aws::String&& value) { m_preferredMfaSetting = std::move(value); }

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline void SetPreferredMfaSetting(const char* value) { m_preferredMfaSetting.assign(value); }

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline AdminGetUserResult& WithPreferredMfaSetting(const Aws::String& value) { SetPreferredMfaSetting(value); return *this;}

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline AdminGetUserResult& WithPreferredMfaSetting(Aws::String&& value) { SetPreferredMfaSetting(std::move(value)); return *this;}

    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline AdminGetUserResult& WithPreferredMfaSetting(const char* value) { SetPreferredMfaSetting(value); return *this;}


    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserMFASettingList() const{ return m_userMFASettingList; }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline void SetUserMFASettingList(const Aws::Vector<Aws::String>& value) { m_userMFASettingList = value; }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline void SetUserMFASettingList(Aws::Vector<Aws::String>&& value) { m_userMFASettingList = std::move(value); }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline AdminGetUserResult& WithUserMFASettingList(const Aws::Vector<Aws::String>& value) { SetUserMFASettingList(value); return *this;}

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline AdminGetUserResult& WithUserMFASettingList(Aws::Vector<Aws::String>&& value) { SetUserMFASettingList(std::move(value)); return *this;}

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline AdminGetUserResult& AddUserMFASettingList(const Aws::String& value) { m_userMFASettingList.push_back(value); return *this; }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline AdminGetUserResult& AddUserMFASettingList(Aws::String&& value) { m_userMFASettingList.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of the user's MFA settings.</p>
     */
    inline AdminGetUserResult& AddUserMFASettingList(const char* value) { m_userMFASettingList.push_back(value); return *this; }

  private:

    Aws::String m_username;

    Aws::Vector<AttributeType> m_userAttributes;

    Aws::Utils::DateTime m_userCreateDate;

    Aws::Utils::DateTime m_userLastModifiedDate;

    bool m_enabled;

    UserStatusType m_userStatus;

    Aws::Vector<MFAOptionType> m_mFAOptions;

    Aws::String m_preferredMfaSetting;

    Aws::Vector<Aws::String> m_userMFASettingList;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
