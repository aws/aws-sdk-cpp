/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SecondaryAddressComponentMatchScore.h>
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

SecondaryAddressComponentMatchScore::SecondaryAddressComponentMatchScore(JsonView jsonValue)
{
  *this = jsonValue;
}

SecondaryAddressComponentMatchScore& SecondaryAddressComponentMatchScore::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Number"))
  {
    m_number = jsonValue.GetDouble("Number");
    m_numberHasBeenSet = true;
  }
  return *this;
}

JsonValue SecondaryAddressComponentMatchScore::Jsonize() const
{
  JsonValue payload;

  if(m_numberHasBeenSet)
  {
   payload.WithDouble("Number", m_number);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
