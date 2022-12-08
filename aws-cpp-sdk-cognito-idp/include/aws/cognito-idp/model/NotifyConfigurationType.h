/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/NotifyEmailType.h>
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
   * <p>The notify configuration type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/NotifyConfigurationType">AWS
   * API Reference</a></p>
   */
  class NotifyConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API NotifyConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API NotifyConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API NotifyConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The email address that is sending the email. The address must be either
     * individually verified with Amazon Simple Email Service, or from a domain that
     * has been verified with Amazon SES.</p>
     */
    inline const Aws::String& GetFrom() const{ return m_from; }

    /**
     * <p>The email address that is sending the email. The address must be either
     * individually verified with Amazon Simple Email Service, or from a domain that
     * has been verified with Amazon SES.</p>
     */
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }

    /**
     * <p>The email address that is sending the email. The address must be either
     * individually verified with Amazon Simple Email Service, or from a domain that
     * has been verified with Amazon SES.</p>
     */
    inline void SetFrom(const Aws::String& value) { m_fromHasBeenSet = true; m_from = value; }

    /**
     * <p>The email address that is sending the email. The address must be either
     * individually verified with Amazon Simple Email Service, or from a domain that
     * has been verified with Amazon SES.</p>
     */
    inline void SetFrom(Aws::String&& value) { m_fromHasBeenSet = true; m_from = std::move(value); }

    /**
     * <p>The email address that is sending the email. The address must be either
     * individually verified with Amazon Simple Email Service, or from a domain that
     * has been verified with Amazon SES.</p>
     */
    inline void SetFrom(const char* value) { m_fromHasBeenSet = true; m_from.assign(value); }

    /**
     * <p>The email address that is sending the email. The address must be either
     * individually verified with Amazon Simple Email Service, or from a domain that
     * has been verified with Amazon SES.</p>
     */
    inline NotifyConfigurationType& WithFrom(const Aws::String& value) { SetFrom(value); return *this;}

    /**
     * <p>The email address that is sending the email. The address must be either
     * individually verified with Amazon Simple Email Service, or from a domain that
     * has been verified with Amazon SES.</p>
     */
    inline NotifyConfigurationType& WithFrom(Aws::String&& value) { SetFrom(std::move(value)); return *this;}

    /**
     * <p>The email address that is sending the email. The address must be either
     * individually verified with Amazon Simple Email Service, or from a domain that
     * has been verified with Amazon SES.</p>
     */
    inline NotifyConfigurationType& WithFrom(const char* value) { SetFrom(value); return *this;}


    /**
     * <p>The destination to which the receiver of an email should reply to.</p>
     */
    inline const Aws::String& GetReplyTo() const{ return m_replyTo; }

    /**
     * <p>The destination to which the receiver of an email should reply to.</p>
     */
    inline bool ReplyToHasBeenSet() const { return m_replyToHasBeenSet; }

    /**
     * <p>The destination to which the receiver of an email should reply to.</p>
     */
    inline void SetReplyTo(const Aws::String& value) { m_replyToHasBeenSet = true; m_replyTo = value; }

    /**
     * <p>The destination to which the receiver of an email should reply to.</p>
     */
    inline void SetReplyTo(Aws::String&& value) { m_replyToHasBeenSet = true; m_replyTo = std::move(value); }

    /**
     * <p>The destination to which the receiver of an email should reply to.</p>
     */
    inline void SetReplyTo(const char* value) { m_replyToHasBeenSet = true; m_replyTo.assign(value); }

    /**
     * <p>The destination to which the receiver of an email should reply to.</p>
     */
    inline NotifyConfigurationType& WithReplyTo(const Aws::String& value) { SetReplyTo(value); return *this;}

    /**
     * <p>The destination to which the receiver of an email should reply to.</p>
     */
    inline NotifyConfigurationType& WithReplyTo(Aws::String&& value) { SetReplyTo(std::move(value)); return *this;}

    /**
     * <p>The destination to which the receiver of an email should reply to.</p>
     */
    inline NotifyConfigurationType& WithReplyTo(const char* value) { SetReplyTo(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the identity that is associated with the
     * sending authorization policy. This identity permits Amazon Cognito to send for
     * the email address specified in the <code>From</code> parameter.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity that is associated with the
     * sending authorization policy. This identity permits Amazon Cognito to send for
     * the email address specified in the <code>From</code> parameter.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity that is associated with the
     * sending authorization policy. This identity permits Amazon Cognito to send for
     * the email address specified in the <code>From</code> parameter.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity that is associated with the
     * sending authorization policy. This identity permits Amazon Cognito to send for
     * the email address specified in the <code>From</code> parameter.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity that is associated with the
     * sending authorization policy. This identity permits Amazon Cognito to send for
     * the email address specified in the <code>From</code> parameter.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the identity that is associated with the
     * sending authorization policy. This identity permits Amazon Cognito to send for
     * the email address specified in the <code>From</code> parameter.</p>
     */
    inline NotifyConfigurationType& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the identity that is associated with the
     * sending authorization policy. This identity permits Amazon Cognito to send for
     * the email address specified in the <code>From</code> parameter.</p>
     */
    inline NotifyConfigurationType& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the identity that is associated with the
     * sending authorization policy. This identity permits Amazon Cognito to send for
     * the email address specified in the <code>From</code> parameter.</p>
     */
    inline NotifyConfigurationType& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>Email template used when a detected risk event is blocked.</p>
     */
    inline const NotifyEmailType& GetBlockEmail() const{ return m_blockEmail; }

    /**
     * <p>Email template used when a detected risk event is blocked.</p>
     */
    inline bool BlockEmailHasBeenSet() const { return m_blockEmailHasBeenSet; }

    /**
     * <p>Email template used when a detected risk event is blocked.</p>
     */
    inline void SetBlockEmail(const NotifyEmailType& value) { m_blockEmailHasBeenSet = true; m_blockEmail = value; }

    /**
     * <p>Email template used when a detected risk event is blocked.</p>
     */
    inline void SetBlockEmail(NotifyEmailType&& value) { m_blockEmailHasBeenSet = true; m_blockEmail = std::move(value); }

    /**
     * <p>Email template used when a detected risk event is blocked.</p>
     */
    inline NotifyConfigurationType& WithBlockEmail(const NotifyEmailType& value) { SetBlockEmail(value); return *this;}

    /**
     * <p>Email template used when a detected risk event is blocked.</p>
     */
    inline NotifyConfigurationType& WithBlockEmail(NotifyEmailType&& value) { SetBlockEmail(std::move(value)); return *this;}


    /**
     * <p>The email template used when a detected risk event is allowed.</p>
     */
    inline const NotifyEmailType& GetNoActionEmail() const{ return m_noActionEmail; }

    /**
     * <p>The email template used when a detected risk event is allowed.</p>
     */
    inline bool NoActionEmailHasBeenSet() const { return m_noActionEmailHasBeenSet; }

    /**
     * <p>The email template used when a detected risk event is allowed.</p>
     */
    inline void SetNoActionEmail(const NotifyEmailType& value) { m_noActionEmailHasBeenSet = true; m_noActionEmail = value; }

    /**
     * <p>The email template used when a detected risk event is allowed.</p>
     */
    inline void SetNoActionEmail(NotifyEmailType&& value) { m_noActionEmailHasBeenSet = true; m_noActionEmail = std::move(value); }

    /**
     * <p>The email template used when a detected risk event is allowed.</p>
     */
    inline NotifyConfigurationType& WithNoActionEmail(const NotifyEmailType& value) { SetNoActionEmail(value); return *this;}

    /**
     * <p>The email template used when a detected risk event is allowed.</p>
     */
    inline NotifyConfigurationType& WithNoActionEmail(NotifyEmailType&& value) { SetNoActionEmail(std::move(value)); return *this;}


    /**
     * <p>The multi-factor authentication (MFA) email template used when MFA is
     * challenged as part of a detected risk.</p>
     */
    inline const NotifyEmailType& GetMfaEmail() const{ return m_mfaEmail; }

    /**
     * <p>The multi-factor authentication (MFA) email template used when MFA is
     * challenged as part of a detected risk.</p>
     */
    inline bool MfaEmailHasBeenSet() const { return m_mfaEmailHasBeenSet; }

    /**
     * <p>The multi-factor authentication (MFA) email template used when MFA is
     * challenged as part of a detected risk.</p>
     */
    inline void SetMfaEmail(const NotifyEmailType& value) { m_mfaEmailHasBeenSet = true; m_mfaEmail = value; }

    /**
     * <p>The multi-factor authentication (MFA) email template used when MFA is
     * challenged as part of a detected risk.</p>
     */
    inline void SetMfaEmail(NotifyEmailType&& value) { m_mfaEmailHasBeenSet = true; m_mfaEmail = std::move(value); }

    /**
     * <p>The multi-factor authentication (MFA) email template used when MFA is
     * challenged as part of a detected risk.</p>
     */
    inline NotifyConfigurationType& WithMfaEmail(const NotifyEmailType& value) { SetMfaEmail(value); return *this;}

    /**
     * <p>The multi-factor authentication (MFA) email template used when MFA is
     * challenged as part of a detected risk.</p>
     */
    inline NotifyConfigurationType& WithMfaEmail(NotifyEmailType&& value) { SetMfaEmail(std::move(value)); return *this;}

  private:

    Aws::String m_from;
    bool m_fromHasBeenSet = false;

    Aws::String m_replyTo;
    bool m_replyToHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    NotifyEmailType m_blockEmail;
    bool m_blockEmailHasBeenSet = false;

    NotifyEmailType m_noActionEmail;
    bool m_noActionEmailHasBeenSet = false;

    NotifyEmailType m_mfaEmail;
    bool m_mfaEmailHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
