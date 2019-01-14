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
#include <aws/mediaconvert/model/BurninSubtitleAlignment.h>
#include <aws/mediaconvert/model/BurninSubtitleBackgroundColor.h>
#include <aws/mediaconvert/model/BurninSubtitleFontColor.h>
#include <aws/mediaconvert/model/FontScript.h>
#include <aws/mediaconvert/model/BurninSubtitleOutlineColor.h>
#include <aws/mediaconvert/model/BurninSubtitleShadowColor.h>
#include <aws/mediaconvert/model/BurninSubtitleTeletextSpacing.h>
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
   * Burn-In Destination Settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/BurninDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API BurninDestinationSettings
  {
  public:
    BurninDestinationSettings();
    BurninDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    BurninDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const BurninSubtitleAlignment& GetAlignment() const{ return m_alignment; }

    
    inline void SetAlignment(const BurninSubtitleAlignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }

    
    inline void SetAlignment(BurninSubtitleAlignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }

    
    inline BurninDestinationSettings& WithAlignment(const BurninSubtitleAlignment& value) { SetAlignment(value); return *this;}

    
    inline BurninDestinationSettings& WithAlignment(BurninSubtitleAlignment&& value) { SetAlignment(std::move(value)); return *this;}


    
    inline const BurninSubtitleBackgroundColor& GetBackgroundColor() const{ return m_backgroundColor; }

    
    inline void SetBackgroundColor(const BurninSubtitleBackgroundColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    
    inline void SetBackgroundColor(BurninSubtitleBackgroundColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    
    inline BurninDestinationSettings& WithBackgroundColor(const BurninSubtitleBackgroundColor& value) { SetBackgroundColor(value); return *this;}

    
    inline BurninDestinationSettings& WithBackgroundColor(BurninSubtitleBackgroundColor&& value) { SetBackgroundColor(std::move(value)); return *this;}


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
    inline void SetBackgroundOpacity(int value) { m_backgroundOpacityHasBeenSet = true; m_backgroundOpacity = value; }

    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter blank is equivalent to setting it to 0
     * (transparent). All burn-in and DVB-Sub font settings must match.
     */
    inline BurninDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}


    
    inline const BurninSubtitleFontColor& GetFontColor() const{ return m_fontColor; }

    
    inline void SetFontColor(const BurninSubtitleFontColor& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }

    
    inline void SetFontColor(BurninSubtitleFontColor&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }

    
    inline BurninDestinationSettings& WithFontColor(const BurninSubtitleFontColor& value) { SetFontColor(value); return *this;}

    
    inline BurninDestinationSettings& WithFontColor(BurninSubtitleFontColor&& value) { SetFontColor(std::move(value)); return *this;}


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
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }

    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
All burn-in and DVB-Sub font settings must match.
     */
    inline BurninDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}


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
    inline void SetFontResolution(int value) { m_fontResolutionHasBeenSet = true; m_fontResolution = value; }

    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline BurninDestinationSettings& WithFontResolution(int value) { SetFontResolution(value); return *this;}


    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering burn-in captions.
     */
    inline const FontScript& GetFontScript() const{ return m_fontScript; }

    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering burn-in captions.
     */
    inline void SetFontScript(const FontScript& value) { m_fontScriptHasBeenSet = true; m_fontScript = value; }

    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering burn-in captions.
     */
    inline void SetFontScript(FontScript&& value) { m_fontScriptHasBeenSet = true; m_fontScript = std::move(value); }

    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering burn-in captions.
     */
    inline BurninDestinationSettings& WithFontScript(const FontScript& value) { SetFontScript(value); return *this;}

    /**
     * Provide the font script, using an ISO 15924 script code, if the LanguageCode is
     * not sufficient for determining the script type. Where LanguageCode or
     * CustomLanguageCode is sufficient, use "AUTOMATIC" or leave unset. This is used
     * to help determine the appropriate font for rendering burn-in captions.
     */
    inline BurninDestinationSettings& WithFontScript(FontScript&& value) { SetFontScript(std::move(value)); return *this;}


    /**
     * A positive integer indicates the exact font size in points. Set to 0 for
     * automatic font size selection. All burn-in and DVB-Sub font settings must match.
     */
    inline int GetFontSize() const{ return m_fontSize; }

    /**
     * A positive integer indicates the exact font size in points. Set to 0 for
     * automatic font size selection. All burn-in and DVB-Sub font settings must match.
     */
    inline void SetFontSize(int value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }

    /**
     * A positive integer indicates the exact font size in points. Set to 0 for
     * automatic font size selection. All burn-in and DVB-Sub font settings must match.
     */
    inline BurninDestinationSettings& WithFontSize(int value) { SetFontSize(value); return *this;}


    
    inline const BurninSubtitleOutlineColor& GetOutlineColor() const{ return m_outlineColor; }

    
    inline void SetOutlineColor(const BurninSubtitleOutlineColor& value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }

    
    inline void SetOutlineColor(BurninSubtitleOutlineColor&& value) { m_outlineColorHasBeenSet = true; m_outlineColor = std::move(value); }

    
    inline BurninDestinationSettings& WithOutlineColor(const BurninSubtitleOutlineColor& value) { SetOutlineColor(value); return *this;}

    
    inline BurninDestinationSettings& WithOutlineColor(BurninSubtitleOutlineColor&& value) { SetOutlineColor(std::move(value)); return *this;}


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
    inline void SetOutlineSize(int value) { m_outlineSizeHasBeenSet = true; m_outlineSize = value; }

    /**
     * Specifies font outline size in pixels. This option is not valid for source
     * captions that are either 608/embedded or teletext. These source settings are
     * already pre-defined by the caption stream. All burn-in and DVB-Sub font settings
     * must match.
     */
    inline BurninDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}


    
    inline const BurninSubtitleShadowColor& GetShadowColor() const{ return m_shadowColor; }

    
    inline void SetShadowColor(const BurninSubtitleShadowColor& value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }

    
    inline void SetShadowColor(BurninSubtitleShadowColor&& value) { m_shadowColorHasBeenSet = true; m_shadowColor = std::move(value); }

    
    inline BurninDestinationSettings& WithShadowColor(const BurninSubtitleShadowColor& value) { SetShadowColor(value); return *this;}

    
    inline BurninDestinationSettings& WithShadowColor(BurninSubtitleShadowColor&& value) { SetShadowColor(std::move(value)); return *this;}


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
    inline void SetShadowOpacity(int value) { m_shadowOpacityHasBeenSet = true; m_shadowOpacity = value; }

    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter blank is equivalent to setting it to 0 (transparent). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline BurninDestinationSettings& WithShadowOpacity(int value) { SetShadowOpacity(value); return *this;}


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
    inline void SetShadowXOffset(int value) { m_shadowXOffsetHasBeenSet = true; m_shadowXOffset = value; }

    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline BurninDestinationSettings& WithShadowXOffset(int value) { SetShadowXOffset(value); return *this;}


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
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }

    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text. All
     * burn-in and DVB-Sub font settings must match.
     */
    inline BurninDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}


    
    inline const BurninSubtitleTeletextSpacing& GetTeletextSpacing() const{ return m_teletextSpacing; }

    
    inline void SetTeletextSpacing(const BurninSubtitleTeletextSpacing& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = value; }

    
    inline void SetTeletextSpacing(BurninSubtitleTeletextSpacing&& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = std::move(value); }

    
    inline BurninDestinationSettings& WithTeletextSpacing(const BurninSubtitleTeletextSpacing& value) { SetTeletextSpacing(value); return *this;}

    
    inline BurninDestinationSettings& WithTeletextSpacing(BurninSubtitleTeletextSpacing&& value) { SetTeletextSpacing(std::move(value)); return *this;}


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
    inline BurninDestinationSettings& WithXPosition(int value) { SetXPosition(value); return *this;}


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
    inline BurninDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}

  private:

    BurninSubtitleAlignment m_alignment;
    bool m_alignmentHasBeenSet;

    BurninSubtitleBackgroundColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet;

    int m_backgroundOpacity;
    bool m_backgroundOpacityHasBeenSet;

    BurninSubtitleFontColor m_fontColor;
    bool m_fontColorHasBeenSet;

    int m_fontOpacity;
    bool m_fontOpacityHasBeenSet;

    int m_fontResolution;
    bool m_fontResolutionHasBeenSet;

    FontScript m_fontScript;
    bool m_fontScriptHasBeenSet;

    int m_fontSize;
    bool m_fontSizeHasBeenSet;

    BurninSubtitleOutlineColor m_outlineColor;
    bool m_outlineColorHasBeenSet;

    int m_outlineSize;
    bool m_outlineSizeHasBeenSet;

    BurninSubtitleShadowColor m_shadowColor;
    bool m_shadowColorHasBeenSet;

    int m_shadowOpacity;
    bool m_shadowOpacityHasBeenSet;

    int m_shadowXOffset;
    bool m_shadowXOffsetHasBeenSet;

    int m_shadowYOffset;
    bool m_shadowYOffsetHasBeenSet;

    BurninSubtitleTeletextSpacing m_teletextSpacing;
    bool m_teletextSpacingHasBeenSet;

    int m_xPosition;
    bool m_xPositionHasBeenSet;

    int m_yPosition;
    bool m_yPositionHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
