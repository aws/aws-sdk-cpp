/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents the response from the server from the request to get information
   * about the user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetUserResponse">AWS
   * API Reference</a></p>
   */
  class GetUserResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetUserResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the user that you requested.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    GetUserResult& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of name-value pairs representing user attributes.</p> <p>Custom
     * attributes are prepended with the <code>custom:</code> prefix.</p>
     */
    inline const Aws::Vector<AttributeType>& GetUserAttributes() const { return m_userAttributes; }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    void SetUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::forward<UserAttributesT>(value); }
    template<typename UserAttributesT = Aws::Vector<AttributeType>>
    GetUserResult& WithUserAttributes(UserAttributesT&& value) { SetUserAttributes(std::forward<UserAttributesT>(value)); return *this;}
    template<typename UserAttributesT = AttributeType>
    GetUserResult& AddUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace_back(std::forward<UserAttributesT>(value)); return *this; }
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
    GetUserResult& WithMFAOptions(MFAOptionsT&& value) { SetMFAOptions(std::forward<MFAOptionsT>(value)); return *this;}
    template<typename MFAOptionsT = MFAOptionType>
    GetUserResult& AddMFAOptions(MFAOptionsT&& value) { m_mFAOptionsHasBeenSet = true; m_mFAOptions.emplace_back(std::forward<MFAOptionsT>(value)); return *this; }
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
    GetUserResult& WithPreferredMfaSetting(PreferredMfaSettingT&& value) { SetPreferredMfaSetting(std::forward<PreferredMfaSettingT>(value)); return *this;}
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
    GetUserResult& WithUserMFASettingList(UserMFASettingListT&& value) { SetUserMFASettingList(std::forward<UserMFASettingListT>(value)); return *this;}
    template<typename UserMFASettingListT = Aws::String>
    GetUserResult& AddUserMFASettingList(UserMFASettingListT&& value) { m_userMFASettingListHasBeenSet = true; m_userMFASettingList.emplace_back(std::forward<UserMFASettingListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::Vector<AttributeType> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

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
