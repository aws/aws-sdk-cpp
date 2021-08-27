/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

CompromisedCredentialsActionsType::CompromisedCredentialsActionsType(JsonView jsonValue) : 
    m_eventAction(CompromisedCredentialsEventActionType::NOT_SET),
    m_eventActionHasBeenSet(false)
{
  *this = jsonValue;
}

CompromisedCredentialsActionsType& CompromisedCredentialsActionsType::operator =(JsonView jsonValue)
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
