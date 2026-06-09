/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteLeg.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteLeg::RouteLeg(JsonView jsonValue) { *this = jsonValue; }

RouteLeg& RouteLeg::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("FerryLegDetails")) {
    m_ferryLegDetails = jsonValue.GetObject("FerryLegDetails");
    m_ferryLegDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Geometry")) {
    m_geometry = jsonValue.GetObject("Geometry");
    m_geometryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Language")) {
    m_language = jsonValue.GetString("Language");
    m_languageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PedestrianLegDetails")) {
    m_pedestrianLegDetails = jsonValue.GetObject("PedestrianLegDetails");
    m_pedestrianLegDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TravelMode")) {
    m_travelMode = RouteLegTravelModeMapper::GetRouteLegTravelModeForName(jsonValue.GetString("TravelMode"));
    m_travelModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = RouteLegTypeMapper::GetRouteLegTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VehicleLegDetails")) {
    m_vehicleLegDetails = jsonValue.GetObject("VehicleLegDetails");
    m_vehicleLegDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RentalLegDetails")) {
    m_rentalLegDetails = jsonValue.GetObject("RentalLegDetails");
    m_rentalLegDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TaxiLegDetails")) {
    m_taxiLegDetails = jsonValue.GetObject("TaxiLegDetails");
    m_taxiLegDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TransitLegDetails")) {
    m_transitLegDetails = jsonValue.GetObject("TransitLegDetails");
    m_transitLegDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteLeg::Jsonize() const {
  JsonValue payload;

  if (m_ferryLegDetailsHasBeenSet) {
    payload.WithObject("FerryLegDetails", m_ferryLegDetails.Jsonize());
  }

  if (m_geometryHasBeenSet) {
    payload.WithObject("Geometry", m_geometry.Jsonize());
  }

  if (m_languageHasBeenSet) {
    payload.WithString("Language", m_language);
  }

  if (m_pedestrianLegDetailsHasBeenSet) {
    payload.WithObject("PedestrianLegDetails", m_pedestrianLegDetails.Jsonize());
  }

  if (m_travelModeHasBeenSet) {
    payload.WithString("TravelMode", RouteLegTravelModeMapper::GetNameForRouteLegTravelMode(m_travelMode));
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", RouteLegTypeMapper::GetNameForRouteLegType(m_type));
  }

  if (m_vehicleLegDetailsHasBeenSet) {
    payload.WithObject("VehicleLegDetails", m_vehicleLegDetails.Jsonize());
  }

  if (m_rentalLegDetailsHasBeenSet) {
    payload.WithObject("RentalLegDetails", m_rentalLegDetails.Jsonize());
  }

  if (m_taxiLegDetailsHasBeenSet) {
    payload.WithObject("TaxiLegDetails", m_taxiLegDetails.Jsonize());
  }

  if (m_transitLegDetailsHasBeenSet) {
    payload.WithObject("TransitLegDetails", m_transitLegDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
