/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/DTMFInputEvent.h>
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

DTMFInputEvent::DTMFInputEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

DTMFInputEvent& DTMFInputEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputCharacter"))
  {
    m_inputCharacter = jsonValue.GetString("inputCharacter");
    m_inputCharacterHasBeenSet = true;
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

JsonValue DTMFInputEvent::Jsonize() const
{
  JsonValue payload;

  if(m_inputCharacterHasBeenSet)
  {
   payload.WithString("inputCharacter", m_inputCharacter);

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
