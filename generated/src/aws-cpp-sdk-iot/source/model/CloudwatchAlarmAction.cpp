/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

CloudwatchAlarmAction::CloudwatchAlarmAction(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_alarmNameHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_stateValueHasBeenSet(false)
{
  *this = jsonValue;
}

CloudwatchAlarmAction& CloudwatchAlarmAction::operator =(JsonView jsonValue)
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
