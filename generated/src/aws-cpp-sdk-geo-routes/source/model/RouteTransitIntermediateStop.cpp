/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitIntermediateStop.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitIntermediateStop::RouteTransitIntermediateStop(JsonView jsonValue) { *this = jsonValue; }

RouteTransitIntermediateStop& RouteTransitIntermediateStop::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Attributes")) {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("Attributes");
    for (unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex) {
      m_attributes.push_back(RouteTransitIntermediateStopAttributeMapper::GetRouteTransitIntermediateStopAttributeForName(
          attributesJsonList[attributesIndex].AsString()));
    }
    m_attributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Departure")) {
    m_departure = jsonValue.GetObject("Departure");
    m_departureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Duration")) {
    m_duration = jsonValue.GetInt64("Duration");
    m_durationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GeometryOffset")) {
    m_geometryOffset = jsonValue.GetInteger("GeometryOffset");
    m_geometryOffsetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Transport")) {
    m_transport = jsonValue.GetObject("Transport");
    m_transportHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitIntermediateStop::Jsonize() const {
  JsonValue payload;

  if (m_attributesHasBeenSet) {
    Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
    for (unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex) {
      attributesJsonList[attributesIndex].AsString(
          RouteTransitIntermediateStopAttributeMapper::GetNameForRouteTransitIntermediateStopAttribute(m_attributes[attributesIndex]));
    }
    payload.WithArray("Attributes", std::move(attributesJsonList));
  }

  if (m_departureHasBeenSet) {
    payload.WithObject("Departure", m_departure.Jsonize());
  }

  if (m_durationHasBeenSet) {
    payload.WithInt64("Duration", m_duration);
  }

  if (m_geometryOffsetHasBeenSet) {
    payload.WithInteger("GeometryOffset", m_geometryOffset);
  }

  if (m_transportHasBeenSet) {
    payload.WithObject("Transport", m_transport.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
