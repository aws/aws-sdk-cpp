/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GeoLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

GeoLocation::GeoLocation() : 
    m_lon(0.0),
    m_lonHasBeenSet(false),
    m_lat(0.0),
    m_latHasBeenSet(false)
{
}

GeoLocation::GeoLocation(JsonView jsonValue) : 
    m_lon(0.0),
    m_lonHasBeenSet(false),
    m_lat(0.0),
    m_latHasBeenSet(false)
{
  *this = jsonValue;
}

GeoLocation& GeoLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Lon"))
  {
    m_lon = jsonValue.GetDouble("Lon");

    m_lonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lat"))
  {
    m_lat = jsonValue.GetDouble("Lat");

    m_latHasBeenSet = true;
  }

  return *this;
}

JsonValue GeoLocation::Jsonize() const
{
  JsonValue payload;

  if(m_lonHasBeenSet)
  {
   payload.WithDouble("Lon", m_lon);

  }

  if(m_latHasBeenSet)
  {
   payload.WithDouble("Lat", m_lat);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
