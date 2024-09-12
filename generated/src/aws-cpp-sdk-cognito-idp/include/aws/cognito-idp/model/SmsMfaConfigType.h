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
   * <p>Configures user pool SMS messages for multi-factor authentication (MFA). Sets
   * the message template and the SMS message sending configuration for Amazon
   * SNS.</p><p><h3>See Also:</h3>   <a
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
     * <p>The SMS message that your user pool sends to users with an MFA code. The
     * message must contain the <code>{####}</code> placeholder. In the message, Amazon
     * Cognito replaces this placeholder with the code. If you don't provide this
     * parameter, Amazon Cognito sends messages in the default format.</p>
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
     * <p>The SMS configuration with the settings that your Amazon Cognito user pool
     * must use to send an SMS message from your Amazon Web Services account through
     * Amazon Simple Notification Service. To request Amazon SNS in the Amazon Web
     * Services Region that you want, the Amazon Cognito user pool uses an Identity and
     * Access Management (IAM) role that you provide for your Amazon Web Services
     * account.</p>
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
