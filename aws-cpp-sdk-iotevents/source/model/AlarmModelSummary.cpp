/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AlarmModelSummary.h>
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

AlarmModelSummary::AlarmModelSummary() : 
    m_creationTimeHasBeenSet(false),
    m_alarmModelDescriptionHasBeenSet(false),
    m_alarmModelNameHasBeenSet(false)
{
}

AlarmModelSummary::AlarmModelSummary(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_alarmModelDescriptionHasBeenSet(false),
    m_alarmModelNameHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmModelSummary& AlarmModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarmModelDescription"))
  {
    m_alarmModelDescription = jsonValue.GetString("alarmModelDescription");

    m_alarmModelDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarmModelName"))
  {
    m_alarmModelName = jsonValue.GetString("alarmModelName");

    m_alarmModelNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_alarmModelDescriptionHasBeenSet)
  {
   payload.WithString("alarmModelDescription", m_alarmModelDescription);

  }

  if(m_alarmModelNameHasBeenSet)
  {
   payload.WithString("alarmModelName", m_alarmModelName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
