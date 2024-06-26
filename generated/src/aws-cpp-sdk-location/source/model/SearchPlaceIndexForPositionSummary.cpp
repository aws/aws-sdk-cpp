﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SearchPlaceIndexForPositionSummary.h>
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

SearchPlaceIndexForPositionSummary::SearchPlaceIndexForPositionSummary() : 
    m_positionHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_languageHasBeenSet(false)
{
}

SearchPlaceIndexForPositionSummary::SearchPlaceIndexForPositionSummary(JsonView jsonValue)
  : SearchPlaceIndexForPositionSummary()
{
  *this = jsonValue;
}

SearchPlaceIndexForPositionSummary& SearchPlaceIndexForPositionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Position"))
  {
    Aws::Utils::Array<JsonView> positionJsonList = jsonValue.GetArray("Position");
    for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
    {
      m_position.push_back(positionJsonList[positionIndex].AsDouble());
    }
    m_positionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

    m_maxResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetString("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Language"))
  {
    m_language = jsonValue.GetString("Language");

    m_languageHasBeenSet = true;
  }

  return *this;
}

JsonValue SearchPlaceIndexForPositionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_positionHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> positionJsonList(m_position.size());
   for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
   {
     positionJsonList[positionIndex].AsDouble(m_position[positionIndex]);
   }
   payload.WithArray("Position", std::move(positionJsonList));

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("DataSource", m_dataSource);

  }

  if(m_languageHasBeenSet)
  {
   payload.WithString("Language", m_language);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
