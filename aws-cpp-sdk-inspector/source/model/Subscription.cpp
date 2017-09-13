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

Subscription::Subscription(const JsonValue& jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_topicArnHasBeenSet(false),
    m_eventSubscriptionsHasBeenSet(false)
{
  *this = jsonValue;
}

Subscription& Subscription::operator =(const JsonValue& jsonValue)
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
    Array<JsonValue> eventSubscriptionsJsonList = jsonValue.GetArray("eventSubscriptions");
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
   Array<JsonValue> eventSubscriptionsJsonList(m_eventSubscriptions.size());
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
