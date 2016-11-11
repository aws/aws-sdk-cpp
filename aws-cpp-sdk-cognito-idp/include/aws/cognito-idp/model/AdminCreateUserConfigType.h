/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cognito-idp/model/MessageTemplateType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>The type of configuration for creating a new user profile.</p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserConfigType
  {
  public:
    AdminCreateUserConfigType();
    AdminCreateUserConfigType(const Aws::Utils::Json::JsonValue& jsonValue);
    AdminCreateUserConfigType& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Set to True if only the administrator is allowed to create user profiles. Set
     * to False if users can sign themselves up via an app.</p>
     */
    inline bool GetAllowAdminCreateUserOnly() const{ return m_allowAdminCreateUserOnly; }

    /**
     * <p>Set to True if only the administrator is allowed to create user profiles. Set
     * to False if users can sign themselves up via an app.</p>
     */
    inline void SetAllowAdminCreateUserOnly(bool value) { m_allowAdminCreateUserOnlyHasBeenSet = true; m_allowAdminCreateUserOnly = value; }

    /**
     * <p>Set to True if only the administrator is allowed to create user profiles. Set
     * to False if users can sign themselves up via an app.</p>
     */
    inline AdminCreateUserConfigType& WithAllowAdminCreateUserOnly(bool value) { SetAllowAdminCreateUserOnly(value); return *this;}

    /**
     * <p>The user account expiration limit, in days, after which the account is no
     * longer usable. To reset the account after that time limit, you must call
     * AdminCreateUser again, specifying "RESEND" for the MessageAction parameter.</p>
     */
    inline int GetUnusedAccountValidityDays() const{ return m_unusedAccountValidityDays; }

    /**
     * <p>The user account expiration limit, in days, after which the account is no
     * longer usable. To reset the account after that time limit, you must call
     * AdminCreateUser again, specifying "RESEND" for the MessageAction parameter.</p>
     */
    inline void SetUnusedAccountValidityDays(int value) { m_unusedAccountValidityDaysHasBeenSet = true; m_unusedAccountValidityDays = value; }

    /**
     * <p>The user account expiration limit, in days, after which the account is no
     * longer usable. To reset the account after that time limit, you must call
     * AdminCreateUser again, specifying "RESEND" for the MessageAction parameter.</p>
     */
    inline AdminCreateUserConfigType& WithUnusedAccountValidityDays(int value) { SetUnusedAccountValidityDays(value); return *this;}

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     */
    inline const MessageTemplateType& GetInviteMessageTemplate() const{ return m_inviteMessageTemplate; }

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     */
    inline void SetInviteMessageTemplate(const MessageTemplateType& value) { m_inviteMessageTemplateHasBeenSet = true; m_inviteMessageTemplate = value; }

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     */
    inline void SetInviteMessageTemplate(MessageTemplateType&& value) { m_inviteMessageTemplateHasBeenSet = true; m_inviteMessageTemplate = value; }

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     */
    inline AdminCreateUserConfigType& WithInviteMessageTemplate(const MessageTemplateType& value) { SetInviteMessageTemplate(value); return *this;}

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     */
    inline AdminCreateUserConfigType& WithInviteMessageTemplate(MessageTemplateType&& value) { SetInviteMessageTemplate(value); return *this;}

  private:
    bool m_allowAdminCreateUserOnly;
    bool m_allowAdminCreateUserOnlyHasBeenSet;
    int m_unusedAccountValidityDays;
    bool m_unusedAccountValidityDaysHasBeenSet;
    MessageTemplateType m_inviteMessageTemplate;
    bool m_inviteMessageTemplateHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
