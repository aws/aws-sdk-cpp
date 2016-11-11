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

NotificationWithSubscribers::NotificationWithSubscribers(const JsonValue& jsonValue) : 
    m_notificationHasBeenSet(false),
    m_subscribersHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationWithSubscribers& NotificationWithSubscribers::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Notification"))
  {
    m_notification = jsonValue.GetObject("Notification");

    m_notificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subscribers"))
  {
    Array<JsonValue> subscribersJsonList = jsonValue.GetArray("Subscribers");
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
   Array<JsonValue> subscribersJsonList(m_subscribers.size());
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