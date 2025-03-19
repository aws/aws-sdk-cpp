/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The settings for administrator creation of users in a user pool. Contains
   * settings for allowing user sign-up, customizing invitation messages to new
   * users, and the amount of time before temporary passwords expire.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUserConfigType">AWS
   * API Reference</a></p>
   */
  class AdminCreateUserConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserConfigType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The setting for allowing self-service sign-up. When <code>true</code>, only
     * administrators can create new user profiles. When <code>false</code>, users can
     * register themselves and create a new user profile with the <code>SignUp</code>
     * operation.</p>
     */
    inline bool GetAllowAdminCreateUserOnly() const { return m_allowAdminCreateUserOnly; }
    inline bool AllowAdminCreateUserOnlyHasBeenSet() const { return m_allowAdminCreateUserOnlyHasBeenSet; }
    inline void SetAllowAdminCreateUserOnly(bool value) { m_allowAdminCreateUserOnlyHasBeenSet = true; m_allowAdminCreateUserOnly = value; }
    inline AdminCreateUserConfigType& WithAllowAdminCreateUserOnly(bool value) { SetAllowAdminCreateUserOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is no longer in use.</p> <p>The password expiration limit in
     * days for administrator-created users. When this time expires, the user can't
     * sign in with their temporary password. To reset the account after that time
     * limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>RESEND</code> for the <code>MessageAction</code> parameter. </p> <p>The
     * default value for this parameter is 7.</p>
     */
    inline int GetUnusedAccountValidityDays() const { return m_unusedAccountValidityDays; }
    inline bool UnusedAccountValidityDaysHasBeenSet() const { return m_unusedAccountValidityDaysHasBeenSet; }
    inline void SetUnusedAccountValidityDays(int value) { m_unusedAccountValidityDaysHasBeenSet = true; m_unusedAccountValidityDays = value; }
    inline AdminCreateUserConfigType& WithUnusedAccountValidityDays(int value) { SetUnusedAccountValidityDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template for the welcome message to new users. This template must include
     * the <code>{####}</code> temporary password placeholder if you are creating users
     * with passwords. If your users don't have passwords, you can omit the
     * placeholder.</p> <p>See also <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-message-customizations.html#cognito-user-pool-settings-user-invitation-message-customization">Customizing
     * User Invitation Messages</a>.</p>
     */
    inline const MessageTemplateType& GetInviteMessageTemplate() const { return m_inviteMessageTemplate; }
    inline bool InviteMessageTemplateHasBeenSet() const { return m_inviteMessageTemplateHasBeenSet; }
    template<typename InviteMessageTemplateT = MessageTemplateType>
    void SetInviteMessageTemplate(InviteMessageTemplateT&& value) { m_inviteMessageTemplateHasBeenSet = true; m_inviteMessageTemplate = std::forward<InviteMessageTemplateT>(value); }
    template<typename InviteMessageTemplateT = MessageTemplateType>
    AdminCreateUserConfigType& WithInviteMessageTemplate(InviteMessageTemplateT&& value) { SetInviteMessageTemplate(std::forward<InviteMessageTemplateT>(value)); return *this;}
    ///@}
  private:

    bool m_allowAdminCreateUserOnly{false};
    bool m_allowAdminCreateUserOnlyHasBeenSet = false;

    int m_unusedAccountValidityDays{0};
    bool m_unusedAccountValidityDaysHasBeenSet = false;

    MessageTemplateType m_inviteMessageTemplate;
    bool m_inviteMessageTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
