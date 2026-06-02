/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitTransportModeDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitTransportModeDetails::RouteTransitTransportModeDetails(JsonView jsonValue) { *this = jsonValue; }

RouteTransitTransportModeDetails& RouteTransitTransportModeDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Accessibility")) {
    m_accessibility = jsonValue.GetObject("Accessibility");
    m_accessibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Color")) {
    m_color = jsonValue.GetString("Color");
    m_colorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Headsign")) {
    m_headsign = jsonValue.GetString("Headsign");
    m_headsignHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LongRouteName")) {
    m_longRouteName = jsonValue.GetString("LongRouteName");
    m_longRouteNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Mode")) {
    m_mode = RouteTransitModeMapper::GetRouteTransitModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RouteName")) {
    m_routeName = jsonValue.GetString("RouteName");
    m_routeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShortRouteName")) {
    m_shortRouteName = jsonValue.GetString("ShortRouteName");
    m_shortRouteNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextColor")) {
    m_textColor = jsonValue.GetString("TextColor");
    m_textColorHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitTransportModeDetails::Jsonize() const {
  JsonValue payload;

  if (m_accessibilityHasBeenSet) {
    payload.WithObject("Accessibility", m_accessibility.Jsonize());
  }

  if (m_colorHasBeenSet) {
    payload.WithString("Color", m_color);
  }

  if (m_headsignHasBeenSet) {
    payload.WithString("Headsign", m_headsign);
  }

  if (m_longRouteNameHasBeenSet) {
    payload.WithString("LongRouteName", m_longRouteName);
  }

  if (m_modeHasBeenSet) {
    payload.WithString("Mode", RouteTransitModeMapper::GetNameForRouteTransitMode(m_mode));
  }

  if (m_routeNameHasBeenSet) {
    payload.WithString("RouteName", m_routeName);
  }

  if (m_shortRouteNameHasBeenSet) {
    payload.WithString("ShortRouteName", m_shortRouteName);
  }

  if (m_textColorHasBeenSet) {
    payload.WithString("TextColor", m_textColor);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
