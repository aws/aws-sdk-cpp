/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GeocodeQueryComponents.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

GeocodeQueryComponents::GeocodeQueryComponents(JsonView jsonValue)
{
  *this = jsonValue;
}

GeocodeQueryComponents& GeocodeQueryComponents::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SubRegion"))
  {
    m_subRegion = jsonValue.GetString("SubRegion");
    m_subRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Locality"))
  {
    m_locality = jsonValue.GetString("Locality");
    m_localityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("District"))
  {
    m_district = jsonValue.GetString("District");
    m_districtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Street"))
  {
    m_street = jsonValue.GetString("Street");
    m_streetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AddressNumber"))
  {
    m_addressNumber = jsonValue.GetString("AddressNumber");
    m_addressNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");
    m_postalCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue GeocodeQueryComponents::Jsonize() const
{
  JsonValue payload;

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_subRegionHasBeenSet)
  {
   payload.WithString("SubRegion", m_subRegion);

  }

  if(m_localityHasBeenSet)
  {
   payload.WithString("Locality", m_locality);

  }

  if(m_districtHasBeenSet)
  {
   payload.WithString("District", m_district);

  }

  if(m_streetHasBeenSet)
  {
   payload.WithString("Street", m_street);

  }

  if(m_addressNumberHasBeenSet)
  {
   payload.WithString("AddressNumber", m_addressNumber);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
