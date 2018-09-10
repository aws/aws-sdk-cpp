﻿/*
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
#include <aws/cognito-idp/model/NotifyConfigurationType.h>
#include <aws/cognito-idp/model/AccountTakeoverActionsType.h>
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
   * <p>Configuration for mitigation actions and notification for different levels of
   * risk detected for a potential account takeover.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountTakeoverRiskConfigurationType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverRiskConfigurationType
  {
  public:
    AccountTakeoverRiskConfigurationType();
    AccountTakeoverRiskConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AccountTakeoverRiskConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The notify configuration used to construct email notifications.</p>
     */
    inline const NotifyConfigurationType& GetNotifyConfiguration() const{ return m_notifyConfiguration; }

    /**
     * <p>The notify configuration used to construct email notifications.</p>
     */
    inline void SetNotifyConfiguration(const NotifyConfigurationType& value) { m_notifyConfigurationHasBeenSet = true; m_notifyConfiguration = value; }

    /**
     * <p>The notify configuration used to construct email notifications.</p>
     */
    inline void SetNotifyConfiguration(NotifyConfigurationType&& value) { m_notifyConfigurationHasBeenSet = true; m_notifyConfiguration = std::move(value); }

    /**
     * <p>The notify configuration used to construct email notifications.</p>
     */
    inline AccountTakeoverRiskConfigurationType& WithNotifyConfiguration(const NotifyConfigurationType& value) { SetNotifyConfiguration(value); return *this;}

    /**
     * <p>The notify configuration used to construct email notifications.</p>
     */
    inline AccountTakeoverRiskConfigurationType& WithNotifyConfiguration(NotifyConfigurationType&& value) { SetNotifyConfiguration(std::move(value)); return *this;}


    /**
     * <p>Account takeover risk configuration actions</p>
     */
    inline const AccountTakeoverActionsType& GetActions() const{ return m_actions; }

    /**
     * <p>Account takeover risk configuration actions</p>
     */
    inline void SetActions(const AccountTakeoverActionsType& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>Account takeover risk configuration actions</p>
     */
    inline void SetActions(AccountTakeoverActionsType&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>Account takeover risk configuration actions</p>
     */
    inline AccountTakeoverRiskConfigurationType& WithActions(const AccountTakeoverActionsType& value) { SetActions(value); return *this;}

    /**
     * <p>Account takeover risk configuration actions</p>
     */
    inline AccountTakeoverRiskConfigurationType& WithActions(AccountTakeoverActionsType&& value) { SetActions(std::move(value)); return *this;}

  private:

    NotifyConfigurationType m_notifyConfiguration;
    bool m_notifyConfigurationHasBeenSet;

    AccountTakeoverActionsType m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
