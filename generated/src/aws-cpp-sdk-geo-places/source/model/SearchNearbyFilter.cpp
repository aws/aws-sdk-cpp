/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SearchNearbyFilter.h>
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

SearchNearbyFilter::SearchNearbyFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchNearbyFilter& SearchNearbyFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoundingBox"))
  {
    Aws::Utils::Array<JsonView> boundingBoxJsonList = jsonValue.GetArray("BoundingBox");
    for(unsigned boundingBoxIndex = 0; boundingBoxIndex < boundingBoxJsonList.GetLength(); ++boundingBoxIndex)
    {
      m_boundingBox.push_back(boundingBoxJsonList[boundingBoxIndex].AsDouble());
    }
    m_boundingBoxHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeCountries"))
  {
    Aws::Utils::Array<JsonView> includeCountriesJsonList = jsonValue.GetArray("IncludeCountries");
    for(unsigned includeCountriesIndex = 0; includeCountriesIndex < includeCountriesJsonList.GetLength(); ++includeCountriesIndex)
    {
      m_includeCountries.push_back(includeCountriesJsonList[includeCountriesIndex].AsString());
    }
    m_includeCountriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeCategories"))
  {
    Aws::Utils::Array<JsonView> includeCategoriesJsonList = jsonValue.GetArray("IncludeCategories");
    for(unsigned includeCategoriesIndex = 0; includeCategoriesIndex < includeCategoriesJsonList.GetLength(); ++includeCategoriesIndex)
    {
      m_includeCategories.push_back(includeCategoriesJsonList[includeCategoriesIndex].AsString());
    }
    m_includeCategoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExcludeCategories"))
  {
    Aws::Utils::Array<JsonView> excludeCategoriesJsonList = jsonValue.GetArray("ExcludeCategories");
    for(unsigned excludeCategoriesIndex = 0; excludeCategoriesIndex < excludeCategoriesJsonList.GetLength(); ++excludeCategoriesIndex)
    {
      m_excludeCategories.push_back(excludeCategoriesJsonList[excludeCategoriesIndex].AsString());
    }
    m_excludeCategoriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeBusinessChains"))
  {
    Aws::Utils::Array<JsonView> includeBusinessChainsJsonList = jsonValue.GetArray("IncludeBusinessChains");
    for(unsigned includeBusinessChainsIndex = 0; includeBusinessChainsIndex < includeBusinessChainsJsonList.GetLength(); ++includeBusinessChainsIndex)
    {
      m_includeBusinessChains.push_back(includeBusinessChainsJsonList[includeBusinessChainsIndex].AsString());
    }
    m_includeBusinessChainsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExcludeBusinessChains"))
  {
    Aws::Utils::Array<JsonView> excludeBusinessChainsJsonList = jsonValue.GetArray("ExcludeBusinessChains");
    for(unsigned excludeBusinessChainsIndex = 0; excludeBusinessChainsIndex < excludeBusinessChainsJsonList.GetLength(); ++excludeBusinessChainsIndex)
    {
      m_excludeBusinessChains.push_back(excludeBusinessChainsJsonList[excludeBusinessChainsIndex].AsString());
    }
    m_excludeBusinessChainsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IncludeFoodTypes"))
  {
    Aws::Utils::Array<JsonView> includeFoodTypesJsonList = jsonValue.GetArray("IncludeFoodTypes");
    for(unsigned includeFoodTypesIndex = 0; includeFoodTypesIndex < includeFoodTypesJsonList.GetLength(); ++includeFoodTypesIndex)
    {
      m_includeFoodTypes.push_back(includeFoodTypesJsonList[includeFoodTypesIndex].AsString());
    }
    m_includeFoodTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExcludeFoodTypes"))
  {
    Aws::Utils::Array<JsonView> excludeFoodTypesJsonList = jsonValue.GetArray("ExcludeFoodTypes");
    for(unsigned excludeFoodTypesIndex = 0; excludeFoodTypesIndex < excludeFoodTypesJsonList.GetLength(); ++excludeFoodTypesIndex)
    {
      m_excludeFoodTypes.push_back(excludeFoodTypesJsonList[excludeFoodTypesIndex].AsString());
    }
    m_excludeFoodTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchNearbyFilter::Jsonize() const
{
  JsonValue payload;

  if(m_boundingBoxHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> boundingBoxJsonList(m_boundingBox.size());
   for(unsigned boundingBoxIndex = 0; boundingBoxIndex < boundingBoxJsonList.GetLength(); ++boundingBoxIndex)
   {
     boundingBoxJsonList[boundingBoxIndex].AsDouble(m_boundingBox[boundingBoxIndex]);
   }
   payload.WithArray("BoundingBox", std::move(boundingBoxJsonList));

  }

  if(m_includeCountriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeCountriesJsonList(m_includeCountries.size());
   for(unsigned includeCountriesIndex = 0; includeCountriesIndex < includeCountriesJsonList.GetLength(); ++includeCountriesIndex)
   {
     includeCountriesJsonList[includeCountriesIndex].AsString(m_includeCountries[includeCountriesIndex]);
   }
   payload.WithArray("IncludeCountries", std::move(includeCountriesJsonList));

  }

  if(m_includeCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeCategoriesJsonList(m_includeCategories.size());
   for(unsigned includeCategoriesIndex = 0; includeCategoriesIndex < includeCategoriesJsonList.GetLength(); ++includeCategoriesIndex)
   {
     includeCategoriesJsonList[includeCategoriesIndex].AsString(m_includeCategories[includeCategoriesIndex]);
   }
   payload.WithArray("IncludeCategories", std::move(includeCategoriesJsonList));

  }

  if(m_excludeCategoriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeCategoriesJsonList(m_excludeCategories.size());
   for(unsigned excludeCategoriesIndex = 0; excludeCategoriesIndex < excludeCategoriesJsonList.GetLength(); ++excludeCategoriesIndex)
   {
     excludeCategoriesJsonList[excludeCategoriesIndex].AsString(m_excludeCategories[excludeCategoriesIndex]);
   }
   payload.WithArray("ExcludeCategories", std::move(excludeCategoriesJsonList));

  }

  if(m_includeBusinessChainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeBusinessChainsJsonList(m_includeBusinessChains.size());
   for(unsigned includeBusinessChainsIndex = 0; includeBusinessChainsIndex < includeBusinessChainsJsonList.GetLength(); ++includeBusinessChainsIndex)
   {
     includeBusinessChainsJsonList[includeBusinessChainsIndex].AsString(m_includeBusinessChains[includeBusinessChainsIndex]);
   }
   payload.WithArray("IncludeBusinessChains", std::move(includeBusinessChainsJsonList));

  }

  if(m_excludeBusinessChainsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeBusinessChainsJsonList(m_excludeBusinessChains.size());
   for(unsigned excludeBusinessChainsIndex = 0; excludeBusinessChainsIndex < excludeBusinessChainsJsonList.GetLength(); ++excludeBusinessChainsIndex)
   {
     excludeBusinessChainsJsonList[excludeBusinessChainsIndex].AsString(m_excludeBusinessChains[excludeBusinessChainsIndex]);
   }
   payload.WithArray("ExcludeBusinessChains", std::move(excludeBusinessChainsJsonList));

  }

  if(m_includeFoodTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> includeFoodTypesJsonList(m_includeFoodTypes.size());
   for(unsigned includeFoodTypesIndex = 0; includeFoodTypesIndex < includeFoodTypesJsonList.GetLength(); ++includeFoodTypesIndex)
   {
     includeFoodTypesJsonList[includeFoodTypesIndex].AsString(m_includeFoodTypes[includeFoodTypesIndex]);
   }
   payload.WithArray("IncludeFoodTypes", std::move(includeFoodTypesJsonList));

  }

  if(m_excludeFoodTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludeFoodTypesJsonList(m_excludeFoodTypes.size());
   for(unsigned excludeFoodTypesIndex = 0; excludeFoodTypesIndex < excludeFoodTypesJsonList.GetLength(); ++excludeFoodTypesIndex)
   {
     excludeFoodTypesJsonList[excludeFoodTypesIndex].AsString(m_excludeFoodTypes[excludeFoodTypesIndex]);
   }
   payload.WithArray("ExcludeFoodTypes", std::move(excludeFoodTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
