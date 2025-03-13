/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteViolatedConstraints.h>
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

RouteViolatedConstraints::RouteViolatedConstraints(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteViolatedConstraints& RouteViolatedConstraints::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AllHazardsRestricted"))
  {
    m_allHazardsRestricted = jsonValue.GetBool("AllHazardsRestricted");
    m_allHazardsRestrictedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AxleCount"))
  {
    m_axleCount = jsonValue.GetObject("AxleCount");
    m_axleCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HazardousCargos"))
  {
    Aws::Utils::Array<JsonView> hazardousCargosJsonList = jsonValue.GetArray("HazardousCargos");
    for(unsigned hazardousCargosIndex = 0; hazardousCargosIndex < hazardousCargosJsonList.GetLength(); ++hazardousCargosIndex)
    {
      m_hazardousCargos.push_back(RouteHazardousCargoTypeMapper::GetRouteHazardousCargoTypeForName(hazardousCargosJsonList[hazardousCargosIndex].AsString()));
    }
    m_hazardousCargosHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxHeight"))
  {
    m_maxHeight = jsonValue.GetInt64("MaxHeight");
    m_maxHeightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxKpraLength"))
  {
    m_maxKpraLength = jsonValue.GetInt64("MaxKpraLength");
    m_maxKpraLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxLength"))
  {
    m_maxLength = jsonValue.GetInt64("MaxLength");
    m_maxLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxPayloadCapacity"))
  {
    m_maxPayloadCapacity = jsonValue.GetInt64("MaxPayloadCapacity");
    m_maxPayloadCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxWeight"))
  {
    m_maxWeight = jsonValue.GetObject("MaxWeight");
    m_maxWeightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxWeightPerAxle"))
  {
    m_maxWeightPerAxle = jsonValue.GetInt64("MaxWeightPerAxle");
    m_maxWeightPerAxleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxWeightPerAxleGroup"))
  {
    m_maxWeightPerAxleGroup = jsonValue.GetObject("MaxWeightPerAxleGroup");
    m_maxWeightPerAxleGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxWidth"))
  {
    m_maxWidth = jsonValue.GetInt64("MaxWidth");
    m_maxWidthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Occupancy"))
  {
    m_occupancy = jsonValue.GetObject("Occupancy");
    m_occupancyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RestrictedTimes"))
  {
    m_restrictedTimes = jsonValue.GetString("RestrictedTimes");
    m_restrictedTimesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeDependent"))
  {
    m_timeDependent = jsonValue.GetBool("TimeDependent");
    m_timeDependentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrailerCount"))
  {
    m_trailerCount = jsonValue.GetObject("TrailerCount");
    m_trailerCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TravelMode"))
  {
    m_travelMode = jsonValue.GetBool("TravelMode");
    m_travelModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TruckRoadType"))
  {
    m_truckRoadType = jsonValue.GetString("TruckRoadType");
    m_truckRoadTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TruckType"))
  {
    m_truckType = RouteTruckTypeMapper::GetRouteTruckTypeForName(jsonValue.GetString("TruckType"));
    m_truckTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TunnelRestrictionCode"))
  {
    m_tunnelRestrictionCode = jsonValue.GetString("TunnelRestrictionCode");
    m_tunnelRestrictionCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteViolatedConstraints::Jsonize() const
{
  JsonValue payload;

  if(m_allHazardsRestrictedHasBeenSet)
  {
   payload.WithBool("AllHazardsRestricted", m_allHazardsRestricted);

  }

  if(m_axleCountHasBeenSet)
  {
   payload.WithObject("AxleCount", m_axleCount.Jsonize());

  }

  if(m_hazardousCargosHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hazardousCargosJsonList(m_hazardousCargos.size());
   for(unsigned hazardousCargosIndex = 0; hazardousCargosIndex < hazardousCargosJsonList.GetLength(); ++hazardousCargosIndex)
   {
     hazardousCargosJsonList[hazardousCargosIndex].AsString(RouteHazardousCargoTypeMapper::GetNameForRouteHazardousCargoType(m_hazardousCargos[hazardousCargosIndex]));
   }
   payload.WithArray("HazardousCargos", std::move(hazardousCargosJsonList));

  }

  if(m_maxHeightHasBeenSet)
  {
   payload.WithInt64("MaxHeight", m_maxHeight);

  }

  if(m_maxKpraLengthHasBeenSet)
  {
   payload.WithInt64("MaxKpraLength", m_maxKpraLength);

  }

  if(m_maxLengthHasBeenSet)
  {
   payload.WithInt64("MaxLength", m_maxLength);

  }

  if(m_maxPayloadCapacityHasBeenSet)
  {
   payload.WithInt64("MaxPayloadCapacity", m_maxPayloadCapacity);

  }

  if(m_maxWeightHasBeenSet)
  {
   payload.WithObject("MaxWeight", m_maxWeight.Jsonize());

  }

  if(m_maxWeightPerAxleHasBeenSet)
  {
   payload.WithInt64("MaxWeightPerAxle", m_maxWeightPerAxle);

  }

  if(m_maxWeightPerAxleGroupHasBeenSet)
  {
   payload.WithObject("MaxWeightPerAxleGroup", m_maxWeightPerAxleGroup.Jsonize());

  }

  if(m_maxWidthHasBeenSet)
  {
   payload.WithInt64("MaxWidth", m_maxWidth);

  }

  if(m_occupancyHasBeenSet)
  {
   payload.WithObject("Occupancy", m_occupancy.Jsonize());

  }

  if(m_restrictedTimesHasBeenSet)
  {
   payload.WithString("RestrictedTimes", m_restrictedTimes);

  }

  if(m_timeDependentHasBeenSet)
  {
   payload.WithBool("TimeDependent", m_timeDependent);

  }

  if(m_trailerCountHasBeenSet)
  {
   payload.WithObject("TrailerCount", m_trailerCount.Jsonize());

  }

  if(m_travelModeHasBeenSet)
  {
   payload.WithBool("TravelMode", m_travelMode);

  }

  if(m_truckRoadTypeHasBeenSet)
  {
   payload.WithString("TruckRoadType", m_truckRoadType);

  }

  if(m_truckTypeHasBeenSet)
  {
   payload.WithString("TruckType", RouteTruckTypeMapper::GetNameForRouteTruckType(m_truckType));
  }

  if(m_tunnelRestrictionCodeHasBeenSet)
  {
   payload.WithString("TunnelRestrictionCode", m_tunnelRestrictionCode);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
