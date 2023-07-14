/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

AccountTakeoverActionType::AccountTakeoverActionType(JsonView jsonValue) : 
    m_notify(false),
    m_notifyHasBeenSet(false),
    m_eventAction(AccountTakeoverEventActionType::NOT_SET),
    m_eventActionHasBeenSet(false)
{
  *this = jsonValue;
}

AccountTakeoverActionType& AccountTakeoverActionType::operator =(JsonView jsonValue)
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
