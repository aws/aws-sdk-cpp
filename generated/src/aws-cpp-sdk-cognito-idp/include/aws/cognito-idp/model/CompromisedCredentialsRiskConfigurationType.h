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
   * with advanced security features in full-function <code>ENFORCED</code> mode.</p>
   * <p>This data type is a request parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_SetRiskConfiguration.html">SetRiskConfiguration</a>
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeRiskConfiguration.html">DescribeRiskConfiguration</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CompromisedCredentialsRiskConfigurationType">AWS
   * API Reference</a></p>
   */
  class CompromisedCredentialsRiskConfigurationType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsRiskConfigurationType();
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsRiskConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsRiskConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings for the sign-in activity where you want to configure
     * compromised-credentials actions. Defaults to all events.</p>
     */
    inline const Aws::Vector<EventFilterType>& GetEventFilter() const{ return m_eventFilter; }
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }
    inline void SetEventFilter(const Aws::Vector<EventFilterType>& value) { m_eventFilterHasBeenSet = true; m_eventFilter = value; }
    inline void SetEventFilter(Aws::Vector<EventFilterType>&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::move(value); }
    inline CompromisedCredentialsRiskConfigurationType& WithEventFilter(const Aws::Vector<EventFilterType>& value) { SetEventFilter(value); return *this;}
    inline CompromisedCredentialsRiskConfigurationType& WithEventFilter(Aws::Vector<EventFilterType>&& value) { SetEventFilter(std::move(value)); return *this;}
    inline CompromisedCredentialsRiskConfigurationType& AddEventFilter(const EventFilterType& value) { m_eventFilterHasBeenSet = true; m_eventFilter.push_back(value); return *this; }
    inline CompromisedCredentialsRiskConfigurationType& AddEventFilter(EventFilterType&& value) { m_eventFilterHasBeenSet = true; m_eventFilter.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Settings for the actions that you want your user pool to take when Amazon
     * Cognito detects compromised credentials.</p>
     */
    inline const CompromisedCredentialsActionsType& GetActions() const{ return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    inline void SetActions(const CompromisedCredentialsActionsType& value) { m_actionsHasBeenSet = true; m_actions = value; }
    inline void SetActions(CompromisedCredentialsActionsType&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }
    inline CompromisedCredentialsRiskConfigurationType& WithActions(const CompromisedCredentialsActionsType& value) { SetActions(value); return *this;}
    inline CompromisedCredentialsRiskConfigurationType& WithActions(CompromisedCredentialsActionsType&& value) { SetActions(std::move(value)); return *this;}
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
