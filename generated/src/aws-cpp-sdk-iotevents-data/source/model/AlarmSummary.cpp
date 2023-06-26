/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/AlarmSummary.h>
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

AlarmSummary::AlarmSummary() : 
    m_alarmModelNameHasBeenSet(false),
    m_alarmModelVersionHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_stateName(AlarmStateName::NOT_SET),
    m_stateNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

AlarmSummary::AlarmSummary(JsonView jsonValue) : 
    m_alarmModelNameHasBeenSet(false),
    m_alarmModelVersionHasBeenSet(false),
    m_keyValueHasBeenSet(false),
    m_stateName(AlarmStateName::NOT_SET),
    m_stateNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmSummary& AlarmSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alarmModelName"))
  {
    m_alarmModelName = jsonValue.GetString("alarmModelName");

    m_alarmModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarmModelVersion"))
  {
    m_alarmModelVersion = jsonValue.GetString("alarmModelVersion");

    m_alarmModelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("keyValue"))
  {
    m_keyValue = jsonValue.GetString("keyValue");

    m_keyValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateName"))
  {
    m_stateName = AlarmStateNameMapper::GetAlarmStateNameForName(jsonValue.GetString("stateName"));

    m_stateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmSummary::Jsonize() const
{
  JsonValue payload;

  if(m_alarmModelNameHasBeenSet)
  {
   payload.WithString("alarmModelName", m_alarmModelName);

  }

  if(m_alarmModelVersionHasBeenSet)
  {
   payload.WithString("alarmModelVersion", m_alarmModelVersion);

  }

  if(m_keyValueHasBeenSet)
  {
   payload.WithString("keyValue", m_keyValue);

  }

  if(m_stateNameHasBeenSet)
  {
   payload.WithString("stateName", AlarmStateNameMapper::GetNameForAlarmStateName(m_stateName));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
