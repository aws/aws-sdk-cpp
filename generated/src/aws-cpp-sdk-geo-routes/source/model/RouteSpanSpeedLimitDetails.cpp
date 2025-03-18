/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanSpeedLimitDetails.h>
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

RouteSpanSpeedLimitDetails::RouteSpanSpeedLimitDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteSpanSpeedLimitDetails& RouteSpanSpeedLimitDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxSpeed"))
  {
    m_maxSpeed = jsonValue.GetDouble("MaxSpeed");
    m_maxSpeedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Unlimited"))
  {
    m_unlimited = jsonValue.GetBool("Unlimited");
    m_unlimitedHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteSpanSpeedLimitDetails::Jsonize() const
{
  JsonValue payload;

  if(m_maxSpeedHasBeenSet)
  {
   payload.WithDouble("MaxSpeed", m_maxSpeed);

  }

  if(m_unlimitedHasBeenSet)
  {
   payload.WithBool("Unlimited", m_unlimited);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
