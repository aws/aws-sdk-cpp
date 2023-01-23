/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AlarmEventActions.h>
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

AlarmEventActions::AlarmEventActions() : 
    m_alarmActionsHasBeenSet(false)
{
}

AlarmEventActions::AlarmEventActions(JsonView jsonValue) : 
    m_alarmActionsHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmEventActions& AlarmEventActions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alarmActions"))
  {
    Aws::Utils::Array<JsonView> alarmActionsJsonList = jsonValue.GetArray("alarmActions");
    for(unsigned alarmActionsIndex = 0; alarmActionsIndex < alarmActionsJsonList.GetLength(); ++alarmActionsIndex)
    {
      m_alarmActions.push_back(alarmActionsJsonList[alarmActionsIndex].AsObject());
    }
    m_alarmActionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmEventActions::Jsonize() const
{
  JsonValue payload;

  if(m_alarmActionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> alarmActionsJsonList(m_alarmActions.size());
   for(unsigned alarmActionsIndex = 0; alarmActionsIndex < alarmActionsJsonList.GetLength(); ++alarmActionsIndex)
   {
     alarmActionsJsonList[alarmActionsIndex].AsObject(m_alarmActions[alarmActionsIndex].Jsonize());
   }
   payload.WithArray("alarmActions", std::move(alarmActionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
