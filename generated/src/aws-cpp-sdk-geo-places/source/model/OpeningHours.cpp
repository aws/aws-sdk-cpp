/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/OpeningHours.h>
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

OpeningHours::OpeningHours(JsonView jsonValue)
{
  *this = jsonValue;
}

OpeningHours& OpeningHours::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Display"))
  {
    Aws::Utils::Array<JsonView> displayJsonList = jsonValue.GetArray("Display");
    for(unsigned displayIndex = 0; displayIndex < displayJsonList.GetLength(); ++displayIndex)
    {
      m_display.push_back(displayJsonList[displayIndex].AsString());
    }
    m_displayHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OpenNow"))
  {
    m_openNow = jsonValue.GetBool("OpenNow");
    m_openNowHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Components"))
  {
    Aws::Utils::Array<JsonView> componentsJsonList = jsonValue.GetArray("Components");
    for(unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex)
    {
      m_components.push_back(componentsJsonList[componentsIndex].AsObject());
    }
    m_componentsHasBeenSet = true;
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

JsonValue OpeningHours::Jsonize() const
{
  JsonValue payload;

  if(m_displayHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> displayJsonList(m_display.size());
   for(unsigned displayIndex = 0; displayIndex < displayJsonList.GetLength(); ++displayIndex)
   {
     displayJsonList[displayIndex].AsString(m_display[displayIndex]);
   }
   payload.WithArray("Display", std::move(displayJsonList));

  }

  if(m_openNowHasBeenSet)
  {
   payload.WithBool("OpenNow", m_openNow);

  }

  if(m_componentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> componentsJsonList(m_components.size());
   for(unsigned componentsIndex = 0; componentsIndex < componentsJsonList.GetLength(); ++componentsIndex)
   {
     componentsJsonList[componentsIndex].AsObject(m_components[componentsIndex].Jsonize());
   }
   payload.WithArray("Components", std::move(componentsJsonList));

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
