/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/Subscriber.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Budgets
{
namespace Model
{

Subscriber::Subscriber() : 
    m_subscriptionType(SubscriptionType::NOT_SET),
    m_subscriptionTypeHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

Subscriber::Subscriber(JsonView jsonValue) : 
    m_subscriptionType(SubscriptionType::NOT_SET),
    m_subscriptionTypeHasBeenSet(false),
    m_addressHasBeenSet(false)
{
  *this = jsonValue;
}

Subscriber& Subscriber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SubscriptionType"))
  {
    m_subscriptionType = SubscriptionTypeMapper::GetSubscriptionTypeForName(jsonValue.GetString("SubscriptionType"));

    m_subscriptionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address"))
  {
    m_address = jsonValue.GetString("Address");

    m_addressHasBeenSet = true;
  }

  return *this;
}

JsonValue Subscriber::Jsonize() const
{
  JsonValue payload;

  if(m_subscriptionTypeHasBeenSet)
  {
   payload.WithString("SubscriptionType", SubscriptionTypeMapper::GetNameForSubscriptionType(m_subscriptionType));
  }

  if(m_addressHasBeenSet)
  {
   payload.WithString("Address", m_address);

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
