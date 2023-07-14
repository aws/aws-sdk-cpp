/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/Monitor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

Monitor::Monitor() : 
    m_alarmArnHasBeenSet(false),
    m_alarmRoleArnHasBeenSet(false)
{
}

Monitor::Monitor(JsonView jsonValue) : 
    m_alarmArnHasBeenSet(false),
    m_alarmRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

Monitor& Monitor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AlarmArn"))
  {
    m_alarmArn = jsonValue.GetString("AlarmArn");

    m_alarmArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlarmRoleArn"))
  {
    m_alarmRoleArn = jsonValue.GetString("AlarmRoleArn");

    m_alarmRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Monitor::Jsonize() const
{
  JsonValue payload;

  if(m_alarmArnHasBeenSet)
  {
   payload.WithString("AlarmArn", m_alarmArn);

  }

  if(m_alarmRoleArnHasBeenSet)
  {
   payload.WithString("AlarmRoleArn", m_alarmRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
