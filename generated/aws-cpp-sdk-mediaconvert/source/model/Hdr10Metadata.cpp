/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Hdr10Metadata.h>
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

Hdr10Metadata::Hdr10Metadata() : 
    m_bluePrimaryX(0),
    m_bluePrimaryXHasBeenSet(false),
    m_bluePrimaryY(0),
    m_bluePrimaryYHasBeenSet(false),
    m_greenPrimaryX(0),
    m_greenPrimaryXHasBeenSet(false),
    m_greenPrimaryY(0),
    m_greenPrimaryYHasBeenSet(false),
    m_maxContentLightLevel(0),
    m_maxContentLightLevelHasBeenSet(false),
    m_maxFrameAverageLightLevel(0),
    m_maxFrameAverageLightLevelHasBeenSet(false),
    m_maxLuminance(0),
    m_maxLuminanceHasBeenSet(false),
    m_minLuminance(0),
    m_minLuminanceHasBeenSet(false),
    m_redPrimaryX(0),
    m_redPrimaryXHasBeenSet(false),
    m_redPrimaryY(0),
    m_redPrimaryYHasBeenSet(false),
    m_whitePointX(0),
    m_whitePointXHasBeenSet(false),
    m_whitePointY(0),
    m_whitePointYHasBeenSet(false)
{
}

Hdr10Metadata::Hdr10Metadata(JsonView jsonValue) : 
    m_bluePrimaryX(0),
    m_bluePrimaryXHasBeenSet(false),
    m_bluePrimaryY(0),
    m_bluePrimaryYHasBeenSet(false),
    m_greenPrimaryX(0),
    m_greenPrimaryXHasBeenSet(false),
    m_greenPrimaryY(0),
    m_greenPrimaryYHasBeenSet(false),
    m_maxContentLightLevel(0),
    m_maxContentLightLevelHasBeenSet(false),
    m_maxFrameAverageLightLevel(0),
    m_maxFrameAverageLightLevelHasBeenSet(false),
    m_maxLuminance(0),
    m_maxLuminanceHasBeenSet(false),
    m_minLuminance(0),
    m_minLuminanceHasBeenSet(false),
    m_redPrimaryX(0),
    m_redPrimaryXHasBeenSet(false),
    m_redPrimaryY(0),
    m_redPrimaryYHasBeenSet(false),
    m_whitePointX(0),
    m_whitePointXHasBeenSet(false),
    m_whitePointY(0),
    m_whitePointYHasBeenSet(false)
{
  *this = jsonValue;
}

Hdr10Metadata& Hdr10Metadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bluePrimaryX"))
  {
    m_bluePrimaryX = jsonValue.GetInteger("bluePrimaryX");

    m_bluePrimaryXHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bluePrimaryY"))
  {
    m_bluePrimaryY = jsonValue.GetInteger("bluePrimaryY");

    m_bluePrimaryYHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greenPrimaryX"))
  {
    m_greenPrimaryX = jsonValue.GetInteger("greenPrimaryX");

    m_greenPrimaryXHasBeenSet = true;
  }

  if(jsonValue.ValueExists("greenPrimaryY"))
  {
    m_greenPrimaryY = jsonValue.GetInteger("greenPrimaryY");

    m_greenPrimaryYHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxContentLightLevel"))
  {
    m_maxContentLightLevel = jsonValue.GetInteger("maxContentLightLevel");

    m_maxContentLightLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxFrameAverageLightLevel"))
  {
    m_maxFrameAverageLightLevel = jsonValue.GetInteger("maxFrameAverageLightLevel");

    m_maxFrameAverageLightLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxLuminance"))
  {
    m_maxLuminance = jsonValue.GetInteger("maxLuminance");

    m_maxLuminanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minLuminance"))
  {
    m_minLuminance = jsonValue.GetInteger("minLuminance");

    m_minLuminanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redPrimaryX"))
  {
    m_redPrimaryX = jsonValue.GetInteger("redPrimaryX");

    m_redPrimaryXHasBeenSet = true;
  }

  if(jsonValue.ValueExists("redPrimaryY"))
  {
    m_redPrimaryY = jsonValue.GetInteger("redPrimaryY");

    m_redPrimaryYHasBeenSet = true;
  }

  if(jsonValue.ValueExists("whitePointX"))
  {
    m_whitePointX = jsonValue.GetInteger("whitePointX");

    m_whitePointXHasBeenSet = true;
  }

  if(jsonValue.ValueExists("whitePointY"))
  {
    m_whitePointY = jsonValue.GetInteger("whitePointY");

    m_whitePointYHasBeenSet = true;
  }

  return *this;
}

JsonValue Hdr10Metadata::Jsonize() const
{
  JsonValue payload;

  if(m_bluePrimaryXHasBeenSet)
  {
   payload.WithInteger("bluePrimaryX", m_bluePrimaryX);

  }

  if(m_bluePrimaryYHasBeenSet)
  {
   payload.WithInteger("bluePrimaryY", m_bluePrimaryY);

  }

  if(m_greenPrimaryXHasBeenSet)
  {
   payload.WithInteger("greenPrimaryX", m_greenPrimaryX);

  }

  if(m_greenPrimaryYHasBeenSet)
  {
   payload.WithInteger("greenPrimaryY", m_greenPrimaryY);

  }

  if(m_maxContentLightLevelHasBeenSet)
  {
   payload.WithInteger("maxContentLightLevel", m_maxContentLightLevel);

  }

  if(m_maxFrameAverageLightLevelHasBeenSet)
  {
   payload.WithInteger("maxFrameAverageLightLevel", m_maxFrameAverageLightLevel);

  }

  if(m_maxLuminanceHasBeenSet)
  {
   payload.WithInteger("maxLuminance", m_maxLuminance);

  }

  if(m_minLuminanceHasBeenSet)
  {
   payload.WithInteger("minLuminance", m_minLuminance);

  }

  if(m_redPrimaryXHasBeenSet)
  {
   payload.WithInteger("redPrimaryX", m_redPrimaryX);

  }

  if(m_redPrimaryYHasBeenSet)
  {
   payload.WithInteger("redPrimaryY", m_redPrimaryY);

  }

  if(m_whitePointXHasBeenSet)
  {
   payload.WithInteger("whitePointX", m_whitePointX);

  }

  if(m_whitePointYHasBeenSet)
  {
   payload.WithInteger("whitePointY", m_whitePointY);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
