/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/Subscription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

Subscription::Subscription() : 
    m_resourceArnHasBeenSet(false),
    m_topicArnHasBeenSet(false),
    m_eventSubscriptionsHasBeenSet(false)
{
}

Subscription::Subscription(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_topicArnHasBeenSet(false),
    m_eventSubscriptionsHasBeenSet(false)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topicArn"))
  {
    m_topicArn = jsonValue.GetString("topicArn");

    m_topicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventSubscriptions"))
  {
    Aws::Utils::Array<JsonView> eventSubscriptionsJsonList = jsonValue.GetArray("eventSubscriptions");
    for(unsigned eventSubscriptionsIndex = 0; eventSubscriptionsIndex < eventSubscriptionsJsonList.GetLength(); ++eventSubscriptionsIndex)
    {
      m_eventSubscriptions.push_back(eventSubscriptionsJsonList[eventSubscriptionsIndex].AsObject());
    }
    m_eventSubscriptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Subscription::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("topicArn", m_topicArn);

  }

  if(m_eventSubscriptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventSubscriptionsJsonList(m_eventSubscriptions.size());
   for(unsigned eventSubscriptionsIndex = 0; eventSubscriptionsIndex < eventSubscriptionsJsonList.GetLength(); ++eventSubscriptionsIndex)
   {
     eventSubscriptionsJsonList[eventSubscriptionsIndex].AsObject(m_eventSubscriptions[eventSubscriptionsIndex].Jsonize());
   }
   payload.WithArray("eventSubscriptions", std::move(eventSubscriptionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
