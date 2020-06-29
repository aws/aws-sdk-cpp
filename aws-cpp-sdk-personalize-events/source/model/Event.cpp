/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize-events/model/Event.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PersonalizeEvents
{
namespace Model
{

Event::Event() : 
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_sentAtHasBeenSet(false)
{
}

Event::Event(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_eventTypeHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_sentAtHasBeenSet(false)
{
  *this = jsonValue;
}

Event& Event::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = jsonValue.GetString("eventType");

    m_eventTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetString("properties");

    m_propertiesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sentAt"))
  {
    m_sentAt = jsonValue.GetDouble("sentAt");

    m_sentAtHasBeenSet = true;
  }

  return *this;
}

JsonValue Event::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", m_eventType);

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithString("properties", m_properties);

  }

  if(m_sentAtHasBeenSet)
  {
   payload.WithDouble("sentAt", m_sentAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PersonalizeEvents
} // namespace Aws
