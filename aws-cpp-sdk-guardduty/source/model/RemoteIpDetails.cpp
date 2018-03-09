/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

RemoteIpDetails::RemoteIpDetails() : 
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_geoLocationHasBeenSet(false),
    m_ipAddressV4HasBeenSet(false),
    m_organizationHasBeenSet(false)
{
}

RemoteIpDetails::RemoteIpDetails(const JsonValue& jsonValue) : 
    m_cityHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_geoLocationHasBeenSet(false),
    m_ipAddressV4HasBeenSet(false),
    m_organizationHasBeenSet(false)
{
  *this = jsonValue;
}

RemoteIpDetails& RemoteIpDetails::operator =(const JsonValue& jsonValue)
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

  if(m_organizationHasBeenSet)
  {
   payload.WithObject("organization", m_organization.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
