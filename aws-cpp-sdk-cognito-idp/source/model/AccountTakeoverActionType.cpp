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

#include <aws/cognito-idp/model/AccountTakeoverActionType.h>
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

AccountTakeoverActionType::AccountTakeoverActionType() : 
    m_notify(false),
    m_notifyHasBeenSet(false),
    m_eventAction(AccountTakeoverEventActionType::NOT_SET),
    m_eventActionHasBeenSet(false)
{
}

AccountTakeoverActionType::AccountTakeoverActionType(const JsonValue& jsonValue) : 
    m_notify(false),
    m_notifyHasBeenSet(false),
    m_eventAction(AccountTakeoverEventActionType::NOT_SET),
    m_eventActionHasBeenSet(false)
{
  *this = jsonValue;
}

AccountTakeoverActionType& AccountTakeoverActionType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Notify"))
  {
    m_notify = jsonValue.GetBool("Notify");

    m_notifyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventAction"))
  {
    m_eventAction = AccountTakeoverEventActionTypeMapper::GetAccountTakeoverEventActionTypeForName(jsonValue.GetString("EventAction"));

    m_eventActionHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountTakeoverActionType::Jsonize() const
{
  JsonValue payload;

  if(m_notifyHasBeenSet)
  {
   payload.WithBool("Notify", m_notify);

  }

  if(m_eventActionHasBeenSet)
  {
   payload.WithString("EventAction", AccountTakeoverEventActionTypeMapper::GetNameForAccountTakeoverEventActionType(m_eventAction));
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
