/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/RasterDataCollectionQueryWithBandFilterInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMakerGeospatial
{
namespace Model
{

RasterDataCollectionQueryWithBandFilterInput::RasterDataCollectionQueryWithBandFilterInput() : 
    m_areaOfInterestHasBeenSet(false),
    m_bandFilterHasBeenSet(false),
    m_propertyFiltersHasBeenSet(false),
    m_timeRangeFilterHasBeenSet(false)
{
}

RasterDataCollectionQueryWithBandFilterInput::RasterDataCollectionQueryWithBandFilterInput(JsonView jsonValue) : 
    m_areaOfInterestHasBeenSet(false),
    m_bandFilterHasBeenSet(false),
    m_propertyFiltersHasBeenSet(false),
    m_timeRangeFilterHasBeenSet(false)
{
  *this = jsonValue;
}

RasterDataCollectionQueryWithBandFilterInput& RasterDataCollectionQueryWithBandFilterInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AreaOfInterest"))
  {
    m_areaOfInterest = jsonValue.GetObject("AreaOfInterest");

    m_areaOfInterestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BandFilter"))
  {
    Aws::Utils::Array<JsonView> bandFilterJsonList = jsonValue.GetArray("BandFilter");
    for(unsigned bandFilterIndex = 0; bandFilterIndex < bandFilterJsonList.GetLength(); ++bandFilterIndex)
    {
      m_bandFilter.push_back(bandFilterJsonList[bandFilterIndex].AsString());
    }
    m_bandFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropertyFilters"))
  {
    m_propertyFilters = jsonValue.GetObject("PropertyFilters");

    m_propertyFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeRangeFilter"))
  {
    m_timeRangeFilter = jsonValue.GetObject("TimeRangeFilter");

    m_timeRangeFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue RasterDataCollectionQueryWithBandFilterInput::Jsonize() const
{
  JsonValue payload;

  if(m_areaOfInterestHasBeenSet)
  {
   payload.WithObject("AreaOfInterest", m_areaOfInterest.Jsonize());

  }

  if(m_bandFilterHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> bandFilterJsonList(m_bandFilter.size());
   for(unsigned bandFilterIndex = 0; bandFilterIndex < bandFilterJsonList.GetLength(); ++bandFilterIndex)
   {
     bandFilterJsonList[bandFilterIndex].AsString(m_bandFilter[bandFilterIndex]);
   }
   payload.WithArray("BandFilter", std::move(bandFilterJsonList));

  }

  if(m_propertyFiltersHasBeenSet)
  {
   payload.WithObject("PropertyFilters", m_propertyFilters.Jsonize());

  }

  if(m_timeRangeFilterHasBeenSet)
  {
   payload.WithObject("TimeRangeFilter", m_timeRangeFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
