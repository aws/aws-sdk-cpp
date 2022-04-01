/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/OpenHoursRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

OpenHoursRule::OpenHoursRule() : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

OpenHoursRule::OpenHoursRule(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
  *this = jsonValue;
}

OpenHoursRule& OpenHoursRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");

    m_endTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenHoursRule::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
