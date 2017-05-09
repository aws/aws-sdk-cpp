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

#include <aws/rekognition/model/ImageQuality.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Rekognition
{
namespace Model
{

ImageQuality::ImageQuality() : 
    m_brightness(0.0),
    m_brightnessHasBeenSet(false),
    m_sharpness(0.0),
    m_sharpnessHasBeenSet(false)
{
}

ImageQuality::ImageQuality(const JsonValue& jsonValue) : 
    m_brightness(0.0),
    m_brightnessHasBeenSet(false),
    m_sharpness(0.0),
    m_sharpnessHasBeenSet(false)
{
  *this = jsonValue;
}

ImageQuality& ImageQuality::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Brightness"))
  {
    m_brightness = jsonValue.GetDouble("Brightness");

    m_brightnessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sharpness"))
  {
    m_sharpness = jsonValue.GetDouble("Sharpness");

    m_sharpnessHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageQuality::Jsonize() const
{
  JsonValue payload;

  if(m_brightnessHasBeenSet)
  {
   payload.WithDouble("Brightness", m_brightness);

  }

  if(m_sharpnessHasBeenSet)
  {
   payload.WithDouble("Sharpness", m_sharpness);

  }

  return payload;
}

} // namespace Model
} // namespace Rekognition
} // namespace Aws