/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SchedulingConfig.h>
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

SchedulingConfig::SchedulingConfig() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_endBehavior(JobEndBehavior::NOT_SET),
    m_endBehaviorHasBeenSet(false)
{
}

SchedulingConfig::SchedulingConfig(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_endBehavior(JobEndBehavior::NOT_SET),
    m_endBehaviorHasBeenSet(false)
{
  *this = jsonValue;
}

SchedulingConfig& SchedulingConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endBehavior"))
  {
    m_endBehavior = JobEndBehaviorMapper::GetJobEndBehaviorForName(jsonValue.GetString("endBehavior"));

    m_endBehaviorHasBeenSet = true;
  }

  return *this;
}

JsonValue SchedulingConfig::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime);

  }

  if(m_endBehaviorHasBeenSet)
  {
   payload.WithString("endBehavior", JobEndBehaviorMapper::GetNameForJobEndBehavior(m_endBehavior));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
