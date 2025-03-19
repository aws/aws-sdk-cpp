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
    AWS_COGNITOIDENTITYPROVIDER_API AdminGetUserResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AdminGetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API AdminGetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The username of the user that you requested.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    AdminGetUserResult& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of name-value pairs of user attributes and their values, for example
     * <code>"email": "testuser@example.com"</code>.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const { return m_userAttributes; }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    void SetUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::forward<UserAttributesT>(value); }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    AdminGetUserResult& WithUserAttributes(UserAttributesT&& value) { SetUserAttributes(std::forward<UserAttributesT>(value)); return *this;}
    template<typename UserAttributesT = AttributeType>
    AdminGetUserResult& AddUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace_back(std::forward<UserAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetUserCreateDate() const { return m_userCreateDate; }
    template<typename UserCreateDateT = Aws::Utils::DateTime>
    void SetUserCreateDate(UserCreateDateT&& value) { m_userCreateDateHasBeenSet = true; m_userCreateDate = std::forward<UserCreateDateT>(value); }
    template<typename UserCreateDateT = Aws::Utils::DateTime>
    AdminGetUserResult& WithUserCreateDate(UserCreateDateT&& value) { SetUserCreateDate(std::forward<UserCreateDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetUserLastModifiedDate() const { return m_userLastModifiedDate; }
    template<typename UserLastModifiedDateT = Aws::Utils::DateTime>
    void SetUserLastModifiedDate(UserLastModifiedDateT&& value) { m_userLastModifiedDateHasBeenSet = true; m_userLastModifiedDate = std::forward<UserLastModifiedDateT>(value); }
    template<typename UserLastModifiedDateT = Aws::Utils::DateTime>
    AdminGetUserResult& WithUserLastModifiedDate(UserLastModifiedDateT&& value) { SetUserLastModifiedDate(std::forward<UserLastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the user is activated for sign-in.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AdminGetUserResult& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's status. Can be one of the following:</p> <ul> <li> <p>UNCONFIRMED
     * - User has been created but not confirmed.</p> </li> <li> <p>CONFIRMED - User
     * has been confirmed.</p> </li> <li> <p>UNKNOWN - User status isn't known.</p>
     * </li> <li> <p>RESET_REQUIRED - User is confirmed, but the user must request a
     * code and reset their password before they can sign in.</p> </li> <li>
     * <p>FORCE_CHANGE_PASSWORD - The user is confirmed and the user can sign in using
     * a temporary password, but on first sign-in, the user must change their password
     * to a new value before doing anything else. </p> </li> <li> <p>EXTERNAL_PROVIDER
     * - The user signed in with a third-party identity provider.</p> </li> </ul>
     */
    inline UserStatusType GetUserStatus() const { return m_userStatus; }
    inline void SetUserStatus(UserStatusType value) { m_userStatusHasBeenSet = true; m_userStatus = value; }
    inline AdminGetUserResult& WithUserStatus(UserStatusType value) { SetUserStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <i>This response parameter is no longer supported.</i> It provides
     * information only about SMS MFA configurations. It doesn't provide information
     * about time-based one-time password (TOTP) software token MFA configurations. To
     * look up information about either type of MFA configuration, use
     * UserMFASettingList instead.</p>
     */
    inline const Aws::Vector<MFAOptionType>& GetMFAOptions() const { return m_mFAOptions; }
    template<typename MFAOptionsT = Aws::Vector<MFAOptionType>>
    void SetMFAOptions(MFAOptionsT&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions = std::forward<MFAOptionsT>(value); }
    template<typename MFAOptionsT = Aws::Vector<MFAOptionType>>
    AdminGetUserResult& WithMFAOptions(MFAOptionsT&& value) { SetMFAOptions(std::forward<MFAOptionsT>(value)); return *this;}
    template<typename MFAOptionsT = MFAOptionType>
    AdminGetUserResult& AddMFAOptions(MFAOptionsT&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions.emplace_back(std::forward<MFAOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user's preferred MFA. Users can prefer SMS message, email message, or
     * TOTP MFA.</p>
     */
    inline const Aws::String& GetPreferredMfaSetting() const { return m_preferredMfaSetting; }
    template<typename PreferredMfaSettingT = Aws::String>
    void SetPreferredMfaSetting(PreferredMfaSettingT&& value) { m_preferredMfaSettingHasBeenSet = true; m_preferredMfaSetting = std::forward<PreferredMfaSettingT>(value); }
    template<typename PreferredMfaSettingT = Aws::String>
    AdminGetUserResult& WithPreferredMfaSetting(PreferredMfaSettingT&& value) { SetPreferredMfaSetting(std::forward<PreferredMfaSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MFA options that are activated for the user. The possible values in this
     * list are <code>SMS_MFA</code>, <code>EMAIL_OTP</code>, and
     * <code>SOFTWARE_TOKEN_MFA</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserMFASettingList() const { return m_userMFASettingList; }
    template<typename UserMFASettingListT = Aws::Vector<Aws::String>>
    void SetUserMFASettingList(UserMFASettingListT&& value) { m_userMFASettingListHasBeenSet = true; m_userMFASettingList = std::forward<UserMFASettingListT>(value); }
    template<typename UserMFASettingListT = Aws::Vector<Aws::String>>
    AdminGetUserResult& WithUserMFASettingList(UserMFASettingListT&& value) { SetUserMFASettingList(std::forward<UserMFASettingListT>(value)); return *this;}
    template<typename UserMFASettingListT = Aws::String>
    AdminGetUserResult& AddUserMFASettingList(UserMFASettingListT&& value) { m_userMFASettingListHasBeenSet = true; m_userMFASettingList.emplace_back(std::forward<UserMFASettingListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AdminGetUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_userCreateDate{};
    bool m_userCreateDateHasBeenSet = false;

    Aws::Utils::DateTime m_userLastModifiedDate{};
    bool m_userLastModifiedDateHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    UserStatusType m_userStatus{UserStatusType::NOT_SET};
    bool m_userStatusHasBeenSet = false;

    Aws::Vector<MFAOptionType> m_mFAOptions;
    bool m_mFAOptionsHasBeenSet = false;

    Aws::String m_preferredMfaSetting;
    bool m_preferredMfaSettingHasBeenSet = false;

    Aws::Vector<Aws::String> m_userMFASettingList;
    bool m_userMFASettingListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
