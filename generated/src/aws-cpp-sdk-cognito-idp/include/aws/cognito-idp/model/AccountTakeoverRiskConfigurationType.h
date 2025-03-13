/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The settings for automated responses and notification templates for adaptive
   * authentication with threat protection features.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountTakeoverRiskConfigurationType">AWS
   * API Reference</a></p>
   */
  class AccountTakeoverRiskConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverRiskConfigurationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverRiskConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverRiskConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The settings for composing and sending an email message when threat
     * protection assesses a risk level with adaptive authentication. When you choose
     * to notify users in <code>AccountTakeoverRiskConfiguration</code>, Amazon Cognito
     * sends an email message using the method and template that you set with this data
     * type.</p>
     */
    inline const NotifyConfigurationType& GetNotifyConfiguration() const { return m_notifyConfiguration; }
    inline bool NotifyConfigurationHasBeenSet() const { return m_notifyConfigurationHasBeenSet; }
    template<typename NotifyConfigurationT = NotifyConfigurationType>
    void SetNotifyConfiguration(NotifyConfigurationT&& value) { m_notifyConfigurationHasBeenSet = true; m_notifyConfiguration = std::forward<NotifyConfigurationT>(value); }
    template<typename NotifyConfigurationT = NotifyConfigurationType>
    AccountTakeoverRiskConfigurationType& WithNotifyConfiguration(NotifyConfigurationT&& value) { SetNotifyConfiguration(std::forward<NotifyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of account-takeover actions for each level of risk that Amazon Cognito
     * might assess with threat protection.</p>
     */
    inline const AccountTakeoverActionsType& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = AccountTakeoverActionsType>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = AccountTakeoverActionsType>
    AccountTakeoverRiskConfigurationType& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    ///@}
  private:

    NotifyConfigurationType m_notifyConfiguration;
    bool m_notifyConfigurationHasBeenSet = false;

    AccountTakeoverActionsType m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
