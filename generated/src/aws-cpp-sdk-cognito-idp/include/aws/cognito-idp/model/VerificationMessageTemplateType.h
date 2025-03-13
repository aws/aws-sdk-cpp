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
   * <p>The template for the verification message that your user pool delivers to
   * users who set an email address or phone number attribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/VerificationMessageTemplateType">AWS
   * API Reference</a></p>
   */
  class VerificationMessageTemplateType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API VerificationMessageTemplateType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API VerificationMessageTemplateType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API VerificationMessageTemplateType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template for SMS messages that Amazon Cognito sends to your users.</p>
     */
    inline const Aws::String& GetSmsMessage() const { return m_smsMessage; }
    inline bool SmsMessageHasBeenSet() const { return m_smsMessageHasBeenSet; }
    template<typename SmsMessageT = Aws::String>
    void SetSmsMessage(SmsMessageT&& value) { m_smsMessageHasBeenSet = true; m_smsMessage = std::forward<SmsMessageT>(value); }
    template<typename SmsMessageT = Aws::String>
    VerificationMessageTemplateType& WithSmsMessage(SmsMessageT&& value) { SetSmsMessage(std::forward<SmsMessageT>(value)); return *this;}
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
    inline const Aws::String& GetEmailMessage() const { return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    template<typename EmailMessageT = Aws::String>
    void SetEmailMessage(EmailMessageT&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::forward<EmailMessageT>(value); }
    template<typename EmailMessageT = Aws::String>
    VerificationMessageTemplateType& WithEmailMessage(EmailMessageT&& value) { SetEmailMessage(std::forward<EmailMessageT>(value)); return *this;}
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
    inline const Aws::String& GetEmailSubject() const { return m_emailSubject; }
    inline bool EmailSubjectHasBeenSet() const { return m_emailSubjectHasBeenSet; }
    template<typename EmailSubjectT = Aws::String>
    void SetEmailSubject(EmailSubjectT&& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = std::forward<EmailSubjectT>(value); }
    template<typename EmailSubjectT = Aws::String>
    VerificationMessageTemplateType& WithEmailSubject(EmailSubjectT&& value) { SetEmailSubject(std::forward<EmailSubjectT>(value)); return *this;}
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
    inline const Aws::String& GetEmailMessageByLink() const { return m_emailMessageByLink; }
    inline bool EmailMessageByLinkHasBeenSet() const { return m_emailMessageByLinkHasBeenSet; }
    template<typename EmailMessageByLinkT = Aws::String>
    void SetEmailMessageByLink(EmailMessageByLinkT&& value) { m_emailMessageByLinkHasBeenSet = true; m_emailMessageByLink = std::forward<EmailMessageByLinkT>(value); }
    template<typename EmailMessageByLinkT = Aws::String>
    VerificationMessageTemplateType& WithEmailMessageByLink(EmailMessageByLinkT&& value) { SetEmailMessageByLink(std::forward<EmailMessageByLinkT>(value)); return *this;}
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
    inline const Aws::String& GetEmailSubjectByLink() const { return m_emailSubjectByLink; }
    inline bool EmailSubjectByLinkHasBeenSet() const { return m_emailSubjectByLinkHasBeenSet; }
    template<typename EmailSubjectByLinkT = Aws::String>
    void SetEmailSubjectByLink(EmailSubjectByLinkT&& value) { m_emailSubjectByLinkHasBeenSet = true; m_emailSubjectByLink = std::forward<EmailSubjectByLinkT>(value); }
    template<typename EmailSubjectByLinkT = Aws::String>
    VerificationMessageTemplateType& WithEmailSubjectByLink(EmailSubjectByLinkT&& value) { SetEmailSubjectByLink(std::forward<EmailSubjectByLinkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of verification emails to contain a clickable link or a
     * verification code.</p> <p>For link, your template body must contain link text in
     * the format <code>{##Click here##}</code>. "Click here" in the example is a
     * customizable string. For code, your template body must contain a code
     * placeholder in the format <code>{####}</code>.</p>
     */
    inline DefaultEmailOptionType GetDefaultEmailOption() const { return m_defaultEmailOption; }
    inline bool DefaultEmailOptionHasBeenSet() const { return m_defaultEmailOptionHasBeenSet; }
    inline void SetDefaultEmailOption(DefaultEmailOptionType value) { m_defaultEmailOptionHasBeenSet = true; m_defaultEmailOption = value; }
    inline VerificationMessageTemplateType& WithDefaultEmailOption(DefaultEmailOptionType value) { SetDefaultEmailOption(value); return *this;}
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

    DefaultEmailOptionType m_defaultEmailOption{DefaultEmailOptionType::NOT_SET};
    bool m_defaultEmailOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
