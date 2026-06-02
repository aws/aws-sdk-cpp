/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteStationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteStationDetails::RouteStationDetails(JsonView jsonValue) { *this = jsonValue; }

RouteStationDetails& RouteStationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Accessibility")) {
    m_accessibility = jsonValue.GetObject("Accessibility");
    m_accessibilityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PlatformName")) {
    m_platformName = jsonValue.GetString("PlatformName");
    m_platformNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ShortName")) {
    m_shortName = jsonValue.GetString("ShortName");
    m_shortNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteStationDetails::Jsonize() const {
  JsonValue payload;

  if (m_accessibilityHasBeenSet) {
    payload.WithObject("Accessibility", m_accessibility.Jsonize());
  }

  if (m_platformNameHasBeenSet) {
    payload.WithString("PlatformName", m_platformName);
  }

  if (m_shortNameHasBeenSet) {
    payload.WithString("ShortName", m_shortName);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
