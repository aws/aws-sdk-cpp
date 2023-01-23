/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/NotificationWithSubscribers.h>
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

NotificationWithSubscribers::NotificationWithSubscribers() : 
    m_notificationHasBeenSet(false),
    m_subscribersHasBeenSet(false)
{
}

NotificationWithSubscribers::NotificationWithSubscribers(JsonView jsonValue) : 
    m_notificationHasBeenSet(false),
    m_subscribersHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationWithSubscribers& NotificationWithSubscribers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Notification"))
  {
    m_notification = jsonValue.GetObject("Notification");

    m_notificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subscribers"))
  {
    Aws::Utils::Array<JsonView> subscribersJsonList = jsonValue.GetArray("Subscribers");
    for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
    {
      m_subscribers.push_back(subscribersJsonList[subscribersIndex].AsObject());
    }
    m_subscribersHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationWithSubscribers::Jsonize() const
{
  JsonValue payload;

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

  }

  if(m_subscribersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subscribersJsonList(m_subscribers.size());
   for(unsigned subscribersIndex = 0; subscribersIndex < subscribersJsonList.GetLength(); ++subscribersIndex)
   {
     subscribersJsonList[subscribersIndex].AsObject(m_subscribers[subscribersIndex].Jsonize());
   }
   payload.WithArray("Subscribers", std::move(subscribersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Budgets
} // namespace Aws
