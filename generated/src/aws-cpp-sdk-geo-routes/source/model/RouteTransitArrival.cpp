/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitArrival.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitArrival::RouteTransitArrival(JsonView jsonValue) { *this = jsonValue; }

RouteTransitArrival& RouteTransitArrival::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Delay")) {
    m_delay = jsonValue.GetInt64("Delay");
    m_delayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Place")) {
    m_place = jsonValue.GetObject("Place");
    m_placeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RouteTransitTripStatusMapper::GetRouteTransitTripStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Time")) {
    m_time = jsonValue.GetString("Time");
    m_timeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitArrival::Jsonize() const {
  JsonValue payload;

  if (m_delayHasBeenSet) {
    payload.WithInt64("Delay", m_delay);
  }

  if (m_placeHasBeenSet) {
    payload.WithObject("Place", m_place.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RouteTransitTripStatusMapper::GetNameForRouteTransitTripStatus(m_status));
  }

  if (m_timeHasBeenSet) {
    payload.WithString("Time", m_time);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
