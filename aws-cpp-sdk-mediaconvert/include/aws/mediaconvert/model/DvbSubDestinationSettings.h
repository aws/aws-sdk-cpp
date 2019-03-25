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

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DvbSubtitleAlignment.h>
#include <aws/mediaconvert/model/DvbSubtitleBackgroundColor.h>
#include <aws/mediaconvert/model/DvbSubtitleFontColor.h>
#include <aws/mediaconvert/model/FontScript.h>
#include <aws/mediaconvert/model/DvbSubtitleOutlineColor.h>
#include <aws/mediaconvert/model/DvbSubtitleShadowColor.h>
#include <aws/mediaconvert/model/DvbSubtitleTeletextSpacing.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * DVB-Sub Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DvbSubDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API DvbSubDestinationSettings
  {
  public:
    DvbSubDestinationSettings();
    DvbSubDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    DvbSubDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If no explicit x_position or y_position is provided, setting alignment to
     * centered will place the captions at the bottom center of the output. Similarly,
     * setting a left alignment will align captions to the bottom left of the output.
     * If x and y positions are given in conjunction with the alignment parameter, the
     * font will be justified (either left or centered) relative to those coordinates.
     * This option is not valid for source captions that are STL, 608/embedded or
     * teletext. These source settings are already pre-defined by the caption stream.
     * All burn-in and DVB-Sub font settings must match.
     */
    inline const DvbSubtitleAlignment& GetAlignment() const{ return m_alignment; }

    /**
     * If no explicit x_position or y_position is provided, setting alignment to
     * centered will place the captions at the bottom center of the output. Similarly,
     * setting a left alignment will align captions to the bottom left of the output.
     * If x and y positions are given in conjunction with the alignment parameter, the
     * font will be justified (either left or centered) relative to those coordinates.
     * This option is not valid for source captions that are STL, 608/embedded or
     * teletext. These source settings are already pre-defined by the caption stream.
     * All burn-in and DVB-Sub font settings must match.
     */
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }

    /**
     * If no explicit x_position or y_position is provided, setting alignment to
     * centered will place the captions at the bottom center of the output. Similarly,
     * setting a left alignment will align captions to the bottom left of the output.
     * If x and y positions are given in conjunction with the alignment parameter, the
     * font will be justified (either left or centered) relative to those coordinates.
     * This option is not valid for source captions that are STL, 608/embedded or
     * teletext. These source settings are already pre-defined by the caption stream.
     * All burn-in and DVB-Sub font settings must match.
     */
    inline void SetAlignment(const DvbSubtitleAlignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }

    /**
     * If no explicit x_position or y_position is provided, setting alignment to
     * centered will place the captions at the bottom center of the output. Similarly,
     * setting a left alignment will align captions to the bottom left of the output.
     * If x and y positions are given in conjunction with the alignment parameter, the
     * font will be justified (either left or centered) relative to those coordinates.
     * This option is not valid for source captions that are STL, 608/embedded or
     * teletext. These source settings are already pre-defined by the caption stream.
     * All burn-in and DVB-Sub font settings must match.
     */
    inline void SetAlignment(DvbSubtitleAlignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }

    /**
     * If no explicit x_position or y_position is provided, setting alignment to
     * centered will place the captions at the bottom center of the output. Similarly,
     * setting a left alignment will align captions to the bottom left of the output.
     * If x and y positions are given in conjunction with the alignment parameter, the
     * font will be justified (either left or centered) relative to those coordinates.
     * This option is not valid for source captions that are STL, 608/embedded or
     * teletext. These source settings are already pre-defined by the caption stream.
     * All burn-in and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithAlignment(const DvbSubtitleAlignment& value) { SetAlignment(value); return *this;}

    /**
     * If no explicit x_position or y_position is provided, setting alignment to
     * centered will place the captions at the bottom center of the output. Similarly,
     * setting a left alignment will align captions to the bottom left of the output.
     * If x and y positions are given in conjunction with the alignment parameter, the
     * font will be justified (either left or centered) relative to those coordinates.
     * This option is not valid for source captions that are STL, 608/embedded or
     * teletext. These source settings are already pre-defined by the caption stream.
     * All burn-in and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithAlignment(DvbSubtitleAlignment&& value) { SetAlignment(std::move(value)); return *this;}


    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline const DvbSubtitleBackgroundColor& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline void SetBackgroundColor(const DvbSubtitleBackgroundColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline void SetBackgroundColor(DvbSubtitleBackgroundColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithBackgroundColor(const DvbSubtitleBackgroundColor& value) { SetBackgroundColor(value); return *this;}

    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithBackgroundColor(DvbSubtitleBackgroundColor&& value) { SetBackgroundColor(std::move(value)); return *this;}


    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter blank is equivalent to setting it to 0
     * (transparent). All burn-in and DVB-Sub font settings must match.
     */
    inline int GetBackgroundOpacity() const{ return m_backgroundOpacity; }

    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter blank is equivalent to setting it to 0
     * (transparent). All burn-in and DVB-Sub font settings must match.
     */
    inline bool BackgroundOpacityHasBeenSet() const { return m_backgroundOpacityHasBeenSet; }

    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter blank is equivalent to setting it to 0
     * (transparent). All burn-in and DVB-Sub font settings must match.
     */
    inline void SetBackgroundOpacity(int value) { m_backgroundOpacityHasBeenSet = true; m_backgroundOpacity = value; }

    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter blank is equivalent to setting it to 0
     * (transparent). All burn-in and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}


    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline const DvbSubtitleFontColor& GetFontColor() const{ return m_fontColor; }

    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }

    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline void SetFontColor(const DvbSubtitleFontColor& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }

    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline void SetFontColor(DvbSubtitleFontColor&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }

    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline DvbSubDestinationSettings& WithFontColor(const DvbSubtitleFontColor& value) { SetFontColor(value); return *this;}

    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline DvbSubDestinationSettings& WithFontColor(DvbSubtitleFontColor&& value) { SetFontColor(std::move(value)); return *this;}


    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
All burn-in and DVB-Sub font settings must match.
     */
    inline int GetFontOpacity() const{ return m_fontOpacity; }

    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
All burn-in and DVB-Sub font settings must match.
     */
    inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }

    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
All burn-in and DVB-Sub font settings must match.
     */
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }

    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
All burn-in and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}


    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline int GetFontResolution() const{ return m_fontResolution; }

    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline bool FontResolutionHasBeenSet() const { return m_fontResolutionHasBeenSet; }

    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline void SetFontResolution(int value) { m_fontResolutionHasBeenSet = true; m_fontResolution = value; }

    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithFontResolution(int value) { SetFontResolution(value); return *this;}


    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering DVB-Sub captions.
     */
    inline const FontScript& GetFontScript() const{ return m_fontScript; }

    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering DVB-Sub captions.
     */
    inline bool FontScriptHasBeenSet() const { return m_fontScriptHasBeenSet; }

    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering DVB-Sub captions.
     */
    inline void SetFontScript(const FontScript& value) { m_fontScriptHasBeenSet = true; m_fontScript = value; }

    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering DVB-Sub captions.
     */
    inline void SetFontScript(FontScript&& value) { m_fontScriptHasBeenSet = true; m_fontScript = std::move(value); }

    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering DVB-Sub captions.
     */
    inline DvbSubDestinationSettings& WithFontScript(const FontScript& value) { SetFontScript(value); return *this;}

    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering DVB-Sub captions.
     */
    inline DvbSubDestinationSettings& WithFontScript(FontScript&& value) { SetFontScript(std::move(value)); return *this;}


    /**
     * A positive integer indicates the exact font size in points. Set to 0 for
     * automatic font size selection. All burn-in and DVB-Sub font settings must match.
     */
    inline int GetFontSize() const{ return m_fontSize; }

    /**
     * A positive integer indicates the exact font size in points. Set to 0 for
     * automatic font size selection. All burn-in and DVB-Sub font settings must match.
     */
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }

    /**
     * A positive integer indicates the exact font size in points. Set to 0 for
     * automatic font size selection. All burn-in and DVB-Sub font settings must match.
     */
    inline void SetFontSize(int value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }

    /**
     * A positive integer indicates the exact font size in points. Set to 0 for
     * automatic font size selection. All burn-in and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithFontSize(int value) { SetFontSize(value); return *this;}


    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline const DvbSubtitleOutlineColor& GetOutlineColor() const{ return m_outlineColor; }

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline bool OutlineColorHasBeenSet() const { return m_outlineColorHasBeenSet; }

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline void SetOutlineColor(const DvbSubtitleOutlineColor& value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline void SetOutlineColor(DvbSubtitleOutlineColor&& value) { m_outlineColorHasBeenSet = true; m_outlineColor = std::move(value); }

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline DvbSubDestinationSettings& WithOutlineColor(const DvbSubtitleOutlineColor& value) { SetOutlineColor(value); return *this;}

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline DvbSubDestinationSettings& WithOutlineColor(DvbSubtitleOutlineColor&& value) { SetOutlineColor(std::move(value)); return *this;}


    /**
     * Specifies font outline size in pixels. This option is not valid for source
     * captions that are either 608/embedded or teletext. These source settings are
     * already pre-defined by the caption stream. All burn-in and DVB-Sub font settings
     * must match.
     */
    inline int GetOutlineSize() const{ return m_outlineSize; }

    /**
     * Specifies font outline size in pixels. This option is not valid for source
     * captions that are either 608/embedded or teletext. These source settings are
     * already pre-defined by the caption stream. All burn-in and DVB-Sub font settings
     * must match.
     */
    inline bool OutlineSizeHasBeenSet() const { return m_outlineSizeHasBeenSet; }

    /**
     * Specifies font outline size in pixels. This option is not valid for source
     * captions that are either 608/embedded or teletext. These source settings are
     * already pre-defined by the caption stream. All burn-in and DVB-Sub font settings
     * must match.
     */
    inline void SetOutlineSize(int value) { m_outlineSizeHasBeenSet = true; m_outlineSize = value; }

    /**
     * Specifies font outline size in pixels. This option is not valid for source
     * captions that are either 608/embedded or teletext. These source settings are
     * already pre-defined by the caption stream. All burn-in and DVB-Sub font settings
     * must match.
     */
    inline DvbSubDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}


    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
    inline const DvbSubtitleShadowColor& GetShadowColor() const{ return m_shadowColor; }

    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
    inline bool ShadowColorHasBeenSet() const { return m_shadowColorHasBeenSet; }

    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
    inline void SetShadowColor(const DvbSubtitleShadowColor& value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }

    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
    inline void SetShadowColor(DvbSubtitleShadowColor&& value) { m_shadowColorHasBeenSet = true; m_shadowColor = std::move(value); }

    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
    inline DvbSubDestinationSettings& WithShadowColor(const DvbSubtitleShadowColor& value) { SetShadowColor(value); return *this;}

    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
    inline DvbSubDestinationSettings& WithShadowColor(DvbSubtitleShadowColor&& value) { SetShadowColor(std::move(value)); return *this;}


    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter blank is equivalent to setting it to 0 (transparent). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline int GetShadowOpacity() const{ return m_shadowOpacity; }

    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter blank is equivalent to setting it to 0 (transparent). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline bool ShadowOpacityHasBeenSet() const { return m_shadowOpacityHasBeenSet; }

    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter blank is equivalent to setting it to 0 (transparent). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline void SetShadowOpacity(int value) { m_shadowOpacityHasBeenSet = true; m_shadowOpacity = value; }

    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter blank is equivalent to setting it to 0 (transparent). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithShadowOpacity(int value) { SetShadowOpacity(value); return *this;}


    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowXOffset() const{ return m_shadowXOffset; }

    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline bool ShadowXOffsetHasBeenSet() const { return m_shadowXOffsetHasBeenSet; }

    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline void SetShadowXOffset(int value) { m_shadowXOffsetHasBeenSet = true; m_shadowXOffset = value; }

    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithShadowXOffset(int value) { SetShadowXOffset(value); return *this;}


    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowYOffset() const{ return m_shadowYOffset; }

    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline bool ShadowYOffsetHasBeenSet() const { return m_shadowYOffsetHasBeenSet; }

    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }

    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}


    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
    inline const DvbSubtitleTeletextSpacing& GetTeletextSpacing() const{ return m_teletextSpacing; }

    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
    inline bool TeletextSpacingHasBeenSet() const { return m_teletextSpacingHasBeenSet; }

    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
    inline void SetTeletextSpacing(const DvbSubtitleTeletextSpacing& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = value; }

    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
    inline void SetTeletextSpacing(DvbSubtitleTeletextSpacing&& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = std::move(value); }

    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
    inline DvbSubDestinationSettings& WithTeletextSpacing(const DvbSubtitleTeletextSpacing& value) { SetTeletextSpacing(value); return *this;}

    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
    inline DvbSubDestinationSettings& WithTeletextSpacing(DvbSubtitleTeletextSpacing&& value) { SetTeletextSpacing(std::move(value)); return *this;}


    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit x_position is provided, the
     * horizontal caption position will be determined by the alignment parameter. This
     * option is not valid for source captions that are STL, 608/embedded or teletext.
     * These source settings are already pre-defined by the caption stream. All burn-in
     * and DVB-Sub font settings must match.
     */
    inline int GetXPosition() const{ return m_xPosition; }

    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit x_position is provided, the
     * horizontal caption position will be determined by the alignment parameter. This
     * option is not valid for source captions that are STL, 608/embedded or teletext.
     * These source settings are already pre-defined by the caption stream. All burn-in
     * and DVB-Sub font settings must match.
     */
    inline bool XPositionHasBeenSet() const { return m_xPositionHasBeenSet; }

    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit x_position is provided, the
     * horizontal caption position will be determined by the alignment parameter. This
     * option is not valid for source captions that are STL, 608/embedded or teletext.
     * These source settings are already pre-defined by the caption stream. All burn-in
     * and DVB-Sub font settings must match.
     */
    inline void SetXPosition(int value) { m_xPositionHasBeenSet = true; m_xPosition = value; }

    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit x_position is provided, the
     * horizontal caption position will be determined by the alignment parameter. This
     * option is not valid for source captions that are STL, 608/embedded or teletext.
     * These source settings are already pre-defined by the caption stream. All burn-in
     * and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithXPosition(int value) { SetXPosition(value); return *this;}


    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit y_position is provided, the caption will
     * be positioned towards the bottom of the output. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline int GetYPosition() const{ return m_yPosition; }

    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit y_position is provided, the caption will
     * be positioned towards the bottom of the output. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }

    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit y_position is provided, the caption will
     * be positioned towards the bottom of the output. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }

    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit y_position is provided, the caption will
     * be positioned towards the bottom of the output. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline DvbSubDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}

  private:

    DvbSubtitleAlignment m_alignment;
    bool m_alignmentHasBeenSet;

    DvbSubtitleBackgroundColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet;

    int m_backgroundOpacity;
    bool m_backgroundOpacityHasBeenSet;

    DvbSubtitleFontColor m_fontColor;
    bool m_fontColorHasBeenSet;

    int m_fontOpacity;
    bool m_fontOpacityHasBeenSet;

    int m_fontResolution;
    bool m_fontResolutionHasBeenSet;

    FontScript m_fontScript;
    bool m_fontScriptHasBeenSet;

    int m_fontSize;
    bool m_fontSizeHasBeenSet;

    DvbSubtitleOutlineColor m_outlineColor;
    bool m_outlineColorHasBeenSet;

    int m_outlineSize;
    bool m_outlineSizeHasBeenSet;

    DvbSubtitleShadowColor m_shadowColor;
    bool m_shadowColorHasBeenSet;

    int m_shadowOpacity;
    bool m_shadowOpacityHasBeenSet;

    int m_shadowXOffset;
    bool m_shadowXOffsetHasBeenSet;

    int m_shadowYOffset;
    bool m_shadowYOffsetHasBeenSet;

    DvbSubtitleTeletextSpacing m_teletextSpacing;
    bool m_teletextSpacingHasBeenSet;

    int m_xPosition;
    bool m_xPositionHasBeenSet;

    int m_yPosition;
    bool m_yPositionHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
