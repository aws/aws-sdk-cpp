/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/PlaybackCompletionEvent.h>
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

PlaybackCompletionEvent::PlaybackCompletionEvent() : 
    m_eventIdHasBeenSet(false),
    m_clientTimestampMillis(0),
    m_clientTimestampMillisHasBeenSet(false)
{
}

PlaybackCompletionEvent::PlaybackCompletionEvent(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false),
    m_clientTimestampMillis(0),
    m_clientTimestampMillisHasBeenSet(false)
{
  *this = jsonValue;
}

PlaybackCompletionEvent& PlaybackCompletionEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientTimestampMillis"))
  {
    m_clientTimestampMillis = jsonValue.GetInt64("clientTimestampMillis");

    m_clientTimestampMillisHasBeenSet = true;
  }

  return *this;
}

JsonValue PlaybackCompletionEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  if(m_clientTimestampMillisHasBeenSet)
  {
   payload.WithInt64("clientTimestampMillis", m_clientTimestampMillis);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
