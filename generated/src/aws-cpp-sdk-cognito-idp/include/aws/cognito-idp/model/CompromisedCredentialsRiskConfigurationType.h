/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/CompromisedCredentialsActionsType.h>
#include <aws/cognito-idp/model/EventFilterType.h>
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
   * <p>Settings for compromised-credentials actions and authentication-event sources
   * with threat protection in full-function <code>ENFORCED</code>
   * mode.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CompromisedCredentialsRiskConfigurationType">AWS
   * API Reference</a></p>
   */
  class CompromisedCredentialsRiskConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsRiskConfigurationType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsRiskConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsRiskConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings for the sign-in activity where you want to configure
     * compromised-credentials actions. Defaults to all events.</p>
     */
    inline const Aws::Vector<EventFilterType>& GetEventFilter() const { return m_eventFilter; }
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }
    template<typename EventFilterT = Aws::Vector<EventFilterType>>
    void SetEventFilter(EventFilterT&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::forward<EventFilterT>(value); }
    template<typename EventFilterT = Aws::Vector<EventFilterType>>
    CompromisedCredentialsRiskConfigurationType& WithEventFilter(EventFilterT&& value) { SetEventFilter(std::forward<EventFilterT>(value)); return *this;}
    inline CompromisedCredentialsRiskConfigurationType& AddEventFilter(EventFilterType value) { m_eventFilterHasBeenSet = true; m_eventFilter.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Settings for the actions that you want your user pool to take when Amazon
     * Cognito detects compromised credentials.</p>
     */
    inline const CompromisedCredentialsActionsType& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = CompromisedCredentialsActionsType>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = CompromisedCredentialsActionsType>
    CompromisedCredentialsRiskConfigurationType& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EventFilterType> m_eventFilter;
    bool m_eventFilterHasBeenSet = false;

    CompromisedCredentialsActionsType m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
