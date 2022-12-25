/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-geospatial/model/RasterDataCollectionQueryOutput.h>
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

RasterDataCollectionQueryOutput::RasterDataCollectionQueryOutput() : 
    m_areaOfInterestHasBeenSet(false),
    m_propertyFiltersHasBeenSet(false),
    m_rasterDataCollectionArnHasBeenSet(false),
    m_rasterDataCollectionNameHasBeenSet(false),
    m_timeRangeFilterHasBeenSet(false)
{
}

RasterDataCollectionQueryOutput::RasterDataCollectionQueryOutput(JsonView jsonValue) : 
    m_areaOfInterestHasBeenSet(false),
    m_propertyFiltersHasBeenSet(false),
    m_rasterDataCollectionArnHasBeenSet(false),
    m_rasterDataCollectionNameHasBeenSet(false),
    m_timeRangeFilterHasBeenSet(false)
{
  *this = jsonValue;
}

RasterDataCollectionQueryOutput& RasterDataCollectionQueryOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AreaOfInterest"))
  {
    m_areaOfInterest = jsonValue.GetObject("AreaOfInterest");

    m_areaOfInterestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropertyFilters"))
  {
    m_propertyFilters = jsonValue.GetObject("PropertyFilters");

    m_propertyFiltersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RasterDataCollectionArn"))
  {
    m_rasterDataCollectionArn = jsonValue.GetString("RasterDataCollectionArn");

    m_rasterDataCollectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RasterDataCollectionName"))
  {
    m_rasterDataCollectionName = jsonValue.GetString("RasterDataCollectionName");

    m_rasterDataCollectionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TimeRangeFilter"))
  {
    m_timeRangeFilter = jsonValue.GetObject("TimeRangeFilter");

    m_timeRangeFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue RasterDataCollectionQueryOutput::Jsonize() const
{
  JsonValue payload;

  if(m_areaOfInterestHasBeenSet)
  {
   payload.WithObject("AreaOfInterest", m_areaOfInterest.Jsonize());

  }

  if(m_propertyFiltersHasBeenSet)
  {
   payload.WithObject("PropertyFilters", m_propertyFilters.Jsonize());

  }

  if(m_rasterDataCollectionArnHasBeenSet)
  {
   payload.WithString("RasterDataCollectionArn", m_rasterDataCollectionArn);

  }

  if(m_rasterDataCollectionNameHasBeenSet)
  {
   payload.WithString("RasterDataCollectionName", m_rasterDataCollectionName);

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
