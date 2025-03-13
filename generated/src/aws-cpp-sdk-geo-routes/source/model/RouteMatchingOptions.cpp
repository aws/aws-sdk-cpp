/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatchingOptions.h>
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

RouteMatchingOptions::RouteMatchingOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatchingOptions& RouteMatchingOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NameHint"))
  {
    m_nameHint = jsonValue.GetString("NameHint");
    m_nameHintHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnRoadThreshold"))
  {
    m_onRoadThreshold = jsonValue.GetInt64("OnRoadThreshold");
    m_onRoadThresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Radius"))
  {
    m_radius = jsonValue.GetInt64("Radius");
    m_radiusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Strategy"))
  {
    m_strategy = MatchingStrategyMapper::GetMatchingStrategyForName(jsonValue.GetString("Strategy"));
    m_strategyHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatchingOptions::Jsonize() const
{
  JsonValue payload;

  if(m_nameHintHasBeenSet)
  {
   payload.WithString("NameHint", m_nameHint);

  }

  if(m_onRoadThresholdHasBeenSet)
  {
   payload.WithInt64("OnRoadThreshold", m_onRoadThreshold);

  }

  if(m_radiusHasBeenSet)
  {
   payload.WithInt64("Radius", m_radius);

  }

  if(m_strategyHasBeenSet)
  {
   payload.WithString("Strategy", MatchingStrategyMapper::GetNameForMatchingStrategy(m_strategy));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
