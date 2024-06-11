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
   * <p>Configuration for mitigation actions and notification for different levels of
   * risk detected for a potential account takeover.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AccountTakeoverRiskConfigurationType">AWS
   * API Reference</a></p>
   */
  class AccountTakeoverRiskConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverRiskConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverRiskConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AccountTakeoverRiskConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The notify configuration used to construct email notifications.</p>
     */
    inline const NotifyConfigurationType& GetNotifyConfiguration() const{ return m_notifyConfiguration; }
    inline bool NotifyConfigurationHasBeenSet() const { return m_notifyConfigurationHasBeenSet; }
    inline void SetNotifyConfiguration(const NotifyConfigurationType& value) { m_notifyConfigurationHasBeenSet = true; m_notifyConfiguration = value; }
    inline void SetNotifyConfiguration(NotifyConfigurationType&& value) { m_notifyConfigurationHasBeenSet = true; m_notifyConfiguration = std::move(value); }
    inline AccountTakeoverRiskConfigurationType& WithNotifyConfiguration(const NotifyConfigurationType& value) { SetNotifyConfiguration(value); return *this;}
    inline AccountTakeoverRiskConfigurationType& WithNotifyConfiguration(NotifyConfigurationType&& value) { SetNotifyConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account takeover risk configuration actions.</p>
     */
    inline const AccountTakeoverActionsType& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const AccountTakeoverActionsType& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(AccountTakeoverActionsType&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline AccountTakeoverRiskConfigurationType& WithActions(const AccountTakeoverActionsType& value) { SetActions(value); return *this;}
    inline AccountTakeoverRiskConfigurationType& WithActions(AccountTakeoverActionsType&& value) { SetActions(std::move(value)); return *this;}
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
