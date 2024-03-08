/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/DailySchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

DailySchedule::DailySchedule() : 
    m_startTimeHasBeenSet(false)
{
}

DailySchedule::DailySchedule(JsonView jsonValue) : 
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DailySchedule& DailySchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetObject("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DailySchedule::Jsonize() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithObject("startTime", m_startTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
