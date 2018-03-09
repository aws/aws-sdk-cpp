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

AccountTakeoverActionsType::AccountTakeoverActionsType(const JsonValue& jsonValue) : 
    m_lowActionHasBeenSet(false),
    m_mediumActionHasBeenSet(false),
    m_highActionHasBeenSet(false)
{
  *this = jsonValue;
}

AccountTakeoverActionsType& AccountTakeoverActionsType::operator =(const JsonValue& jsonValue)
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
