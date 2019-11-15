/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_timecodeBurninHasBeenSet(false)
{
}

VideoPreprocessor::VideoPreprocessor(JsonView jsonValue) : 
    m_colorCorrectorHasBeenSet(false),
    m_deinterlacerHasBeenSet(false),
    m_dolbyVisionHasBeenSet(false),
    m_imageInserterHasBeenSet(false),
    m_noiseReducerHasBeenSet(false),
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

  if(m_timecodeBurninHasBeenSet)
  {
   payload.WithObject("timecodeBurnin", m_timecodeBurnin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
