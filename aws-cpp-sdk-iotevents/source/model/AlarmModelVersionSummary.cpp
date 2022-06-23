/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/AlarmModelVersionSummary.h>
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

AlarmModelVersionSummary::AlarmModelVersionSummary() : 
    m_alarmModelNameHasBeenSet(false),
    m_alarmModelArnHasBeenSet(false),
    m_alarmModelVersionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_status(AlarmModelVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

AlarmModelVersionSummary::AlarmModelVersionSummary(JsonView jsonValue) : 
    m_alarmModelNameHasBeenSet(false),
    m_alarmModelArnHasBeenSet(false),
    m_alarmModelVersionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_status(AlarmModelVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmModelVersionSummary& AlarmModelVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alarmModelName"))
  {
    m_alarmModelName = jsonValue.GetString("alarmModelName");

    m_alarmModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarmModelArn"))
  {
    m_alarmModelArn = jsonValue.GetString("alarmModelArn");

    m_alarmModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarmModelVersion"))
  {
    m_alarmModelVersion = jsonValue.GetString("alarmModelVersion");

    m_alarmModelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = AlarmModelVersionStatusMapper::GetAlarmModelVersionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmModelVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_alarmModelNameHasBeenSet)
  {
   payload.WithString("alarmModelName", m_alarmModelName);

  }

  if(m_alarmModelArnHasBeenSet)
  {
   payload.WithString("alarmModelArn", m_alarmModelArn);

  }

  if(m_alarmModelVersionHasBeenSet)
  {
   payload.WithString("alarmModelVersion", m_alarmModelVersion);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AlarmModelVersionStatusMapper::GetNameForAlarmModelVersionStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
