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
   * <p>The configuration for creating a new user profile.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AdminCreateUserConfigType">AWS
   * API Reference</a></p>
   */
  class AdminCreateUserConfigType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserConfigType();
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserConfigType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AdminCreateUserConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Set to <code>True</code> if only the administrator is allowed to create user
     * profiles. Set to <code>False</code> if users can sign themselves up via an
     * app.</p>
     */
    inline bool GetAllowAdminCreateUserOnly() const{ return m_allowAdminCreateUserOnly; }
    inline bool AllowAdminCreateUserOnlyHasBeenSet() const { return m_allowAdminCreateUserOnlyHasBeenSet; }
    inline void SetAllowAdminCreateUserOnly(bool value) { m_allowAdminCreateUserOnlyHasBeenSet = true; m_allowAdminCreateUserOnly = value; }
    inline AdminCreateUserConfigType& WithAllowAdminCreateUserOnly(bool value) { SetAllowAdminCreateUserOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user account expiration limit, in days, after which a new account that
     * hasn't signed in is no longer usable. To reset the account after that time
     * limit, you must call <code>AdminCreateUser</code> again, specifying
     * <code>"RESEND"</code> for the <code>MessageAction</code> parameter. The default
     * value for this parameter is 7.</p>  <p>If you set a value for
     * <code>TemporaryPasswordValidityDays</code> in <code>PasswordPolicy</code>, that
     * value will be used, and <code>UnusedAccountValidityDays</code> will be no longer
     * be an available parameter for that user pool.</p> 
     */
    inline int GetUnusedAccountValidityDays() const{ return m_unusedAccountValidityDays; }
    inline bool UnusedAccountValidityDaysHasBeenSet() const { return m_unusedAccountValidityDaysHasBeenSet; }
    inline void SetUnusedAccountValidityDays(int value) { m_unusedAccountValidityDaysHasBeenSet = true; m_unusedAccountValidityDays = value; }
    inline AdminCreateUserConfigType& WithUnusedAccountValidityDays(int value) { SetUnusedAccountValidityDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template to be used for the welcome message to new users.</p>
     * <p>See also <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-message-customizations.html#cognito-user-pool-settings-user-invitation-message-customization">Customizing
     * User Invitation Messages</a>.</p>
     */
    inline const MessageTemplateType& GetInviteMessageTemplate() const{ return m_inviteMessageTemplate; }
    inline bool InviteMessageTemplateHasBeenSet() const { return m_inviteMessageTemplateHasBeenSet; }
    inline void SetInviteMessageTemplate(const MessageTemplateType& value) { m_inviteMessageTemplateHasBeenSet = true; m_inviteMessageTemplate = value; }
    inline void SetInviteMessageTemplate(MessageTemplateType&& value) { m_inviteMessageTemplateHasBeenSet = true; m_inviteMessageTemplate = std::move(value); }
    inline AdminCreateUserConfigType& WithInviteMessageTemplate(const MessageTemplateType& value) { SetInviteMessageTemplate(value); return *this;}
    inline AdminCreateUserConfigType& WithInviteMessageTemplate(MessageTemplateType&& value) { SetInviteMessageTemplate(std::move(value)); return *this;}
    ///@}
  private:

    bool m_allowAdminCreateUserOnly;
    bool m_allowAdminCreateUserOnlyHasBeenSet = false;

    int m_unusedAccountValidityDays;
    bool m_unusedAccountValidityDaysHasBeenSet = false;

    MessageTemplateType m_inviteMessageTemplate;
    bool m_inviteMessageTemplateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
