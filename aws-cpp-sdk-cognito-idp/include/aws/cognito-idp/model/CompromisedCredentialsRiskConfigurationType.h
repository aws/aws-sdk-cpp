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
  class AWS_COGNITOIDENTITYPROVIDER_API CompromisedCredentialsRiskConfigurationType
  {
  public:
    CompromisedCredentialsRiskConfigurationType();
    CompromisedCredentialsRiskConfigurationType(Aws::Utils::Json::JsonView jsonValue);
    CompromisedCredentialsRiskConfigurationType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_eventFilterHasBeenSet;

    CompromisedCredentialsActionsType m_actions;
    bool m_actionsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
