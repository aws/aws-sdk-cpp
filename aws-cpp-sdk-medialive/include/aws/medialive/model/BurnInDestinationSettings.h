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
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/BurnInAlignment.h>
#include <aws/medialive/model/BurnInBackgroundColor.h>
#include <aws/medialive/model/InputLocation.h>
#include <aws/medialive/model/BurnInFontColor.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/BurnInOutlineColor.h>
#include <aws/medialive/model/BurnInShadowColor.h>
#include <aws/medialive/model/BurnInTeletextGridControl.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Burn In Destination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BurnInDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API BurnInDestinationSettings
  {
  public:
    BurnInDestinationSettings();
    BurnInDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    BurnInDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If no explicit xPosition or yPosition is provided, setting alignment to centered
     * will place the captions at the bottom center of the output. Similarly, setting a
     * left alignment will align captions to the bottom left of the output. If x and y
     * positions are given in conjunction with the alignment parameter, the font will
     * be justified (either left or centered) relative to those coordinates. Selecting
     * "smart" justification will left-justify live subtitles and center-justify
     * pre-recorded subtitles.  All burn-in and DVB-Sub font settings must match.
     */
    inline const BurnInAlignment& GetAlignment() const{ return m_alignment; }

    /**
     * If no explicit xPosition or yPosition is provided, setting alignment to centered
     * will place the captions at the bottom center of the output. Similarly, setting a
     * left alignment will align captions to the bottom left of the output. If x and y
     * positions are given in conjunction with the alignment parameter, the font will
     * be justified (either left or centered) relative to those coordinates. Selecting
     * "smart" justification will left-justify live subtitles and center-justify
     * pre-recorded subtitles.  All burn-in and DVB-Sub font settings must match.
     */
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }

    /**
     * If no explicit xPosition or yPosition is provided, setting alignment to centered
     * will place the captions at the bottom center of the output. Similarly, setting a
     * left alignment will align captions to the bottom left of the output. If x and y
     * positions are given in conjunction with the alignment parameter, the font will
     * be justified (either left or centered) relative to those coordinates. Selecting
     * "smart" justification will left-justify live subtitles and center-justify
     * pre-recorded subtitles.  All burn-in and DVB-Sub font settings must match.
     */
    inline void SetAlignment(const BurnInAlignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }

    /**
     * If no explicit xPosition or yPosition is provided, setting alignment to centered
     * will place the captions at the bottom center of the output. Similarly, setting a
     * left alignment will align captions to the bottom left of the output. If x and y
     * positions are given in conjunction with the alignment parameter, the font will
     * be justified (either left or centered) relative to those coordinates. Selecting
     * "smart" justification will left-justify live subtitles and center-justify
     * pre-recorded subtitles.  All burn-in and DVB-Sub font settings must match.
     */
    inline void SetAlignment(BurnInAlignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }

    /**
     * If no explicit xPosition or yPosition is provided, setting alignment to centered
     * will place the captions at the bottom center of the output. Similarly, setting a
     * left alignment will align captions to the bottom left of the output. If x and y
     * positions are given in conjunction with the alignment parameter, the font will
     * be justified (either left or centered) relative to those coordinates. Selecting
     * "smart" justification will left-justify live subtitles and center-justify
     * pre-recorded subtitles.  All burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithAlignment(const BurnInAlignment& value) { SetAlignment(value); return *this;}

    /**
     * If no explicit xPosition or yPosition is provided, setting alignment to centered
     * will place the captions at the bottom center of the output. Similarly, setting a
     * left alignment will align captions to the bottom left of the output. If x and y
     * positions are given in conjunction with the alignment parameter, the font will
     * be justified (either left or centered) relative to those coordinates. Selecting
     * "smart" justification will left-justify live subtitles and center-justify
     * pre-recorded subtitles.  All burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithAlignment(BurnInAlignment&& value) { SetAlignment(std::move(value)); return *this;}


    /**
     * Specifies the color of the rectangle behind the captions.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline const BurnInBackgroundColor& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * Specifies the color of the rectangle behind the captions.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * Specifies the color of the rectangle behind the captions.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline void SetBackgroundColor(const BurnInBackgroundColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * Specifies the color of the rectangle behind the captions.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline void SetBackgroundColor(BurnInBackgroundColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * Specifies the color of the rectangle behind the captions.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithBackgroundColor(const BurnInBackgroundColor& value) { SetBackgroundColor(value); return *this;}

    /**
     * Specifies the color of the rectangle behind the captions.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithBackgroundColor(BurnInBackgroundColor&& value) { SetBackgroundColor(std::move(value)); return *this;}


    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter out is equivalent to setting it to 0
     * (transparent).  All burn-in and DVB-Sub font settings must match.
     */
    inline int GetBackgroundOpacity() const{ return m_backgroundOpacity; }

    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter out is equivalent to setting it to 0
     * (transparent).  All burn-in and DVB-Sub font settings must match.
     */
    inline bool BackgroundOpacityHasBeenSet() const { return m_backgroundOpacityHasBeenSet; }

    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter out is equivalent to setting it to 0
     * (transparent).  All burn-in and DVB-Sub font settings must match.
     */
    inline void SetBackgroundOpacity(int value) { m_backgroundOpacityHasBeenSet = true; m_backgroundOpacity = value; }

    /**
     * Specifies the opacity of the background rectangle. 255 is opaque; 0 is
     * transparent. Leaving this parameter out is equivalent to setting it to 0
     * (transparent).  All burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}


    /**
     * External font file used for caption burn-in. File extension must be 'ttf' or
     * 'tte'.  Although the user can select output fonts for many different types of
     * input captions,  embedded, STL and teletext sources use a strict grid system.
     * Using external fonts with these caption sources could cause unexpected display
     * of proportional fonts.  All burn-in and DVB-Sub font settings must match.
     */
    inline const InputLocation& GetFont() const{ return m_font; }

    /**
     * External font file used for caption burn-in. File extension must be 'ttf' or
     * 'tte'.  Although the user can select output fonts for many different types of
     * input captions,  embedded, STL and teletext sources use a strict grid system.
     * Using external fonts with these caption sources could cause unexpected display
     * of proportional fonts.  All burn-in and DVB-Sub font settings must match.
     */
    inline bool FontHasBeenSet() const { return m_fontHasBeenSet; }

    /**
     * External font file used for caption burn-in. File extension must be 'ttf' or
     * 'tte'.  Although the user can select output fonts for many different types of
     * input captions,  embedded, STL and teletext sources use a strict grid system.
     * Using external fonts with these caption sources could cause unexpected display
     * of proportional fonts.  All burn-in and DVB-Sub font settings must match.
     */
    inline void SetFont(const InputLocation& value) { m_fontHasBeenSet = true; m_font = value; }

    /**
     * External font file used for caption burn-in. File extension must be 'ttf' or
     * 'tte'.  Although the user can select output fonts for many different types of
     * input captions,  embedded, STL and teletext sources use a strict grid system.
     * Using external fonts with these caption sources could cause unexpected display
     * of proportional fonts.  All burn-in and DVB-Sub font settings must match.
     */
    inline void SetFont(InputLocation&& value) { m_fontHasBeenSet = true; m_font = std::move(value); }

    /**
     * External font file used for caption burn-in. File extension must be 'ttf' or
     * 'tte'.  Although the user can select output fonts for many different types of
     * input captions,  embedded, STL and teletext sources use a strict grid system.
     * Using external fonts with these caption sources could cause unexpected display
     * of proportional fonts.  All burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithFont(const InputLocation& value) { SetFont(value); return *this;}

    /**
     * External font file used for caption burn-in. File extension must be 'ttf' or
     * 'tte'.  Although the user can select output fonts for many different types of
     * input captions,  embedded, STL and teletext sources use a strict grid system.
     * Using external fonts with these caption sources could cause unexpected display
     * of proportional fonts.  All burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithFont(InputLocation&& value) { SetFont(std::move(value)); return *this;}


    /**
     * Specifies the color of the burned-in captions.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline const BurnInFontColor& GetFontColor() const{ return m_fontColor; }

    /**
     * Specifies the color of the burned-in captions.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }

    /**
     * Specifies the color of the burned-in captions.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline void SetFontColor(const BurnInFontColor& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }

    /**
     * Specifies the color of the burned-in captions.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline void SetFontColor(BurnInFontColor&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }

    /**
     * Specifies the color of the burned-in captions.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline BurnInDestinationSettings& WithFontColor(const BurnInFontColor& value) { SetFontColor(value); return *this;}

    /**
     * Specifies the color of the burned-in captions.  This option is not valid for
     * source captions that are STL, 608/embedded or teletext.  These source settings
     * are already pre-defined by the caption stream.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline BurnInDestinationSettings& WithFontColor(BurnInFontColor&& value) { SetFontColor(std::move(value)); return *this;}


    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.  All burn-in and DVB-Sub font settings must match.
     */
    inline int GetFontOpacity() const{ return m_fontOpacity; }

    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.  All burn-in and DVB-Sub font settings must match.
     */
    inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }

    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.  All burn-in and DVB-Sub font settings must match.
     */
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }

    /**
     * Specifies the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.  All burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}


    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline int GetFontResolution() const{ return m_fontResolution; }

    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline bool FontResolutionHasBeenSet() const { return m_fontResolutionHasBeenSet; }

    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline void SetFontResolution(int value) { m_fontResolutionHasBeenSet = true; m_fontResolution = value; }

    /**
     * Font resolution in DPI (dots per inch); default is 96 dpi.  All burn-in and
     * DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithFontResolution(int value) { SetFontResolution(value); return *this;}


    /**
     * When set to 'auto' fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline const Aws::String& GetFontSize() const{ return m_fontSize; }

    /**
     * When set to 'auto' fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }

    /**
     * When set to 'auto' fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline void SetFontSize(const Aws::String& value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }

    /**
     * When set to 'auto' fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline void SetFontSize(Aws::String&& value) { m_fontSizeHasBeenSet = true; m_fontSize = std::move(value); }

    /**
     * When set to 'auto' fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline void SetFontSize(const char* value) { m_fontSizeHasBeenSet = true; m_fontSize.assign(value); }

    /**
     * When set to 'auto' fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithFontSize(const Aws::String& value) { SetFontSize(value); return *this;}

    /**
     * When set to 'auto' fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithFontSize(Aws::String&& value) { SetFontSize(std::move(value)); return *this;}

    /**
     * When set to 'auto' fontSize will scale depending on the size of the output. 
     * Giving a positive integer will specify the exact font size in points.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithFontSize(const char* value) { SetFontSize(value); return *this;}


    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline const BurnInOutlineColor& GetOutlineColor() const{ return m_outlineColor; }

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
    inline void SetOutlineColor(const BurnInOutlineColor& value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline void SetOutlineColor(BurnInOutlineColor&& value) { m_outlineColorHasBeenSet = true; m_outlineColor = std::move(value); }

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline BurnInDestinationSettings& WithOutlineColor(const BurnInOutlineColor& value) { SetOutlineColor(value); return *this;}

    /**
     * Specifies font outline color. This option is not valid for source captions that
     * are either 608/embedded or teletext. These source settings are already
     * pre-defined by the caption stream. All burn-in and DVB-Sub font settings must
     * match.
     */
    inline BurnInDestinationSettings& WithOutlineColor(BurnInOutlineColor&& value) { SetOutlineColor(std::move(value)); return *this;}


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
    inline BurnInDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}


    /**
     * Specifies the color of the shadow cast by the captions.  All burn-in and DVB-Sub
     * font settings must match.
     */
    inline const BurnInShadowColor& GetShadowColor() const{ return m_shadowColor; }

    /**
     * Specifies the color of the shadow cast by the captions.  All burn-in and DVB-Sub
     * font settings must match.
     */
    inline bool ShadowColorHasBeenSet() const { return m_shadowColorHasBeenSet; }

    /**
     * Specifies the color of the shadow cast by the captions.  All burn-in and DVB-Sub
     * font settings must match.
     */
    inline void SetShadowColor(const BurnInShadowColor& value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }

    /**
     * Specifies the color of the shadow cast by the captions.  All burn-in and DVB-Sub
     * font settings must match.
     */
    inline void SetShadowColor(BurnInShadowColor&& value) { m_shadowColorHasBeenSet = true; m_shadowColor = std::move(value); }

    /**
     * Specifies the color of the shadow cast by the captions.  All burn-in and DVB-Sub
     * font settings must match.
     */
    inline BurnInDestinationSettings& WithShadowColor(const BurnInShadowColor& value) { SetShadowColor(value); return *this;}

    /**
     * Specifies the color of the shadow cast by the captions.  All burn-in and DVB-Sub
     * font settings must match.
     */
    inline BurnInDestinationSettings& WithShadowColor(BurnInShadowColor&& value) { SetShadowColor(std::move(value)); return *this;}


    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter out is equivalent to setting it to 0 (transparent).  All burn-in
     * and DVB-Sub font settings must match.
     */
    inline int GetShadowOpacity() const{ return m_shadowOpacity; }

    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter out is equivalent to setting it to 0 (transparent).  All burn-in
     * and DVB-Sub font settings must match.
     */
    inline bool ShadowOpacityHasBeenSet() const { return m_shadowOpacityHasBeenSet; }

    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter out is equivalent to setting it to 0 (transparent).  All burn-in
     * and DVB-Sub font settings must match.
     */
    inline void SetShadowOpacity(int value) { m_shadowOpacityHasBeenSet = true; m_shadowOpacity = value; }

    /**
     * Specifies the opacity of the shadow. 255 is opaque; 0 is transparent. Leaving
     * this parameter out is equivalent to setting it to 0 (transparent).  All burn-in
     * and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithShadowOpacity(int value) { SetShadowOpacity(value); return *this;}


    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowXOffset() const{ return m_shadowXOffset; }

    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline bool ShadowXOffsetHasBeenSet() const { return m_shadowXOffsetHasBeenSet; }

    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline void SetShadowXOffset(int value) { m_shadowXOffsetHasBeenSet = true; m_shadowXOffset = value; }

    /**
     * Specifies the horizontal offset of the shadow relative to the captions in
     * pixels. A value of -2 would result in a shadow offset 2 pixels to the left.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithShadowXOffset(int value) { SetShadowXOffset(value); return *this;}


    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetShadowYOffset() const{ return m_shadowYOffset; }

    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline bool ShadowYOffsetHasBeenSet() const { return m_shadowYOffsetHasBeenSet; }

    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }

    /**
     * Specifies the vertical offset of the shadow relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels above the text.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}


    /**
     * Controls whether a fixed grid size will be used to generate the output subtitles
     * bitmap. Only applicable for Teletext inputs and DVB-Sub/Burn-in outputs.
     */
    inline const BurnInTeletextGridControl& GetTeletextGridControl() const{ return m_teletextGridControl; }

    /**
     * Controls whether a fixed grid size will be used to generate the output subtitles
     * bitmap. Only applicable for Teletext inputs and DVB-Sub/Burn-in outputs.
     */
    inline bool TeletextGridControlHasBeenSet() const { return m_teletextGridControlHasBeenSet; }

    /**
     * Controls whether a fixed grid size will be used to generate the output subtitles
     * bitmap. Only applicable for Teletext inputs and DVB-Sub/Burn-in outputs.
     */
    inline void SetTeletextGridControl(const BurnInTeletextGridControl& value) { m_teletextGridControlHasBeenSet = true; m_teletextGridControl = value; }

    /**
     * Controls whether a fixed grid size will be used to generate the output subtitles
     * bitmap. Only applicable for Teletext inputs and DVB-Sub/Burn-in outputs.
     */
    inline void SetTeletextGridControl(BurnInTeletextGridControl&& value) { m_teletextGridControlHasBeenSet = true; m_teletextGridControl = std::move(value); }

    /**
     * Controls whether a fixed grid size will be used to generate the output subtitles
     * bitmap. Only applicable for Teletext inputs and DVB-Sub/Burn-in outputs.
     */
    inline BurnInDestinationSettings& WithTeletextGridControl(const BurnInTeletextGridControl& value) { SetTeletextGridControl(value); return *this;}

    /**
     * Controls whether a fixed grid size will be used to generate the output subtitles
     * bitmap. Only applicable for Teletext inputs and DVB-Sub/Burn-in outputs.
     */
    inline BurnInDestinationSettings& WithTeletextGridControl(BurnInTeletextGridControl&& value) { SetTeletextGridControl(std::move(value)); return *this;}


    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit xPosition is provided, the
     * horizontal caption position will be determined by the alignment parameter.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline int GetXPosition() const{ return m_xPosition; }

    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit xPosition is provided, the
     * horizontal caption position will be determined by the alignment parameter.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline bool XPositionHasBeenSet() const { return m_xPositionHasBeenSet; }

    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit xPosition is provided, the
     * horizontal caption position will be determined by the alignment parameter.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline void SetXPosition(int value) { m_xPositionHasBeenSet = true; m_xPosition = value; }

    /**
     * Specifies the horizontal position of the caption relative to the left side of
     * the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the left of the output. If no explicit xPosition is provided, the
     * horizontal caption position will be determined by the alignment parameter.  All
     * burn-in and DVB-Sub font settings must match.
     */
    inline BurnInDestinationSettings& WithXPosition(int value) { SetXPosition(value); return *this;}


    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit yPosition is provided, the caption will be
     * positioned towards the bottom of the output.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline int GetYPosition() const{ return m_yPosition; }

    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit yPosition is provided, the caption will be
     * positioned towards the bottom of the output.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }

    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit yPosition is provided, the caption will be
     * positioned towards the bottom of the output.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }

    /**
     * Specifies the vertical position of the caption relative to the top of the output
     * in pixels. A value of 10 would result in the captions starting 10 pixels from
     * the top of the output. If no explicit yPosition is provided, the caption will be
     * positioned towards the bottom of the output.  All burn-in and DVB-Sub font
     * settings must match.
     */
    inline BurnInDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}

  private:

    BurnInAlignment m_alignment;
    bool m_alignmentHasBeenSet;

    BurnInBackgroundColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet;

    int m_backgroundOpacity;
    bool m_backgroundOpacityHasBeenSet;

    InputLocation m_font;
    bool m_fontHasBeenSet;

    BurnInFontColor m_fontColor;
    bool m_fontColorHasBeenSet;

    int m_fontOpacity;
    bool m_fontOpacityHasBeenSet;

    int m_fontResolution;
    bool m_fontResolutionHasBeenSet;

    Aws::String m_fontSize;
    bool m_fontSizeHasBeenSet;

    BurnInOutlineColor m_outlineColor;
    bool m_outlineColorHasBeenSet;

    int m_outlineSize;
    bool m_outlineSizeHasBeenSet;

    BurnInShadowColor m_shadowColor;
    bool m_shadowColorHasBeenSet;

    int m_shadowOpacity;
    bool m_shadowOpacityHasBeenSet;

    int m_shadowXOffset;
    bool m_shadowXOffsetHasBeenSet;

    int m_shadowYOffset;
    bool m_shadowYOffsetHasBeenSet;

    BurnInTeletextGridControl m_teletextGridControl;
    bool m_teletextGridControlHasBeenSet;

    int m_xPosition;
    bool m_xPositionHasBeenSet;

    int m_yPosition;
    bool m_yPositionHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
