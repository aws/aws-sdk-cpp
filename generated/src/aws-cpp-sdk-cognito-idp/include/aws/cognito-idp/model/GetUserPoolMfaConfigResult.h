/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/SmsMfaConfigType.h>
#include <aws/cognito-idp/model/SoftwareTokenMfaConfigType.h>
#include <aws/cognito-idp/model/EmailMfaConfigType.h>
#include <aws/cognito-idp/model/UserPoolMfaType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetUserPoolMfaConfigResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult();
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API GetUserPoolMfaConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Shows user pool SMS message configuration for MFA. Includes the message
     * template and the SMS message sending configuration for Amazon SNS.</p>
     */
    inline const SmsMfaConfigType& GetSmsMfaConfiguration() const{ return m_smsMfaConfiguration; }
    inline void SetSmsMfaConfiguration(const SmsMfaConfigType& value) { m_smsMfaConfiguration = value; }
    inline void SetSmsMfaConfiguration(SmsMfaConfigType&& value) { m_smsMfaConfiguration = std::move(value); }
    inline GetUserPoolMfaConfigResult& WithSmsMfaConfiguration(const SmsMfaConfigType& value) { SetSmsMfaConfiguration(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithSmsMfaConfiguration(SmsMfaConfigType&& value) { SetSmsMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows user pool configuration for time-based one-time password (TOTP) MFA.
     * Includes TOTP enabled or disabled state.</p>
     */
    inline const SoftwareTokenMfaConfigType& GetSoftwareTokenMfaConfiguration() const{ return m_softwareTokenMfaConfiguration; }
    inline void SetSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { m_softwareTokenMfaConfiguration = value; }
    inline void SetSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { m_softwareTokenMfaConfiguration = std::move(value); }
    inline GetUserPoolMfaConfigResult& WithSoftwareTokenMfaConfiguration(const SoftwareTokenMfaConfigType& value) { SetSoftwareTokenMfaConfiguration(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithSoftwareTokenMfaConfiguration(SoftwareTokenMfaConfigType&& value) { SetSoftwareTokenMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Shows user pool email message configuration for MFA. Includes the subject and
     * body of the email message template for MFA messages. To activate this setting,
     * <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * advanced security features</a> must be active in your user pool.</p>
     */
    inline const EmailMfaConfigType& GetEmailMfaConfiguration() const{ return m_emailMfaConfiguration; }
    inline void SetEmailMfaConfiguration(const EmailMfaConfigType& value) { m_emailMfaConfiguration = value; }
    inline void SetEmailMfaConfiguration(EmailMfaConfigType&& value) { m_emailMfaConfiguration = std::move(value); }
    inline GetUserPoolMfaConfigResult& WithEmailMfaConfiguration(const EmailMfaConfigType& value) { SetEmailMfaConfiguration(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithEmailMfaConfiguration(EmailMfaConfigType&& value) { SetEmailMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The multi-factor authentication (MFA) configuration. Valid values
     * include:</p> <ul> <li> <p> <code>OFF</code> MFA won't be used for any users.</p>
     * </li> <li> <p> <code>ON</code> MFA is required for all users to sign in.</p>
     * </li> <li> <p> <code>OPTIONAL</code> MFA will be required only for individual
     * users who have an MFA factor activated.</p> </li> </ul>
     */
    inline const UserPoolMfaType& GetMfaConfiguration() const{ return m_mfaConfiguration; }
    inline void SetMfaConfiguration(const UserPoolMfaType& value) { m_mfaConfiguration = value; }
    inline void SetMfaConfiguration(UserPoolMfaType&& value) { m_mfaConfiguration = std::move(value); }
    inline GetUserPoolMfaConfigResult& WithMfaConfiguration(const UserPoolMfaType& value) { SetMfaConfiguration(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithMfaConfiguration(UserPoolMfaType&& value) { SetMfaConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetUserPoolMfaConfigResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetUserPoolMfaConfigResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetUserPoolMfaConfigResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SmsMfaConfigType m_smsMfaConfiguration;

    SoftwareTokenMfaConfigType m_softwareTokenMfaConfiguration;

    EmailMfaConfigType m_emailMfaConfiguration;

    UserPoolMfaType m_mfaConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
