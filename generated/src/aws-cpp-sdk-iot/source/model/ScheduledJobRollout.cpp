/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ScheduledJobRollout.h>
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

ScheduledJobRollout::ScheduledJobRollout() : 
    m_startTimeHasBeenSet(false)
{
}

ScheduledJobRollout::ScheduledJobRollout(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduledJobRollout& ScheduledJobRollout::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduledJobRollout::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
