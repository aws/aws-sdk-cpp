/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/TranscriptEvent.h>
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

TranscriptEvent::TranscriptEvent() : 
    m_transcriptHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

TranscriptEvent::TranscriptEvent(JsonView jsonValue) : 
    m_transcriptHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
  *this = jsonValue;
}

TranscriptEvent& TranscriptEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("transcript"))
  {
    m_transcript = jsonValue.GetString("transcript");

    m_transcriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TranscriptEvent::Jsonize() const
{
  JsonValue payload;

  if(m_transcriptHasBeenSet)
  {
   payload.WithString("transcript", m_transcript);

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
