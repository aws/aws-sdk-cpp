/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/FoodType.h>
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

FoodType::FoodType(JsonView jsonValue)
{
  *this = jsonValue;
}

FoodType& FoodType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LocalizedName"))
  {
    m_localizedName = jsonValue.GetString("LocalizedName");
    m_localizedNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetBool("Primary");
    m_primaryHasBeenSet = true;
  }
  return *this;
}

JsonValue FoodType::Jsonize() const
{
  JsonValue payload;

  if(m_localizedNameHasBeenSet)
  {
   payload.WithString("LocalizedName", m_localizedName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_primaryHasBeenSet)
  {
   payload.WithBool("Primary", m_primary);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
