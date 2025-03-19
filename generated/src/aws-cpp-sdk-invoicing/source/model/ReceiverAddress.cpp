/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/ReceiverAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Invoicing
{
namespace Model
{

ReceiverAddress::ReceiverAddress(JsonView jsonValue)
{
  *this = jsonValue;
}

ReceiverAddress& ReceiverAddress::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("DistrictOrCounty"))
  {
    m_districtOrCounty = jsonValue.GetString("DistrictOrCounty");
    m_districtOrCountyHasBeenSet = true;
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
  if(jsonValue.ValueExists("CountryCode"))
  {
    m_countryCode = jsonValue.GetString("CountryCode");
    m_countryCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompanyName"))
  {
    m_companyName = jsonValue.GetString("CompanyName");
    m_companyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");
    m_postalCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ReceiverAddress::Jsonize() const
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

  if(m_districtOrCountyHasBeenSet)
  {
   payload.WithString("DistrictOrCounty", m_districtOrCounty);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_stateOrRegionHasBeenSet)
  {
   payload.WithString("StateOrRegion", m_stateOrRegion);

  }

  if(m_countryCodeHasBeenSet)
  {
   payload.WithString("CountryCode", m_countryCode);

  }

  if(m_companyNameHasBeenSet)
  {
   payload.WithString("CompanyName", m_companyName);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  return payload;
}

} // namespace Model
} // namespace Invoicing
} // namespace Aws
