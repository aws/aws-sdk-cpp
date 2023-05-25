/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AccountTakeoverActionsType.h>
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

AccountTakeoverActionsType::AccountTakeoverActionsType() : 
    m_lowActionHasBeenSet(false),
    m_mediumActionHasBeenSet(false),
    m_highActionHasBeenSet(false)
{
}

AccountTakeoverActionsType::AccountTakeoverActionsType(JsonView jsonValue) : 
    m_lowActionHasBeenSet(false),
    m_mediumActionHasBeenSet(false),
    m_highActionHasBeenSet(false)
{
  *this = jsonValue;
}

AccountTakeoverActionsType& AccountTakeoverActionsType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LowAction"))
  {
    m_lowAction = jsonValue.GetObject("LowAction");

    m_lowActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediumAction"))
  {
    m_mediumAction = jsonValue.GetObject("MediumAction");

    m_mediumActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HighAction"))
  {
    m_highAction = jsonValue.GetObject("HighAction");

    m_highActionHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountTakeoverActionsType::Jsonize() const
{
  JsonValue payload;

  if(m_lowActionHasBeenSet)
  {
   payload.WithObject("LowAction", m_lowAction.Jsonize());

  }

  if(m_mediumActionHasBeenSet)
  {
   payload.WithObject("MediumAction", m_mediumAction.Jsonize());

  }

  if(m_highActionHasBeenSet)
  {
   payload.WithObject("HighAction", m_highAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
