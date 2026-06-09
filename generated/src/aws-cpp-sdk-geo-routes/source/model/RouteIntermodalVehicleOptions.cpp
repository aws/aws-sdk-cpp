/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteIntermodalVehicleOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteIntermodalVehicleOptions::RouteIntermodalVehicleOptions(JsonView jsonValue) { *this = jsonValue; }

RouteIntermodalVehicleOptions& RouteIntermodalVehicleOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AllowedModes")) {
    Aws::Utils::Array<JsonView> allowedModesJsonList = jsonValue.GetArray("AllowedModes");
    for (unsigned allowedModesIndex = 0; allowedModesIndex < allowedModesJsonList.GetLength(); ++allowedModesIndex) {
      m_allowedModes.push_back(RouteVehicleModeMapper::GetRouteVehicleModeForName(allowedModesJsonList[allowedModesIndex].AsString()));
    }
    m_allowedModesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EnabledFor")) {
    Aws::Utils::Array<JsonView> enabledForJsonList = jsonValue.GetArray("EnabledFor");
    for (unsigned enabledForIndex = 0; enabledForIndex < enabledForJsonList.GetLength(); ++enabledForIndex) {
      m_enabledFor.push_back(
          RouteIntermodalEnabledLegsMapper::GetRouteIntermodalEnabledLegsForName(enabledForJsonList[enabledForIndex].AsString()));
    }
    m_enabledForHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExcludedModes")) {
    Aws::Utils::Array<JsonView> excludedModesJsonList = jsonValue.GetArray("ExcludedModes");
    for (unsigned excludedModesIndex = 0; excludedModesIndex < excludedModesJsonList.GetLength(); ++excludedModesIndex) {
      m_excludedModes.push_back(RouteVehicleModeMapper::GetRouteVehicleModeForName(excludedModesJsonList[excludedModesIndex].AsString()));
    }
    m_excludedModesHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteIntermodalVehicleOptions::Jsonize() const {
  JsonValue payload;

  if (m_allowedModesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedModesJsonList(m_allowedModes.size());
    for (unsigned allowedModesIndex = 0; allowedModesIndex < allowedModesJsonList.GetLength(); ++allowedModesIndex) {
      allowedModesJsonList[allowedModesIndex].AsString(
          RouteVehicleModeMapper::GetNameForRouteVehicleMode(m_allowedModes[allowedModesIndex]));
    }
    payload.WithArray("AllowedModes", std::move(allowedModesJsonList));
  }

  if (m_enabledForHasBeenSet) {
    Aws::Utils::Array<JsonValue> enabledForJsonList(m_enabledFor.size());
    for (unsigned enabledForIndex = 0; enabledForIndex < enabledForJsonList.GetLength(); ++enabledForIndex) {
      enabledForJsonList[enabledForIndex].AsString(
          RouteIntermodalEnabledLegsMapper::GetNameForRouteIntermodalEnabledLegs(m_enabledFor[enabledForIndex]));
    }
    payload.WithArray("EnabledFor", std::move(enabledForJsonList));
  }

  if (m_excludedModesHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludedModesJsonList(m_excludedModes.size());
    for (unsigned excludedModesIndex = 0; excludedModesIndex < excludedModesJsonList.GetLength(); ++excludedModesIndex) {
      excludedModesJsonList[excludedModesIndex].AsString(
          RouteVehicleModeMapper::GetNameForRouteVehicleMode(m_excludedModes[excludedModesIndex]));
    }
    payload.WithArray("ExcludedModes", std::move(excludedModesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
