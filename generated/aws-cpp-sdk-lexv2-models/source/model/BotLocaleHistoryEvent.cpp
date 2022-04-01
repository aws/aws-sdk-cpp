/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BotLocaleHistoryEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

BotLocaleHistoryEvent::BotLocaleHistoryEvent() : 
    m_eventHasBeenSet(false),
    m_eventDateHasBeenSet(false)
{
}

BotLocaleHistoryEvent::BotLocaleHistoryEvent(JsonView jsonValue) : 
    m_eventHasBeenSet(false),
    m_eventDateHasBeenSet(false)
{
  *this = jsonValue;
}

BotLocaleHistoryEvent& BotLocaleHistoryEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("event"))
  {
    m_event = jsonValue.GetString("event");

    m_eventHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventDate"))
  {
    m_eventDate = jsonValue.GetDouble("eventDate");

    m_eventDateHasBeenSet = true;
  }

  return *this;
}

JsonValue BotLocaleHistoryEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventHasBeenSet)
  {
   payload.WithString("event", m_event);

  }

  if(m_eventDateHasBeenSet)
  {
   payload.WithDouble("eventDate", m_eventDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
