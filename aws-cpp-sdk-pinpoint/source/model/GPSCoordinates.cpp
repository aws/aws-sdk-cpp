/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/GPSCoordinates.h>
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

GPSCoordinates::GPSCoordinates() : 
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false)
{
}

GPSCoordinates::GPSCoordinates(JsonView jsonValue) : 
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false)
{
  *this = jsonValue;
}

GPSCoordinates& GPSCoordinates::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue GPSCoordinates::Jsonize() const
{
  JsonValue payload;

  if(m_latitudeHasBeenSet)
  {
   payload.WithDouble("Latitude", m_latitude);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithDouble("Longitude", m_longitude);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
