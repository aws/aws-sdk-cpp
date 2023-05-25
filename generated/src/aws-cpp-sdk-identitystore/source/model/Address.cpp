/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/identitystore/model/Address.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

Address::Address() : 
    m_streetAddressHasBeenSet(false),
    m_localityHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_formattedHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_primary(false),
    m_primaryHasBeenSet(false)
{
}

Address::Address(JsonView jsonValue) : 
    m_streetAddressHasBeenSet(false),
    m_localityHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_postalCodeHasBeenSet(false),
    m_countryHasBeenSet(false),
    m_formattedHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_primary(false),
    m_primaryHasBeenSet(false)
{
  *this = jsonValue;
}

Address& Address::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreetAddress"))
  {
    m_streetAddress = jsonValue.GetString("StreetAddress");

    m_streetAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Locality"))
  {
    m_locality = jsonValue.GetString("Locality");

    m_localityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");

    m_postalCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Country"))
  {
    m_country = jsonValue.GetString("Country");

    m_countryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Formatted"))
  {
    m_formatted = jsonValue.GetString("Formatted");

    m_formattedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetBool("Primary");

    m_primaryHasBeenSet = true;
  }

  return *this;
}

JsonValue Address::Jsonize() const
{
  JsonValue payload;

  if(m_streetAddressHasBeenSet)
  {
   payload.WithString("StreetAddress", m_streetAddress);

  }

  if(m_localityHasBeenSet)
  {
   payload.WithString("Locality", m_locality);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  if(m_countryHasBeenSet)
  {
   payload.WithString("Country", m_country);

  }

  if(m_formattedHasBeenSet)
  {
   payload.WithString("Formatted", m_formatted);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_primaryHasBeenSet)
  {
   payload.WithBool("Primary", m_primary);

  }

  return payload;
}

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
