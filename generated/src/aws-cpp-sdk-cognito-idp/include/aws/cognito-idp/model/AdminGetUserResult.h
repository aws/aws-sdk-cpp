/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AdminGetUserResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminGetUserResult();
    AWS_COGNITOIDENTITYPROVIDER_API AdminGetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminGetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The username of the user that you requested.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline void SetUsername(const Aws::String& value) { m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_username.assign(value); }
    inline AdminGetUserResult& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline AdminGetUserResult& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline AdminGetUserResult& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of name-value pairs representing user attributes.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const{ return m_userAttributes; }
    inline void SetUserAttributes(const Aws::Vector<AttributeType>& value) { m_userAttributes = value; }
    inline void SetUserAttributes(Aws::Vector<AttributeType>&& value) { m_userAttributes = std::move(value); }
    inline AdminGetUserResult& WithUserAttributes(const Aws::Vector<AttributeType>& value) { SetUserAttributes(value); return *this;}
    inline AdminGetUserResult& WithUserAttributes(Aws::Vector<AttributeType>&& value) { SetUserAttributes(std::move(value)); return *this;}
    inline AdminGetUserResult& AddUserAttributes(const AttributeType& value) { m_userAttributes.push_back(value); return *this; }
    inline AdminGetUserResult& AddUserAttributes(AttributeType&& value) { m_userAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the user was created.</p>
     */
    inline const Aws::Utils::DateTime& GetUserCreateDate() const{ return m_userCreateDate; }
    inline void SetUserCreateDate(const Aws::Utils::DateTime& value) { m_userCreateDate = value; }
    inline void SetUserCreateDate(Aws::Utils::DateTime&& value) { m_userCreateDate = std::move(value); }
    inline AdminGetUserResult& WithUserCreateDate(const Aws::Utils::DateTime& value) { SetUserCreateDate(value); return *this;}
    inline AdminGetUserResult& WithUserCreateDate(Aws::Utils::DateTime&& value) { SetUserCreateDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetUserLastModifiedDate() const{ return m_userLastModifiedDate; }
    inline void SetUserLastModifiedDate(const Aws::Utils::DateTime& value) { m_userLastModifiedDate = value; }
    inline void SetUserLastModifiedDate(Aws::Utils::DateTime&& value) { m_userLastModifiedDate = std::move(value); }
    inline AdminGetUserResult& WithUserLastModifiedDate(const Aws::Utils::DateTime& value) { SetUserLastModifiedDate(value); return *this;}
    inline AdminGetUserResult& WithUserLastModifiedDate(Aws::Utils::DateTime&& value) { SetUserLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the status is <code>enabled</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline void SetEnabled(bool value) { m_enabled = value; }
    inline AdminGetUserResult& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user status. Can be one of the following:</p> <ul> <li> <p>UNCONFIRMED -
     * User has been created but not confirmed.</p> </li> <li> <p>CONFIRMED - User has
     * been confirmed.</p> </li> <li> <p>UNKNOWN - User status isn't known.</p> </li>
     * <li> <p>RESET_REQUIRED - User is confirmed, but the user must request a code and
     * reset their password before they can sign in.</p> </li> <li>
     * <p>FORCE_CHANGE_PASSWORD - The user is confirmed and the user can sign in using
     * a temporary password, but on first sign-in, the user must change their password
     * to a new value before doing anything else. </p> </li> </ul>
     */
    inline const UserStatusType& GetUserStatus() const{ return m_userStatus; }
    inline void SetUserStatus(const UserStatusType& value) { m_userStatus = value; }
    inline void SetUserStatus(UserStatusType&& value) { m_userStatus = std::move(value); }
    inline AdminGetUserResult& WithUserStatus(const UserStatusType& value) { SetUserStatus(value); return *this;}
    inline AdminGetUserResult& WithUserStatus(UserStatusType&& value) { SetUserStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>This response parameter is no longer supported.</i> It provides
     * information only about SMS MFA configurations. It doesn't provide information
     * about time-based one-time password (TOTP) software token MFA configurations. To
     * look up information about either type of MFA configuration, use
     * UserMFASettingList instead.</p>
     */
    inline const Aws::Vector<MFAOptionType>& GetMFAOptions() const{ return m_mFAOptions; }
    inline void SetMFAOptions(const Aws::Vector<MFAOptionType>& value) { m_mFAOptions = value; }
    inline void SetMFAOptions(Aws::Vector<MFAOptionType>&& value) { m_mFAOptions = std::move(value); }
    inline AdminGetUserResult& WithMFAOptions(const Aws::Vector<MFAOptionType>& value) { SetMFAOptions(value); return *this;}
    inline AdminGetUserResult& WithMFAOptions(Aws::Vector<MFAOptionType>&& value) { SetMFAOptions(std::move(value)); return *this;}
    inline AdminGetUserResult& AddMFAOptions(const MFAOptionType& value) { m_mFAOptions.push_back(value); return *this; }
    inline AdminGetUserResult& AddMFAOptions(MFAOptionType&& value) { m_mFAOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline const Aws::String& GetPreferredMfaSetting() const{ return m_preferredMfaSetting; }
    inline void SetPreferredMfaSetting(const Aws::String& value) { m_preferredMfaSetting = value; }
    inline void SetPreferredMfaSetting(Aws::String&& value) { m_preferredMfaSetting = std::move(value); }
    inline void SetPreferredMfaSetting(const char* value) { m_preferredMfaSetting.assign(value); }
    inline AdminGetUserResult& WithPreferredMfaSetting(const Aws::String& value) { SetPreferredMfaSetting(value); return *this;}
    inline AdminGetUserResult& WithPreferredMfaSetting(Aws::String&& value) { SetPreferredMfaSetting(std::move(value)); return *this;}
    inline AdminGetUserResult& WithPreferredMfaSetting(const char* value) { SetPreferredMfaSetting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code>, <code>EMAIL_OTP</code>, and
     * <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserMFASettingList() const{ return m_userMFASettingList; }
    inline void SetUserMFASettingList(const Aws::Vector<Aws::String>& value) { m_userMFASettingList = value; }
    inline void SetUserMFASettingList(Aws::Vector<Aws::String>&& value) { m_userMFASettingList = std::move(value); }
    inline AdminGetUserResult& WithUserMFASettingList(const Aws::Vector<Aws::String>& value) { SetUserMFASettingList(value); return *this;}
    inline AdminGetUserResult& WithUserMFASettingList(Aws::Vector<Aws::String>&& value) { SetUserMFASettingList(std::move(value)); return *this;}
    inline AdminGetUserResult& AddUserMFASettingList(const Aws::String& value) { m_userMFASettingList.push_back(value); return *this; }
    inline AdminGetUserResult& AddUserMFASettingList(Aws::String&& value) { m_userMFASettingList.push_back(std::move(value)); return *this; }
    inline AdminGetUserResult& AddUserMFASettingList(const char* value) { m_userMFASettingList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AdminGetUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AdminGetUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AdminGetUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
