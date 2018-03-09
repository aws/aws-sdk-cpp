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

#include <aws/cognito-idp/model/CompromisedCredentialsActionsType.h>
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

CompromisedCredentialsActionsType::CompromisedCredentialsActionsType() : 
    m_eventAction(CompromisedCredentialsEventActionType::NOT_SET),
    m_eventActionHasBeenSet(false)
{
}

CompromisedCredentialsActionsType::CompromisedCredentialsActionsType(const JsonValue& jsonValue) : 
    m_eventAction(CompromisedCredentialsEventActionType::NOT_SET),
    m_eventActionHasBeenSet(false)
{
  *this = jsonValue;
}

CompromisedCredentialsActionsType& CompromisedCredentialsActionsType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("EventAction"))
  {
    m_eventAction = CompromisedCredentialsEventActionTypeMapper::GetCompromisedCredentialsEventActionTypeForName(jsonValue.GetString("EventAction"));

    m_eventActionHasBeenSet = true;
  }

  return *this;
}

JsonValue CompromisedCredentialsActionsType::Jsonize() const
{
  JsonValue payload;

  if(m_eventActionHasBeenSet)
  {
   payload.WithString("EventAction", CompromisedCredentialsEventActionTypeMapper::GetNameForCompromisedCredentialsEventActionType(m_eventAction));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
