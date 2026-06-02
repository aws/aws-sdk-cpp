/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitOptions::RouteTransitOptions(JsonView jsonValue) { *this = jsonValue; }

RouteTransitOptions& RouteTransitOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccessibilityAttributes")) {
    Aws::Utils::Array<JsonView> accessibilityAttributesJsonList = jsonValue.GetArray("AccessibilityAttributes");
    for (unsigned accessibilityAttributesIndex = 0; accessibilityAttributesIndex < accessibilityAttributesJsonList.GetLength();
         ++accessibilityAttributesIndex) {
      m_accessibilityAttributes.push_back(RouteAccessibilityAttributeMapper::GetRouteAccessibilityAttributeForName(
          accessibilityAttributesJsonList[accessibilityAttributesIndex].AsString()));
    }
    m_accessibilityAttributesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AllowedModes")) {
    Aws::Utils::Array<JsonView> allowedModesJsonList = jsonValue.GetArray("AllowedModes");
    for (unsigned allowedModesIndex = 0; allowedModesIndex < allowedModesJsonList.GetLength(); ++allowedModesIndex) {
      m_allowedModes.push_back(RouteTransitModeMapper::GetRouteTransitModeForName(allowedModesJsonList[allowedModesIndex].AsString()));
    }
    m_allowedModesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExcludedModes")) {
    Aws::Utils::Array<JsonView> excludedModesJsonList = jsonValue.GetArray("ExcludedModes");
    for (unsigned excludedModesIndex = 0; excludedModesIndex < excludedModesJsonList.GetLength(); ++excludedModesIndex) {
      m_excludedModes.push_back(RouteTransitModeMapper::GetRouteTransitModeForName(excludedModesJsonList[excludedModesIndex].AsString()));
    }
    m_excludedModesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxTransfers")) {
    m_maxTransfers = jsonValue.GetInteger("MaxTransfers");
    m_maxTransfersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Pedestrian")) {
    m_pedestrian = jsonValue.GetObject("Pedestrian");
    m_pedestrianHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitOptions::Jsonize() const {
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

  if (m_allowedModesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedModesJsonList(m_allowedModes.size());
    for (unsigned allowedModesIndex = 0; allowedModesIndex < allowedModesJsonList.GetLength(); ++allowedModesIndex) {
      allowedModesJsonList[allowedModesIndex].AsString(
          RouteTransitModeMapper::GetNameForRouteTransitMode(m_allowedModes[allowedModesIndex]));
    }
    payload.WithArray("AllowedModes", std::move(allowedModesJsonList));
  }

  if (m_excludedModesHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludedModesJsonList(m_excludedModes.size());
    for (unsigned excludedModesIndex = 0; excludedModesIndex < excludedModesJsonList.GetLength(); ++excludedModesIndex) {
      excludedModesJsonList[excludedModesIndex].AsString(
          RouteTransitModeMapper::GetNameForRouteTransitMode(m_excludedModes[excludedModesIndex]));
    }
    payload.WithArray("ExcludedModes", std::move(excludedModesJsonList));
  }

  if (m_maxTransfersHasBeenSet) {
    payload.WithInteger("MaxTransfers", m_maxTransfers);
  }

  if (m_pedestrianHasBeenSet) {
    payload.WithObject("Pedestrian", m_pedestrian.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
