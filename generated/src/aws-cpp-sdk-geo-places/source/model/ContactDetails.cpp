/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/ContactDetails.h>
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

ContactDetails::ContactDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ContactDetails& ContactDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Label"))
  {
    m_label = jsonValue.GetString("Label");
    m_labelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("Categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsObject());
    }
    m_categoriesHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactDetails::Jsonize() const
{
  JsonValue payload;

  if(m_labelHasBeenSet)
  {
   payload.WithString("Label", m_label);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("Value", m_value);

  }

  if(m_categoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
   for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
   {
     categoriesJsonList[categoriesIndex].AsObject(m_categories[categoriesIndex].Jsonize());
   }
   payload.WithArray("Categories", std::move(categoriesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
