/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteRentalTransportModeDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteRentalTransportModeDetails::RouteRentalTransportModeDetails(JsonView jsonValue) { *this = jsonValue; }

RouteRentalTransportModeDetails& RouteRentalTransportModeDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AvailableSeats")) {
    m_availableSeats = jsonValue.GetInteger("AvailableSeats");
    m_availableSeatsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Category")) {
    m_category = jsonValue.GetString("Category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Color")) {
    m_color = jsonValue.GetString("Color");
    m_colorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Engine")) {
    m_engine = RouteEngineTypeMapper::GetRouteEngineTypeForName(jsonValue.GetString("Engine"));
    m_engineHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LicensePlate")) {
    m_licensePlate = jsonValue.GetString("LicensePlate");
    m_licensePlateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Mode")) {
    m_mode = RouteRentalModeMapper::GetRouteRentalModeForName(jsonValue.GetString("Mode"));
    m_modeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Model")) {
    m_model = jsonValue.GetString("Model");
    m_modelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TextColor")) {
    m_textColor = jsonValue.GetString("TextColor");
    m_textColorHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteRentalTransportModeDetails::Jsonize() const {
  JsonValue payload;

  if (m_availableSeatsHasBeenSet) {
    payload.WithInteger("AvailableSeats", m_availableSeats);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("Category", m_category);
  }

  if (m_colorHasBeenSet) {
    payload.WithString("Color", m_color);
  }

  if (m_engineHasBeenSet) {
    payload.WithString("Engine", RouteEngineTypeMapper::GetNameForRouteEngineType(m_engine));
  }

  if (m_licensePlateHasBeenSet) {
    payload.WithString("LicensePlate", m_licensePlate);
  }

  if (m_modeHasBeenSet) {
    payload.WithString("Mode", RouteRentalModeMapper::GetNameForRouteRentalMode(m_mode));
  }

  if (m_modelHasBeenSet) {
    payload.WithString("Model", m_model);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_textColorHasBeenSet) {
    payload.WithString("TextColor", m_textColor);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
