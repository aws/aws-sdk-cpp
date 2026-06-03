/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteTransitIncident.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteTransitIncident::RouteTransitIncident(JsonView jsonValue) { *this = jsonValue; }

RouteTransitIncident& RouteTransitIncident::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Effect")) {
    m_effect = RouteTransitIncidentEffectMapper::GetRouteTransitIncidentEffectForName(jsonValue.GetString("Effect"));
    m_effectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetString("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = RouteTransitIncidentTypeMapper::GetRouteTransitIncidentTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Url")) {
    m_url = jsonValue.GetString("Url");
    m_urlHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTransitIncident::Jsonize() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_effectHasBeenSet) {
    payload.WithString("Effect", RouteTransitIncidentEffectMapper::GetNameForRouteTransitIncidentEffect(m_effect));
  }

  if (m_endTimeHasBeenSet) {
    payload.WithString("EndTime", m_endTime);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithString("StartTime", m_startTime);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", RouteTransitIncidentTypeMapper::GetNameForRouteTransitIncidentType(m_type));
  }

  if (m_urlHasBeenSet) {
    payload.WithString("Url", m_url);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
