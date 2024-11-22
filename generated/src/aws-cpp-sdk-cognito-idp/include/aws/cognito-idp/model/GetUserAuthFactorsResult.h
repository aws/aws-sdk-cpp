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
    AWS_COGNITOIDENTITYPROVIDER_API GetUserAuthFactorsResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetUserAuthFactorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUserAuthFactorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The username of the currently sign-in user.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }
    inline void SetUsername(const Aws::String& value) { m_username = value; }
    inline void SetUsername(Aws::String&& value) { m_username = std::move(value); }
    inline void SetUsername(const char* value) { m_username.assign(value); }
    inline GetUserAuthFactorsResult& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}
    inline GetUserAuthFactorsResult& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}
    inline GetUserAuthFactorsResult& WithUsername(const char* value) { SetUsername(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user's preferred MFA setting.</p>
     */
    inline const Aws::String& GetPreferredMfaSetting() const{ return m_preferredMfaSetting; }
    inline void SetPreferredMfaSetting(const Aws::String& value) { m_preferredMfaSetting = value; }
    inline void SetPreferredMfaSetting(Aws::String&& value) { m_preferredMfaSetting = std::move(value); }
    inline void SetPreferredMfaSetting(const char* value) { m_preferredMfaSetting.assign(value); }
    inline GetUserAuthFactorsResult& WithPreferredMfaSetting(const Aws::String& value) { SetPreferredMfaSetting(value); return *this;}
    inline GetUserAuthFactorsResult& WithPreferredMfaSetting(Aws::String&& value) { SetPreferredMfaSetting(std::move(value)); return *this;}
    inline GetUserAuthFactorsResult& WithPreferredMfaSetting(const char* value) { SetPreferredMfaSetting(value); return *this;}
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
    inline GetUserAuthFactorsResult& WithUserMFASettingList(const Aws::Vector<Aws::String>& value) { SetUserMFASettingList(value); return *this;}
    inline GetUserAuthFactorsResult& WithUserMFASettingList(Aws::Vector<Aws::String>&& value) { SetUserMFASettingList(std::move(value)); return *this;}
    inline GetUserAuthFactorsResult& AddUserMFASettingList(const Aws::String& value) { m_userMFASettingList.push_back(value); return *this; }
    inline GetUserAuthFactorsResult& AddUserMFASettingList(Aws::String&& value) { m_userMFASettingList.push_back(std::move(value)); return *this; }
    inline GetUserAuthFactorsResult& AddUserMFASettingList(const char* value) { m_userMFASettingList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authentication types that are available to the user with
     * <code>USER_AUTH</code> sign-in. </p>
     */
    inline const Aws::Vector<AuthFactorType>& GetConfiguredUserAuthFactors() const{ return m_configuredUserAuthFactors; }
    inline void SetConfiguredUserAuthFactors(const Aws::Vector<AuthFactorType>& value) { m_configuredUserAuthFactors = value; }
    inline void SetConfiguredUserAuthFactors(Aws::Vector<AuthFactorType>&& value) { m_configuredUserAuthFactors = std::move(value); }
    inline GetUserAuthFactorsResult& WithConfiguredUserAuthFactors(const Aws::Vector<AuthFactorType>& value) { SetConfiguredUserAuthFactors(value); return *this;}
    inline GetUserAuthFactorsResult& WithConfiguredUserAuthFactors(Aws::Vector<AuthFactorType>&& value) { SetConfiguredUserAuthFactors(std::move(value)); return *this;}
    inline GetUserAuthFactorsResult& AddConfiguredUserAuthFactors(const AuthFactorType& value) { m_configuredUserAuthFactors.push_back(value); return *this; }
    inline GetUserAuthFactorsResult& AddConfiguredUserAuthFactors(AuthFactorType&& value) { m_configuredUserAuthFactors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUserAuthFactorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUserAuthFactorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUserAuthFactorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_username;

    Aws::String m_preferredMfaSetting;

    Aws::Vector<Aws::String> m_userMFASettingList;

    Aws::Vector<AuthFactorType> m_configuredUserAuthFactors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
