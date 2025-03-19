/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/PostalCodeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

PostalCodeDetails::PostalCodeDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

PostalCodeDetails& PostalCodeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PostalCode"))
  {
    m_postalCode = jsonValue.GetString("PostalCode");
    m_postalCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalAuthority"))
  {
    m_postalAuthority = PostalAuthorityMapper::GetPostalAuthorityForName(jsonValue.GetString("PostalAuthority"));
    m_postalAuthorityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostalCodeType"))
  {
    m_postalCodeType = PostalCodeTypeMapper::GetPostalCodeTypeForName(jsonValue.GetString("PostalCodeType"));
    m_postalCodeTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UspsZip"))
  {
    m_uspsZip = jsonValue.GetObject("UspsZip");
    m_uspsZipHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UspsZipPlus4"))
  {
    m_uspsZipPlus4 = jsonValue.GetObject("UspsZipPlus4");
    m_uspsZipPlus4HasBeenSet = true;
  }
  return *this;
}

JsonValue PostalCodeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_postalCodeHasBeenSet)
  {
   payload.WithString("PostalCode", m_postalCode);

  }

  if(m_postalAuthorityHasBeenSet)
  {
   payload.WithString("PostalAuthority", PostalAuthorityMapper::GetNameForPostalAuthority(m_postalAuthority));
  }

  if(m_postalCodeTypeHasBeenSet)
  {
   payload.WithString("PostalCodeType", PostalCodeTypeMapper::GetNameForPostalCodeType(m_postalCodeType));
  }

  if(m_uspsZipHasBeenSet)
  {
   payload.WithObject("UspsZip", m_uspsZip.Jsonize());

  }

  if(m_uspsZipPlus4HasBeenSet)
  {
   payload.WithObject("UspsZipPlus4", m_uspsZipPlus4.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
