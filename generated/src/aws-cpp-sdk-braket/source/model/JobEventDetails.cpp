/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/JobEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

JobEventDetails::JobEventDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

JobEventDetails& JobEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventType"))
  {
    m_eventType = JobEventTypeMapper::GetJobEventTypeForName(jsonValue.GetString("eventType"));
    m_eventTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timeOfEvent"))
  {
    m_timeOfEvent = jsonValue.GetString("timeOfEvent");
    m_timeOfEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue JobEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_eventTypeHasBeenSet)
  {
   payload.WithString("eventType", JobEventTypeMapper::GetNameForJobEventType(m_eventType));
  }

  if(m_timeOfEventHasBeenSet)
  {
   payload.WithString("timeOfEvent", m_timeOfEvent.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
