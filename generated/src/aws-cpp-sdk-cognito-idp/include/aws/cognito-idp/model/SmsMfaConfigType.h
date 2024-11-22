/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/SmsConfigurationType.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The configuration of multi-factor authentication (MFA) with SMS messages in a
   * user pool.</p> <p>This data type is a request parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SetUserPoolMfaConfig.html">SetUserPoolMfaConfig</a>
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_GetUserPoolMfaConfig.html">GetUserPoolMfaConfig</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/SmsMfaConfigType">AWS
   * API Reference</a></p>
   */
  class SmsMfaConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API SmsMfaConfigType();
    AWS_COGNITOIDENTITYPROVIDER_API SmsMfaConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API SmsMfaConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SMS authentication message that will be sent to users with the code they
     * must sign in with. The message must contain the <code>{####}</code> placeholder.
     * Your user pool replaces the placeholder with the MFA code. If this parameter
     * isn't provided, your user pool sends a default message.</p>
     */
    inline const Aws::String& GetSmsAuthenticationMessage() const{ return m_smsAuthenticationMessage; }
    inline bool SmsAuthenticationMessageHasBeenSet() const { return m_smsAuthenticationMessageHasBeenSet; }
    inline void SetSmsAuthenticationMessage(const Aws::String& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = value; }
    inline void SetSmsAuthenticationMessage(Aws::String&& value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage = std::move(value); }
    inline void SetSmsAuthenticationMessage(const char* value) { m_smsAuthenticationMessageHasBeenSet = true; m_smsAuthenticationMessage.assign(value); }
    inline SmsMfaConfigType& WithSmsAuthenticationMessage(const Aws::String& value) { SetSmsAuthenticationMessage(value); return *this;}
    inline SmsMfaConfigType& WithSmsAuthenticationMessage(Aws::String&& value) { SetSmsAuthenticationMessage(std::move(value)); return *this;}
    inline SmsMfaConfigType& WithSmsAuthenticationMessage(const char* value) { SetSmsAuthenticationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User pool configuration for delivery of SMS messages with Amazon Simple
     * Notification Service. To send SMS messages with Amazon SNS in the Amazon Web
     * Services Region that you want, the Amazon Cognito user pool uses an Identity and
     * Access Management (IAM) role in your Amazon Web Services account.</p> <p>You can
     * set <code>SmsConfiguration</code> in <code>CreateUserPool</code> and <code>
     * UpdateUserPool</code>, or in <code>SetUserPoolMfaConfig</code>.</p>
     */
    inline const SmsConfigurationType& GetSmsConfiguration() const{ return m_smsConfiguration; }
    inline bool SmsConfigurationHasBeenSet() const { return m_smsConfigurationHasBeenSet; }
    inline void SetSmsConfiguration(const SmsConfigurationType& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = value; }
    inline void SetSmsConfiguration(SmsConfigurationType&& value) { m_smsConfigurationHasBeenSet = true; m_smsConfiguration = std::move(value); }
    inline SmsMfaConfigType& WithSmsConfiguration(const SmsConfigurationType& value) { SetSmsConfiguration(value); return *this;}
    inline SmsMfaConfigType& WithSmsConfiguration(SmsConfigurationType&& value) { SetSmsConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_smsAuthenticationMessage;
    bool m_smsAuthenticationMessageHasBeenSet = false;

    SmsConfigurationType m_smsConfiguration;
    bool m_smsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
