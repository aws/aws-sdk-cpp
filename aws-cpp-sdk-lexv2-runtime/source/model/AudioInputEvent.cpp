/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/AudioInputEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

AudioInputEvent::AudioInputEvent() : 
    m_audioChunkHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_clientTimestampMillis(0),
    m_clientTimestampMillisHasBeenSet(false)
{
}

AudioInputEvent::AudioInputEvent(JsonView jsonValue) : 
    m_audioChunkHasBeenSet(false),
    m_contentTypeHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_clientTimestampMillis(0),
    m_clientTimestampMillisHasBeenSet(false)
{
  *this = jsonValue;
}

AudioInputEvent& AudioInputEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioChunk"))
  {
    m_audioChunk = HashingUtils::Base64Decode(jsonValue.GetString("audioChunk"));
    m_audioChunkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contentType"))
  {
    m_contentType = jsonValue.GetString("contentType");

    m_contentTypeHasBeenSet = true;
  }

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

JsonValue AudioInputEvent::Jsonize() const
{
  JsonValue payload;

  if(m_audioChunkHasBeenSet)
  {
   payload.WithString("audioChunk", HashingUtils::Base64Encode(m_audioChunk));
  }

  if(m_contentTypeHasBeenSet)
  {
   payload.WithString("contentType", m_contentType);

  }

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
