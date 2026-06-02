/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitPedestrianOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitPedestrianOptions::RouteTransitPedestrianOptions(JsonView jsonValue) { *this = jsonValue; }

RouteTransitPedestrianOptions& RouteTransitPedestrianOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MaxDistance")) {
    m_maxDistance = jsonValue.GetInt64("MaxDistance");
    m_maxDistanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Speed")) {
    m_speed = jsonValue.GetDouble("Speed");
    m_speedHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitPedestrianOptions::Jsonize() const {
  JsonValue payload;

  if (m_maxDistanceHasBeenSet) {
    payload.WithInt64("MaxDistance", m_maxDistance);
  }

  if (m_speedHasBeenSet) {
    payload.WithDouble("Speed", m_speed);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
