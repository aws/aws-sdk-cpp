/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/UpdateAddress.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

UpdateAddress::UpdateAddress() : 
    m_address1HasBeenSet(false),
    m_address2HasBeenSet(false),
    m_address3HasBeenSet(false),
    m_address4HasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countyHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_postalCodeHasBeenSet(false)
{
}

UpdateAddress::UpdateAddress(JsonView jsonValue) : 
    m_address1HasBeenSet(false),
    m_address2HasBeenSet(false),
    m_address3HasBeenSet(false),
    m_address4HasBeenSet(false),
    m_cityHasBeenSet(false),
    m_countyHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_provinceHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_postalCodeHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateAddress& UpdateAddress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Address1"))
  {
    m_address1 = jsonValue.GetString("Address1");

    m_address1HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address2"))
  {
    m_address2 = jsonValue.GetString("Address2");

    m_address2HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address3"))
  {
    m_address3 = jsonValue.GetString("Address3");

    m_address3HasBeenSet = true;
  }

  if(jsonValue.ValueExists("Address4"))
  {
    m_address4 = jsonValue.GetString("Address4");

    m_address4HasBeenSet = true;
  }

  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetString("City");

    m_cityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("County"))
  {
    m_county = jsonValue.GetString("County");

    m_countyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetString("State");

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Province"))
  {
    m_province = jsonValue.GetString("Province");

    m_provinceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");

    m_postalCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateAddress::Jsonize() const
{
  JsonValue payload;

  if(m_address1HasBeenSet)
  {
   payload.WithString("Address1", m_address1);

  }

  if(m_address2HasBeenSet)
  {
   payload.WithString("Address2", m_address2);

  }

  if(m_address3HasBeenSet)
  {
   payload.WithString("Address3", m_address3);

  }

  if(m_address4HasBeenSet)
  {
   payload.WithString("Address4", m_address4);

  }

  if(m_cityHasBeenSet)
  {
   payload.WithString("City", m_city);

  }

  if(m_countyHasBeenSet)
  {
   payload.WithString("County", m_county);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", m_state);

  }

  if(m_provinceHasBeenSet)
  {
   payload.WithString("Province", m_province);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
