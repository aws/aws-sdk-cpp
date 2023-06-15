/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SearchForSuggestionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

SearchForSuggestionsResult::SearchForSuggestionsResult() : 
    m_categoriesHasBeenSet(false),
    m_placeIdHasBeenSet(false),
    m_supplementalCategoriesHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

SearchForSuggestionsResult::SearchForSuggestionsResult(JsonView jsonValue) : 
    m_categoriesHasBeenSet(false),
    m_placeIdHasBeenSet(false),
    m_supplementalCategoriesHasBeenSet(false),
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

SearchForSuggestionsResult& SearchForSuggestionsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Categories"))
  {
    Aws::Utils::Array<JsonView> categoriesJsonList = jsonValue.GetArray("Categories");
    for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
    {
      m_categories.push_back(categoriesJsonList[categoriesIndex].AsString());
    }
    m_categoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlaceId"))
  {
    m_placeId = jsonValue.GetString("PlaceId");

    m_placeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupplementalCategories"))
  {
    Aws::Utils::Array<JsonView> supplementalCategoriesJsonList = jsonValue.GetArray("SupplementalCategories");
    for(unsigned supplementalCategoriesIndex = 0; supplementalCategoriesIndex < supplementalCategoriesJsonList.GetLength(); ++supplementalCategoriesIndex)
    {
      m_supplementalCategories.push_back(supplementalCategoriesJsonList[supplementalCategoriesIndex].AsString());
    }
    m_supplementalCategoriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchForSuggestionsResult::Jsonize() const
{
  JsonValue payload;

  if(m_categoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> categoriesJsonList(m_categories.size());
   for(unsigned categoriesIndex = 0; categoriesIndex < categoriesJsonList.GetLength(); ++categoriesIndex)
   {
     categoriesJsonList[categoriesIndex].AsString(m_categories[categoriesIndex]);
   }
   payload.WithArray("Categories", std::move(categoriesJsonList));

  }

  if(m_placeIdHasBeenSet)
  {
   payload.WithString("PlaceId", m_placeId);

  }

  if(m_supplementalCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supplementalCategoriesJsonList(m_supplementalCategories.size());
   for(unsigned supplementalCategoriesIndex = 0; supplementalCategoriesIndex < supplementalCategoriesJsonList.GetLength(); ++supplementalCategoriesIndex)
   {
     supplementalCategoriesJsonList[supplementalCategoriesIndex].AsString(m_supplementalCategories[supplementalCategoriesIndex]);
   }
   payload.WithArray("SupplementalCategories", std::move(supplementalCategoriesJsonList));

  }

  if(m_textHasBeenSet)
  {
   payload.WithString("Text", m_text);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
