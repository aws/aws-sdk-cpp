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
#include <aws/iot/model/CloudwatchAlarmAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CloudwatchAlarmAction::CloudwatchAlarmAction() : 
    m_roleArnHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateValueHasBeenSet(false)
{
}

CloudwatchAlarmAction::CloudwatchAlarmAction(const JsonValue& jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateValueHasBeenSet(false)
{
  *this = jsonValue;
}

CloudwatchAlarmAction& CloudwatchAlarmAction::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alarmName"))
  {
    m_alarmName = jsonValue.GetString("alarmName");

    m_alarmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateReason"))
  {
    m_stateReason = jsonValue.GetString("stateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateValue"))
  {
    m_stateValue = jsonValue.GetString("stateValue");

    m_stateValueHasBeenSet = true;
  }

  return *this;
}

JsonValue CloudwatchAlarmAction::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_alarmNameHasBeenSet)
  {
   payload.WithString("alarmName", m_alarmName);

  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("stateReason", m_stateReason);

  }

  if(m_stateValueHasBeenSet)
  {
   payload.WithString("stateValue", m_stateValue);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws