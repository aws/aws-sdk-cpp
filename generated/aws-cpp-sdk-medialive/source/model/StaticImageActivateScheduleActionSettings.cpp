/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/StaticImageActivateScheduleActionSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

StaticImageActivateScheduleActionSettings::StaticImageActivateScheduleActionSettings() : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fadeIn(0),
    m_fadeInHasBeenSet(false),
    m_fadeOut(0),
    m_fadeOutHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageX(0),
    m_imageXHasBeenSet(false),
    m_imageY(0),
    m_imageYHasBeenSet(false),
    m_layer(0),
    m_layerHasBeenSet(false),
    m_opacity(0),
    m_opacityHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
}

StaticImageActivateScheduleActionSettings::StaticImageActivateScheduleActionSettings(JsonView jsonValue) : 
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fadeIn(0),
    m_fadeInHasBeenSet(false),
    m_fadeOut(0),
    m_fadeOutHasBeenSet(false),
    m_height(0),
    m_heightHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_imageX(0),
    m_imageXHasBeenSet(false),
    m_imageY(0),
    m_imageYHasBeenSet(false),
    m_layer(0),
    m_layerHasBeenSet(false),
    m_opacity(0),
    m_opacityHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

StaticImageActivateScheduleActionSettings& StaticImageActivateScheduleActionSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("duration"))
  {
    m_duration = jsonValue.GetInteger("duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fadeIn"))
  {
    m_fadeIn = jsonValue.GetInteger("fadeIn");

    m_fadeInHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fadeOut"))
  {
    m_fadeOut = jsonValue.GetInteger("fadeOut");

    m_fadeOutHasBeenSet = true;
  }

  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetObject("image");

    m_imageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageX"))
  {
    m_imageX = jsonValue.GetInteger("imageX");

    m_imageXHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageY"))
  {
    m_imageY = jsonValue.GetInteger("imageY");

    m_imageYHasBeenSet = true;
  }

  if(jsonValue.ValueExists("layer"))
  {
    m_layer = jsonValue.GetInteger("layer");

    m_layerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("opacity"))
  {
    m_opacity = jsonValue.GetInteger("opacity");

    m_opacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue StaticImageActivateScheduleActionSettings::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("duration", m_duration);

  }

  if(m_fadeInHasBeenSet)
  {
   payload.WithInteger("fadeIn", m_fadeIn);

  }

  if(m_fadeOutHasBeenSet)
  {
   payload.WithInteger("fadeOut", m_fadeOut);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithObject("image", m_image.Jsonize());

  }

  if(m_imageXHasBeenSet)
  {
   payload.WithInteger("imageX", m_imageX);

  }

  if(m_imageYHasBeenSet)
  {
   payload.WithInteger("imageY", m_imageY);

  }

  if(m_layerHasBeenSet)
  {
   payload.WithInteger("layer", m_layer);

  }

  if(m_opacityHasBeenSet)
  {
   payload.WithInteger("opacity", m_opacity);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
