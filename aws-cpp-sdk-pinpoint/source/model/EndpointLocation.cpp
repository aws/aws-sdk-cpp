/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/EndpointLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

EndpointLocation::EndpointLocation() : 
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

EndpointLocation::EndpointLocation(JsonView jsonValue) : 
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

EndpointLocation& EndpointLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Latitude"))
  {
    m_latitude = jsonValue.GetDouble("Latitude");

    m_latitudeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Longitude"))
  {
    m_longitude = jsonValue.GetDouble("Longitude");

    m_longitudeHasBeenSet = true;
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

  return *this;
}

JsonValue EndpointLocation::Jsonize() const
{
  JsonValue payload;

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_latitudeHasBeenSet)
  {
   payload.WithDouble("Latitude", m_latitude);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithDouble("Longitude", m_longitude);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
