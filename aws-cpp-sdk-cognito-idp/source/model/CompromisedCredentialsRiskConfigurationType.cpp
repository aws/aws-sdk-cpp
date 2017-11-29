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

CompromisedCredentialsRiskConfigurationType::CompromisedCredentialsRiskConfigurationType(const JsonValue& jsonValue) : 
    m_eventFilterHasBeenSet(false),
    m_actionsHasBeenSet(false)
{
  *this = jsonValue;
}

CompromisedCredentialsRiskConfigurationType& CompromisedCredentialsRiskConfigurationType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EventFilter"))
  {
    Array<JsonValue> eventFilterJsonList = jsonValue.GetArray("EventFilter");
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
   Array<JsonValue> eventFilterJsonList(m_eventFilter.size());
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
