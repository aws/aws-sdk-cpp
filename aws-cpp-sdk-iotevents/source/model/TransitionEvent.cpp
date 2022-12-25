/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/TransitionEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

TransitionEvent::TransitionEvent() : 
    m_eventNameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_nextStateHasBeenSet(false)
{
}

TransitionEvent::TransitionEvent(JsonView jsonValue) : 
    m_eventNameHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_nextStateHasBeenSet(false)
{
  *this = jsonValue;
}

TransitionEvent& TransitionEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eventName"))
  {
    m_eventName = jsonValue.GetString("eventName");

    m_eventNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetString("condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextState"))
  {
    m_nextState = jsonValue.GetString("nextState");

    m_nextStateHasBeenSet = true;
  }

  return *this;
}

JsonValue TransitionEvent::Jsonize() const
{
  JsonValue payload;

  if(m_eventNameHasBeenSet)
  {
   payload.WithString("eventName", m_eventName);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("condition", m_condition);

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("actions", std::move(actionsJsonList));

  }

  if(m_nextStateHasBeenSet)
  {
   payload.WithString("nextState", m_nextState);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
