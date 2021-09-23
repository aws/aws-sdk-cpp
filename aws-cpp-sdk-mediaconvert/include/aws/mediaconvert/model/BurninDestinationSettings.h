/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/BurninSubtitleAlignment.h>
#include <aws/mediaconvert/model/BurninSubtitleApplyFontColor.h>
#include <aws/mediaconvert/model/BurninSubtitleBackgroundColor.h>
#include <aws/mediaconvert/model/BurninSubtitleFallbackFont.h>
#include <aws/mediaconvert/model/BurninSubtitleFontColor.h>
#include <aws/mediaconvert/model/FontScript.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/BurninSubtitleOutlineColor.h>
#include <aws/mediaconvert/model/BurninSubtitleShadowColor.h>
#include <aws/mediaconvert/model/BurnInSubtitleStylePassthrough.h>
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
   * Settings related to burn-in captions. Set up burn-in captions in the same output
   * as your video. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/burn-in-output-captions.html.
   * When you work directly in your JSON job specification, include this object and
   * any required children when you set destinationType to BURN_IN.<p><h3>See
   * Also:</h3>   <a
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
    inline const BurninSubtitleAlignment& GetAlignment() const{ return m_alignment; }

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
    inline void SetAlignment(const BurninSubtitleAlignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }

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
    inline void SetAlignment(BurninSubtitleAlignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }

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
    inline BurninDestinationSettings& WithAlignment(const BurninSubtitleAlignment& value) { SetAlignment(value); return *this;}

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
    inline BurninDestinationSettings& WithAlignment(BurninSubtitleAlignment&& value) { SetAlignment(std::move(value)); return *this;}


    /**
     * Ignore this setting unless your input captions are STL, any type of 608,
     * teletext, or TTML, and your output captions are burned in. Specify how the
     * service applies the color specified in the setting Font color
     * (BurninSubtitleFontColor). By default, this color is white. When you choose
     * WHITE_TEXT_ONLY, the service uses the specified font color only for text that is
     * white in the input. When you choose ALL_TEXT, the service uses the specified
     * font color for all output captions text. If you leave both settings at their
     * default value, your output font color is the same as your input font color.
     */
    inline const BurninSubtitleApplyFontColor& GetApplyFontColor() const{ return m_applyFontColor; }

    /**
     * Ignore this setting unless your input captions are STL, any type of 608,
     * teletext, or TTML, and your output captions are burned in. Specify how the
     * service applies the color specified in the setting Font color
     * (BurninSubtitleFontColor). By default, this color is white. When you choose
     * WHITE_TEXT_ONLY, the service uses the specified font color only for text that is
     * white in the input. When you choose ALL_TEXT, the service uses the specified
     * font color for all output captions text. If you leave both settings at their
     * default value, your output font color is the same as your input font color.
     */
    inline bool ApplyFontColorHasBeenSet() const { return m_applyFontColorHasBeenSet; }

    /**
     * Ignore this setting unless your input captions are STL, any type of 608,
     * teletext, or TTML, and your output captions are burned in. Specify how the
     * service applies the color specified in the setting Font color
     * (BurninSubtitleFontColor). By default, this color is white. When you choose
     * WHITE_TEXT_ONLY, the service uses the specified font color only for text that is
     * white in the input. When you choose ALL_TEXT, the service uses the specified
     * font color for all output captions text. If you leave both settings at their
     * default value, your output font color is the same as your input font color.
     */
    inline void SetApplyFontColor(const BurninSubtitleApplyFontColor& value) { m_applyFontColorHasBeenSet = true; m_applyFontColor = value; }

    /**
     * Ignore this setting unless your input captions are STL, any type of 608,
     * teletext, or TTML, and your output captions are burned in. Specify how the
     * service applies the color specified in the setting Font color
     * (BurninSubtitleFontColor). By default, this color is white. When you choose
     * WHITE_TEXT_ONLY, the service uses the specified font color only for text that is
     * white in the input. When you choose ALL_TEXT, the service uses the specified
     * font color for all output captions text. If you leave both settings at their
     * default value, your output font color is the same as your input font color.
     */
    inline void SetApplyFontColor(BurninSubtitleApplyFontColor&& value) { m_applyFontColorHasBeenSet = true; m_applyFontColor = std::move(value); }

    /**
     * Ignore this setting unless your input captions are STL, any type of 608,
     * teletext, or TTML, and your output captions are burned in. Specify how the
     * service applies the color specified in the setting Font color
     * (BurninSubtitleFontColor). By default, this color is white. When you choose
     * WHITE_TEXT_ONLY, the service uses the specified font color only for text that is
     * white in the input. When you choose ALL_TEXT, the service uses the specified
     * font color for all output captions text. If you leave both settings at their
     * default value, your output font color is the same as your input font color.
     */
    inline BurninDestinationSettings& WithApplyFontColor(const BurninSubtitleApplyFontColor& value) { SetApplyFontColor(value); return *this;}

    /**
     * Ignore this setting unless your input captions are STL, any type of 608,
     * teletext, or TTML, and your output captions are burned in. Specify how the
     * service applies the color specified in the setting Font color
     * (BurninSubtitleFontColor). By default, this color is white. When you choose
     * WHITE_TEXT_ONLY, the service uses the specified font color only for text that is
     * white in the input. When you choose ALL_TEXT, the service uses the specified
     * font color for all output captions text. If you leave both settings at their
     * default value, your output font color is the same as your input font color.
     */
    inline BurninDestinationSettings& WithApplyFontColor(BurninSubtitleApplyFontColor&& value) { SetApplyFontColor(std::move(value)); return *this;}


    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline const BurninSubtitleBackgroundColor& GetBackgroundColor() const{ return m_backgroundColor; }

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
    inline void SetBackgroundColor(const BurninSubtitleBackgroundColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline void SetBackgroundColor(BurninSubtitleBackgroundColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
    inline BurninDestinationSettings& WithBackgroundColor(const BurninSubtitleBackgroundColor& value) { SetBackgroundColor(value); return *this;}

    /**
     * Specifies the color of the rectangle behind the captions.
All burn-in and
     * DVB-Sub font settings must match.
     */
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
    inline BurninDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}


    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * keep the default value, Best match (BEST_MATCH), MediaConvert uses a supported
     * font that most closely matches the font that your input captions specify. When
     * there are multiple unsupported fonts in your input captions, MediaConvert
     * matches each font with the supported font that matches best. When you explicitly
     * choose a replacement font, MediaConvert uses that font to replace all
     * unsupported fonts from your input.
     */
    inline const BurninSubtitleFallbackFont& GetFallbackFont() const{ return m_fallbackFont; }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * keep the default value, Best match (BEST_MATCH), MediaConvert uses a supported
     * font that most closely matches the font that your input captions specify. When
     * there are multiple unsupported fonts in your input captions, MediaConvert
     * matches each font with the supported font that matches best. When you explicitly
     * choose a replacement font, MediaConvert uses that font to replace all
     * unsupported fonts from your input.
     */
    inline bool FallbackFontHasBeenSet() const { return m_fallbackFontHasBeenSet; }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * keep the default value, Best match (BEST_MATCH), MediaConvert uses a supported
     * font that most closely matches the font that your input captions specify. When
     * there are multiple unsupported fonts in your input captions, MediaConvert
     * matches each font with the supported font that matches best. When you explicitly
     * choose a replacement font, MediaConvert uses that font to replace all
     * unsupported fonts from your input.
     */
    inline void SetFallbackFont(const BurninSubtitleFallbackFont& value) { m_fallbackFontHasBeenSet = true; m_fallbackFont = value; }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * keep the default value, Best match (BEST_MATCH), MediaConvert uses a supported
     * font that most closely matches the font that your input captions specify. When
     * there are multiple unsupported fonts in your input captions, MediaConvert
     * matches each font with the supported font that matches best. When you explicitly
     * choose a replacement font, MediaConvert uses that font to replace all
     * unsupported fonts from your input.
     */
    inline void SetFallbackFont(BurninSubtitleFallbackFont&& value) { m_fallbackFontHasBeenSet = true; m_fallbackFont = std::move(value); }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * keep the default value, Best match (BEST_MATCH), MediaConvert uses a supported
     * font that most closely matches the font that your input captions specify. When
     * there are multiple unsupported fonts in your input captions, MediaConvert
     * matches each font with the supported font that matches best. When you explicitly
     * choose a replacement font, MediaConvert uses that font to replace all
     * unsupported fonts from your input.
     */
    inline BurninDestinationSettings& WithFallbackFont(const BurninSubtitleFallbackFont& value) { SetFallbackFont(value); return *this;}

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * keep the default value, Best match (BEST_MATCH), MediaConvert uses a supported
     * font that most closely matches the font that your input captions specify. When
     * there are multiple unsupported fonts in your input captions, MediaConvert
     * matches each font with the supported font that matches best. When you explicitly
     * choose a replacement font, MediaConvert uses that font to replace all
     * unsupported fonts from your input.
     */
    inline BurninDestinationSettings& WithFallbackFont(BurninSubtitleFallbackFont&& value) { SetFallbackFont(std::move(value)); return *this;}


    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline const BurninSubtitleFontColor& GetFontColor() const{ return m_fontColor; }

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
    inline void SetFontColor(const BurninSubtitleFontColor& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }

    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline void SetFontColor(BurninSubtitleFontColor&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }

    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
    inline BurninDestinationSettings& WithFontColor(const BurninSubtitleFontColor& value) { SetFontColor(value); return *this;}

    /**
     * Specifies the color of the burned-in captions. This option is not valid for
     * source captions that are STL, 608/embedded or teletext. These source settings
     * are already pre-defined by the caption stream. All burn-in and DVB-Sub font
     * settings must match.
     */
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
    inline bool FontScriptHasBeenSet() const { return m_fontScriptHasBeenSet; }

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
    inline BurninDestinationSettings& WithFontSize(int value) { SetFontSize(value); return *this;}


    /**
     * Ignore this setting unless your BurninSubtitleFontColor setting is HEX. Format
     * is six or eight hexidecimal digits, representing the red, green, and blue
     * components, with the two extra digits used for an optional alpha value. For
     * example a value of 1122AABB is a red value of 0x11, a green value of 0x22, a
     * blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline const Aws::String& GetHexFontColor() const{ return m_hexFontColor; }

    /**
     * Ignore this setting unless your BurninSubtitleFontColor setting is HEX. Format
     * is six or eight hexidecimal digits, representing the red, green, and blue
     * components, with the two extra digits used for an optional alpha value. For
     * example a value of 1122AABB is a red value of 0x11, a green value of 0x22, a
     * blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline bool HexFontColorHasBeenSet() const { return m_hexFontColorHasBeenSet; }

    /**
     * Ignore this setting unless your BurninSubtitleFontColor setting is HEX. Format
     * is six or eight hexidecimal digits, representing the red, green, and blue
     * components, with the two extra digits used for an optional alpha value. For
     * example a value of 1122AABB is a red value of 0x11, a green value of 0x22, a
     * blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline void SetHexFontColor(const Aws::String& value) { m_hexFontColorHasBeenSet = true; m_hexFontColor = value; }

    /**
     * Ignore this setting unless your BurninSubtitleFontColor setting is HEX. Format
     * is six or eight hexidecimal digits, representing the red, green, and blue
     * components, with the two extra digits used for an optional alpha value. For
     * example a value of 1122AABB is a red value of 0x11, a green value of 0x22, a
     * blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline void SetHexFontColor(Aws::String&& value) { m_hexFontColorHasBeenSet = true; m_hexFontColor = std::move(value); }

    /**
     * Ignore this setting unless your BurninSubtitleFontColor setting is HEX. Format
     * is six or eight hexidecimal digits, representing the red, green, and blue
     * components, with the two extra digits used for an optional alpha value. For
     * example a value of 1122AABB is a red value of 0x11, a green value of 0x22, a
     * blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline void SetHexFontColor(const char* value) { m_hexFontColorHasBeenSet = true; m_hexFontColor.assign(value); }

    /**
     * Ignore this setting unless your BurninSubtitleFontColor setting is HEX. Format
     * is six or eight hexidecimal digits, representing the red, green, and blue
     * components, with the two extra digits used for an optional alpha value. For
     * example a value of 1122AABB is a red value of 0x11, a green value of 0x22, a
     * blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline BurninDestinationSettings& WithHexFontColor(const Aws::String& value) { SetHexFontColor(value); return *this;}

    /**
     * Ignore this setting unless your BurninSubtitleFontColor setting is HEX. Format
     * is six or eight hexidecimal digits, representing the red, green, and blue
     * components, with the two extra digits used for an optional alpha value. For
     * example a value of 1122AABB is a red value of 0x11, a green value of 0x22, a
     * blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline BurninDestinationSettings& WithHexFontColor(Aws::String&& value) { SetHexFontColor(std::move(value)); return *this;}

    /**
     * Ignore this setting unless your BurninSubtitleFontColor setting is HEX. Format
     * is six or eight hexidecimal digits, representing the red, green, and blue
     * components, with the two extra digits used for an optional alpha value. For
     * example a value of 1122AABB is a red value of 0x11, a green value of 0x22, a
     * blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline BurninDestinationSettings& WithHexFontColor(const char* value) { SetHexFontColor(value); return *this;}


    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline const BurninSubtitleOutlineColor& GetOutlineColor() const{ return m_outlineColor; }

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
    inline void SetOutlineColor(const BurninSubtitleOutlineColor& value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline void SetOutlineColor(BurninSubtitleOutlineColor&& value) { m_outlineColorHasBeenSet = true; m_outlineColor = std::move(value); }

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline BurninDestinationSettings& WithOutlineColor(const BurninSubtitleOutlineColor& value) { SetOutlineColor(value); return *this;}

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
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
    inline BurninDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}


    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
    inline const BurninSubtitleShadowColor& GetShadowColor() const{ return m_shadowColor; }

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
    inline void SetShadowColor(const BurninSubtitleShadowColor& value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }

    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
    inline void SetShadowColor(BurninSubtitleShadowColor&& value) { m_shadowColorHasBeenSet = true; m_shadowColor = std::move(value); }

    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
    inline BurninDestinationSettings& WithShadowColor(const BurninSubtitleShadowColor& value) { SetShadowColor(value); return *this;}

    /**
     * Specifies the color of the shadow cast by the captions.
All burn-in and DVB-Sub
     * font settings must match.
     */
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
    inline BurninDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}


    /**
     * Ignore this setting unless your output captions are burned in. Choose which set
     * of style and position values the service applies to your output captions. When
     * you choose ENABLED, the service uses the input style and position information
     * from your input. When you choose DISABLED, the service uses any style values
     * that you specify in your output settings. If you don't specify values, the
     * service uses default style and position values. When you choose DISABLED, the
     * service ignores all style and position values from your input.
     */
    inline const BurnInSubtitleStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Ignore this setting unless your output captions are burned in. Choose which set
     * of style and position values the service applies to your output captions. When
     * you choose ENABLED, the service uses the input style and position information
     * from your input. When you choose DISABLED, the service uses any style values
     * that you specify in your output settings. If you don't specify values, the
     * service uses default style and position values. When you choose DISABLED, the
     * service ignores all style and position values from your input.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Ignore this setting unless your output captions are burned in. Choose which set
     * of style and position values the service applies to your output captions. When
     * you choose ENABLED, the service uses the input style and position information
     * from your input. When you choose DISABLED, the service uses any style values
     * that you specify in your output settings. If you don't specify values, the
     * service uses default style and position values. When you choose DISABLED, the
     * service ignores all style and position values from your input.
     */
    inline void SetStylePassthrough(const BurnInSubtitleStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Ignore this setting unless your output captions are burned in. Choose which set
     * of style and position values the service applies to your output captions. When
     * you choose ENABLED, the service uses the input style and position information
     * from your input. When you choose DISABLED, the service uses any style values
     * that you specify in your output settings. If you don't specify values, the
     * service uses default style and position values. When you choose DISABLED, the
     * service ignores all style and position values from your input.
     */
    inline void SetStylePassthrough(BurnInSubtitleStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Ignore this setting unless your output captions are burned in. Choose which set
     * of style and position values the service applies to your output captions. When
     * you choose ENABLED, the service uses the input style and position information
     * from your input. When you choose DISABLED, the service uses any style values
     * that you specify in your output settings. If you don't specify values, the
     * service uses default style and position values. When you choose DISABLED, the
     * service ignores all style and position values from your input.
     */
    inline BurninDestinationSettings& WithStylePassthrough(const BurnInSubtitleStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Ignore this setting unless your output captions are burned in. Choose which set
     * of style and position values the service applies to your output captions. When
     * you choose ENABLED, the service uses the input style and position information
     * from your input. When you choose DISABLED, the service uses any style values
     * that you specify in your output settings. If you don't specify values, the
     * service uses default style and position values. When you choose DISABLED, the
     * service ignores all style and position values from your input.
     */
    inline BurninDestinationSettings& WithStylePassthrough(BurnInSubtitleStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}


    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
    inline const BurninSubtitleTeletextSpacing& GetTeletextSpacing() const{ return m_teletextSpacing; }

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
    inline void SetTeletextSpacing(const BurninSubtitleTeletextSpacing& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = value; }

    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
    inline void SetTeletextSpacing(BurninSubtitleTeletextSpacing&& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = std::move(value); }

    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
    inline BurninDestinationSettings& WithTeletextSpacing(const BurninSubtitleTeletextSpacing& value) { SetTeletextSpacing(value); return *this;}

    /**
     * Only applies to jobs with input captions in Teletext or STL formats. Specify
     * whether the spacing between letters in your captions is set by the captions grid
     * or varies depending on letter width. Choose fixed grid to conform to the spacing
     * specified in the captions file more accurately. Choose proportional to make the
     * text easier to read if the captions are closed caption.
     */
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
    inline BurninDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}

  private:

    BurninSubtitleAlignment m_alignment;
    bool m_alignmentHasBeenSet;

    BurninSubtitleApplyFontColor m_applyFontColor;
    bool m_applyFontColorHasBeenSet;

    BurninSubtitleBackgroundColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet;

    int m_backgroundOpacity;
    bool m_backgroundOpacityHasBeenSet;

    BurninSubtitleFallbackFont m_fallbackFont;
    bool m_fallbackFontHasBeenSet;

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

    Aws::String m_hexFontColor;
    bool m_hexFontColorHasBeenSet;

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

    BurnInSubtitleStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet;

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
