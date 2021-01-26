/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DvbSubDestinationSettings.h>
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

DvbSubDestinationSettings::DvbSubDestinationSettings() : 
    m_alignment(DvbSubtitleAlignment::NOT_SET),
    m_alignmentHasBeenSet(false),
    m_backgroundColor(DvbSubtitleBackgroundColor::NOT_SET),
    m_backgroundColorHasBeenSet(false),
    m_backgroundOpacity(0),
    m_backgroundOpacityHasBeenSet(false),
    m_fontColor(DvbSubtitleFontColor::NOT_SET),
    m_fontColorHasBeenSet(false),
    m_fontOpacity(0),
    m_fontOpacityHasBeenSet(false),
    m_fontResolution(0),
    m_fontResolutionHasBeenSet(false),
    m_fontScript(FontScript::NOT_SET),
    m_fontScriptHasBeenSet(false),
    m_fontSize(0),
    m_fontSizeHasBeenSet(false),
    m_outlineColor(DvbSubtitleOutlineColor::NOT_SET),
    m_outlineColorHasBeenSet(false),
    m_outlineSize(0),
    m_outlineSizeHasBeenSet(false),
    m_shadowColor(DvbSubtitleShadowColor::NOT_SET),
    m_shadowColorHasBeenSet(false),
    m_shadowOpacity(0),
    m_shadowOpacityHasBeenSet(false),
    m_shadowXOffset(0),
    m_shadowXOffsetHasBeenSet(false),
    m_shadowYOffset(0),
    m_shadowYOffsetHasBeenSet(false),
    m_subtitlingType(DvbSubtitlingType::NOT_SET),
    m_subtitlingTypeHasBeenSet(false),
    m_teletextSpacing(DvbSubtitleTeletextSpacing::NOT_SET),
    m_teletextSpacingHasBeenSet(false),
    m_xPosition(0),
    m_xPositionHasBeenSet(false),
    m_yPosition(0),
    m_yPositionHasBeenSet(false)
{
}

DvbSubDestinationSettings::DvbSubDestinationSettings(JsonView jsonValue) : 
    m_alignment(DvbSubtitleAlignment::NOT_SET),
    m_alignmentHasBeenSet(false),
    m_backgroundColor(DvbSubtitleBackgroundColor::NOT_SET),
    m_backgroundColorHasBeenSet(false),
    m_backgroundOpacity(0),
    m_backgroundOpacityHasBeenSet(false),
    m_fontColor(DvbSubtitleFontColor::NOT_SET),
    m_fontColorHasBeenSet(false),
    m_fontOpacity(0),
    m_fontOpacityHasBeenSet(false),
    m_fontResolution(0),
    m_fontResolutionHasBeenSet(false),
    m_fontScript(FontScript::NOT_SET),
    m_fontScriptHasBeenSet(false),
    m_fontSize(0),
    m_fontSizeHasBeenSet(false),
    m_outlineColor(DvbSubtitleOutlineColor::NOT_SET),
    m_outlineColorHasBeenSet(false),
    m_outlineSize(0),
    m_outlineSizeHasBeenSet(false),
    m_shadowColor(DvbSubtitleShadowColor::NOT_SET),
    m_shadowColorHasBeenSet(false),
    m_shadowOpacity(0),
    m_shadowOpacityHasBeenSet(false),
    m_shadowXOffset(0),
    m_shadowXOffsetHasBeenSet(false),
    m_shadowYOffset(0),
    m_shadowYOffsetHasBeenSet(false),
    m_subtitlingType(DvbSubtitlingType::NOT_SET),
    m_subtitlingTypeHasBeenSet(false),
    m_teletextSpacing(DvbSubtitleTeletextSpacing::NOT_SET),
    m_teletextSpacingHasBeenSet(false),
    m_xPosition(0),
    m_xPositionHasBeenSet(false),
    m_yPosition(0),
    m_yPositionHasBeenSet(false)
{
  *this = jsonValue;
}

DvbSubDestinationSettings& DvbSubDestinationSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alignment"))
  {
    m_alignment = DvbSubtitleAlignmentMapper::GetDvbSubtitleAlignmentForName(jsonValue.GetString("alignment"));

    m_alignmentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backgroundColor"))
  {
    m_backgroundColor = DvbSubtitleBackgroundColorMapper::GetDvbSubtitleBackgroundColorForName(jsonValue.GetString("backgroundColor"));

    m_backgroundColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("backgroundOpacity"))
  {
    m_backgroundOpacity = jsonValue.GetInteger("backgroundOpacity");

    m_backgroundOpacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fontColor"))
  {
    m_fontColor = DvbSubtitleFontColorMapper::GetDvbSubtitleFontColorForName(jsonValue.GetString("fontColor"));

    m_fontColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fontOpacity"))
  {
    m_fontOpacity = jsonValue.GetInteger("fontOpacity");

    m_fontOpacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fontResolution"))
  {
    m_fontResolution = jsonValue.GetInteger("fontResolution");

    m_fontResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fontScript"))
  {
    m_fontScript = FontScriptMapper::GetFontScriptForName(jsonValue.GetString("fontScript"));

    m_fontScriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fontSize"))
  {
    m_fontSize = jsonValue.GetInteger("fontSize");

    m_fontSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outlineColor"))
  {
    m_outlineColor = DvbSubtitleOutlineColorMapper::GetDvbSubtitleOutlineColorForName(jsonValue.GetString("outlineColor"));

    m_outlineColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outlineSize"))
  {
    m_outlineSize = jsonValue.GetInteger("outlineSize");

    m_outlineSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shadowColor"))
  {
    m_shadowColor = DvbSubtitleShadowColorMapper::GetDvbSubtitleShadowColorForName(jsonValue.GetString("shadowColor"));

    m_shadowColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shadowOpacity"))
  {
    m_shadowOpacity = jsonValue.GetInteger("shadowOpacity");

    m_shadowOpacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shadowXOffset"))
  {
    m_shadowXOffset = jsonValue.GetInteger("shadowXOffset");

    m_shadowXOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("shadowYOffset"))
  {
    m_shadowYOffset = jsonValue.GetInteger("shadowYOffset");

    m_shadowYOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subtitlingType"))
  {
    m_subtitlingType = DvbSubtitlingTypeMapper::GetDvbSubtitlingTypeForName(jsonValue.GetString("subtitlingType"));

    m_subtitlingTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("teletextSpacing"))
  {
    m_teletextSpacing = DvbSubtitleTeletextSpacingMapper::GetDvbSubtitleTeletextSpacingForName(jsonValue.GetString("teletextSpacing"));

    m_teletextSpacingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("xPosition"))
  {
    m_xPosition = jsonValue.GetInteger("xPosition");

    m_xPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("yPosition"))
  {
    m_yPosition = jsonValue.GetInteger("yPosition");

    m_yPositionHasBeenSet = true;
  }

  return *this;
}

JsonValue DvbSubDestinationSettings::Jsonize() const
{
  JsonValue payload;

  if(m_alignmentHasBeenSet)
  {
   payload.WithString("alignment", DvbSubtitleAlignmentMapper::GetNameForDvbSubtitleAlignment(m_alignment));
  }

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithString("backgroundColor", DvbSubtitleBackgroundColorMapper::GetNameForDvbSubtitleBackgroundColor(m_backgroundColor));
  }

  if(m_backgroundOpacityHasBeenSet)
  {
   payload.WithInteger("backgroundOpacity", m_backgroundOpacity);

  }

  if(m_fontColorHasBeenSet)
  {
   payload.WithString("fontColor", DvbSubtitleFontColorMapper::GetNameForDvbSubtitleFontColor(m_fontColor));
  }

  if(m_fontOpacityHasBeenSet)
  {
   payload.WithInteger("fontOpacity", m_fontOpacity);

  }

  if(m_fontResolutionHasBeenSet)
  {
   payload.WithInteger("fontResolution", m_fontResolution);

  }

  if(m_fontScriptHasBeenSet)
  {
   payload.WithString("fontScript", FontScriptMapper::GetNameForFontScript(m_fontScript));
  }

  if(m_fontSizeHasBeenSet)
  {
   payload.WithInteger("fontSize", m_fontSize);

  }

  if(m_outlineColorHasBeenSet)
  {
   payload.WithString("outlineColor", DvbSubtitleOutlineColorMapper::GetNameForDvbSubtitleOutlineColor(m_outlineColor));
  }

  if(m_outlineSizeHasBeenSet)
  {
   payload.WithInteger("outlineSize", m_outlineSize);

  }

  if(m_shadowColorHasBeenSet)
  {
   payload.WithString("shadowColor", DvbSubtitleShadowColorMapper::GetNameForDvbSubtitleShadowColor(m_shadowColor));
  }

  if(m_shadowOpacityHasBeenSet)
  {
   payload.WithInteger("shadowOpacity", m_shadowOpacity);

  }

  if(m_shadowXOffsetHasBeenSet)
  {
   payload.WithInteger("shadowXOffset", m_shadowXOffset);

  }

  if(m_shadowYOffsetHasBeenSet)
  {
   payload.WithInteger("shadowYOffset", m_shadowYOffset);

  }

  if(m_subtitlingTypeHasBeenSet)
  {
   payload.WithString("subtitlingType", DvbSubtitlingTypeMapper::GetNameForDvbSubtitlingType(m_subtitlingType));
  }

  if(m_teletextSpacingHasBeenSet)
  {
   payload.WithString("teletextSpacing", DvbSubtitleTeletextSpacingMapper::GetNameForDvbSubtitleTeletextSpacing(m_teletextSpacing));
  }

  if(m_xPositionHasBeenSet)
  {
   payload.WithInteger("xPosition", m_xPosition);

  }

  if(m_yPositionHasBeenSet)
  {
   payload.WithInteger("yPosition", m_yPosition);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
