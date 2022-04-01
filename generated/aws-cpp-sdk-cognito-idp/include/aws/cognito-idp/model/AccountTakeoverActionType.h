﻿/**
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
     * <p>The action to take in response to the account takeover action. Valid values
     * are:</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action will block the
     * request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Present an MFA
     * challenge if user has configured it, else allow the request.</p> </li> <li> <p>
     * <code>MFA_REQUIRED</code> Present an MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * to sign in.</p> </li> </ul>
     */
    inline const AccountTakeoverEventActionType& GetEventAction() const{ return m_eventAction; }

    /**
     * <p>The action to take in response to the account takeover action. Valid values
     * are:</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action will block the
     * request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Present an MFA
     * challenge if user has configured it, else allow the request.</p> </li> <li> <p>
     * <code>MFA_REQUIRED</code> Present an MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * to sign in.</p> </li> </ul>
     */
    inline bool EventActionHasBeenSet() const { return m_eventActionHasBeenSet; }

    /**
     * <p>The action to take in response to the account takeover action. Valid values
     * are:</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action will block the
     * request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Present an MFA
     * challenge if user has configured it, else allow the request.</p> </li> <li> <p>
     * <code>MFA_REQUIRED</code> Present an MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * to sign in.</p> </li> </ul>
     */
    inline void SetEventAction(const AccountTakeoverEventActionType& value) { m_eventActionHasBeenSet = true; m_eventAction = value; }

    /**
     * <p>The action to take in response to the account takeover action. Valid values
     * are:</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action will block the
     * request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Present an MFA
     * challenge if user has configured it, else allow the request.</p> </li> <li> <p>
     * <code>MFA_REQUIRED</code> Present an MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * to sign in.</p> </li> </ul>
     */
    inline void SetEventAction(AccountTakeoverEventActionType&& value) { m_eventActionHasBeenSet = true; m_eventAction = std::move(value); }

    /**
     * <p>The action to take in response to the account takeover action. Valid values
     * are:</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action will block the
     * request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Present an MFA
     * challenge if user has configured it, else allow the request.</p> </li> <li> <p>
     * <code>MFA_REQUIRED</code> Present an MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * to sign in.</p> </li> </ul>
     */
    inline AccountTakeoverActionType& WithEventAction(const AccountTakeoverEventActionType& value) { SetEventAction(value); return *this;}

    /**
     * <p>The action to take in response to the account takeover action. Valid values
     * are:</p> <ul> <li> <p> <code>BLOCK</code> Choosing this action will block the
     * request.</p> </li> <li> <p> <code>MFA_IF_CONFIGURED</code> Present an MFA
     * challenge if user has configured it, else allow the request.</p> </li> <li> <p>
     * <code>MFA_REQUIRED</code> Present an MFA challenge if user has configured it,
     * else block the request.</p> </li> <li> <p> <code>NO_ACTION</code> Allow the user
     * to sign in.</p> </li> </ul>
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
