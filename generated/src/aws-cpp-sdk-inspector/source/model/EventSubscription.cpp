/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

EventSubscription::EventSubscription(JsonView jsonValue) : 
    m_event(InspectorEvent::NOT_SET),
    m_eventHasBeenSet(false),
    m_subscribedAtHasBeenSet(false)
{
  *this = jsonValue;
}

EventSubscription& EventSubscription::operator =(JsonView jsonValue)
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
