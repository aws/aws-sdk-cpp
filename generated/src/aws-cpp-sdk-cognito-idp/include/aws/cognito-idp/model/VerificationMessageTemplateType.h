/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/DefaultEmailOptionType.h>
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
   * <p>The template for verification messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerificationMessageTemplateType">AWS
   * API Reference</a></p>
   */
  class VerificationMessageTemplateType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API VerificationMessageTemplateType();
    AWS_COGNITOIDENTITYPROVIDER_API VerificationMessageTemplateType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API VerificationMessageTemplateType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template for SMS messages that Amazon Cognito sends to your users.</p>
     */
    inline const Aws::String& GetSmsMessage() const{ return m_smsMessage; }
    inline bool SmsMessageHasBeenSet() const { return m_smsMessageHasBeenSet; }
    inline void SetSmsMessage(const Aws::String& value) { m_smsMessageHasBeenSet = true; m_smsMessage = value; }
    inline void SetSmsMessage(Aws::String&& value) { m_smsMessageHasBeenSet = true; m_smsMessage = std::move(value); }
    inline void SetSmsMessage(const char* value) { m_smsMessageHasBeenSet = true; m_smsMessage.assign(value); }
    inline VerificationMessageTemplateType& WithSmsMessage(const Aws::String& value) { SetSmsMessage(value); return *this;}
    inline VerificationMessageTemplateType& WithSmsMessage(Aws::String&& value) { SetSmsMessage(std::move(value)); return *this;}
    inline VerificationMessageTemplateType& WithSmsMessage(const char* value) { SetSmsMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for email messages that Amazon Cognito sends to your users. You
     * can set an <code>EmailMessage</code> template only if the value of <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">
     * EmailSendingAccount</a> is <code>DEVELOPER</code>. When your <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">EmailSendingAccount</a>
     * is <code>DEVELOPER</code>, your user pool sends email messages with your own
     * Amazon SES configuration.</p>
     */
    inline const Aws::String& GetEmailMessage() const{ return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    inline void SetEmailMessage(const Aws::String& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }
    inline void SetEmailMessage(Aws::String&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }
    inline void SetEmailMessage(const char* value) { m_emailMessageHasBeenSet = true; m_emailMessage.assign(value); }
    inline VerificationMessageTemplateType& WithEmailMessage(const Aws::String& value) { SetEmailMessage(value); return *this;}
    inline VerificationMessageTemplateType& WithEmailMessage(Aws::String&& value) { SetEmailMessage(std::move(value)); return *this;}
    inline VerificationMessageTemplateType& WithEmailMessage(const char* value) { SetEmailMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line for the email message template. You can set an
     * <code>EmailSubject</code> template only if the value of <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">
     * EmailSendingAccount</a> is <code>DEVELOPER</code>. When your <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">EmailSendingAccount</a>
     * is <code>DEVELOPER</code>, your user pool sends email messages with your own
     * Amazon SES configuration.</p>
     */
    inline const Aws::String& GetEmailSubject() const{ return m_emailSubject; }
    inline bool EmailSubjectHasBeenSet() const { return m_emailSubjectHasBeenSet; }
    inline void SetEmailSubject(const Aws::String& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = value; }
    inline void SetEmailSubject(Aws::String&& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = std::move(value); }
    inline void SetEmailSubject(const char* value) { m_emailSubjectHasBeenSet = true; m_emailSubject.assign(value); }
    inline VerificationMessageTemplateType& WithEmailSubject(const Aws::String& value) { SetEmailSubject(value); return *this;}
    inline VerificationMessageTemplateType& WithEmailSubject(Aws::String&& value) { SetEmailSubject(std::move(value)); return *this;}
    inline VerificationMessageTemplateType& WithEmailSubject(const char* value) { SetEmailSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email message template for sending a confirmation link to the user. You
     * can set an <code>EmailMessageByLink</code> template only if the value of <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">
     * EmailSendingAccount</a> is <code>DEVELOPER</code>. When your <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">EmailSendingAccount</a>
     * is <code>DEVELOPER</code>, your user pool sends email messages with your own
     * Amazon SES configuration.</p>
     */
    inline const Aws::String& GetEmailMessageByLink() const{ return m_emailMessageByLink; }
    inline bool EmailMessageByLinkHasBeenSet() const { return m_emailMessageByLinkHasBeenSet; }
    inline void SetEmailMessageByLink(const Aws::String& value) { m_emailMessageByLinkHasBeenSet = true; m_emailMessageByLink = value; }
    inline void SetEmailMessageByLink(Aws::String&& value) { m_emailMessageByLinkHasBeenSet = true; m_emailMessageByLink = std::move(value); }
    inline void SetEmailMessageByLink(const char* value) { m_emailMessageByLinkHasBeenSet = true; m_emailMessageByLink.assign(value); }
    inline VerificationMessageTemplateType& WithEmailMessageByLink(const Aws::String& value) { SetEmailMessageByLink(value); return *this;}
    inline VerificationMessageTemplateType& WithEmailMessageByLink(Aws::String&& value) { SetEmailMessageByLink(std::move(value)); return *this;}
    inline VerificationMessageTemplateType& WithEmailMessageByLink(const char* value) { SetEmailMessageByLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line for the email message template for sending a confirmation
     * link to the user. You can set an <code>EmailSubjectByLink</code> template only
     * if the value of <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">
     * EmailSendingAccount</a> is <code>DEVELOPER</code>. When your <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">EmailSendingAccount</a>
     * is <code>DEVELOPER</code>, your user pool sends email messages with your own
     * Amazon SES configuration.</p>
     */
    inline const Aws::String& GetEmailSubjectByLink() const{ return m_emailSubjectByLink; }
    inline bool EmailSubjectByLinkHasBeenSet() const { return m_emailSubjectByLinkHasBeenSet; }
    inline void SetEmailSubjectByLink(const Aws::String& value) { m_emailSubjectByLinkHasBeenSet = true; m_emailSubjectByLink = value; }
    inline void SetEmailSubjectByLink(Aws::String&& value) { m_emailSubjectByLinkHasBeenSet = true; m_emailSubjectByLink = std::move(value); }
    inline void SetEmailSubjectByLink(const char* value) { m_emailSubjectByLinkHasBeenSet = true; m_emailSubjectByLink.assign(value); }
    inline VerificationMessageTemplateType& WithEmailSubjectByLink(const Aws::String& value) { SetEmailSubjectByLink(value); return *this;}
    inline VerificationMessageTemplateType& WithEmailSubjectByLink(Aws::String&& value) { SetEmailSubjectByLink(std::move(value)); return *this;}
    inline VerificationMessageTemplateType& WithEmailSubjectByLink(const char* value) { SetEmailSubjectByLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default email option.</p>
     */
    inline const DefaultEmailOptionType& GetDefaultEmailOption() const{ return m_defaultEmailOption; }
    inline bool DefaultEmailOptionHasBeenSet() const { return m_defaultEmailOptionHasBeenSet; }
    inline void SetDefaultEmailOption(const DefaultEmailOptionType& value) { m_defaultEmailOptionHasBeenSet = true; m_defaultEmailOption = value; }
    inline void SetDefaultEmailOption(DefaultEmailOptionType&& value) { m_defaultEmailOptionHasBeenSet = true; m_defaultEmailOption = std::move(value); }
    inline VerificationMessageTemplateType& WithDefaultEmailOption(const DefaultEmailOptionType& value) { SetDefaultEmailOption(value); return *this;}
    inline VerificationMessageTemplateType& WithDefaultEmailOption(DefaultEmailOptionType&& value) { SetDefaultEmailOption(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_smsMessage;
    bool m_smsMessageHasBeenSet = false;

    Aws::String m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    Aws::String m_emailSubject;
    bool m_emailSubjectHasBeenSet = false;

    Aws::String m_emailMessageByLink;
    bool m_emailMessageByLinkHasBeenSet = false;

    Aws::String m_emailSubjectByLink;
    bool m_emailSubjectByLinkHasBeenSet = false;

    DefaultEmailOptionType m_defaultEmailOption;
    bool m_defaultEmailOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
