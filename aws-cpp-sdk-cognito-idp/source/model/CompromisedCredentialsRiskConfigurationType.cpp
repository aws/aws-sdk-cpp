/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/CompromisedCredentialsRiskConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

CompromisedCredentialsRiskConfigurationType::CompromisedCredentialsRiskConfigurationType() : 
    m_eventFilterHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
}

CompromisedCredentialsRiskConfigurationType::CompromisedCredentialsRiskConfigurationType(JsonView jsonValue) : 
    m_eventFilterHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

CompromisedCredentialsRiskConfigurationType& CompromisedCredentialsRiskConfigurationType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EventFilter"))
  {
    Aws::Utils::Array<JsonView> eventFilterJsonList = jsonValue.GetArray("EventFilter");
    for(unsigned eventFilterIndex = 0; eventFilterIndex < eventFilterJsonList.GetLength(); ++eventFilterIndex)
    {
      m_eventFilter.push_back(EventFilterTypeMapper::GetEventFilterTypeForName(eventFilterJsonList[eventFilterIndex].AsString()));
    }
    m_eventFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    m_actions = jsonValue.GetObject("Actions");

    m_actionsHasBeenSet = true;
  }

  return *this;
}

JsonValue CompromisedCredentialsRiskConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_eventFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventFilterJsonList(m_eventFilter.size());
   for(unsigned eventFilterIndex = 0; eventFilterIndex < eventFilterJsonList.GetLength(); ++eventFilterIndex)
   {
     eventFilterJsonList[eventFilterIndex].AsString(EventFilterTypeMapper::GetNameForEventFilterType(m_eventFilter[eventFilterIndex]));
   }
   payload.WithArray("EventFilter", std::move(eventFilterJsonList));

  }

  if(m_actionsHasBeenSet)
  {
   payload.WithObject("Actions", m_actions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
