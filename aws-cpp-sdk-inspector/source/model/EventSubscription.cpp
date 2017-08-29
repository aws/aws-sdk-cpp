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

#include <aws/inspector/model/EventSubscription.h>
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

EventSubscription::EventSubscription() : 
    m_event(InspectorEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_subscribedAtHasBeenSet(false)
{
}

EventSubscription::EventSubscription(const JsonValue& jsonValue) : 
    m_event(InspectorEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_subscribedAtHasBeenSet(false)
{
  *this = jsonValue;
}

EventSubscription& EventSubscription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("event"))
  {
    m_event = InspectorEventMapper::GetInspectorEventForName(jsonValue.GetString("event"));

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subscribedAt"))
  {
    m_subscribedAt = jsonValue.GetDouble("subscribedAt");

    m_subscribedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue EventSubscription::Jsonize() const
{
  JsonValue payload;

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", InspectorEventMapper::GetNameForInspectorEvent(m_event));
  }

  if(m_subscribedAtHasBeenSet)
  {
   payload.WithDouble("subscribedAt", m_subscribedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
