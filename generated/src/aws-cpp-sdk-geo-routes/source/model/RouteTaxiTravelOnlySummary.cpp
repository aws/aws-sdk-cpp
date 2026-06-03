/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTaxiTravelOnlySummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTaxiTravelOnlySummary::RouteTaxiTravelOnlySummary(JsonView jsonValue) { *this = jsonValue; }

RouteTaxiTravelOnlySummary& RouteTaxiTravelOnlySummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Duration")) {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTaxiTravelOnlySummary::Jsonize() const {
  JsonValue payload;

  if (m_durationHasBeenSet) {
    payload.WithInt64("Duration", m_duration);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
