/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/PlaybackInterruptionEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

PlaybackInterruptionEvent::PlaybackInterruptionEvent() : 
    m_eventReason(PlaybackInterruptionReason::NOT_SET),
    m_eventReasonHasBeenSet(false),
    m_causedByEventIdHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

PlaybackInterruptionEvent::PlaybackInterruptionEvent(JsonView jsonValue) : 
    m_eventReason(PlaybackInterruptionReason::NOT_SET),
    m_eventReasonHasBeenSet(false),
    m_causedByEventIdHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
  *this = jsonValue;
}

PlaybackInterruptionEvent& PlaybackInterruptionEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventReason"))
  {
    m_eventReason = PlaybackInterruptionReasonMapper::GetPlaybackInterruptionReasonForName(jsonValue.GetString("eventReason"));

    m_eventReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("causedByEventId"))
  {
    m_causedByEventId = jsonValue.GetString("causedByEventId");

    m_causedByEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PlaybackInterruptionEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventReasonHasBeenSet)
  {
   payload.WithString("eventReason", PlaybackInterruptionReasonMapper::GetNameForPlaybackInterruptionReason(m_eventReason));
  }

  if(m_causedByEventIdHasBeenSet)
  {
   payload.WithString("causedByEventId", m_causedByEventId);

  }

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
