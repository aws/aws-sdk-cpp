/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageScanFindingAggregation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ImageScanFindingAggregation::ImageScanFindingAggregation() : 
    m_accountAggregationHasBeenSet(false),
    m_imageAggregationHasBeenSet(false),
    m_imagePipelineAggregationHasBeenSet(false),
    m_vulnerabilityIdAggregationHasBeenSet(false)
{
}

ImageScanFindingAggregation::ImageScanFindingAggregation(JsonView jsonValue) : 
    m_accountAggregationHasBeenSet(false),
    m_imageAggregationHasBeenSet(false),
    m_imagePipelineAggregationHasBeenSet(false),
    m_vulnerabilityIdAggregationHasBeenSet(false)
{
  *this = jsonValue;
}

ImageScanFindingAggregation& ImageScanFindingAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountAggregation"))
  {
    m_accountAggregation = jsonValue.GetObject("accountAggregation");

    m_accountAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageAggregation"))
  {
    m_imageAggregation = jsonValue.GetObject("imageAggregation");

    m_imageAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imagePipelineAggregation"))
  {
    m_imagePipelineAggregation = jsonValue.GetObject("imagePipelineAggregation");

    m_imagePipelineAggregationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vulnerabilityIdAggregation"))
  {
    m_vulnerabilityIdAggregation = jsonValue.GetObject("vulnerabilityIdAggregation");

    m_vulnerabilityIdAggregationHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageScanFindingAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_accountAggregationHasBeenSet)
  {
   payload.WithObject("accountAggregation", m_accountAggregation.Jsonize());

  }

  if(m_imageAggregationHasBeenSet)
  {
   payload.WithObject("imageAggregation", m_imageAggregation.Jsonize());

  }

  if(m_imagePipelineAggregationHasBeenSet)
  {
   payload.WithObject("imagePipelineAggregation", m_imagePipelineAggregation.Jsonize());

  }

  if(m_vulnerabilityIdAggregationHasBeenSet)
  {
   payload.WithObject("vulnerabilityIdAggregation", m_vulnerabilityIdAggregation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
