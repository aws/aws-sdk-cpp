/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteRentalOverviewSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteRentalOverviewSummary::RouteRentalOverviewSummary(JsonView jsonValue) { *this = jsonValue; }

RouteRentalOverviewSummary& RouteRentalOverviewSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Duration")) {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Distance")) {
    m_distance = jsonValue.GetInt64("Distance");
    m_distanceHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteRentalOverviewSummary::Jsonize() const {
  JsonValue payload;

  if (m_durationHasBeenSet) {
    payload.WithInt64("Duration", m_duration);
  }

  if (m_distanceHasBeenSet) {
    payload.WithInt64("Distance", m_distance);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
