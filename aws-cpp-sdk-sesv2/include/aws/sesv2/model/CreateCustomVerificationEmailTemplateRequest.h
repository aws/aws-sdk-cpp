﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>Represents a request to create a custom verification email
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateCustomVerificationEmailTemplateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API CreateCustomVerificationEmailTemplateRequest : public SESV2Request
  {
  public:
    CreateCustomVerificationEmailTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomVerificationEmailTemplate"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom verification email template.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline const Aws::String& GetFromEmailAddress() const{ return m_fromEmailAddress; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline void SetFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.assign(value); }

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithFromEmailAddress(const Aws::String& value) { SetFromEmailAddress(value); return *this;}

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithFromEmailAddress(Aws::String&& value) { SetFromEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address that the custom verification email is sent from.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithFromEmailAddress(const char* value) { SetFromEmailAddress(value); return *this;}


    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline const Aws::String& GetTemplateSubject() const{ return m_templateSubject; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline bool TemplateSubjectHasBeenSet() const { return m_templateSubjectHasBeenSet; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(const Aws::String& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = value; }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(Aws::String&& value) { m_templateSubjectHasBeenSet = true; m_templateSubject = std::move(value); }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline void SetTemplateSubject(const char* value) { m_templateSubjectHasBeenSet = true; m_templateSubject.assign(value); }

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithTemplateSubject(const Aws::String& value) { SetTemplateSubject(value); return *this;}

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithTemplateSubject(Aws::String&& value) { SetTemplateSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line of the custom verification email.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithTemplateSubject(const char* value) { SetTemplateSubject(value); return *this;}


    /**
     * <p>The content of the custom verification email. The total size of the email
     * must be less than 10 MB. The message body may contain HTML, with some
     * limitations. For more information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html#custom-verification-emails-faq">Custom
     * Verification Email Frequently Asked Questions</a> in the <i>Amazon SES Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetTemplateContent() const{ return m_templateContent; }

    /**
     * <p>The content of the custom verification email. The total size of the email
     * must be less than 10 MB. The message body may contain HTML, with some
     * limitations. For more information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html#custom-verification-emails-faq">Custom
     * Verification Email Frequently Asked Questions</a> in the <i>Amazon SES Developer
     * Guide</i>.</p>
     */
    inline bool TemplateContentHasBeenSet() const { return m_templateContentHasBeenSet; }

    /**
     * <p>The content of the custom verification email. The total size of the email
     * must be less than 10 MB. The message body may contain HTML, with some
     * limitations. For more information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html#custom-verification-emails-faq">Custom
     * Verification Email Frequently Asked Questions</a> in the <i>Amazon SES Developer
     * Guide</i>.</p>
     */
    inline void SetTemplateContent(const Aws::String& value) { m_templateContentHasBeenSet = true; m_templateContent = value; }

    /**
     * <p>The content of the custom verification email. The total size of the email
     * must be less than 10 MB. The message body may contain HTML, with some
     * limitations. For more information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html#custom-verification-emails-faq">Custom
     * Verification Email Frequently Asked Questions</a> in the <i>Amazon SES Developer
     * Guide</i>.</p>
     */
    inline void SetTemplateContent(Aws::String&& value) { m_templateContentHasBeenSet = true; m_templateContent = std::move(value); }

    /**
     * <p>The content of the custom verification email. The total size of the email
     * must be less than 10 MB. The message body may contain HTML, with some
     * limitations. For more information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html#custom-verification-emails-faq">Custom
     * Verification Email Frequently Asked Questions</a> in the <i>Amazon SES Developer
     * Guide</i>.</p>
     */
    inline void SetTemplateContent(const char* value) { m_templateContentHasBeenSet = true; m_templateContent.assign(value); }

    /**
     * <p>The content of the custom verification email. The total size of the email
     * must be less than 10 MB. The message body may contain HTML, with some
     * limitations. For more information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html#custom-verification-emails-faq">Custom
     * Verification Email Frequently Asked Questions</a> in the <i>Amazon SES Developer
     * Guide</i>.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithTemplateContent(const Aws::String& value) { SetTemplateContent(value); return *this;}

    /**
     * <p>The content of the custom verification email. The total size of the email
     * must be less than 10 MB. The message body may contain HTML, with some
     * limitations. For more information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html#custom-verification-emails-faq">Custom
     * Verification Email Frequently Asked Questions</a> in the <i>Amazon SES Developer
     * Guide</i>.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithTemplateContent(Aws::String&& value) { SetTemplateContent(std::move(value)); return *this;}

    /**
     * <p>The content of the custom verification email. The total size of the email
     * must be less than 10 MB. The message body may contain HTML, with some
     * limitations. For more information, see <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/send-email-verify-address-custom.html#custom-verification-emails-faq">Custom
     * Verification Email Frequently Asked Questions</a> in the <i>Amazon SES Developer
     * Guide</i>.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithTemplateContent(const char* value) { SetTemplateContent(value); return *this;}


    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline const Aws::String& GetSuccessRedirectionURL() const{ return m_successRedirectionURL; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline bool SuccessRedirectionURLHasBeenSet() const { return m_successRedirectionURLHasBeenSet; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(const Aws::String& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = value; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(Aws::String&& value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL = std::move(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline void SetSuccessRedirectionURL(const char* value) { m_successRedirectionURLHasBeenSet = true; m_successRedirectionURL.assign(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithSuccessRedirectionURL(const Aws::String& value) { SetSuccessRedirectionURL(value); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithSuccessRedirectionURL(Aws::String&& value) { SetSuccessRedirectionURL(std::move(value)); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is successfully verified.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithSuccessRedirectionURL(const char* value) { SetSuccessRedirectionURL(value); return *this;}


    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline const Aws::String& GetFailureRedirectionURL() const{ return m_failureRedirectionURL; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline bool FailureRedirectionURLHasBeenSet() const { return m_failureRedirectionURLHasBeenSet; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(const Aws::String& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = value; }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(Aws::String&& value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL = std::move(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline void SetFailureRedirectionURL(const char* value) { m_failureRedirectionURLHasBeenSet = true; m_failureRedirectionURL.assign(value); }

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithFailureRedirectionURL(const Aws::String& value) { SetFailureRedirectionURL(value); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithFailureRedirectionURL(Aws::String&& value) { SetFailureRedirectionURL(std::move(value)); return *this;}

    /**
     * <p>The URL that the recipient of the verification email is sent to if his or her
     * address is not successfully verified.</p>
     */
    inline CreateCustomVerificationEmailTemplateRequest& WithFailureRedirectionURL(const char* value) { SetFailureRedirectionURL(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet;

    Aws::String m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet;

    Aws::String m_templateSubject;
    bool m_templateSubjectHasBeenSet;

    Aws::String m_templateContent;
    bool m_templateContentHasBeenSet;

    Aws::String m_successRedirectionURL;
    bool m_successRedirectionURLHasBeenSet;

    Aws::String m_failureRedirectionURL;
    bool m_failureRedirectionURLHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
