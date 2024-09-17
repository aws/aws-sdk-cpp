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
   * <p>The message template structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/MessageTemplateType">AWS
   * API Reference</a></p>
   */
  class MessageTemplateType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API MessageTemplateType();
    AWS_COGNITOIDENTITYPROVIDER_API MessageTemplateType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API MessageTemplateType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message template for SMS messages.</p>
     */
    inline const Aws::String& GetSMSMessage() const{ return m_sMSMessage; }
    inline bool SMSMessageHasBeenSet() const { return m_sMSMessageHasBeenSet; }
    inline void SetSMSMessage(const Aws::String& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = value; }
    inline void SetSMSMessage(Aws::String&& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = std::move(value); }
    inline void SetSMSMessage(const char* value) { m_sMSMessageHasBeenSet = true; m_sMSMessage.assign(value); }
    inline MessageTemplateType& WithSMSMessage(const Aws::String& value) { SetSMSMessage(value); return *this;}
    inline MessageTemplateType& WithSMSMessage(Aws::String&& value) { SetSMSMessage(std::move(value)); return *this;}
    inline MessageTemplateType& WithSMSMessage(const char* value) { SetSMSMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template for email messages. EmailMessage is allowed only if <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">EmailSendingAccount</a>
     * is DEVELOPER. </p>
     */
    inline const Aws::String& GetEmailMessage() const{ return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    inline void SetEmailMessage(const Aws::String& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }
    inline void SetEmailMessage(Aws::String&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }
    inline void SetEmailMessage(const char* value) { m_emailMessageHasBeenSet = true; m_emailMessage.assign(value); }
    inline MessageTemplateType& WithEmailMessage(const Aws::String& value) { SetEmailMessage(value); return *this;}
    inline MessageTemplateType& WithEmailMessage(Aws::String&& value) { SetEmailMessage(std::move(value)); return *this;}
    inline MessageTemplateType& WithEmailMessage(const char* value) { SetEmailMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subject line for email messages. EmailSubject is allowed only if <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_EmailConfigurationType.html#CognitoUserPools-Type-EmailConfigurationType-EmailSendingAccount">EmailSendingAccount</a>
     * is DEVELOPER. </p>
     */
    inline const Aws::String& GetEmailSubject() const{ return m_emailSubject; }
    inline bool EmailSubjectHasBeenSet() const { return m_emailSubjectHasBeenSet; }
    inline void SetEmailSubject(const Aws::String& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = value; }
    inline void SetEmailSubject(Aws::String&& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = std::move(value); }
    inline void SetEmailSubject(const char* value) { m_emailSubjectHasBeenSet = true; m_emailSubject.assign(value); }
    inline MessageTemplateType& WithEmailSubject(const Aws::String& value) { SetEmailSubject(value); return *this;}
    inline MessageTemplateType& WithEmailSubject(Aws::String&& value) { SetEmailSubject(std::move(value)); return *this;}
    inline MessageTemplateType& WithEmailSubject(const char* value) { SetEmailSubject(value); return *this;}
    ///@}
  private:

    Aws::String m_sMSMessage;
    bool m_sMSMessageHasBeenSet = false;

    Aws::String m_emailMessage;
    bool m_emailMessageHasBeenSet = false;

    Aws::String m_emailSubject;
    bool m_emailSubjectHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
