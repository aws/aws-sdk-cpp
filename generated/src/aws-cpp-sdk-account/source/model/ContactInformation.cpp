/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/ContactInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Account
{
namespace Model
{

ContactInformation::ContactInformation() : 
    m_addressLine1HasBeenSet(false),
    m_addressLine2HasBeenSet(false),
    m_addressLine3HasBeenSet(false),
    m_cityHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_districtOrCountyHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_stateOrRegionHasBeenSet(false),
    m_websiteUrlHasBeenSet(false)
{
}

ContactInformation::ContactInformation(JsonView jsonValue) : 
    m_addressLine1HasBeenSet(false),
    m_addressLine2HasBeenSet(false),
    m_addressLine3HasBeenSet(false),
    m_cityHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_districtOrCountyHasBeenSet(false),
    m_fullNameHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_stateOrRegionHasBeenSet(false),
    m_websiteUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ContactInformation& ContactInformation::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("CompanyName"))
  {
    m_companyName = jsonValue.GetString("CompanyName");

    m_companyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = jsonValue.GetString("CountryCode");

    m_countryCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DistrictOrCounty"))
  {
    m_districtOrCounty = jsonValue.GetString("DistrictOrCounty");

    m_districtOrCountyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FullName"))
  {
    m_fullName = jsonValue.GetString("FullName");

    m_fullNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhoneNumber"))
  {
    m_phoneNumber = jsonValue.GetString("PhoneNumber");

    m_phoneNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");

    m_postalCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateOrRegion"))
  {
    m_stateOrRegion = jsonValue.GetString("StateOrRegion");

    m_stateOrRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebsiteUrl"))
  {
    m_websiteUrl = jsonValue.GetString("WebsiteUrl");

    m_websiteUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ContactInformation::Jsonize() const
{
  JsonValue payload;

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

  if(m_companyNameHasBeenSet)
  {
   payload.WithString("CompanyName", m_companyName);

  }

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", m_countryCode);

  }

  if(m_districtOrCountyHasBeenSet)
  {
   payload.WithString("DistrictOrCounty", m_districtOrCounty);

  }

  if(m_fullNameHasBeenSet)
  {
   payload.WithString("FullName", m_fullName);

  }

  if(m_phoneNumberHasBeenSet)
  {
   payload.WithString("PhoneNumber", m_phoneNumber);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  if(m_stateOrRegionHasBeenSet)
  {
   payload.WithString("StateOrRegion", m_stateOrRegion);

  }

  if(m_websiteUrlHasBeenSet)
  {
   payload.WithString("WebsiteUrl", m_websiteUrl);

  }

  return payload;
}

} // namespace Model
} // namespace Account
} // namespace Aws
