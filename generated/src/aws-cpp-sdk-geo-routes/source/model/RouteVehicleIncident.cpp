/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteVehicleIncident.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteVehicleIncident::RouteVehicleIncident(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteVehicleIncident& RouteVehicleIncident::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetString("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Severity"))
  {
    m_severity = RouteVehicleIncidentSeverityMapper::GetRouteVehicleIncidentSeverityForName(jsonValue.GetString("Severity"));
    m_severityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetString("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = RouteVehicleIncidentTypeMapper::GetRouteVehicleIncidentTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteVehicleIncident::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("EndTime", m_endTime);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("Severity", RouteVehicleIncidentSeverityMapper::GetNameForRouteVehicleIncidentSeverity(m_severity));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("StartTime", m_startTime);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", RouteVehicleIncidentTypeMapper::GetNameForRouteVehicleIncidentType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
