/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/RemoteIpDetails.h>
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

RemoteIpDetails::RemoteIpDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

RemoteIpDetails& RemoteIpDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("city"))
  {
    m_city = jsonValue.GetObject("city");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("country"))
  {
    m_country = jsonValue.GetObject("country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("geoLocation"))
  {
    m_geoLocation = jsonValue.GetObject("geoLocation");
    m_geoLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipAddressV4"))
  {
    m_ipAddressV4 = jsonValue.GetString("ipAddressV4");
    m_ipAddressV4HasBeenSet = true;
  }
  if(jsonValue.ValueExists("ipAddressV6"))
  {
    m_ipAddressV6 = jsonValue.GetString("ipAddressV6");
    m_ipAddressV6HasBeenSet = true;
  }
  if(jsonValue.ValueExists("organization"))
  {
    m_organization = jsonValue.GetObject("organization");
    m_organizationHasBeenSet = true;
  }
  return *this;
}

JsonValue RemoteIpDetails::Jsonize() const
{
  JsonValue payload;

  if(m_cityHasBeenSet)
  {
   payload.WithObject("city", m_city.Jsonize());

  }

  if(m_countryHasBeenSet)
  {
   payload.WithObject("country", m_country.Jsonize());

  }

  if(m_geoLocationHasBeenSet)
  {
   payload.WithObject("geoLocation", m_geoLocation.Jsonize());

  }

  if(m_ipAddressV4HasBeenSet)
  {
   payload.WithString("ipAddressV4", m_ipAddressV4);

  }

  if(m_ipAddressV6HasBeenSet)
  {
   payload.WithString("ipAddressV6", m_ipAddressV6);

  }

  if(m_organizationHasBeenSet)
  {
   payload.WithObject("organization", m_organization.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
