/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

Alarm::Alarm(const JsonValue& jsonValue) : 
    m_alarmNameHasBeenSet(false),
    m_alarmARNHasBeenSet(false)
{
  *this = jsonValue;
}

Alarm& Alarm::operator =(const JsonValue& jsonValue)
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