/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/MaintenanceSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

MaintenanceSchedule::MaintenanceSchedule() : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

MaintenanceSchedule::MaintenanceSchedule(JsonView jsonValue) : 
    m_endTimeHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceSchedule& MaintenanceSchedule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceSchedule::Jsonize() const
{
  JsonValue payload;

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
