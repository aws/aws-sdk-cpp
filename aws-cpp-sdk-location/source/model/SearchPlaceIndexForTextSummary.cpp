﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SearchPlaceIndexForTextSummary.h>
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

SearchPlaceIndexForTextSummary::SearchPlaceIndexForTextSummary() : 
    m_biasPositionHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_filterBBoxHasBeenSet(false),
    m_filterCountriesHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_resultBBoxHasBeenSet(false),
    m_textHasBeenSet(false)
{
}

SearchPlaceIndexForTextSummary::SearchPlaceIndexForTextSummary(JsonView jsonValue) : 
    m_biasPositionHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_filterBBoxHasBeenSet(false),
    m_filterCountriesHasBeenSet(false),
    m_languageHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_resultBBoxHasBeenSet(false),
    m_textHasBeenSet(false)
{
  *this = jsonValue;
}

SearchPlaceIndexForTextSummary& SearchPlaceIndexForTextSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BiasPosition"))
  {
    Array<JsonView> biasPositionJsonList = jsonValue.GetArray("BiasPosition");
    for(unsigned biasPositionIndex = 0; biasPositionIndex < biasPositionJsonList.GetLength(); ++biasPositionIndex)
    {
      m_biasPosition.push_back(biasPositionJsonList[biasPositionIndex].AsDouble());
    }
    m_biasPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetString("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterBBox"))
  {
    Array<JsonView> filterBBoxJsonList = jsonValue.GetArray("FilterBBox");
    for(unsigned filterBBoxIndex = 0; filterBBoxIndex < filterBBoxJsonList.GetLength(); ++filterBBoxIndex)
    {
      m_filterBBox.push_back(filterBBoxJsonList[filterBBoxIndex].AsDouble());
    }
    m_filterBBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilterCountries"))
  {
    Array<JsonView> filterCountriesJsonList = jsonValue.GetArray("FilterCountries");
    for(unsigned filterCountriesIndex = 0; filterCountriesIndex < filterCountriesJsonList.GetLength(); ++filterCountriesIndex)
    {
      m_filterCountries.push_back(filterCountriesJsonList[filterCountriesIndex].AsString());
    }
    m_filterCountriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");

    m_languageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

    m_maxResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultBBox"))
  {
    Array<JsonView> resultBBoxJsonList = jsonValue.GetArray("ResultBBox");
    for(unsigned resultBBoxIndex = 0; resultBBoxIndex < resultBBoxJsonList.GetLength(); ++resultBBoxIndex)
    {
      m_resultBBox.push_back(resultBBoxJsonList[resultBBoxIndex].AsDouble());
    }
    m_resultBBoxHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetString("Text");

    m_textHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchPlaceIndexForTextSummary::Jsonize() const
{
  JsonValue payload;

  if(m_biasPositionHasBeenSet)
  {
   Array<JsonValue> biasPositionJsonList(m_biasPosition.size());
   for(unsigned biasPositionIndex = 0; biasPositionIndex < biasPositionJsonList.GetLength(); ++biasPositionIndex)
   {
     biasPositionJsonList[biasPositionIndex].AsDouble(m_biasPosition[biasPositionIndex]);
   }
   payload.WithArray("BiasPosition", std::move(biasPositionJsonList));

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("DataSource", m_dataSource);

  }

  if(m_filterBBoxHasBeenSet)
  {
   Array<JsonValue> filterBBoxJsonList(m_filterBBox.size());
   for(unsigned filterBBoxIndex = 0; filterBBoxIndex < filterBBoxJsonList.GetLength(); ++filterBBoxIndex)
   {
     filterBBoxJsonList[filterBBoxIndex].AsDouble(m_filterBBox[filterBBoxIndex]);
   }
   payload.WithArray("FilterBBox", std::move(filterBBoxJsonList));

  }

  if(m_filterCountriesHasBeenSet)
  {
   Array<JsonValue> filterCountriesJsonList(m_filterCountries.size());
   for(unsigned filterCountriesIndex = 0; filterCountriesIndex < filterCountriesJsonList.GetLength(); ++filterCountriesIndex)
   {
     filterCountriesJsonList[filterCountriesIndex].AsString(m_filterCountries[filterCountriesIndex]);
   }
   payload.WithArray("FilterCountries", std::move(filterCountriesJsonList));

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_resultBBoxHasBeenSet)
  {
   Array<JsonValue> resultBBoxJsonList(m_resultBBox.size());
   for(unsigned resultBBoxIndex = 0; resultBBoxIndex < resultBBoxJsonList.GetLength(); ++resultBBoxIndex)
   {
     resultBBoxJsonList[resultBBoxIndex].AsDouble(m_resultBBox[resultBBoxIndex]);
   }
   payload.WithArray("ResultBBox", std::move(resultBBoxJsonList));

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
