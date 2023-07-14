/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

NoiseReducerSpatialFilterSettings::NoiseReducerSpatialFilterSettings(JsonView jsonValue) : 
    m_postFilterSharpenStrength(0),
    m_postFilterSharpenStrengthHasBeenSet(false),
    m_speed(0),
    m_speedHasBeenSet(false),
    m_strength(0),
    m_strengthHasBeenSet(false)
{
  *this = jsonValue;
}

NoiseReducerSpatialFilterSettings& NoiseReducerSpatialFilterSettings::operator =(JsonView jsonValue)
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
