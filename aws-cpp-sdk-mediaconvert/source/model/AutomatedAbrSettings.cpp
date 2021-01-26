/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/AutomatedAbrSettings.h>
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

AutomatedAbrSettings::AutomatedAbrSettings() : 
    m_maxAbrBitrate(0),
    m_maxAbrBitrateHasBeenSet(false),
    m_maxRenditions(0),
    m_maxRenditionsHasBeenSet(false),
    m_minAbrBitrate(0),
    m_minAbrBitrateHasBeenSet(false)
{
}

AutomatedAbrSettings::AutomatedAbrSettings(JsonView jsonValue) : 
    m_maxAbrBitrate(0),
    m_maxAbrBitrateHasBeenSet(false),
    m_maxRenditions(0),
    m_maxRenditionsHasBeenSet(false),
    m_minAbrBitrate(0),
    m_minAbrBitrateHasBeenSet(false)
{
  *this = jsonValue;
}

AutomatedAbrSettings& AutomatedAbrSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxAbrBitrate"))
  {
    m_maxAbrBitrate = jsonValue.GetInteger("maxAbrBitrate");

    m_maxAbrBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxRenditions"))
  {
    m_maxRenditions = jsonValue.GetInteger("maxRenditions");

    m_maxRenditionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minAbrBitrate"))
  {
    m_minAbrBitrate = jsonValue.GetInteger("minAbrBitrate");

    m_minAbrBitrateHasBeenSet = true;
  }

  return *this;
}

JsonValue AutomatedAbrSettings::Jsonize() const
{
  JsonValue payload;

  if(m_maxAbrBitrateHasBeenSet)
  {
   payload.WithInteger("maxAbrBitrate", m_maxAbrBitrate);

  }

  if(m_maxRenditionsHasBeenSet)
  {
   payload.WithInteger("maxRenditions", m_maxRenditions);

  }

  if(m_minAbrBitrateHasBeenSet)
  {
   payload.WithInteger("minAbrBitrate", m_minAbrBitrate);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
