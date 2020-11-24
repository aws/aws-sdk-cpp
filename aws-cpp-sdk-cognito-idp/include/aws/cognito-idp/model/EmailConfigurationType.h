/**
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
   * <p>The email configuration type. </p>  <p>Amazon Cognito has specific
   * regions for use with Amazon SES. For more information on the supported regions,
   * see <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/user-pool-email.html">Email
   * Settings for Amazon Cognito User Pools</a>.</p> <p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EmailConfigurationType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API EmailConfigurationType
  {
  public:
    EmailConfigurationType();
    EmailConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    EmailConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of a verified email address in Amazon SES.
     * This email address is used in one of the following ways, depending on the value
     * that you specify for the <code>EmailSendingAccount</code> parameter:</p> <ul>
     * <li> <p>If you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this
     * address as the custom FROM address when it emails your users by using its
     * built-in email account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>,
     * Amazon Cognito emails your users with this address by calling Amazon SES on your
     * behalf.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a verified email address in Amazon SES.
     * This email address is used in one of the following ways, depending on the value
     * that you specify for the <code>EmailSendingAccount</code> parameter:</p> <ul>
     * <li> <p>If you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this
     * address as the custom FROM address when it emails your users by using its
     * built-in email account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>,
     * Amazon Cognito emails your users with this address by calling Amazon SES on your
     * behalf.</p> </li> </ul>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a verified email address in Amazon SES.
     * This email address is used in one of the following ways, depending on the value
     * that you specify for the <code>EmailSendingAccount</code> parameter:</p> <ul>
     * <li> <p>If you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this
     * address as the custom FROM address when it emails your users by using its
     * built-in email account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>,
     * Amazon Cognito emails your users with this address by calling Amazon SES on your
     * behalf.</p> </li> </ul>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a verified email address in Amazon SES.
     * This email address is used in one of the following ways, depending on the value
     * that you specify for the <code>EmailSendingAccount</code> parameter:</p> <ul>
     * <li> <p>If you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this
     * address as the custom FROM address when it emails your users by using its
     * built-in email account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>,
     * Amazon Cognito emails your users with this address by calling Amazon SES on your
     * behalf.</p> </li> </ul>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a verified email address in Amazon SES.
     * This email address is used in one of the following ways, depending on the value
     * that you specify for the <code>EmailSendingAccount</code> parameter:</p> <ul>
     * <li> <p>If you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this
     * address as the custom FROM address when it emails your users by using its
     * built-in email account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>,
     * Amazon Cognito emails your users with this address by calling Amazon SES on your
     * behalf.</p> </li> </ul>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a verified email address in Amazon SES.
     * This email address is used in one of the following ways, depending on the value
     * that you specify for the <code>EmailSendingAccount</code> parameter:</p> <ul>
     * <li> <p>If you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this
     * address as the custom FROM address when it emails your users by using its
     * built-in email account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>,
     * Amazon Cognito emails your users with this address by calling Amazon SES on your
     * behalf.</p> </li> </ul>
     */
    inline EmailConfigurationType& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a verified email address in Amazon SES.
     * This email address is used in one of the following ways, depending on the value
     * that you specify for the <code>EmailSendingAccount</code> parameter:</p> <ul>
     * <li> <p>If you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this
     * address as the custom FROM address when it emails your users by using its
     * built-in email account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>,
     * Amazon Cognito emails your users with this address by calling Amazon SES on your
     * behalf.</p> </li> </ul>
     */
    inline EmailConfigurationType& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a verified email address in Amazon SES.
     * This email address is used in one of the following ways, depending on the value
     * that you specify for the <code>EmailSendingAccount</code> parameter:</p> <ul>
     * <li> <p>If you specify <code>COGNITO_DEFAULT</code>, Amazon Cognito uses this
     * address as the custom FROM address when it emails your users by using its
     * built-in email account.</p> </li> <li> <p>If you specify <code>DEVELOPER</code>,
     * Amazon Cognito emails your users with this address by calling Amazon SES on your
     * behalf.</p> </li> </ul>
     */
    inline EmailConfigurationType& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The destination to which the receiver of the email should reply to.</p>
     */
    inline const Aws::String& GetReplyToEmailAddress() const{ return m_replyToEmailAddress; }

    /**
     * <p>The destination to which the receiver of the email should reply to.</p>
     */
    inline bool ReplyToEmailAddressHasBeenSet() const { return m_replyToEmailAddressHasBeenSet; }

    /**
     * <p>The destination to which the receiver of the email should reply to.</p>
     */
    inline void SetReplyToEmailAddress(const Aws::String& value) { m_replyToEmailAddressHasBeenSet = true; m_replyToEmailAddress = value; }

    /**
     * <p>The destination to which the receiver of the email should reply to.</p>
     */
    inline void SetReplyToEmailAddress(Aws::String&& value) { m_replyToEmailAddressHasBeenSet = true; m_replyToEmailAddress = std::move(value); }

    /**
     * <p>The destination to which the receiver of the email should reply to.</p>
     */
    inline void SetReplyToEmailAddress(const char* value) { m_replyToEmailAddressHasBeenSet = true; m_replyToEmailAddress.assign(value); }

    /**
     * <p>The destination to which the receiver of the email should reply to.</p>
     */
    inline EmailConfigurationType& WithReplyToEmailAddress(const Aws::String& value) { SetReplyToEmailAddress(value); return *this;}

    /**
     * <p>The destination to which the receiver of the email should reply to.</p>
     */
    inline EmailConfigurationType& WithReplyToEmailAddress(Aws::String&& value) { SetReplyToEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The destination to which the receiver of the email should reply to.</p>
     */
    inline EmailConfigurationType& WithReplyToEmailAddress(const char* value) { SetReplyToEmailAddress(value); return *this;}


    /**
     * <p>Specifies whether Amazon Cognito emails your users by using its built-in
     * email functionality or your Amazon SES email configuration. Specify one of the
     * following values:</p> <dl> <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito
     * emails your users, it uses its built-in email functionality. When you use the
     * default option, Amazon Cognito allows only a limited number of emails each day
     * for your user pool. For typical production environments, the default email limit
     * is below the required delivery volume. To achieve a higher delivery volume,
     * specify DEVELOPER to use your Amazon SES email configuration.</p> <p>To look up
     * the email delivery limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits
     * in Amazon Cognito</a> in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The
     * default FROM address is no-reply@verificationemail.com. To customize the FROM
     * address, provide the ARN of an Amazon SES verified email address for the
     * <code>SourceArn</code> parameter.</p> <p> If EmailSendingAccount is
     * COGNITO_DEFAULT, the following parameters aren't allowed:</p> <ul> <li>
     * <p>EmailVerificationMessage</p> </li> <li> <p>EmailVerificationSubject</p> </li>
     * <li> <p>InviteMessageTemplate.EmailMessage</p> </li> <li>
     * <p>InviteMessageTemplate.EmailSubject</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessage</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessageByLink</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubject,</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubjectByLink</p> </li> </ul> 
     * <p>DEVELOPER EmailSendingAccount is required.</p>  </dd>
     * <dt>DEVELOPER</dt> <dd> <p>When Amazon Cognito emails your users, it uses your
     * Amazon SES configuration. Amazon Cognito calls Amazon SES on your behalf to send
     * email from your verified email address. When you use this option, the email
     * delivery limits are the same limits that apply to your Amazon SES verified email
     * address in your AWS account.</p> <p>If you use this option, you must provide the
     * ARN of an Amazon SES verified email address for the <code>SourceArn</code>
     * parameter.</p> <p>Before Amazon Cognito can email your users, it requires
     * additional permissions to call Amazon SES on your behalf. When you update your
     * user pool with this option, Amazon Cognito creates a <i>service-linked role</i>,
     * which is a type of IAM role, in your AWS account. This role contains the
     * permissions that allow Amazon Cognito to access Amazon SES and send email
     * messages with your address. For more information about the service-linked role
     * that Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline const EmailSendingAccountType& GetEmailSendingAccount() const{ return m_emailSendingAccount; }

    /**
     * <p>Specifies whether Amazon Cognito emails your users by using its built-in
     * email functionality or your Amazon SES email configuration. Specify one of the
     * following values:</p> <dl> <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito
     * emails your users, it uses its built-in email functionality. When you use the
     * default option, Amazon Cognito allows only a limited number of emails each day
     * for your user pool. For typical production environments, the default email limit
     * is below the required delivery volume. To achieve a higher delivery volume,
     * specify DEVELOPER to use your Amazon SES email configuration.</p> <p>To look up
     * the email delivery limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits
     * in Amazon Cognito</a> in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The
     * default FROM address is no-reply@verificationemail.com. To customize the FROM
     * address, provide the ARN of an Amazon SES verified email address for the
     * <code>SourceArn</code> parameter.</p> <p> If EmailSendingAccount is
     * COGNITO_DEFAULT, the following parameters aren't allowed:</p> <ul> <li>
     * <p>EmailVerificationMessage</p> </li> <li> <p>EmailVerificationSubject</p> </li>
     * <li> <p>InviteMessageTemplate.EmailMessage</p> </li> <li>
     * <p>InviteMessageTemplate.EmailSubject</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessage</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessageByLink</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubject,</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubjectByLink</p> </li> </ul> 
     * <p>DEVELOPER EmailSendingAccount is required.</p>  </dd>
     * <dt>DEVELOPER</dt> <dd> <p>When Amazon Cognito emails your users, it uses your
     * Amazon SES configuration. Amazon Cognito calls Amazon SES on your behalf to send
     * email from your verified email address. When you use this option, the email
     * delivery limits are the same limits that apply to your Amazon SES verified email
     * address in your AWS account.</p> <p>If you use this option, you must provide the
     * ARN of an Amazon SES verified email address for the <code>SourceArn</code>
     * parameter.</p> <p>Before Amazon Cognito can email your users, it requires
     * additional permissions to call Amazon SES on your behalf. When you update your
     * user pool with this option, Amazon Cognito creates a <i>service-linked role</i>,
     * which is a type of IAM role, in your AWS account. This role contains the
     * permissions that allow Amazon Cognito to access Amazon SES and send email
     * messages with your address. For more information about the service-linked role
     * that Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline bool EmailSendingAccountHasBeenSet() const { return m_emailSendingAccountHasBeenSet; }

    /**
     * <p>Specifies whether Amazon Cognito emails your users by using its built-in
     * email functionality or your Amazon SES email configuration. Specify one of the
     * following values:</p> <dl> <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito
     * emails your users, it uses its built-in email functionality. When you use the
     * default option, Amazon Cognito allows only a limited number of emails each day
     * for your user pool. For typical production environments, the default email limit
     * is below the required delivery volume. To achieve a higher delivery volume,
     * specify DEVELOPER to use your Amazon SES email configuration.</p> <p>To look up
     * the email delivery limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits
     * in Amazon Cognito</a> in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The
     * default FROM address is no-reply@verificationemail.com. To customize the FROM
     * address, provide the ARN of an Amazon SES verified email address for the
     * <code>SourceArn</code> parameter.</p> <p> If EmailSendingAccount is
     * COGNITO_DEFAULT, the following parameters aren't allowed:</p> <ul> <li>
     * <p>EmailVerificationMessage</p> </li> <li> <p>EmailVerificationSubject</p> </li>
     * <li> <p>InviteMessageTemplate.EmailMessage</p> </li> <li>
     * <p>InviteMessageTemplate.EmailSubject</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessage</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessageByLink</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubject,</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubjectByLink</p> </li> </ul> 
     * <p>DEVELOPER EmailSendingAccount is required.</p>  </dd>
     * <dt>DEVELOPER</dt> <dd> <p>When Amazon Cognito emails your users, it uses your
     * Amazon SES configuration. Amazon Cognito calls Amazon SES on your behalf to send
     * email from your verified email address. When you use this option, the email
     * delivery limits are the same limits that apply to your Amazon SES verified email
     * address in your AWS account.</p> <p>If you use this option, you must provide the
     * ARN of an Amazon SES verified email address for the <code>SourceArn</code>
     * parameter.</p> <p>Before Amazon Cognito can email your users, it requires
     * additional permissions to call Amazon SES on your behalf. When you update your
     * user pool with this option, Amazon Cognito creates a <i>service-linked role</i>,
     * which is a type of IAM role, in your AWS account. This role contains the
     * permissions that allow Amazon Cognito to access Amazon SES and send email
     * messages with your address. For more information about the service-linked role
     * that Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline void SetEmailSendingAccount(const EmailSendingAccountType& value) { m_emailSendingAccountHasBeenSet = true; m_emailSendingAccount = value; }

    /**
     * <p>Specifies whether Amazon Cognito emails your users by using its built-in
     * email functionality or your Amazon SES email configuration. Specify one of the
     * following values:</p> <dl> <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito
     * emails your users, it uses its built-in email functionality. When you use the
     * default option, Amazon Cognito allows only a limited number of emails each day
     * for your user pool. For typical production environments, the default email limit
     * is below the required delivery volume. To achieve a higher delivery volume,
     * specify DEVELOPER to use your Amazon SES email configuration.</p> <p>To look up
     * the email delivery limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits
     * in Amazon Cognito</a> in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The
     * default FROM address is no-reply@verificationemail.com. To customize the FROM
     * address, provide the ARN of an Amazon SES verified email address for the
     * <code>SourceArn</code> parameter.</p> <p> If EmailSendingAccount is
     * COGNITO_DEFAULT, the following parameters aren't allowed:</p> <ul> <li>
     * <p>EmailVerificationMessage</p> </li> <li> <p>EmailVerificationSubject</p> </li>
     * <li> <p>InviteMessageTemplate.EmailMessage</p> </li> <li>
     * <p>InviteMessageTemplate.EmailSubject</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessage</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessageByLink</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubject,</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubjectByLink</p> </li> </ul> 
     * <p>DEVELOPER EmailSendingAccount is required.</p>  </dd>
     * <dt>DEVELOPER</dt> <dd> <p>When Amazon Cognito emails your users, it uses your
     * Amazon SES configuration. Amazon Cognito calls Amazon SES on your behalf to send
     * email from your verified email address. When you use this option, the email
     * delivery limits are the same limits that apply to your Amazon SES verified email
     * address in your AWS account.</p> <p>If you use this option, you must provide the
     * ARN of an Amazon SES verified email address for the <code>SourceArn</code>
     * parameter.</p> <p>Before Amazon Cognito can email your users, it requires
     * additional permissions to call Amazon SES on your behalf. When you update your
     * user pool with this option, Amazon Cognito creates a <i>service-linked role</i>,
     * which is a type of IAM role, in your AWS account. This role contains the
     * permissions that allow Amazon Cognito to access Amazon SES and send email
     * messages with your address. For more information about the service-linked role
     * that Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline void SetEmailSendingAccount(EmailSendingAccountType&& value) { m_emailSendingAccountHasBeenSet = true; m_emailSendingAccount = std::move(value); }

    /**
     * <p>Specifies whether Amazon Cognito emails your users by using its built-in
     * email functionality or your Amazon SES email configuration. Specify one of the
     * following values:</p> <dl> <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito
     * emails your users, it uses its built-in email functionality. When you use the
     * default option, Amazon Cognito allows only a limited number of emails each day
     * for your user pool. For typical production environments, the default email limit
     * is below the required delivery volume. To achieve a higher delivery volume,
     * specify DEVELOPER to use your Amazon SES email configuration.</p> <p>To look up
     * the email delivery limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits
     * in Amazon Cognito</a> in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The
     * default FROM address is no-reply@verificationemail.com. To customize the FROM
     * address, provide the ARN of an Amazon SES verified email address for the
     * <code>SourceArn</code> parameter.</p> <p> If EmailSendingAccount is
     * COGNITO_DEFAULT, the following parameters aren't allowed:</p> <ul> <li>
     * <p>EmailVerificationMessage</p> </li> <li> <p>EmailVerificationSubject</p> </li>
     * <li> <p>InviteMessageTemplate.EmailMessage</p> </li> <li>
     * <p>InviteMessageTemplate.EmailSubject</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessage</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessageByLink</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubject,</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubjectByLink</p> </li> </ul> 
     * <p>DEVELOPER EmailSendingAccount is required.</p>  </dd>
     * <dt>DEVELOPER</dt> <dd> <p>When Amazon Cognito emails your users, it uses your
     * Amazon SES configuration. Amazon Cognito calls Amazon SES on your behalf to send
     * email from your verified email address. When you use this option, the email
     * delivery limits are the same limits that apply to your Amazon SES verified email
     * address in your AWS account.</p> <p>If you use this option, you must provide the
     * ARN of an Amazon SES verified email address for the <code>SourceArn</code>
     * parameter.</p> <p>Before Amazon Cognito can email your users, it requires
     * additional permissions to call Amazon SES on your behalf. When you update your
     * user pool with this option, Amazon Cognito creates a <i>service-linked role</i>,
     * which is a type of IAM role, in your AWS account. This role contains the
     * permissions that allow Amazon Cognito to access Amazon SES and send email
     * messages with your address. For more information about the service-linked role
     * that Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline EmailConfigurationType& WithEmailSendingAccount(const EmailSendingAccountType& value) { SetEmailSendingAccount(value); return *this;}

    /**
     * <p>Specifies whether Amazon Cognito emails your users by using its built-in
     * email functionality or your Amazon SES email configuration. Specify one of the
     * following values:</p> <dl> <dt>COGNITO_DEFAULT</dt> <dd> <p>When Amazon Cognito
     * emails your users, it uses its built-in email functionality. When you use the
     * default option, Amazon Cognito allows only a limited number of emails each day
     * for your user pool. For typical production environments, the default email limit
     * is below the required delivery volume. To achieve a higher delivery volume,
     * specify DEVELOPER to use your Amazon SES email configuration.</p> <p>To look up
     * the email delivery limit for the default option, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/limits.html">Limits
     * in Amazon Cognito</a> in the <i>Amazon Cognito Developer Guide</i>.</p> <p>The
     * default FROM address is no-reply@verificationemail.com. To customize the FROM
     * address, provide the ARN of an Amazon SES verified email address for the
     * <code>SourceArn</code> parameter.</p> <p> If EmailSendingAccount is
     * COGNITO_DEFAULT, the following parameters aren't allowed:</p> <ul> <li>
     * <p>EmailVerificationMessage</p> </li> <li> <p>EmailVerificationSubject</p> </li>
     * <li> <p>InviteMessageTemplate.EmailMessage</p> </li> <li>
     * <p>InviteMessageTemplate.EmailSubject</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessage</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailMessageByLink</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubject,</p> </li> <li>
     * <p>VerificationMessageTemplate.EmailSubjectByLink</p> </li> </ul> 
     * <p>DEVELOPER EmailSendingAccount is required.</p>  </dd>
     * <dt>DEVELOPER</dt> <dd> <p>When Amazon Cognito emails your users, it uses your
     * Amazon SES configuration. Amazon Cognito calls Amazon SES on your behalf to send
     * email from your verified email address. When you use this option, the email
     * delivery limits are the same limits that apply to your Amazon SES verified email
     * address in your AWS account.</p> <p>If you use this option, you must provide the
     * ARN of an Amazon SES verified email address for the <code>SourceArn</code>
     * parameter.</p> <p>Before Amazon Cognito can email your users, it requires
     * additional permissions to call Amazon SES on your behalf. When you update your
     * user pool with this option, Amazon Cognito creates a <i>service-linked role</i>,
     * which is a type of IAM role, in your AWS account. This role contains the
     * permissions that allow Amazon Cognito to access Amazon SES and send email
     * messages with your address. For more information about the service-linked role
     * that Amazon Cognito creates, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/using-service-linked-roles.html">Using
     * Service-Linked Roles for Amazon Cognito</a> in the <i>Amazon Cognito Developer
     * Guide</i>.</p> </dd> </dl>
     */
    inline EmailConfigurationType& WithEmailSendingAccount(EmailSendingAccountType&& value) { SetEmailSendingAccount(std::move(value)); return *this;}


    /**
     * <p>Identifies either the sender’s email address or the sender’s name with their
     * email address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address will appear before the body of
     * the email.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>Identifies either the sender’s email address or the sender’s name with their
     * email address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address will appear before the body of
     * the email.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>Identifies either the sender’s email address or the sender’s name with their
     * email address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address will appear before the body of
     * the email.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>Identifies either the sender’s email address or the sender’s name with their
     * email address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address will appear before the body of
     * the email.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>Identifies either the sender’s email address or the sender’s name with their
     * email address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address will appear before the body of
     * the email.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>Identifies either the sender’s email address or the sender’s name with their
     * email address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address will appear before the body of
     * the email.</p>
     */
    inline EmailConfigurationType& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>Identifies either the sender’s email address or the sender’s name with their
     * email address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address will appear before the body of
     * the email.</p>
     */
    inline EmailConfigurationType& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>Identifies either the sender’s email address or the sender’s name with their
     * email address. For example, <code>testuser@example.com</code> or <code>Test User
     * &lt;testuser@example.com&gt;</code>. This address will appear before the body of
     * the email.</p>
     */
    inline EmailConfigurationType& WithFrom(const char* value) { SetFrom(value); return *this;}


    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon SES. A configuration set is applied to an email by including a reference
     * to the configuration set in the headers of the email. Once applied, all of the
     * rules in that configuration set are applied to the email. Configuration sets can
     * be used to apply the following types of rules to emails: </p> <ul> <li> <p>Event
     * publishing – Amazon SES can track the number of send, delivery, open, click,
     * bounce, and complaint events for each email sent. Use event publishing to send
     * information about these events to other AWS services such as SNS and
     * CloudWatch.</p> </li> <li> <p>IP pool management – When leasing dedicated IP
     * addresses with Amazon SES, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </li> </ul>
     */
    inline const Aws::String& GetConfigurationSet() const{ return m_configurationSet; }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon SES. A configuration set is applied to an email by including a reference
     * to the configuration set in the headers of the email. Once applied, all of the
     * rules in that configuration set are applied to the email. Configuration sets can
     * be used to apply the following types of rules to emails: </p> <ul> <li> <p>Event
     * publishing – Amazon SES can track the number of send, delivery, open, click,
     * bounce, and complaint events for each email sent. Use event publishing to send
     * information about these events to other AWS services such as SNS and
     * CloudWatch.</p> </li> <li> <p>IP pool management – When leasing dedicated IP
     * addresses with Amazon SES, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </li> </ul>
     */
    inline bool ConfigurationSetHasBeenSet() const { return m_configurationSetHasBeenSet; }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon SES. A configuration set is applied to an email by including a reference
     * to the configuration set in the headers of the email. Once applied, all of the
     * rules in that configuration set are applied to the email. Configuration sets can
     * be used to apply the following types of rules to emails: </p> <ul> <li> <p>Event
     * publishing – Amazon SES can track the number of send, delivery, open, click,
     * bounce, and complaint events for each email sent. Use event publishing to send
     * information about these events to other AWS services such as SNS and
     * CloudWatch.</p> </li> <li> <p>IP pool management – When leasing dedicated IP
     * addresses with Amazon SES, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </li> </ul>
     */
    inline void SetConfigurationSet(const Aws::String& value) { m_configurationSetHasBeenSet = true; m_configurationSet = value; }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon SES. A configuration set is applied to an email by including a reference
     * to the configuration set in the headers of the email. Once applied, all of the
     * rules in that configuration set are applied to the email. Configuration sets can
     * be used to apply the following types of rules to emails: </p> <ul> <li> <p>Event
     * publishing – Amazon SES can track the number of send, delivery, open, click,
     * bounce, and complaint events for each email sent. Use event publishing to send
     * information about these events to other AWS services such as SNS and
     * CloudWatch.</p> </li> <li> <p>IP pool management – When leasing dedicated IP
     * addresses with Amazon SES, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </li> </ul>
     */
    inline void SetConfigurationSet(Aws::String&& value) { m_configurationSetHasBeenSet = true; m_configurationSet = std::move(value); }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon SES. A configuration set is applied to an email by including a reference
     * to the configuration set in the headers of the email. Once applied, all of the
     * rules in that configuration set are applied to the email. Configuration sets can
     * be used to apply the following types of rules to emails: </p> <ul> <li> <p>Event
     * publishing – Amazon SES can track the number of send, delivery, open, click,
     * bounce, and complaint events for each email sent. Use event publishing to send
     * information about these events to other AWS services such as SNS and
     * CloudWatch.</p> </li> <li> <p>IP pool management – When leasing dedicated IP
     * addresses with Amazon SES, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </li> </ul>
     */
    inline void SetConfigurationSet(const char* value) { m_configurationSetHasBeenSet = true; m_configurationSet.assign(value); }

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon SES. A configuration set is applied to an email by including a reference
     * to the configuration set in the headers of the email. Once applied, all of the
     * rules in that configuration set are applied to the email. Configuration sets can
     * be used to apply the following types of rules to emails: </p> <ul> <li> <p>Event
     * publishing – Amazon SES can track the number of send, delivery, open, click,
     * bounce, and complaint events for each email sent. Use event publishing to send
     * information about these events to other AWS services such as SNS and
     * CloudWatch.</p> </li> <li> <p>IP pool management – When leasing dedicated IP
     * addresses with Amazon SES, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </li> </ul>
     */
    inline EmailConfigurationType& WithConfigurationSet(const Aws::String& value) { SetConfigurationSet(value); return *this;}

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon SES. A configuration set is applied to an email by including a reference
     * to the configuration set in the headers of the email. Once applied, all of the
     * rules in that configuration set are applied to the email. Configuration sets can
     * be used to apply the following types of rules to emails: </p> <ul> <li> <p>Event
     * publishing – Amazon SES can track the number of send, delivery, open, click,
     * bounce, and complaint events for each email sent. Use event publishing to send
     * information about these events to other AWS services such as SNS and
     * CloudWatch.</p> </li> <li> <p>IP pool management – When leasing dedicated IP
     * addresses with Amazon SES, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </li> </ul>
     */
    inline EmailConfigurationType& WithConfigurationSet(Aws::String&& value) { SetConfigurationSet(std::move(value)); return *this;}

    /**
     * <p>The set of configuration rules that can be applied to emails sent using
     * Amazon SES. A configuration set is applied to an email by including a reference
     * to the configuration set in the headers of the email. Once applied, all of the
     * rules in that configuration set are applied to the email. Configuration sets can
     * be used to apply the following types of rules to emails: </p> <ul> <li> <p>Event
     * publishing – Amazon SES can track the number of send, delivery, open, click,
     * bounce, and complaint events for each email sent. Use event publishing to send
     * information about these events to other AWS services such as SNS and
     * CloudWatch.</p> </li> <li> <p>IP pool management – When leasing dedicated IP
     * addresses with Amazon SES, you can create groups of IP addresses, called
     * dedicated IP pools. You can then associate the dedicated IP pools with
     * configuration sets.</p> </li> </ul>
     */
    inline EmailConfigurationType& WithConfigurationSet(const char* value) { SetConfigurationSet(value); return *this;}

  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet;

    Aws::String m_replyToEmailAddress;
    bool m_replyToEmailAddressHasBeenSet;

    EmailSendingAccountType m_emailSendingAccount;
    bool m_emailSendingAccountHasBeenSet;

    Aws::String m_from;
    bool m_fromHasBeenSet;

    Aws::String m_configurationSet;
    bool m_configurationSetHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
