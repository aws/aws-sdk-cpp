/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/AddressDimension.h>
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

AddressDimension::AddressDimension(JsonView jsonValue)
{
  *this = jsonValue;
}

AddressDimension& AddressDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("City"))
  {
    m_city = jsonValue.GetObject("City");
    m_cityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetObject("Country");
    m_countryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("County"))
  {
    m_county = jsonValue.GetObject("County");
    m_countyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetObject("PostalCode");
    m_postalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Province"))
  {
    m_province = jsonValue.GetObject("Province");
    m_provinceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = jsonValue.GetObject("State");
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue AddressDimension::Jsonize() const
{
  JsonValue payload;

  if(m_cityHasBeenSet)
  {
   payload.WithObject("City", m_city.Jsonize());

  }

  if(m_countryHasBeenSet)
  {
   payload.WithObject("Country", m_country.Jsonize());

  }

  if(m_countyHasBeenSet)
  {
   payload.WithObject("County", m_county.Jsonize());

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithObject("PostalCode", m_postalCode.Jsonize());

  }

  if(m_provinceHasBeenSet)
  {
   payload.WithObject("Province", m_province.Jsonize());

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("State", m_state.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
