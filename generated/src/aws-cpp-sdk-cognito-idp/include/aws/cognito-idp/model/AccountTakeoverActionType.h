/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/AccountTakeoverEventActionType.h>
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
   * <p>The automated response to a risk level for adaptive authentication in
   * full-function, or <code>ENFORCED</code>, mode. You can assign an action to each
   * risk level that threat protection evaluates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountTakeoverActionType">AWS
   * API Reference</a></p>
   */
  class AccountTakeoverActionType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines whether Amazon Cognito sends a user a notification message when
     * your user pools assesses a user's session at the associated risk level.</p>
     */
    inline bool GetNotify() const { return m_notify; }
    inline bool NotifyHasBeenSet() const { return m_notifyHasBeenSet; }
    inline void SetNotify(bool value) { m_notifyHasBeenSet = true; m_notify = value; }
    inline AccountTakeoverActionType& WithNotify(bool value) { SetNotify(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take for the attempted account takeover action for the
     * associated risk level. Valid values are as follows:</p> <ul> <li> <p>
     * <code>BLOCK</code>: Block the request.</p> </li> <li> <p>
     * <code>MFA_IF_CONFIGURED</code>: Present an MFA challenge if possible. MFA is
     * possible if the user pool has active MFA methods that the user can set up. For
     * example, if the user pool only supports SMS message MFA but the user doesn't
     * have a phone number attribute, MFA setup isn't possible. If MFA setup isn't
     * possible, allow the request.</p> </li> <li> <p> <code>MFA_REQUIRED</code>:
     * Present an MFA challenge if possible. Block the request if a user hasn't set up
     * MFA. To sign in with required MFA, users must have an email address or phone
     * number attribute, or a registered TOTP factor.</p> </li> <li> <p>
     * <code>NO_ACTION</code>: Take no action. Permit sign-in.</p> </li> </ul>
     */
    inline AccountTakeoverEventActionType GetEventAction() const { return m_eventAction; }
    inline bool EventActionHasBeenSet() const { return m_eventActionHasBeenSet; }
    inline void SetEventAction(AccountTakeoverEventActionType value) { m_eventActionHasBeenSet = true; m_eventAction = value; }
    inline AccountTakeoverActionType& WithEventAction(AccountTakeoverEventActionType value) { SetEventAction(value); return *this;}
    ///@}
  private:

    bool m_notify{false};
    bool m_notifyHasBeenSet = false;

    AccountTakeoverEventActionType m_eventAction{AccountTakeoverEventActionType::NOT_SET};
    bool m_eventActionHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
