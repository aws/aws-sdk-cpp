/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/VideoPreprocessor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

VideoPreprocessor::VideoPreprocessor() : 
    m_colorCorrectorHasBeenSet(false),
    m_deinterlacerHasBeenSet(false),
    m_dolbyVisionHasBeenSet(false),
    m_imageInserterHasBeenSet(false),
    m_noiseReducerHasBeenSet(false),
    m_partnerWatermarkingHasBeenSet(false),
    m_timecodeBurninHasBeenSet(false)
{
}

VideoPreprocessor::VideoPreprocessor(JsonView jsonValue) : 
    m_colorCorrectorHasBeenSet(false),
    m_deinterlacerHasBeenSet(false),
    m_dolbyVisionHasBeenSet(false),
    m_imageInserterHasBeenSet(false),
    m_noiseReducerHasBeenSet(false),
    m_partnerWatermarkingHasBeenSet(false),
    m_timecodeBurninHasBeenSet(false)
{
  *this = jsonValue;
}

VideoPreprocessor& VideoPreprocessor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("colorCorrector"))
  {
    m_colorCorrector = jsonValue.GetObject("colorCorrector");

    m_colorCorrectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deinterlacer"))
  {
    m_deinterlacer = jsonValue.GetObject("deinterlacer");

    m_deinterlacerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dolbyVision"))
  {
    m_dolbyVision = jsonValue.GetObject("dolbyVision");

    m_dolbyVisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageInserter"))
  {
    m_imageInserter = jsonValue.GetObject("imageInserter");

    m_imageInserterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("noiseReducer"))
  {
    m_noiseReducer = jsonValue.GetObject("noiseReducer");

    m_noiseReducerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("partnerWatermarking"))
  {
    m_partnerWatermarking = jsonValue.GetObject("partnerWatermarking");

    m_partnerWatermarkingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timecodeBurnin"))
  {
    m_timecodeBurnin = jsonValue.GetObject("timecodeBurnin");

    m_timecodeBurninHasBeenSet = true;
  }

  return *this;
}

JsonValue VideoPreprocessor::Jsonize() const
{
  JsonValue payload;

  if(m_colorCorrectorHasBeenSet)
  {
   payload.WithObject("colorCorrector", m_colorCorrector.Jsonize());

  }

  if(m_deinterlacerHasBeenSet)
  {
   payload.WithObject("deinterlacer", m_deinterlacer.Jsonize());

  }

  if(m_dolbyVisionHasBeenSet)
  {
   payload.WithObject("dolbyVision", m_dolbyVision.Jsonize());

  }

  if(m_imageInserterHasBeenSet)
  {
   payload.WithObject("imageInserter", m_imageInserter.Jsonize());

  }

  if(m_noiseReducerHasBeenSet)
  {
   payload.WithObject("noiseReducer", m_noiseReducer.Jsonize());

  }

  if(m_partnerWatermarkingHasBeenSet)
  {
   payload.WithObject("partnerWatermarking", m_partnerWatermarking.Jsonize());

  }

  if(m_timecodeBurninHasBeenSet)
  {
   payload.WithObject("timecodeBurnin", m_timecodeBurnin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
