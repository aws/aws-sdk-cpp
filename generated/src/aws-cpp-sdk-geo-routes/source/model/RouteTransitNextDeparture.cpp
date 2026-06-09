/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitNextDeparture.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitNextDeparture::RouteTransitNextDeparture(JsonView jsonValue) { *this = jsonValue; }

RouteTransitNextDeparture& RouteTransitNextDeparture::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Delay")) {
    m_delay = jsonValue.GetInt64("Delay");
    m_delayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PlatformName")) {
    m_platformName = jsonValue.GetString("PlatformName");
    m_platformNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = RouteTransitTripStatusMapper::GetRouteTransitTripStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Time")) {
    m_time = jsonValue.GetString("Time");
    m_timeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Transport")) {
    m_transport = jsonValue.GetObject("Transport");
    m_transportHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitNextDeparture::Jsonize() const {
  JsonValue payload;

  if (m_delayHasBeenSet) {
    payload.WithInt64("Delay", m_delay);
  }

  if (m_platformNameHasBeenSet) {
    payload.WithString("PlatformName", m_platformName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", RouteTransitTripStatusMapper::GetNameForRouteTransitTripStatus(m_status));
  }

  if (m_timeHasBeenSet) {
    payload.WithString("Time", m_time);
  }

  if (m_transportHasBeenSet) {
    payload.WithObject("Transport", m_transport.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
