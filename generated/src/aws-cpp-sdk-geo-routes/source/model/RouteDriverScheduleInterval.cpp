/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteDriverScheduleInterval.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteDriverScheduleInterval::RouteDriverScheduleInterval(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteDriverScheduleInterval& RouteDriverScheduleInterval::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DriveDuration"))
  {
    m_driveDuration = jsonValue.GetInt64("DriveDuration");
    m_driveDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RestDuration"))
  {
    m_restDuration = jsonValue.GetInt64("RestDuration");
    m_restDurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteDriverScheduleInterval::Jsonize() const
{
  JsonValue payload;

  if(m_driveDurationHasBeenSet)
  {
   payload.WithInt64("DriveDuration", m_driveDuration);

  }

  if(m_restDurationHasBeenSet)
  {
   payload.WithInt64("RestDuration", m_restDuration);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
