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
#include <aws/opsworks/model/TimeBasedAutoScalingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

TimeBasedAutoScalingConfiguration::TimeBasedAutoScalingConfiguration() : 
    m_instanceIdHasBeenSet(false),
    m_autoScalingScheduleHasBeenSet(false)
{
}

TimeBasedAutoScalingConfiguration::TimeBasedAutoScalingConfiguration(const JsonValue& jsonValue) : 
    m_instanceIdHasBeenSet(false),
    m_autoScalingScheduleHasBeenSet(false)
{
  *this = jsonValue;
}

TimeBasedAutoScalingConfiguration& TimeBasedAutoScalingConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InstanceId"))
  {
    m_instanceId = jsonValue.GetString("InstanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoScalingSchedule"))
  {
    m_autoScalingSchedule = jsonValue.GetObject("AutoScalingSchedule");

    m_autoScalingScheduleHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeBasedAutoScalingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("InstanceId", m_instanceId);

  }

  if(m_autoScalingScheduleHasBeenSet)
  {
   payload.WithObject("AutoScalingSchedule", m_autoScalingSchedule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws