/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/Address.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

Address::Address() : 
    m_contactNameHasBeenSet(false),
    m_contactPhoneNumberHasBeenSet(false),
    m_addressLine1HasBeenSet(false),
    m_addressLine2HasBeenSet(false),
    m_addressLine3HasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateOrRegionHasBeenSet(false),
    m_districtOrCountyHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_municipalityHasBeenSet(false)
{
}

Address::Address(JsonView jsonValue) : 
    m_contactNameHasBeenSet(false),
    m_contactPhoneNumberHasBeenSet(false),
    m_addressLine1HasBeenSet(false),
    m_addressLine2HasBeenSet(false),
    m_addressLine3HasBeenSet(false),
    m_cityHasBeenSet(false),
    m_stateOrRegionHasBeenSet(false),
    m_districtOrCountyHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_municipalityHasBeenSet(false)
{
  *this = jsonValue;
}

Address& Address::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContactName"))
  {
    m_contactName = jsonValue.GetString("ContactName");

    m_contactNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactPhoneNumber"))
  {
    m_contactPhoneNumber = jsonValue.GetString("ContactPhoneNumber");

    m_contactPhoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddressLine1"))
  {
    m_addressLine1 = jsonValue.GetString("AddressLine1");

    m_addressLine1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddressLine2"))
  {
    m_addressLine2 = jsonValue.GetString("AddressLine2");

    m_addressLine2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddressLine3"))
  {
    m_addressLine3 = jsonValue.GetString("AddressLine3");

    m_addressLine3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateOrRegion"))
  {
    m_stateOrRegion = jsonValue.GetString("StateOrRegion");

    m_stateOrRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DistrictOrCounty"))
  {
    m_districtOrCounty = jsonValue.GetString("DistrictOrCounty");

    m_districtOrCountyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");

    m_postalCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = jsonValue.GetString("CountryCode");

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Municipality"))
  {
    m_municipality = jsonValue.GetString("Municipality");

    m_municipalityHasBeenSet = true;
  }

  return *this;
}

JsonValue Address::Jsonize() const
{
  JsonValue payload;

  if(m_contactNameHasBeenSet)
  {
   payload.WithString("ContactName", m_contactName);

  }

  if(m_contactPhoneNumberHasBeenSet)
  {
   payload.WithString("ContactPhoneNumber", m_contactPhoneNumber);

  }

  if(m_addressLine1HasBeenSet)
  {
   payload.WithString("AddressLine1", m_addressLine1);

  }

  if(m_addressLine2HasBeenSet)
  {
   payload.WithString("AddressLine2", m_addressLine2);

  }

  if(m_addressLine3HasBeenSet)
  {
   payload.WithString("AddressLine3", m_addressLine3);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_stateOrRegionHasBeenSet)
  {
   payload.WithString("StateOrRegion", m_stateOrRegion);

  }

  if(m_districtOrCountyHasBeenSet)
  {
   payload.WithString("DistrictOrCounty", m_districtOrCounty);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", m_countryCode);

  }

  if(m_municipalityHasBeenSet)
  {
   payload.WithString("Municipality", m_municipality);

  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
