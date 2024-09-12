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
   * <p>Sets or shows user pool email message configuration for MFA. Includes the
   * subject and body of the email message template for MFA messages. To activate
   * this setting, <a
   * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
   * advanced security features</a> must be active in your user pool.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/EmailMfaConfigType">AWS
   * API Reference</a></p>
   */
  class EmailMfaConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API EmailMfaConfigType();
    AWS_COGNITOIDENTITYPROVIDER_API EmailMfaConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API EmailMfaConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template for the email message that your user pool sends to users with an
     * MFA code. The message must contain the <code>{####}</code> placeholder. In the
     * message, Amazon Cognito replaces this placeholder with the code. If you don't
     * provide this parameter, Amazon Cognito sends messages in the default format.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline EmailMfaConfigType& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline EmailMfaConfigType& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline EmailMfaConfigType& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject of the email message that your user pool sends to users with an
     * MFA code.</p>
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }
    inline EmailMfaConfigType& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline EmailMfaConfigType& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline EmailMfaConfigType& WithSubject(const char* value) { SetSubject(value); return *this;}
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
