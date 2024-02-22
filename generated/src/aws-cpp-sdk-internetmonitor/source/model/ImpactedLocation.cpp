/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/ImpactedLocation.h>
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

ImpactedLocation::ImpactedLocation() : 
    m_aSNameHasBeenSet(false),
    m_aSNumber(0),
    m_aSNumberHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_subdivisionHasBeenSet(false),
    m_metroHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_subdivisionCodeHasBeenSet(false),
    m_serviceLocationHasBeenSet(false),
    m_status(HealthEventStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_causedByHasBeenSet(false),
    m_internetHealthHasBeenSet(false),
    m_ipv4PrefixesHasBeenSet(false)
{
}

ImpactedLocation::ImpactedLocation(JsonView jsonValue) : 
    m_aSNameHasBeenSet(false),
    m_aSNumber(0),
    m_aSNumberHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_subdivisionHasBeenSet(false),
    m_metroHasBeenSet(false),
    m_cityHasBeenSet(false),
    m_latitude(0.0),
    m_latitudeHasBeenSet(false),
    m_longitude(0.0),
    m_longitudeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_subdivisionCodeHasBeenSet(false),
    m_serviceLocationHasBeenSet(false),
    m_status(HealthEventStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_causedByHasBeenSet(false),
    m_internetHealthHasBeenSet(false),
    m_ipv4PrefixesHasBeenSet(false)
{
  *this = jsonValue;
}

ImpactedLocation& ImpactedLocation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = jsonValue.GetString("CountryCode");

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubdivisionCode"))
  {
    m_subdivisionCode = jsonValue.GetString("SubdivisionCode");

    m_subdivisionCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceLocation"))
  {
    m_serviceLocation = jsonValue.GetString("ServiceLocation");

    m_serviceLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = HealthEventStatusMapper::GetHealthEventStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CausedBy"))
  {
    m_causedBy = jsonValue.GetObject("CausedBy");

    m_causedByHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InternetHealth"))
  {
    m_internetHealth = jsonValue.GetObject("InternetHealth");

    m_internetHealthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Ipv4Prefixes"))
  {
    Aws::Utils::Array<JsonView> ipv4PrefixesJsonList = jsonValue.GetArray("Ipv4Prefixes");
    for(unsigned ipv4PrefixesIndex = 0; ipv4PrefixesIndex < ipv4PrefixesJsonList.GetLength(); ++ipv4PrefixesIndex)
    {
      m_ipv4Prefixes.push_back(ipv4PrefixesJsonList[ipv4PrefixesIndex].AsString());
    }
    m_ipv4PrefixesHasBeenSet = true;
  }

  return *this;
}

JsonValue ImpactedLocation::Jsonize() const
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

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", m_countryCode);

  }

  if(m_subdivisionCodeHasBeenSet)
  {
   payload.WithString("SubdivisionCode", m_subdivisionCode);

  }

  if(m_serviceLocationHasBeenSet)
  {
   payload.WithString("ServiceLocation", m_serviceLocation);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", HealthEventStatusMapper::GetNameForHealthEventStatus(m_status));
  }

  if(m_causedByHasBeenSet)
  {
   payload.WithObject("CausedBy", m_causedBy.Jsonize());

  }

  if(m_internetHealthHasBeenSet)
  {
   payload.WithObject("InternetHealth", m_internetHealth.Jsonize());

  }

  if(m_ipv4PrefixesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ipv4PrefixesJsonList(m_ipv4Prefixes.size());
   for(unsigned ipv4PrefixesIndex = 0; ipv4PrefixesIndex < ipv4PrefixesJsonList.GetLength(); ++ipv4PrefixesIndex)
   {
     ipv4PrefixesJsonList[ipv4PrefixesIndex].AsString(m_ipv4Prefixes[ipv4PrefixesIndex]);
   }
   payload.WithArray("Ipv4Prefixes", std::move(ipv4PrefixesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
