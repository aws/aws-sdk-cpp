/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanDynamicSpeedDetails.h>
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

RouteSpanDynamicSpeedDetails::RouteSpanDynamicSpeedDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteSpanDynamicSpeedDetails& RouteSpanDynamicSpeedDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BestCaseSpeed"))
  {
    m_bestCaseSpeed = jsonValue.GetDouble("BestCaseSpeed");
    m_bestCaseSpeedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TurnDuration"))
  {
    m_turnDuration = jsonValue.GetInt64("TurnDuration");
    m_turnDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TypicalSpeed"))
  {
    m_typicalSpeed = jsonValue.GetDouble("TypicalSpeed");
    m_typicalSpeedHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteSpanDynamicSpeedDetails::Jsonize() const
{
  JsonValue payload;

  if(m_bestCaseSpeedHasBeenSet)
  {
   payload.WithDouble("BestCaseSpeed", m_bestCaseSpeed);

  }

  if(m_turnDurationHasBeenSet)
  {
   payload.WithInt64("TurnDuration", m_turnDuration);

  }

  if(m_typicalSpeedHasBeenSet)
  {
   payload.WithDouble("TypicalSpeed", m_typicalSpeed);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
