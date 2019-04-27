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
#include <aws/cognito-idp/model/MessageTemplateType.h>
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
   * <p>The configuration for creating a new user profile.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUserConfigType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserConfigType
  {
  public:
    AdminCreateUserConfigType();
    AdminCreateUserConfigType(Aws::Utils::Json::JsonView jsonValue);
    AdminCreateUserConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set to <code>True</code> if only the administrator is allowed to create user
     * profiles. Set to <code>False</code> if users can sign themselves up via an
     * app.</p>
     */
    inline bool GetAllowAdminCreateUserOnly() const{ return m_allowAdminCreateUserOnly; }

    /**
     * <p>Set to <code>True</code> if only the administrator is allowed to create user
     * profiles. Set to <code>False</code> if users can sign themselves up via an
     * app.</p>
     */
    inline bool AllowAdminCreateUserOnlyHasBeenSet() const { return m_allowAdminCreateUserOnlyHasBeenSet; }

    /**
     * <p>Set to <code>True</code> if only the administrator is allowed to create user
     * profiles. Set to <code>False</code> if users can sign themselves up via an
     * app.</p>
     */
    inline void SetAllowAdminCreateUserOnly(bool value) { m_allowAdminCreateUserOnlyHasBeenSet = true; m_allowAdminCreateUserOnly = value; }

    /**
     * <p>Set to <code>True</code> if only the administrator is allowed to create user
     * profiles. Set to <code>False</code> if users can sign themselves up via an
     * app.</p>
     */
    inline AdminCreateUserConfigType& WithAllowAdminCreateUserOnly(bool value) { SetAllowAdminCreateUserOnly(value); return *this;}


    /**
     * <p>The user account expiration limit, in days, after which the account is no
     * longer usable. To reset the account after that time limit, you must call
     * <code>AdminCreateUser</code> again, specifying <code>"RESEND"</code> for the
     * <code>MessageAction</code> parameter. The default value for this parameter is 7.
     * </p> <note> <p>If you set a value for <code>TemporaryPasswordValidityDays</code>
     * in <code>PasswordPolicy</code>, that value will be used and
     * <code>UnusedAccountValidityDays</code> will be deprecated for that user pool.
     * </p> </note>
     */
    inline int GetUnusedAccountValidityDays() const{ return m_unusedAccountValidityDays; }

    /**
     * <p>The user account expiration limit, in days, after which the account is no
     * longer usable. To reset the account after that time limit, you must call
     * <code>AdminCreateUser</code> again, specifying <code>"RESEND"</code> for the
     * <code>MessageAction</code> parameter. The default value for this parameter is 7.
     * </p> <note> <p>If you set a value for <code>TemporaryPasswordValidityDays</code>
     * in <code>PasswordPolicy</code>, that value will be used and
     * <code>UnusedAccountValidityDays</code> will be deprecated for that user pool.
     * </p> </note>
     */
    inline bool UnusedAccountValidityDaysHasBeenSet() const { return m_unusedAccountValidityDaysHasBeenSet; }

    /**
     * <p>The user account expiration limit, in days, after which the account is no
     * longer usable. To reset the account after that time limit, you must call
     * <code>AdminCreateUser</code> again, specifying <code>"RESEND"</code> for the
     * <code>MessageAction</code> parameter. The default value for this parameter is 7.
     * </p> <note> <p>If you set a value for <code>TemporaryPasswordValidityDays</code>
     * in <code>PasswordPolicy</code>, that value will be used and
     * <code>UnusedAccountValidityDays</code> will be deprecated for that user pool.
     * </p> </note>
     */
    inline void SetUnusedAccountValidityDays(int value) { m_unusedAccountValidityDaysHasBeenSet = true; m_unusedAccountValidityDays = value; }

    /**
     * <p>The user account expiration limit, in days, after which the account is no
     * longer usable. To reset the account after that time limit, you must call
     * <code>AdminCreateUser</code> again, specifying <code>"RESEND"</code> for the
     * <code>MessageAction</code> parameter. The default value for this parameter is 7.
     * </p> <note> <p>If you set a value for <code>TemporaryPasswordValidityDays</code>
     * in <code>PasswordPolicy</code>, that value will be used and
     * <code>UnusedAccountValidityDays</code> will be deprecated for that user pool.
     * </p> </note>
     */
    inline AdminCreateUserConfigType& WithUnusedAccountValidityDays(int value) { SetUnusedAccountValidityDays(value); return *this;}


    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     * <p>See also <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-message-customizations.html#cognito-user-pool-settings-user-invitation-message-customization">Customizing
     * User Invitation Messages</a>.</p>
     */
    inline const MessageTemplateType& GetInviteMessageTemplate() const{ return m_inviteMessageTemplate; }

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     * <p>See also <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-message-customizations.html#cognito-user-pool-settings-user-invitation-message-customization">Customizing
     * User Invitation Messages</a>.</p>
     */
    inline bool InviteMessageTemplateHasBeenSet() const { return m_inviteMessageTemplateHasBeenSet; }

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     * <p>See also <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-message-customizations.html#cognito-user-pool-settings-user-invitation-message-customization">Customizing
     * User Invitation Messages</a>.</p>
     */
    inline void SetInviteMessageTemplate(const MessageTemplateType& value) { m_inviteMessageTemplateHasBeenSet = true; m_inviteMessageTemplate = value; }

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     * <p>See also <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-message-customizations.html#cognito-user-pool-settings-user-invitation-message-customization">Customizing
     * User Invitation Messages</a>.</p>
     */
    inline void SetInviteMessageTemplate(MessageTemplateType&& value) { m_inviteMessageTemplateHasBeenSet = true; m_inviteMessageTemplate = std::move(value); }

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     * <p>See also <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-message-customizations.html#cognito-user-pool-settings-user-invitation-message-customization">Customizing
     * User Invitation Messages</a>.</p>
     */
    inline AdminCreateUserConfigType& WithInviteMessageTemplate(const MessageTemplateType& value) { SetInviteMessageTemplate(value); return *this;}

    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     * <p>See also <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-message-customizations.html#cognito-user-pool-settings-user-invitation-message-customization">Customizing
     * User Invitation Messages</a>.</p>
     */
    inline AdminCreateUserConfigType& WithInviteMessageTemplate(MessageTemplateType&& value) { SetInviteMessageTemplate(std::move(value)); return *this;}

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
