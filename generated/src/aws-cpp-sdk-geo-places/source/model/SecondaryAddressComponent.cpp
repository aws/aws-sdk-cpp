/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SecondaryAddressComponent.h>
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

SecondaryAddressComponent::SecondaryAddressComponent(JsonView jsonValue)
{
  *this = jsonValue;
}

SecondaryAddressComponent& SecondaryAddressComponent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Number"))
  {
    m_number = jsonValue.GetString("Number");
    m_numberHasBeenSet = true;
  }
  return *this;
}

JsonValue SecondaryAddressComponent::Jsonize() const
{
  JsonValue payload;

  if(m_numberHasBeenSet)
  {
   payload.WithString("Number", m_number);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
