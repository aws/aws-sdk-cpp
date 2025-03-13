/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/NetworkGeoLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

NetworkGeoLocation::NetworkGeoLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkGeoLocation& NetworkGeoLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("city"))
  {
    m_city = jsonValue.GetString("city");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("country"))
  {
    m_country = jsonValue.GetString("country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lat"))
  {
    m_latitude = jsonValue.GetDouble("lat");
    m_latitudeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lon"))
  {
    m_longitude = jsonValue.GetDouble("lon");
    m_longitudeHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkGeoLocation::Jsonize() const
{
  JsonValue payload;

  if(m_cityHasBeenSet)
  {
   payload.WithString("city", m_city);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("country", m_country);

  }

  if(m_latitudeHasBeenSet)
  {
   payload.WithDouble("lat", m_latitude);

  }

  if(m_longitudeHasBeenSet)
  {
   payload.WithDouble("lon", m_longitude);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
