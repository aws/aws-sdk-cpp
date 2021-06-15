/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/SnoozeAlarmActionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

SnoozeAlarmActionRequest::SnoozeAlarmActionRequest() : 
    m_requestIdHasBeenSet(false),
    m_alarmModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_snoozeDuration(0),
    m_snoozeDurationHasBeenSet(false)
{
}

SnoozeAlarmActionRequest::SnoozeAlarmActionRequest(JsonView jsonValue) : 
    m_requestIdHasBeenSet(false),
    m_alarmModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_noteHasBeenSet(false),
    m_snoozeDuration(0),
    m_snoozeDurationHasBeenSet(false)
{
  *this = jsonValue;
}

SnoozeAlarmActionRequest& SnoozeAlarmActionRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");

    m_requestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarmModelName"))
  {
    m_alarmModelName = jsonValue.GetString("alarmModelName");

    m_alarmModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyValue"))
  {
    m_keyValue = jsonValue.GetString("keyValue");

    m_keyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("note"))
  {
    m_note = jsonValue.GetString("note");

    m_noteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snoozeDuration"))
  {
    m_snoozeDuration = jsonValue.GetInteger("snoozeDuration");

    m_snoozeDurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SnoozeAlarmActionRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_alarmModelNameHasBeenSet)
  {
   payload.WithString("alarmModelName", m_alarmModelName);

  }

  if(m_keyValueHasBeenSet)
  {
   payload.WithString("keyValue", m_keyValue);

  }

  if(m_noteHasBeenSet)
  {
   payload.WithString("note", m_note);

  }

  if(m_snoozeDurationHasBeenSet)
  {
   payload.WithInteger("snoozeDuration", m_snoozeDuration);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
