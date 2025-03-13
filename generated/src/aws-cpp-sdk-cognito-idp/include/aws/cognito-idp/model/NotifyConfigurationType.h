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
   * <p>The configuration for Amazon SES email messages that threat protection sends
   * to a user when your adaptive authentication automated response has a
   * <i>Notify</i> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/NotifyConfigurationType">AWS
   * API Reference</a></p>
   */
  class NotifyConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API NotifyConfigurationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API NotifyConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API NotifyConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The email address that sends the email message. The address must be either
     * individually verified with Amazon Simple Email Service, or from a domain that
     * has been verified with Amazon SES.</p>
     */
    inline const Aws::String& GetFrom() const { return m_from; }
    inline bool FromHasBeenSet() const { return m_fromHasBeenSet; }
    template<typename FromT = Aws::String>
    void SetFrom(FromT&& value) { m_fromHasBeenSet = true; m_from = std::forward<FromT>(value); }
    template<typename FromT = Aws::String>
    NotifyConfigurationType& WithFrom(FromT&& value) { SetFrom(std::forward<FromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reply-to email address of an email template.</p>
     */
    inline const Aws::String& GetReplyTo() const { return m_replyTo; }
    inline bool ReplyToHasBeenSet() const { return m_replyToHasBeenSet; }
    template<typename ReplyToT = Aws::String>
    void SetReplyTo(ReplyToT&& value) { m_replyToHasBeenSet = true; m_replyTo = std::forward<ReplyToT>(value); }
    template<typename ReplyToT = Aws::String>
    NotifyConfigurationType& WithReplyTo(ReplyToT&& value) { SetReplyTo(std::forward<ReplyToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the identity that is associated with the
     * sending authorization policy. This identity permits Amazon Cognito to send for
     * the email address specified in the <code>From</code> parameter.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    NotifyConfigurationType& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the email message that your user pool sends when a detected
     * risk event is blocked.</p>
     */
    inline const NotifyEmailType& GetBlockEmail() const { return m_blockEmail; }
    inline bool BlockEmailHasBeenSet() const { return m_blockEmailHasBeenSet; }
    template<typename BlockEmailT = NotifyEmailType>
    void SetBlockEmail(BlockEmailT&& value) { m_blockEmailHasBeenSet = true; m_blockEmail = std::forward<BlockEmailT>(value); }
    template<typename BlockEmailT = NotifyEmailType>
    NotifyConfigurationType& WithBlockEmail(BlockEmailT&& value) { SetBlockEmail(std::forward<BlockEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the email message that your user pool sends when no action
     * is taken in response to a detected risk.</p>
     */
    inline const NotifyEmailType& GetNoActionEmail() const { return m_noActionEmail; }
    inline bool NoActionEmailHasBeenSet() const { return m_noActionEmailHasBeenSet; }
    template<typename NoActionEmailT = NotifyEmailType>
    void SetNoActionEmail(NoActionEmailT&& value) { m_noActionEmailHasBeenSet = true; m_noActionEmail = std::forward<NoActionEmailT>(value); }
    template<typename NoActionEmailT = NotifyEmailType>
    NotifyConfigurationType& WithNoActionEmail(NoActionEmailT&& value) { SetNoActionEmail(std::forward<NoActionEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the email message that your user pool sends when MFA is
     * challenged in response to a detected risk.</p>
     */
    inline const NotifyEmailType& GetMfaEmail() const { return m_mfaEmail; }
    inline bool MfaEmailHasBeenSet() const { return m_mfaEmailHasBeenSet; }
    template<typename MfaEmailT = NotifyEmailType>
    void SetMfaEmail(MfaEmailT&& value) { m_mfaEmailHasBeenSet = true; m_mfaEmail = std::forward<MfaEmailT>(value); }
    template<typename MfaEmailT = NotifyEmailType>
    NotifyConfigurationType& WithMfaEmail(MfaEmailT&& value) { SetMfaEmail(std::forward<MfaEmailT>(value)); return *this;}
    ///@}
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
