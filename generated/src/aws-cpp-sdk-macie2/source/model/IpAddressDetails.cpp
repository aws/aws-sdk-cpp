/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/IpAddressDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

IpAddressDetails::IpAddressDetails() : 
    m_ipAddressV4HasBeenSet(false),
    m_ipCityHasBeenSet(false),
    m_ipCountryHasBeenSet(false),
    m_ipGeoLocationHasBeenSet(false),
    m_ipOwnerHasBeenSet(false)
{
}

IpAddressDetails::IpAddressDetails(JsonView jsonValue) : 
    m_ipAddressV4HasBeenSet(false),
    m_ipCityHasBeenSet(false),
    m_ipCountryHasBeenSet(false),
    m_ipGeoLocationHasBeenSet(false),
    m_ipOwnerHasBeenSet(false)
{
  *this = jsonValue;
}

IpAddressDetails& IpAddressDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ipAddressV4"))
  {
    m_ipAddressV4 = jsonValue.GetString("ipAddressV4");

    m_ipAddressV4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipCity"))
  {
    m_ipCity = jsonValue.GetObject("ipCity");

    m_ipCityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipCountry"))
  {
    m_ipCountry = jsonValue.GetObject("ipCountry");

    m_ipCountryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipGeoLocation"))
  {
    m_ipGeoLocation = jsonValue.GetObject("ipGeoLocation");

    m_ipGeoLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipOwner"))
  {
    m_ipOwner = jsonValue.GetObject("ipOwner");

    m_ipOwnerHasBeenSet = true;
  }

  return *this;
}

JsonValue IpAddressDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ipAddressV4HasBeenSet)
  {
   payload.WithString("ipAddressV4", m_ipAddressV4);

  }

  if(m_ipCityHasBeenSet)
  {
   payload.WithObject("ipCity", m_ipCity.Jsonize());

  }

  if(m_ipCountryHasBeenSet)
  {
   payload.WithObject("ipCountry", m_ipCountry.Jsonize());

  }

  if(m_ipGeoLocationHasBeenSet)
  {
   payload.WithObject("ipGeoLocation", m_ipGeoLocation.Jsonize());

  }

  if(m_ipOwnerHasBeenSet)
  {
   payload.WithObject("ipOwner", m_ipOwner.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
