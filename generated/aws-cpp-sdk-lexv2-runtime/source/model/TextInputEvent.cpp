/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/TextInputEvent.h>
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

TextInputEvent::TextInputEvent() : 
    m_textHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_clientTimestampMillis(0),
    m_clientTimestampMillisHasBeenSet(false)
{
}

TextInputEvent::TextInputEvent(JsonView jsonValue) : 
    m_textHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_clientTimestampMillis(0),
    m_clientTimestampMillisHasBeenSet(false)
{
  *this = jsonValue;
}

TextInputEvent& TextInputEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");

    m_textHasBeenSet = true;
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

JsonValue TextInputEvent::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

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
