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

#include <aws/mediaconvert/model/NoiseReducerSpatialFilterSettings.h>
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

NoiseReducerSpatialFilterSettings::NoiseReducerSpatialFilterSettings() : 
    m_postFilterSharpenStrength(0),
    m_postFilterSharpenStrengthHasBeenSet(false),
    m_speed(0),
    m_speedHasBeenSet(false),
    m_strength(0),
    m_strengthHasBeenSet(false)
{
}

NoiseReducerSpatialFilterSettings::NoiseReducerSpatialFilterSettings(const JsonValue& jsonValue) : 
    m_postFilterSharpenStrength(0),
    m_postFilterSharpenStrengthHasBeenSet(false),
    m_speed(0),
    m_speedHasBeenSet(false),
    m_strength(0),
    m_strengthHasBeenSet(false)
{
  *this = jsonValue;
}

NoiseReducerSpatialFilterSettings& NoiseReducerSpatialFilterSettings::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("postFilterSharpenStrength"))
  {
    m_postFilterSharpenStrength = jsonValue.GetInteger("postFilterSharpenStrength");

    m_postFilterSharpenStrengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("speed"))
  {
    m_speed = jsonValue.GetInteger("speed");

    m_speedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("strength"))
  {
    m_strength = jsonValue.GetInteger("strength");

    m_strengthHasBeenSet = true;
  }

  return *this;
}

JsonValue NoiseReducerSpatialFilterSettings::Jsonize() const
{
  JsonValue payload;

  if(m_postFilterSharpenStrengthHasBeenSet)
  {
   payload.WithInteger("postFilterSharpenStrength", m_postFilterSharpenStrength);

  }

  if(m_speedHasBeenSet)
  {
   payload.WithInteger("speed", m_speed);

  }

  if(m_strengthHasBeenSet)
  {
   payload.WithInteger("strength", m_strength);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
