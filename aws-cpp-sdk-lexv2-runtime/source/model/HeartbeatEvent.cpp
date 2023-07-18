/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/HeartbeatEvent.h>
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

HeartbeatEvent::HeartbeatEvent() : 
    m_eventIdHasBeenSet(false)
{
}

HeartbeatEvent::HeartbeatEvent(JsonView jsonValue) : 
    m_eventIdHasBeenSet(false)
{
  *this = jsonValue;
}

HeartbeatEvent& HeartbeatEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventId"))
  {
    m_eventId = jsonValue.GetString("eventId");

    m_eventIdHasBeenSet = true;
  }

  return *this;
}

JsonValue HeartbeatEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventIdHasBeenSet)
  {
   payload.WithString("eventId", m_eventId);

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
