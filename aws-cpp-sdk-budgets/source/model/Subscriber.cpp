/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

Subscriber::Subscriber(const JsonValue& jsonValue) : 
    m_subscriptionType(SubscriptionType::NOT_SET),
    m_subscriptionTypeHasBeenSet(false),
    m_addressHasBeenSet(false)
{
  *this = jsonValue;
}

Subscriber& Subscriber::operator =(const JsonValue& jsonValue)
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