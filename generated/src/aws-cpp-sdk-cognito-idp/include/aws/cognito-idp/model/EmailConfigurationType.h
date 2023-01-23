﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/EmailSendingAccountType.h>
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
   * <p>The email configuration of your user pool. The email configuration type sets
   * your preferred sending method, Amazon Web Services Region, and sender for
   * messages from your user pool.</p>  <p>Amazon Cognito can send email
   * messages with Amazon Simple Email Service resources in the Amazon Web Services
   * Region where you created your user pool, and in alternate Regions in some cases.
   * For more information on the supported Regions, see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html">Email
   * settings for Amazon Cognito user pools</a>.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EmailConfigurationType">AWS
   * API Reference</a></p>
   */
  class EmailConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API EmailConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API EmailConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API EmailConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of a verified email address in Amazon SES. Amazon Cognito uses this
     * email address in one of the following ways, depending on the value that you
     * specify for the <code>EmailSendingAccount</code> parameter:</p> <ul> <li> <p>If
     * you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this address as
     * the custom FROM address when it emails your users using its built-in email
     * account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>, Amazon Cognito
     * emails your users with this address by calling Amazon SES on your behalf.</p>
     * </li> </ul> <p>The Region value of the <code>SourceArn</code> parameter must
     * indicate a supported Amazon Web Services Region of your user pool. Typically,
     * the Region in the <code>SourceArn</code> and the user pool Region are the same.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html#user-pool-email-developer-region-mapping">Amazon
     * SES email configuration regions</a> in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito Developer Guide</a>.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The ARN of a verified email address in Amazon SES. Amazon Cognito uses this
     * email address in one of the following ways, depending on the value that you
     * specify for the <code>EmailSendingAccount</code> parameter:</p> <ul> <li> <p>If
     * you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this address as
     * the custom FROM address when it emails your users using its built-in email
     * account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>, Amazon Cognito
     * emails your users with this address by calling Amazon SES on your behalf.</p>
     * </li> </ul> <p>The Region value of the <code>SourceArn</code> parameter must
     * indicate a supported Amazon Web Services Region of your user pool. Typically,
     * the Region in the <code>SourceArn</code> and the user pool Region are the same.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html#user-pool-email-developer-region-mapping">Amazon
     * SES email configuration regions</a> in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito Developer Guide</a>.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The ARN of a verified email address in Amazon SES. Amazon Cognito uses this
     * email address in one of the following ways, depending on the value that you
     * specify for the <code>EmailSendingAccount</code> parameter:</p> <ul> <li> <p>If
     * you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this address as
     * the custom FROM address when it emails your users using its built-in email
     * account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>, Amazon Cognito
     * emails your users with this address by calling Amazon SES on your behalf.</p>
     * </li> </ul> <p>The Region value of the <code>SourceArn</code> parameter must
     * indicate a supported Amazon Web Services Region of your user pool. Typically,
     * the Region in the <code>SourceArn</code> and the user pool Region are the same.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html#user-pool-email-developer-region-mapping">Amazon
     * SES email configuration regions</a> in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito Developer Guide</a>.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The ARN of a verified email address in Amazon SES. Amazon Cognito uses this
     * email address in one of the following ways, depending on the value that you
     * specify for the <code>EmailSendingAccount</code> parameter:</p> <ul> <li> <p>If
     * you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this address as
     * the custom FROM address when it emails your users using its built-in email
     * account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>, Amazon Cognito
     * emails your users with this address by calling Amazon SES on your behalf.</p>
     * </li> </ul> <p>The Region value of the <code>SourceArn</code> parameter must
     * indicate a supported Amazon Web Services Region of your user pool. Typically,
     * the Region in the <code>SourceArn</code> and the user pool Region are the same.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html#user-pool-email-developer-region-mapping">Amazon
     * SES email configuration regions</a> in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito Developer Guide</a>.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The ARN of a verified email address in Amazon SES. Amazon Cognito uses this
     * email address in one of the following ways, depending on the value that you
     * specify for the <code>EmailSendingAccount</code> parameter:</p> <ul> <li> <p>If
     * you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this address as
     * the custom FROM address when it emails your users using its built-in email
     * account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>, Amazon Cognito
     * emails your users with this address by calling Amazon SES on your behalf.</p>
     * </li> </ul> <p>The Region value of the <code>SourceArn</code> parameter must
     * indicate a supported Amazon Web Services Region of your user pool. Typically,
     * the Region in the <code>SourceArn</code> and the user pool Region are the same.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html#user-pool-email-developer-region-mapping">Amazon
     * SES email configuration regions</a> in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito Developer Guide</a>.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The ARN of a verified email address in Amazon SES. Amazon Cognito uses this
     * email address in one of the following ways, depending on the value that you
     * specify for the <code>EmailSendingAccount</code> parameter:</p> <ul> <li> <p>If
     * you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this address as
     * the custom FROM address when it emails your users using its built-in email
     * account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>, Amazon Cognito
     * emails your users with this address by calling Amazon SES on your behalf.</p>
     * </li> </ul> <p>The Region value of the <code>SourceArn</code> parameter must
     * indicate a supported Amazon Web Services Region of your user pool. Typically,
     * the Region in the <code>SourceArn</code> and the user pool Region are the same.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html#user-pool-email-developer-region-mapping">Amazon
     * SES email configuration regions</a> in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito Developer Guide</a>.</p>
     */
    inline EmailConfigurationType& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The ARN of a verified email address in Amazon SES. Amazon Cognito uses this
     * email address in one of the following ways, depending on the value that you
     * specify for the <code>EmailSendingAccount</code> parameter:</p> <ul> <li> <p>If
     * you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this address as
     * the custom FROM address when it emails your users using its built-in email
     * account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>, Amazon Cognito
     * emails your users with this address by calling Amazon SES on your behalf.</p>
     * </li> </ul> <p>The Region value of the <code>SourceArn</code> parameter must
     * indicate a supported Amazon Web Services Region of your user pool. Typically,
     * the Region in the <code>SourceArn</code> and the user pool Region are the same.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html#user-pool-email-developer-region-mapping">Amazon
     * SES email configuration regions</a> in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito Developer Guide</a>.</p>
     */
    inline EmailConfigurationType& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a verified email address in Amazon SES. Amazon Cognito uses this
     * email address in one of the following ways, depending on the value that you
     * specify for the <code>EmailSendingAccount</code> parameter:</p> <ul> <li> <p>If
     * you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this address as
     * the custom FROM address when it emails your users using its built-in email
     * account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>, Amazon Cognito
     * emails your users with this address by calling Amazon SES on your behalf.</p>
     * </li> </ul> <p>The Region value of the <code>SourceArn</code> parameter must
     * indicate a supported Amazon Web Services Region of your user pool. Typically,
     * the Region in the <code>SourceArn</code> and the user pool Region are the same.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html#user-pool-email-developer-region-mapping">Amazon
     * SES email configuration regions</a> in the <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-identity-pools.html">Amazon
     * Cognito Developer Guide</a>.</p>
     */
    inline EmailConfigurationType& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The destination to which the receiver of the email should reply.</p>
     */
    inline const Aws::String& GetReplyToEmailAddress() const{ return m_replyToEmailAddress; }

    /**
     * <p>The destination to which the receiver of the email should reply.</p>
     */
    inline bool ReplyToEmailAddressHasBeenSet() const { return m_replyToEmailAddressHasBeenSet; }

    /**
     * <p>The destination to which the receiver of the email should reply.</p>
     */
    inline void SetReplyToEmailAddress(const Aws::String& value) { m_replyToEmailAddressHasBeenSet = true; m_replyToEmailAddress = value; }

    /**
     * <p>The destination to which the receiver of the email should reply.</p>
     */
    inline void SetReplyToEmailAddress(Aws::String&& value) { m_replyToEmailAddressHasBeenSet = true; m_replyToEmailAddress = std::move(value); }

    /**
     * <p>The destination to which the receiver of the email should reply.</p>
     */
    inline void SetReplyToEmailAddress(const char* value) { m_replyToEmailAddressHasBeenSet = true; m_replyToEmailAddress.assign(value); }

    /**
     * <p>The destination to which the receiver of the email should reply.</p>
     */
    inline EmailConfigurationType& WithReplyToEmailAddress(const Aws::String& value) { SetReplyToEmailAddress(value); return *this;}

    /**
     * <p>The destination to which the receiver of the email should reply.</p>
     */
    inline EmailConfigurationType& WithReplyToEmailAddress(Aws::String&& value) { SetReplyToEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The destination to which the receiver of the email should reply.</p>
     */
    inline EmailConfigurationType& WithReplyToEmailAddress(const char* value) { SetReplyToEmailAddress(value); return *this;}


    /**
     * <p>Specifies whether Amazon Cognito uses its built-in functionality to send your
     * users email messages, or uses your Amazon Simple Email Service email
     * configuration. Specify one of the following values:</p> <dl>
     * <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito emails your users, it uses
     * its built-in email functionality. When you use the default option, Amazon
     * Cognito allows only a limited number of emails each day for your user pool. For
     * typical production environments, the default email limit is less than the
     * required delivery volume. To achieve a higher delivery volume, specify DEVELOPER
     * to use your Amazon SES email configuration.</p> <p>To look up the email delivery
     * limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits</a>
     * in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The default FROM address is
     * <code>no-reply@verificationemail.com</code>. To customize the FROM address,
     * provide the Amazon Resource Name (ARN) of an Amazon SES verified email address
     * for the <code>SourceArn</code> parameter.</p> </dd> <dt>DEVELOPER</dt> <dd>
     * <p>When Amazon Cognito emails your users, it uses your Amazon SES configuration.
     * Amazon Cognito calls Amazon SES on your behalf to send email from your verified
     * email address. When you use this option, the email delivery limits are the same
     * limits that apply to your Amazon SES verified email address in your Amazon Web
     * Services account.</p> <p>If you use this option, provide the ARN of an Amazon
     * SES verified email address for the <code>SourceArn</code> parameter.</p>
     * <p>Before Amazon Cognito can email your users, it requires additional
     * permissions to call Amazon SES on your behalf. When you update your user pool
     * with this option, Amazon Cognito creates a <i>service-linked role</i>, which is
     * a type of role in your Amazon Web Services account. This role contains the
     * permissions that allow you to access Amazon SES and send email messages from
     * your email address. For more information about the service-linked role that
     * Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline const EmailSendingAccountType& GetEmailSendingAccount() const{ return m_emailSendingAccount; }

    /**
     * <p>Specifies whether Amazon Cognito uses its built-in functionality to send your
     * users email messages, or uses your Amazon Simple Email Service email
     * configuration. Specify one of the following values:</p> <dl>
     * <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito emails your users, it uses
     * its built-in email functionality. When you use the default option, Amazon
     * Cognito allows only a limited number of emails each day for your user pool. For
     * typical production environments, the default email limit is less than the
     * required delivery volume. To achieve a higher delivery volume, specify DEVELOPER
     * to use your Amazon SES email configuration.</p> <p>To look up the email delivery
     * limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits</a>
     * in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The default FROM address is
     * <code>no-reply@verificationemail.com</code>. To customize the FROM address,
     * provide the Amazon Resource Name (ARN) of an Amazon SES verified email address
     * for the <code>SourceArn</code> parameter.</p> </dd> <dt>DEVELOPER</dt> <dd>
     * <p>When Amazon Cognito emails your users, it uses your Amazon SES configuration.
     * Amazon Cognito calls Amazon SES on your behalf to send email from your verified
     * email address. When you use this option, the email delivery limits are the same
     * limits that apply to your Amazon SES verified email address in your Amazon Web
     * Services account.</p> <p>If you use this option, provide the ARN of an Amazon
     * SES verified email address for the <code>SourceArn</code> parameter.</p>
     * <p>Before Amazon Cognito can email your users, it requires additional
     * permissions to call Amazon SES on your behalf. When you update your user pool
     * with this option, Amazon Cognito creates a <i>service-linked role</i>, which is
     * a type of role in your Amazon Web Services account. This role contains the
     * permissions that allow you to access Amazon SES and send email messages from
     * your email address. For more information about the service-linked role that
     * Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline bool EmailSendingAccountHasBeenSet() const { return m_emailSendingAccountHasBeenSet; }

    /**
     * <p>Specifies whether Amazon Cognito uses its built-in functionality to send your
     * users email messages, or uses your Amazon Simple Email Service email
     * configuration. Specify one of the following values:</p> <dl>
     * <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito emails your users, it uses
     * its built-in email functionality. When you use the default option, Amazon
     * Cognito allows only a limited number of emails each day for your user pool. For
     * typical production environments, the default email limit is less than the
     * required delivery volume. To achieve a higher delivery volume, specify DEVELOPER
     * to use your Amazon SES email configuration.</p> <p>To look up the email delivery
     * limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits</a>
     * in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The default FROM address is
     * <code>no-reply@verificationemail.com</code>. To customize the FROM address,
     * provide the Amazon Resource Name (ARN) of an Amazon SES verified email address
     * for the <code>SourceArn</code> parameter.</p> </dd> <dt>DEVELOPER</dt> <dd>
     * <p>When Amazon Cognito emails your users, it uses your Amazon SES configuration.
     * Amazon Cognito calls Amazon SES on your behalf to send email from your verified
     * email address. When you use this option, the email delivery limits are the same
     * limits that apply to your Amazon SES verified email address in your Amazon Web
     * Services account.</p> <p>If you use this option, provide the ARN of an Amazon
     * SES verified email address for the <code>SourceArn</code> parameter.</p>
     * <p>Before Amazon Cognito can email your users, it requires additional
     * permissions to call Amazon SES on your behalf. When you update your user pool
     * with this option, Amazon Cognito creates a <i>service-linked role</i>, which is
     * a type of role in your Amazon Web Services account. This role contains the
     * permissions that allow you to access Amazon SES and send email messages from
     * your email address. For more information about the service-linked role that
     * Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline void SetEmailSendingAccount(const EmailSendingAccountType& value) { m_emailSendingAccountHasBeenSet = true; m_emailSendingAccount = value; }

    /**
     * <p>Specifies whether Amazon Cognito uses its built-in functionality to send your
     * users email messages, or uses your Amazon Simple Email Service email
     * configuration. Specify one of the following values:</p> <dl>
     * <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito emails your users, it uses
     * its built-in email functionality. When you use the default option, Amazon
     * Cognito allows only a limited number of emails each day for your user pool. For
     * typical production environments, the default email limit is less than the
     * required delivery volume. To achieve a higher delivery volume, specify DEVELOPER
     * to use your Amazon SES email configuration.</p> <p>To look up the email delivery
     * limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits</a>
     * in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The default FROM address is
     * <code>no-reply@verificationemail.com</code>. To customize the FROM address,
     * provide the Amazon Resource Name (ARN) of an Amazon SES verified email address
     * for the <code>SourceArn</code> parameter.</p> </dd> <dt>DEVELOPER</dt> <dd>
     * <p>When Amazon Cognito emails your users, it uses your Amazon SES configuration.
     * Amazon Cognito calls Amazon SES on your behalf to send email from your verified
     * email address. When you use this option, the email delivery limits are the same
     * limits that apply to your Amazon SES verified email address in your Amazon Web
     * Services account.</p> <p>If you use this option, provide the ARN of an Amazon
     * SES verified email address for the <code>SourceArn</code> parameter.</p>
     * <p>Before Amazon Cognito can email your users, it requires additional
     * permissions to call Amazon SES on your behalf. When you update your user pool
     * with this option, Amazon Cognito creates a <i>service-linked role</i>, which is
     * a type of role in your Amazon Web Services account. This role contains the
     * permissions that allow you to access Amazon SES and send email messages from
     * your email address. For more information about the service-linked role that
     * Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline void SetEmailSendingAccount(EmailSendingAccountType&& value) { m_emailSendingAccountHasBeenSet = true; m_emailSendingAccount = std::move(value); }

    /**
     * <p>Specifies whether Amazon Cognito uses its built-in functionality to send your
     * users email messages, or uses your Amazon Simple Email Service email
     * configuration. Specify one of the following values:</p> <dl>
     * <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito emails your users, it uses
     * its built-in email functionality. When you use the default option, Amazon
     * Cognito allows only a limited number of emails each day for your user pool. For
     * typical production environments, the default email limit is less than the
     * required delivery volume. To achieve a higher delivery volume, specify DEVELOPER
     * to use your Amazon SES email configuration.</p> <p>To look up the email delivery
     * limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits</a>
     * in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The default FROM address is
     * <code>no-reply@verificationemail.com</code>. To customize the FROM address,
     * provide the Amazon Resource Name (ARN) of an Amazon SES verified email address
     * for the <code>SourceArn</code> parameter.</p> </dd> <dt>DEVELOPER</dt> <dd>
     * <p>When Amazon Cognito emails your users, it uses your Amazon SES configuration.
     * Amazon Cognito calls Amazon SES on your behalf to send email from your verified
     * email address. When you use this option, the email delivery limits are the same
     * limits that apply to your Amazon SES verified email address in your Amazon Web
     * Services account.</p> <p>If you use this option, provide the ARN of an Amazon
     * SES verified email address for the <code>SourceArn</code> parameter.</p>
     * <p>Before Amazon Cognito can email your users, it requires additional
     * permissions to call Amazon SES on your behalf. When you update your user pool
     * with this option, Amazon Cognito creates a <i>service-linked role</i>, which is
     * a type of role in your Amazon Web Services account. This role contains the
     * permissions that allow you to access Amazon SES and send email messages from
     * your email address. For more information about the service-linked role that
     * Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline EmailConfigurationType& WithEmailSendingAccount(const EmailSendingAccountType& value) { SetEmailSendingAccount(value); return *this;}

    /**
     * <p>Specifies whether Amazon Cognito uses its built-in functionality to send your
     * users email messages, or uses your Amazon Simple Email Service email
     * configuration. Specify one of the following values:</p> <dl>
     * <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito emails your users, it uses
     * its built-in email functionality. When you use the default option, Amazon
     * Cognito allows only a limited number of emails each day for your user pool. For
     * typical production environments, the default email limit is less than the
     * required delivery volume. To achieve a higher delivery volume, specify DEVELOPER
     * to use your Amazon SES email configuration.</p> <p>To look up the email delivery
     * limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits</a>
     * in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The default FROM address is
     * <code>no-reply@verificationemail.com</code>. To customize the FROM address,
     * provide the Amazon Resource Name (ARN) of an Amazon SES verified email address
     * for the <code>SourceArn</code> parameter.</p> </dd> <dt>DEVELOPER</dt> <dd>
     * <p>When Amazon Cognito emails your users, it uses your Amazon SES configuration.
     * Amazon Cognito calls Amazon SES on your behalf to send email from your verified
     * email address. When you use this option, the email delivery limits are the same
     * limits that apply to your Amazon SES verified email address in your Amazon Web
     * Services account.</p> <p>If you use this option, provide the ARN of an Amazon
     * SES verified email address for the <code>SourceArn</code> parameter.</p>
     * <p>Before Amazon Cognito can email your users, it requires additional
     * permissions to call Amazon SES on your behalf. When you update your user pool
     * with this option, Amazon Cognito creates a <i>service-linked role</i>, which is
     * a type of role in your Amazon Web Services account. This role contains the
     * permissions that allow you to access Amazon SES and send email messages from
     * your email address. For more information about the service-linked role that
     * Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline EmailConfigurationType& WithEmailSendingAccount(EmailSendingAccountType&& value) { SetEmailSendingAccount(std::move(value)); return *this;}


    /**
     * <p>Either the sender’s email address or the sender’s name with their email
     * address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address appears before the body of the
     * email.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>Either the sender’s email address or the sender’s name with their email
     * address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address appears before the body of the
     * email.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>Either the sender’s email address or the sender’s name with their email
     * address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address appears before the body of the
     * email.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>Either the sender’s email address or the sender’s name with their email
     * address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address appears before the body of the
     * email.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>Either the sender’s email address or the sender’s name with their email
     * address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address appears before the body of the
     * email.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>Either the sender’s email address or the sender’s name with their email
     * address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address appears before the body of the
     * email.</p>
     */
    inline EmailConfigurationType& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>Either the sender’s email address or the sender’s name with their email
     * address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address appears before the body of the
     * email.</p>
     */
    inline EmailConfigurationType& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>Either the sender’s email address or the sender’s name with their email
     * address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address appears before the body of the
     * email.</p>
     */
    inline EmailConfigurationType& WithFrom(const char* value) { SetFrom(value); return *this;}


    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon Simple Email Service. A configuration set is applied to an email by
     * including a reference to the configuration set in the headers of the email. Once
     * applied, all of the rules in that configuration set are applied to the email.
     * Configuration sets can be used to apply the following types of rules to emails:
     * </p> <dl> <dt>Event publishing</dt> <dd> <p>Amazon Simple Email Service can
     * track the number of send, delivery, open, click, bounce, and complaint events
     * for each email sent. Use event publishing to send information about these events
     * to other Amazon Web Services services such as and Amazon CloudWatch</p> </dd>
     * <dt>IP pool management</dt> <dd> <p>When leasing dedicated IP addresses with
     * Amazon Simple Email Service, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </dd> </dl>
     */
    inline const Aws::String& GetConfigurationSet() const{ return m_configurationSet; }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon Simple Email Service. A configuration set is applied to an email by
     * including a reference to the configuration set in the headers of the email. Once
     * applied, all of the rules in that configuration set are applied to the email.
     * Configuration sets can be used to apply the following types of rules to emails:
     * </p> <dl> <dt>Event publishing</dt> <dd> <p>Amazon Simple Email Service can
     * track the number of send, delivery, open, click, bounce, and complaint events
     * for each email sent. Use event publishing to send information about these events
     * to other Amazon Web Services services such as and Amazon CloudWatch</p> </dd>
     * <dt>IP pool management</dt> <dd> <p>When leasing dedicated IP addresses with
     * Amazon Simple Email Service, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </dd> </dl>
     */
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon Simple Email Service. A configuration set is applied to an email by
     * including a reference to the configuration set in the headers of the email. Once
     * applied, all of the rules in that configuration set are applied to the email.
     * Configuration sets can be used to apply the following types of rules to emails:
     * </p> <dl> <dt>Event publishing</dt> <dd> <p>Amazon Simple Email Service can
     * track the number of send, delivery, open, click, bounce, and complaint events
     * for each email sent. Use event publishing to send information about these events
     * to other Amazon Web Services services such as and Amazon CloudWatch</p> </dd>
     * <dt>IP pool management</dt> <dd> <p>When leasing dedicated IP addresses with
     * Amazon Simple Email Service, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </dd> </dl>
     */
    inline void SetConfigurationSet(const Aws::String& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon Simple Email Service. A configuration set is applied to an email by
     * including a reference to the configuration set in the headers of the email. Once
     * applied, all of the rules in that configuration set are applied to the email.
     * Configuration sets can be used to apply the following types of rules to emails:
     * </p> <dl> <dt>Event publishing</dt> <dd> <p>Amazon Simple Email Service can
     * track the number of send, delivery, open, click, bounce, and complaint events
     * for each email sent. Use event publishing to send information about these events
     * to other Amazon Web Services services such as and Amazon CloudWatch</p> </dd>
     * <dt>IP pool management</dt> <dd> <p>When leasing dedicated IP addresses with
     * Amazon Simple Email Service, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </dd> </dl>
     */
    inline void SetConfigurationSet(Aws::String&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::move(value); }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon Simple Email Service. A configuration set is applied to an email by
     * including a reference to the configuration set in the headers of the email. Once
     * applied, all of the rules in that configuration set are applied to the email.
     * Configuration sets can be used to apply the following types of rules to emails:
     * </p> <dl> <dt>Event publishing</dt> <dd> <p>Amazon Simple Email Service can
     * track the number of send, delivery, open, click, bounce, and complaint events
     * for each email sent. Use event publishing to send information about these events
     * to other Amazon Web Services services such as and Amazon CloudWatch</p> </dd>
     * <dt>IP pool management</dt> <dd> <p>When leasing dedicated IP addresses with
     * Amazon Simple Email Service, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </dd> </dl>
     */
    inline void SetConfigurationSet(const char* value) { m_configurationSetHasBeenSet = true; m_configurationSet.assign(value); }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon Simple Email Service. A configuration set is applied to an email by
     * including a reference to the configuration set in the headers of the email. Once
     * applied, all of the rules in that configuration set are applied to the email.
     * Configuration sets can be used to apply the following types of rules to emails:
     * </p> <dl> <dt>Event publishing</dt> <dd> <p>Amazon Simple Email Service can
     * track the number of send, delivery, open, click, bounce, and complaint events
     * for each email sent. Use event publishing to send information about these events
     * to other Amazon Web Services services such as and Amazon CloudWatch</p> </dd>
     * <dt>IP pool management</dt> <dd> <p>When leasing dedicated IP addresses with
     * Amazon Simple Email Service, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </dd> </dl>
     */
    inline EmailConfigurationType& WithConfigurationSet(const Aws::String& value) { SetConfigurationSet(value); return *this;}

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon Simple Email Service. A configuration set is applied to an email by
     * including a reference to the configuration set in the headers of the email. Once
     * applied, all of the rules in that configuration set are applied to the email.
     * Configuration sets can be used to apply the following types of rules to emails:
     * </p> <dl> <dt>Event publishing</dt> <dd> <p>Amazon Simple Email Service can
     * track the number of send, delivery, open, click, bounce, and complaint events
     * for each email sent. Use event publishing to send information about these events
     * to other Amazon Web Services services such as and Amazon CloudWatch</p> </dd>
     * <dt>IP pool management</dt> <dd> <p>When leasing dedicated IP addresses with
     * Amazon Simple Email Service, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </dd> </dl>
     */
    inline EmailConfigurationType& WithConfigurationSet(Aws::String&& value) { SetConfigurationSet(std::move(value)); return *this;}

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon Simple Email Service. A configuration set is applied to an email by
     * including a reference to the configuration set in the headers of the email. Once
     * applied, all of the rules in that configuration set are applied to the email.
     * Configuration sets can be used to apply the following types of rules to emails:
     * </p> <dl> <dt>Event publishing</dt> <dd> <p>Amazon Simple Email Service can
     * track the number of send, delivery, open, click, bounce, and complaint events
     * for each email sent. Use event publishing to send information about these events
     * to other Amazon Web Services services such as and Amazon CloudWatch</p> </dd>
     * <dt>IP pool management</dt> <dd> <p>When leasing dedicated IP addresses with
     * Amazon Simple Email Service, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </dd> </dl>
     */
    inline EmailConfigurationType& WithConfigurationSet(const char* value) { SetConfigurationSet(value); return *this;}

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_replyToEmailAddress;
    bool m_replyToEmailAddressHasBeenSet = false;

    EmailSendingAccountType m_emailSendingAccount;
    bool m_emailSendingAccountHasBeenSet = false;

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::String m_configurationSet;
    bool m_configurationSetHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
