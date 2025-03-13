/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTruckOptions.h>
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

RouteTruckOptions::RouteTruckOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTruckOptions& RouteTruckOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AxleCount"))
  {
    m_axleCount = jsonValue.GetInteger("AxleCount");
    m_axleCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EngineType"))
  {
    m_engineType = RouteEngineTypeMapper::GetRouteEngineTypeForName(jsonValue.GetString("EngineType"));
    m_engineTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("GrossWeight"))
  {
    m_grossWeight = jsonValue.GetInt64("GrossWeight");
    m_grossWeightHasBeenSet = true;
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
  if(jsonValue.ValueExists("Height"))
  {
    m_height = jsonValue.GetInt64("Height");
    m_heightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HeightAboveFirstAxle"))
  {
    m_heightAboveFirstAxle = jsonValue.GetInt64("HeightAboveFirstAxle");
    m_heightAboveFirstAxleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KpraLength"))
  {
    m_kpraLength = jsonValue.GetInt64("KpraLength");
    m_kpraLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Length"))
  {
    m_length = jsonValue.GetInt64("Length");
    m_lengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LicensePlate"))
  {
    m_licensePlate = jsonValue.GetObject("LicensePlate");
    m_licensePlateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxSpeed"))
  {
    m_maxSpeed = jsonValue.GetDouble("MaxSpeed");
    m_maxSpeedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Occupancy"))
  {
    m_occupancy = jsonValue.GetInteger("Occupancy");
    m_occupancyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PayloadCapacity"))
  {
    m_payloadCapacity = jsonValue.GetInt64("PayloadCapacity");
    m_payloadCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TireCount"))
  {
    m_tireCount = jsonValue.GetInteger("TireCount");
    m_tireCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Trailer"))
  {
    m_trailer = jsonValue.GetObject("Trailer");
    m_trailerHasBeenSet = true;
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
  if(jsonValue.ValueExists("WeightPerAxle"))
  {
    m_weightPerAxle = jsonValue.GetInt64("WeightPerAxle");
    m_weightPerAxleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WeightPerAxleGroup"))
  {
    m_weightPerAxleGroup = jsonValue.GetObject("WeightPerAxleGroup");
    m_weightPerAxleGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Width"))
  {
    m_width = jsonValue.GetInt64("Width");
    m_widthHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTruckOptions::Jsonize() const
{
  JsonValue payload;

  if(m_axleCountHasBeenSet)
  {
   payload.WithInteger("AxleCount", m_axleCount);

  }

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("EngineType", RouteEngineTypeMapper::GetNameForRouteEngineType(m_engineType));
  }

  if(m_grossWeightHasBeenSet)
  {
   payload.WithInt64("GrossWeight", m_grossWeight);

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

  if(m_heightHasBeenSet)
  {
   payload.WithInt64("Height", m_height);

  }

  if(m_heightAboveFirstAxleHasBeenSet)
  {
   payload.WithInt64("HeightAboveFirstAxle", m_heightAboveFirstAxle);

  }

  if(m_kpraLengthHasBeenSet)
  {
   payload.WithInt64("KpraLength", m_kpraLength);

  }

  if(m_lengthHasBeenSet)
  {
   payload.WithInt64("Length", m_length);

  }

  if(m_licensePlateHasBeenSet)
  {
   payload.WithObject("LicensePlate", m_licensePlate.Jsonize());

  }

  if(m_maxSpeedHasBeenSet)
  {
   payload.WithDouble("MaxSpeed", m_maxSpeed);

  }

  if(m_occupancyHasBeenSet)
  {
   payload.WithInteger("Occupancy", m_occupancy);

  }

  if(m_payloadCapacityHasBeenSet)
  {
   payload.WithInt64("PayloadCapacity", m_payloadCapacity);

  }

  if(m_tireCountHasBeenSet)
  {
   payload.WithInteger("TireCount", m_tireCount);

  }

  if(m_trailerHasBeenSet)
  {
   payload.WithObject("Trailer", m_trailer.Jsonize());

  }

  if(m_truckTypeHasBeenSet)
  {
   payload.WithString("TruckType", RouteTruckTypeMapper::GetNameForRouteTruckType(m_truckType));
  }

  if(m_tunnelRestrictionCodeHasBeenSet)
  {
   payload.WithString("TunnelRestrictionCode", m_tunnelRestrictionCode);

  }

  if(m_weightPerAxleHasBeenSet)
  {
   payload.WithInt64("WeightPerAxle", m_weightPerAxle);

  }

  if(m_weightPerAxleGroupHasBeenSet)
  {
   payload.WithObject("WeightPerAxleGroup", m_weightPerAxleGroup.Jsonize());

  }

  if(m_widthHasBeenSet)
  {
   payload.WithInt64("Width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
