/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/Place.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

Place::Place() : 
    m_addressNumberHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_interpolated(false),
    m_interpolatedHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_municipalityHasBeenSet(false),
    m_neighborhoodHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_streetHasBeenSet(false),
    m_subRegionHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_unitNumberHasBeenSet(false),
    m_unitTypeHasBeenSet(false)
{
}

Place::Place(JsonView jsonValue) : 
    m_addressNumberHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_geometryHasBeenSet(false),
    m_interpolated(false),
    m_interpolatedHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_municipalityHasBeenSet(false),
    m_neighborhoodHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_streetHasBeenSet(false),
    m_subRegionHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_unitNumberHasBeenSet(false),
    m_unitTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Place& Place::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddressNumber"))
  {
    m_addressNumber = jsonValue.GetString("AddressNumber");

    m_addressNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Geometry"))
  {
    m_geometry = jsonValue.GetObject("Geometry");

    m_geometryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Interpolated"))
  {
    m_interpolated = jsonValue.GetBool("Interpolated");

    m_interpolatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");

    m_labelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Municipality"))
  {
    m_municipality = jsonValue.GetString("Municipality");

    m_municipalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Neighborhood"))
  {
    m_neighborhood = jsonValue.GetString("Neighborhood");

    m_neighborhoodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");

    m_postalCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Street"))
  {
    m_street = jsonValue.GetString("Street");

    m_streetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubRegion"))
  {
    m_subRegion = jsonValue.GetString("SubRegion");

    m_subRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeZone"))
  {
    m_timeZone = jsonValue.GetObject("TimeZone");

    m_timeZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnitNumber"))
  {
    m_unitNumber = jsonValue.GetString("UnitNumber");

    m_unitNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnitType"))
  {
    m_unitType = jsonValue.GetString("UnitType");

    m_unitTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Place::Jsonize() const
{
  JsonValue payload;

  if(m_addressNumberHasBeenSet)
  {
   payload.WithString("AddressNumber", m_addressNumber);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_geometryHasBeenSet)
  {
   payload.WithObject("Geometry", m_geometry.Jsonize());

  }

  if(m_interpolatedHasBeenSet)
  {
   payload.WithBool("Interpolated", m_interpolated);

  }

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_municipalityHasBeenSet)
  {
   payload.WithString("Municipality", m_municipality);

  }

  if(m_neighborhoodHasBeenSet)
  {
   payload.WithString("Neighborhood", m_neighborhood);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_streetHasBeenSet)
  {
   payload.WithString("Street", m_street);

  }

  if(m_subRegionHasBeenSet)
  {
   payload.WithString("SubRegion", m_subRegion);

  }

  if(m_timeZoneHasBeenSet)
  {
   payload.WithObject("TimeZone", m_timeZone.Jsonize());

  }

  if(m_unitNumberHasBeenSet)
  {
   payload.WithString("UnitNumber", m_unitNumber);

  }

  if(m_unitTypeHasBeenSet)
  {
   payload.WithString("UnitType", m_unitType);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
