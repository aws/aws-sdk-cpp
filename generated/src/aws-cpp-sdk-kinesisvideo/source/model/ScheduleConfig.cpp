/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/ScheduleConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

ScheduleConfig::ScheduleConfig() : 
    m_scheduleExpressionHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false)
{
}

ScheduleConfig::ScheduleConfig(JsonView jsonValue) : 
    m_scheduleExpressionHasBeenSet(false),
    m_durationInSeconds(0),
    m_durationInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleConfig& ScheduleConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScheduleExpression"))
  {
    m_scheduleExpression = jsonValue.GetString("ScheduleExpression");

    m_scheduleExpressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DurationInSeconds"))
  {
    m_durationInSeconds = jsonValue.GetInteger("DurationInSeconds");

    m_durationInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleConfig::Jsonize() const
{
  JsonValue payload;

  if(m_scheduleExpressionHasBeenSet)
  {
   payload.WithString("ScheduleExpression", m_scheduleExpression);

  }

  if(m_durationInSecondsHasBeenSet)
  {
   payload.WithInteger("DurationInSeconds", m_durationInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
