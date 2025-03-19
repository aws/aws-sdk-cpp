/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AuthFactorType.h>
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
  class GetUserAuthFactorsResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetUserAuthFactorsResult() = default;
    AWS_COGNITOIDENTITYPROVIDER_API GetUserAuthFactorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUserAuthFactorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the user who is eligible for the authentication factors in the
     * response.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    GetUserAuthFactorsResult& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The challenge method that Amazon Cognito returns to the user in response to
     * sign-in requests. Users can prefer SMS message, email message, or TOTP MFA.</p>
     */
    inline const Aws::String& GetPreferredMfaSetting() const { return m_preferredMfaSetting; }
    template<typename PreferredMfaSettingT = Aws::String>
    void SetPreferredMfaSetting(PreferredMfaSettingT&& value) { m_preferredMfaSettingHasBeenSet = true; m_preferredMfaSetting = std::forward<PreferredMfaSettingT>(value); }
    template<typename PreferredMfaSettingT = Aws::String>
    GetUserAuthFactorsResult& WithPreferredMfaSetting(PreferredMfaSettingT&& value) { SetPreferredMfaSetting(std::forward<PreferredMfaSettingT>(value)); return *this;}
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
    GetUserAuthFactorsResult& WithUserMFASettingList(UserMFASettingListT&& value) { SetUserMFASettingList(std::forward<UserMFASettingListT>(value)); return *this;}
    template<typename UserMFASettingListT = Aws::String>
    GetUserAuthFactorsResult& AddUserMFASettingList(UserMFASettingListT&& value) { m_userMFASettingListHasBeenSet = true; m_userMFASettingList.emplace_back(std::forward<UserMFASettingListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication types that are available to the user with
     * <code>USER_AUTH</code> sign-in, for example <code>["PASSWORD",
     * "WEB_AUTHN"]</code>.</p>
     */
    inline const Aws::Vector<AuthFactorType>& GetConfiguredUserAuthFactors() const { return m_configuredUserAuthFactors; }
    template<typename ConfiguredUserAuthFactorsT = Aws::Vector<AuthFactorType>>
    void SetConfiguredUserAuthFactors(ConfiguredUserAuthFactorsT&& value) { m_configuredUserAuthFactorsHasBeenSet = true; m_configuredUserAuthFactors = std::forward<ConfiguredUserAuthFactorsT>(value); }
    template<typename ConfiguredUserAuthFactorsT = Aws::Vector<AuthFactorType>>
    GetUserAuthFactorsResult& WithConfiguredUserAuthFactors(ConfiguredUserAuthFactorsT&& value) { SetConfiguredUserAuthFactors(std::forward<ConfiguredUserAuthFactorsT>(value)); return *this;}
    inline GetUserAuthFactorsResult& AddConfiguredUserAuthFactors(AuthFactorType value) { m_configuredUserAuthFactorsHasBeenSet = true; m_configuredUserAuthFactors.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUserAuthFactorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;

    Aws::String m_preferredMfaSetting;
    bool m_preferredMfaSettingHasBeenSet = false;

    Aws::Vector<Aws::String> m_userMFASettingList;
    bool m_userMFASettingListHasBeenSet = false;

    Aws::Vector<AuthFactorType> m_configuredUserAuthFactors;
    bool m_configuredUserAuthFactorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
