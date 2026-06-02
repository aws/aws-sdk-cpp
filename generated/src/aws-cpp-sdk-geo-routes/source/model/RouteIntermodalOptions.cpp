/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteIntermodalOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteIntermodalOptions::RouteIntermodalOptions(JsonView jsonValue) { *this = jsonValue; }

RouteIntermodalOptions& RouteIntermodalOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccessibilityAttributes")) {
    Aws::Utils::Array<JsonView> accessibilityAttributesJsonList = jsonValue.GetArray("AccessibilityAttributes");
    for (unsigned accessibilityAttributesIndex = 0; accessibilityAttributesIndex < accessibilityAttributesJsonList.GetLength();
         ++accessibilityAttributesIndex) {
      m_accessibilityAttributes.push_back(RouteAccessibilityAttributeMapper::GetRouteAccessibilityAttributeForName(
          accessibilityAttributesJsonList[accessibilityAttributesIndex].AsString()));
    }
    m_accessibilityAttributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxTransfers")) {
    m_maxTransfers = jsonValue.GetInteger("MaxTransfers");
    m_maxTransfersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Pedestrian")) {
    m_pedestrian = jsonValue.GetObject("Pedestrian");
    m_pedestrianHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Rental")) {
    m_rental = jsonValue.GetObject("Rental");
    m_rentalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Taxi")) {
    m_taxi = jsonValue.GetObject("Taxi");
    m_taxiHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Transit")) {
    m_transit = jsonValue.GetObject("Transit");
    m_transitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Vehicle")) {
    m_vehicle = jsonValue.GetObject("Vehicle");
    m_vehicleHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteIntermodalOptions::Jsonize() const {
  JsonValue payload;

  if (m_accessibilityAttributesHasBeenSet) {
    Aws::Utils::Array<JsonValue> accessibilityAttributesJsonList(m_accessibilityAttributes.size());
    for (unsigned accessibilityAttributesIndex = 0; accessibilityAttributesIndex < accessibilityAttributesJsonList.GetLength();
         ++accessibilityAttributesIndex) {
      accessibilityAttributesJsonList[accessibilityAttributesIndex].AsString(
          RouteAccessibilityAttributeMapper::GetNameForRouteAccessibilityAttribute(
              m_accessibilityAttributes[accessibilityAttributesIndex]));
    }
    payload.WithArray("AccessibilityAttributes", std::move(accessibilityAttributesJsonList));
  }

  if (m_maxTransfersHasBeenSet) {
    payload.WithInteger("MaxTransfers", m_maxTransfers);
  }

  if (m_pedestrianHasBeenSet) {
    payload.WithObject("Pedestrian", m_pedestrian.Jsonize());
  }

  if (m_rentalHasBeenSet) {
    payload.WithObject("Rental", m_rental.Jsonize());
  }

  if (m_taxiHasBeenSet) {
    payload.WithObject("Taxi", m_taxi.Jsonize());
  }

  if (m_transitHasBeenSet) {
    payload.WithObject("Transit", m_transit.Jsonize());
  }

  if (m_vehicleHasBeenSet) {
    payload.WithObject("Vehicle", m_vehicle.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
