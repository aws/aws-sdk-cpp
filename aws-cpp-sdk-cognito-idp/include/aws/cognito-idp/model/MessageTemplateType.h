/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOIDENTITYPROVIDER_API MessageTemplateType
  {
  public:
    MessageTemplateType();
    MessageTemplateType(Aws::Utils::Json::JsonView jsonValue);
    MessageTemplateType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message template for SMS messages.</p>
     */
    inline const Aws::String& GetSMSMessage() const{ return m_sMSMessage; }

    /**
     * <p>The message template for SMS messages.</p>
     */
    inline bool SMSMessageHasBeenSet() const { return m_sMSMessageHasBeenSet; }

    /**
     * <p>The message template for SMS messages.</p>
     */
    inline void SetSMSMessage(const Aws::String& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = value; }

    /**
     * <p>The message template for SMS messages.</p>
     */
    inline void SetSMSMessage(Aws::String&& value) { m_sMSMessageHasBeenSet = true; m_sMSMessage = std::move(value); }

    /**
     * <p>The message template for SMS messages.</p>
     */
    inline void SetSMSMessage(const char* value) { m_sMSMessageHasBeenSet = true; m_sMSMessage.assign(value); }

    /**
     * <p>The message template for SMS messages.</p>
     */
    inline MessageTemplateType& WithSMSMessage(const Aws::String& value) { SetSMSMessage(value); return *this;}

    /**
     * <p>The message template for SMS messages.</p>
     */
    inline MessageTemplateType& WithSMSMessage(Aws::String&& value) { SetSMSMessage(std::move(value)); return *this;}

    /**
     * <p>The message template for SMS messages.</p>
     */
    inline MessageTemplateType& WithSMSMessage(const char* value) { SetSMSMessage(value); return *this;}


    /**
     * <p>The message template for email messages.</p>
     */
    inline const Aws::String& GetEmailMessage() const{ return m_emailMessage; }

    /**
     * <p>The message template for email messages.</p>
     */
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }

    /**
     * <p>The message template for email messages.</p>
     */
    inline void SetEmailMessage(const Aws::String& value) { m_emailMessageHasBeenSet = true; m_emailMessage = value; }

    /**
     * <p>The message template for email messages.</p>
     */
    inline void SetEmailMessage(Aws::String&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::move(value); }

    /**
     * <p>The message template for email messages.</p>
     */
    inline void SetEmailMessage(const char* value) { m_emailMessageHasBeenSet = true; m_emailMessage.assign(value); }

    /**
     * <p>The message template for email messages.</p>
     */
    inline MessageTemplateType& WithEmailMessage(const Aws::String& value) { SetEmailMessage(value); return *this;}

    /**
     * <p>The message template for email messages.</p>
     */
    inline MessageTemplateType& WithEmailMessage(Aws::String&& value) { SetEmailMessage(std::move(value)); return *this;}

    /**
     * <p>The message template for email messages.</p>
     */
    inline MessageTemplateType& WithEmailMessage(const char* value) { SetEmailMessage(value); return *this;}


    /**
     * <p>The subject line for email messages.</p>
     */
    inline const Aws::String& GetEmailSubject() const{ return m_emailSubject; }

    /**
     * <p>The subject line for email messages.</p>
     */
    inline bool EmailSubjectHasBeenSet() const { return m_emailSubjectHasBeenSet; }

    /**
     * <p>The subject line for email messages.</p>
     */
    inline void SetEmailSubject(const Aws::String& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = value; }

    /**
     * <p>The subject line for email messages.</p>
     */
    inline void SetEmailSubject(Aws::String&& value) { m_emailSubjectHasBeenSet = true; m_emailSubject = std::move(value); }

    /**
     * <p>The subject line for email messages.</p>
     */
    inline void SetEmailSubject(const char* value) { m_emailSubjectHasBeenSet = true; m_emailSubject.assign(value); }

    /**
     * <p>The subject line for email messages.</p>
     */
    inline MessageTemplateType& WithEmailSubject(const Aws::String& value) { SetEmailSubject(value); return *this;}

    /**
     * <p>The subject line for email messages.</p>
     */
    inline MessageTemplateType& WithEmailSubject(Aws::String&& value) { SetEmailSubject(std::move(value)); return *this;}

    /**
     * <p>The subject line for email messages.</p>
     */
    inline MessageTemplateType& WithEmailSubject(const char* value) { SetEmailSubject(value); return *this;}

  private:

    Aws::String m_sMSMessage;
    bool m_sMSMessageHasBeenSet;

    Aws::String m_emailMessage;
    bool m_emailMessageHasBeenSet;

    Aws::String m_emailSubject;
    bool m_emailSubjectHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
