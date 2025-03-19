/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Sets or shows configuration for user pool email message MFA and sign-in with
   * one-time passwords (OTPs). Includes the subject and body of the email message
   * template for sign-in and MFA messages. To activate this setting, your user pool
   * must be in the <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/feature-plans-features-essentials.html">
   * Essentials tier</a> or higher.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EmailMfaConfigType">AWS
   * API Reference</a></p>
   */
  class EmailMfaConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API EmailMfaConfigType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API EmailMfaConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API EmailMfaConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template for the email messages that your user pool sends to users with
     * codes for MFA and sign-in with email OTPs. The message must contain the
     * <code>{####}</code> placeholder. In the message, Amazon Cognito replaces this
     * placeholder with the code. If you don't provide this parameter, Amazon Cognito
     * sends messages in the default format.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EmailMfaConfigType& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject of the email messages that your user pool sends to users with
     * codes for MFA and email OTP sign-in.</p>
     */
    inline const Aws::String& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::String>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::String>
    EmailMfaConfigType& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
