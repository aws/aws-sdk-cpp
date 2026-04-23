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
   * <p>Account takeover action type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountTakeoverActionType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverActionType
  {
  public:
    AccountTakeoverActionType();
    AccountTakeoverActionType(Aws::Utils::Json::JsonView jsonValue);
    AccountTakeoverActionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Flag specifying whether to send a notification.</p>
     */
    inline bool GetNotify() const{ return m_notify; }

    /**
     * <p>Flag specifying whether to send a notification.</p>
     */
    inline bool NotifyHasBeenSet() const { return m_notifyHasBeenSet; }

    /**
     * <p>Flag specifying whether to send a notification.</p>
     */
    inline void SetNotify(bool value) { m_notifyHasBeenSet = true; m_notify = value; }

    /**
     * <p>Flag specifying whether to send a notification.</p>
     */
    inline AccountTakeoverActionType& WithNotify(bool value) { SetNotify(value); return *this;}


    /**
     * <p>The event action.</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action
     * will block the request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Throw
     * MFA challenge if user has configured it, else allow the request.</p> </li> <li>
     * <p> <code>MFA_REQUIRED</code> Throw MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * sign-in.</p> </li> </ul>
     */
    inline const AccountTakeoverEventActionType& GetEventAction() const{ return m_eventAction; }

    /**
     * <p>The event action.</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action
     * will block the request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Throw
     * MFA challenge if user has configured it, else allow the request.</p> </li> <li>
     * <p> <code>MFA_REQUIRED</code> Throw MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * sign-in.</p> </li> </ul>
     */
    inline bool EventActionHasBeenSet() const { return m_eventActionHasBeenSet; }

    /**
     * <p>The event action.</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action
     * will block the request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Throw
     * MFA challenge if user has configured it, else allow the request.</p> </li> <li>
     * <p> <code>MFA_REQUIRED</code> Throw MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * sign-in.</p> </li> </ul>
     */
    inline void SetEventAction(const AccountTakeoverEventActionType& value) { m_eventActionHasBeenSet = true; m_eventAction = value; }

    /**
     * <p>The event action.</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action
     * will block the request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Throw
     * MFA challenge if user has configured it, else allow the request.</p> </li> <li>
     * <p> <code>MFA_REQUIRED</code> Throw MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * sign-in.</p> </li> </ul>
     */
    inline void SetEventAction(AccountTakeoverEventActionType&& value) { m_eventActionHasBeenSet = true; m_eventAction = std::move(value); }

    /**
     * <p>The event action.</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action
     * will block the request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Throw
     * MFA challenge if user has configured it, else allow the request.</p> </li> <li>
     * <p> <code>MFA_REQUIRED</code> Throw MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * sign-in.</p> </li> </ul>
     */
    inline AccountTakeoverActionType& WithEventAction(const AccountTakeoverEventActionType& value) { SetEventAction(value); return *this;}

    /**
     * <p>The event action.</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action
     * will block the request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Throw
     * MFA challenge if user has configured it, else allow the request.</p> </li> <li>
     * <p> <code>MFA_REQUIRED</code> Throw MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * sign-in.</p> </li> </ul>
     */
    inline AccountTakeoverActionType& WithEventAction(AccountTakeoverEventActionType&& value) { SetEventAction(std::move(value)); return *this;}

  private:

    bool m_notify;
    bool m_notifyHasBeenSet;

    AccountTakeoverEventActionType m_eventAction;
    bool m_eventActionHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
