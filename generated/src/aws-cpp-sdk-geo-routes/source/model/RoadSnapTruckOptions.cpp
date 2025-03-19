/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoadSnapTruckOptions.h>
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

RoadSnapTruckOptions::RoadSnapTruckOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RoadSnapTruckOptions& RoadSnapTruckOptions::operator =(JsonView jsonValue)
{
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
      m_hazardousCargos.push_back(RoadSnapHazardousCargoTypeMapper::GetRoadSnapHazardousCargoTypeForName(hazardousCargosJsonList[hazardousCargosIndex].AsString()));
    }
    m_hazardousCargosHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Height"))
  {
    m_height = jsonValue.GetInt64("Height");
    m_heightHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Length"))
  {
    m_length = jsonValue.GetInt64("Length");
    m_lengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Trailer"))
  {
    m_trailer = jsonValue.GetObject("Trailer");
    m_trailerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TunnelRestrictionCode"))
  {
    m_tunnelRestrictionCode = jsonValue.GetString("TunnelRestrictionCode");
    m_tunnelRestrictionCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Width"))
  {
    m_width = jsonValue.GetInt64("Width");
    m_widthHasBeenSet = true;
  }
  return *this;
}

JsonValue RoadSnapTruckOptions::Jsonize() const
{
  JsonValue payload;

  if(m_grossWeightHasBeenSet)
  {
   payload.WithInt64("GrossWeight", m_grossWeight);

  }

  if(m_hazardousCargosHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hazardousCargosJsonList(m_hazardousCargos.size());
   for(unsigned hazardousCargosIndex = 0; hazardousCargosIndex < hazardousCargosJsonList.GetLength(); ++hazardousCargosIndex)
   {
     hazardousCargosJsonList[hazardousCargosIndex].AsString(RoadSnapHazardousCargoTypeMapper::GetNameForRoadSnapHazardousCargoType(m_hazardousCargos[hazardousCargosIndex]));
   }
   payload.WithArray("HazardousCargos", std::move(hazardousCargosJsonList));

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInt64("Height", m_height);

  }

  if(m_lengthHasBeenSet)
  {
   payload.WithInt64("Length", m_length);

  }

  if(m_trailerHasBeenSet)
  {
   payload.WithObject("Trailer", m_trailer.Jsonize());

  }

  if(m_tunnelRestrictionCodeHasBeenSet)
  {
   payload.WithString("TunnelRestrictionCode", m_tunnelRestrictionCode);

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
