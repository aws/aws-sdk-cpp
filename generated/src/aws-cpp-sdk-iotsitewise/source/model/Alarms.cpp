/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Alarms.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Alarms::Alarms() : 
    m_alarmRoleArnHasBeenSet(false),
    m_notificationLambdaArnHasBeenSet(false)
{
}

Alarms::Alarms(JsonView jsonValue) : 
    m_alarmRoleArnHasBeenSet(false),
    m_notificationLambdaArnHasBeenSet(false)
{
  *this = jsonValue;
}

Alarms& Alarms::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alarmRoleArn"))
  {
    m_alarmRoleArn = jsonValue.GetString("alarmRoleArn");

    m_alarmRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("notificationLambdaArn"))
  {
    m_notificationLambdaArn = jsonValue.GetString("notificationLambdaArn");

    m_notificationLambdaArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Alarms::Jsonize() const
{
  JsonValue payload;

  if(m_alarmRoleArnHasBeenSet)
  {
   payload.WithString("alarmRoleArn", m_alarmRoleArn);

  }

  if(m_notificationLambdaArnHasBeenSet)
  {
   payload.WithString("notificationLambdaArn", m_notificationLambdaArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
