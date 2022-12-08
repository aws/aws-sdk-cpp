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
   * <p>The compromised credentials risk configuration type.</p><p><h3>See Also:</h3>
   * <a
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


    /**
     * <p>Perform the action for these events. The default is to perform all events if
     * no event filter is specified.</p>
     */
    inline const Aws::Vector<EventFilterType>& GetEventFilter() const{ return m_eventFilter; }

    /**
     * <p>Perform the action for these events. The default is to perform all events if
     * no event filter is specified.</p>
     */
    inline bool EventFilterHasBeenSet() const { return m_eventFilterHasBeenSet; }

    /**
     * <p>Perform the action for these events. The default is to perform all events if
     * no event filter is specified.</p>
     */
    inline void SetEventFilter(const Aws::Vector<EventFilterType>& value) { m_eventFilterHasBeenSet = true; m_eventFilter = value; }

    /**
     * <p>Perform the action for these events. The default is to perform all events if
     * no event filter is specified.</p>
     */
    inline void SetEventFilter(Aws::Vector<EventFilterType>&& value) { m_eventFilterHasBeenSet = true; m_eventFilter = std::move(value); }

    /**
     * <p>Perform the action for these events. The default is to perform all events if
     * no event filter is specified.</p>
     */
    inline CompromisedCredentialsRiskConfigurationType& WithEventFilter(const Aws::Vector<EventFilterType>& value) { SetEventFilter(value); return *this;}

    /**
     * <p>Perform the action for these events. The default is to perform all events if
     * no event filter is specified.</p>
     */
    inline CompromisedCredentialsRiskConfigurationType& WithEventFilter(Aws::Vector<EventFilterType>&& value) { SetEventFilter(std::move(value)); return *this;}

    /**
     * <p>Perform the action for these events. The default is to perform all events if
     * no event filter is specified.</p>
     */
    inline CompromisedCredentialsRiskConfigurationType& AddEventFilter(const EventFilterType& value) { m_eventFilterHasBeenSet = true; m_eventFilter.push_back(value); return *this; }

    /**
     * <p>Perform the action for these events. The default is to perform all events if
     * no event filter is specified.</p>
     */
    inline CompromisedCredentialsRiskConfigurationType& AddEventFilter(EventFilterType&& value) { m_eventFilterHasBeenSet = true; m_eventFilter.push_back(std::move(value)); return *this; }


    /**
     * <p>The compromised credentials risk configuration actions.</p>
     */
    inline const CompromisedCredentialsActionsType& GetActions() const{ return m_actions; }

    /**
     * <p>The compromised credentials risk configuration actions.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The compromised credentials risk configuration actions.</p>
     */
    inline void SetActions(const CompromisedCredentialsActionsType& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The compromised credentials risk configuration actions.</p>
     */
    inline void SetActions(CompromisedCredentialsActionsType&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The compromised credentials risk configuration actions.</p>
     */
    inline CompromisedCredentialsRiskConfigurationType& WithActions(const CompromisedCredentialsActionsType& value) { SetActions(value); return *this;}

    /**
     * <p>The compromised credentials risk configuration actions.</p>
     */
    inline CompromisedCredentialsRiskConfigurationType& WithActions(CompromisedCredentialsActionsType&& value) { SetActions(std::move(value)); return *this;}

  private:

    Aws::Vector<EventFilterType> m_eventFilter;
    bool m_eventFilterHasBeenSet = false;

    CompromisedCredentialsActionsType m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
