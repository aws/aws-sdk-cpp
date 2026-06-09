/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteAccessibilityAvailabilityDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteAccessibilityAvailabilityDetails::RouteAccessibilityAvailabilityDetails(JsonView jsonValue) { *this = jsonValue; }

RouteAccessibilityAvailabilityDetails& RouteAccessibilityAvailabilityDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Wheelchair")) {
    m_wheelchair = RouteAccessibilityAvailabilityMapper::GetRouteAccessibilityAvailabilityForName(jsonValue.GetString("Wheelchair"));
    m_wheelchairHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteAccessibilityAvailabilityDetails::Jsonize() const {
  JsonValue payload;

  if (m_wheelchairHasBeenSet) {
    payload.WithString("Wheelchair", RouteAccessibilityAvailabilityMapper::GetNameForRouteAccessibilityAvailability(m_wheelchair));
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
