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

JobEventDetails::JobEventDetails() : 
    m_eventType(JobEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_timeOfEventHasBeenSet(false)
{
}

JobEventDetails::JobEventDetails(JsonView jsonValue) : 
    m_eventType(JobEventType::NOT_SET),
    m_eventTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_timeOfEventHasBeenSet(false)
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

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeOfEvent"))
  {
    m_timeOfEvent = jsonValue.GetString("timeOfEvent");

    m_timeOfEventHasBeenSet = true;
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

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_timeOfEventHasBeenSet)
  {
   payload.WithString("timeOfEvent", m_timeOfEvent.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
