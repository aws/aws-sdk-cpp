/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/ClientLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

ClientLocation::ClientLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

ClientLocation& ClientLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ASName"))
  {
    m_aSName = jsonValue.GetString("ASName");
    m_aSNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ASNumber"))
  {
    m_aSNumber = jsonValue.GetInt64("ASNumber");
    m_aSNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Subdivision"))
  {
    m_subdivision = jsonValue.GetString("Subdivision");
    m_subdivisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Metro"))
  {
    m_metro = jsonValue.GetString("Metro");
    m_metroHasBeenSet = true;
  }
  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");
    m_cityHasBeenSet = true;
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
  return *this;
}

JsonValue ClientLocation::Jsonize() const
{
  JsonValue payload;

  if(m_aSNameHasBeenSet)
  {
   payload.WithString("ASName", m_aSName);

  }

  if(m_aSNumberHasBeenSet)
  {
   payload.WithInt64("ASNumber", m_aSNumber);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_subdivisionHasBeenSet)
  {
   payload.WithString("Subdivision", m_subdivision);

  }

  if(m_metroHasBeenSet)
  {
   payload.WithString("Metro", m_metro);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

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
} // namespace InternetMonitor
} // namespace Aws
