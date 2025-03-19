/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineCarOptions.h>
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

IsolineCarOptions::IsolineCarOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

IsolineCarOptions& IsolineCarOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EngineType"))
  {
    m_engineType = IsolineEngineTypeMapper::GetIsolineEngineTypeForName(jsonValue.GetString("EngineType"));
    m_engineTypeHasBeenSet = true;
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
  return *this;
}

JsonValue IsolineCarOptions::Jsonize() const
{
  JsonValue payload;

  if(m_engineTypeHasBeenSet)
  {
   payload.WithString("EngineType", IsolineEngineTypeMapper::GetNameForIsolineEngineType(m_engineType));
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

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
