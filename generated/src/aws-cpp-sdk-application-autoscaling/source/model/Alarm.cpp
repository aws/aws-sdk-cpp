/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/Alarm.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

Alarm::Alarm() : 
    m_alarmNameHasBeenSet(false),
    m_alarmARNHasBeenSet(false)
{
}

Alarm::Alarm(JsonView jsonValue) : 
    m_alarmNameHasBeenSet(false),
    m_alarmARNHasBeenSet(false)
{
  *this = jsonValue;
}

Alarm& Alarm::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlarmName"))
  {
    m_alarmName = jsonValue.GetString("AlarmName");

    m_alarmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmARN"))
  {
    m_alarmARN = jsonValue.GetString("AlarmARN");

    m_alarmARNHasBeenSet = true;
  }

  return *this;
}

JsonValue Alarm::Jsonize() const
{
  JsonValue payload;

  if(m_alarmNameHasBeenSet)
  {
   payload.WithString("AlarmName", m_alarmName);

  }

  if(m_alarmARNHasBeenSet)
  {
   payload.WithString("AlarmARN", m_alarmARN);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
