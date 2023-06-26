/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/AcknowledgeAlarmActionRequest.h>
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

AcknowledgeAlarmActionRequest::AcknowledgeAlarmActionRequest() : 
    m_requestIdHasBeenSet(false),
    m_alarmModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_noteHasBeenSet(false)
{
}

AcknowledgeAlarmActionRequest::AcknowledgeAlarmActionRequest(JsonView jsonValue) : 
    m_requestIdHasBeenSet(false),
    m_alarmModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_noteHasBeenSet(false)
{
  *this = jsonValue;
}

AcknowledgeAlarmActionRequest& AcknowledgeAlarmActionRequest::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AcknowledgeAlarmActionRequest::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
