/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/DvbSubtitleAlignment.h>
#include <aws/mediaconvert/model/DvbSubtitleApplyFontColor.h>
#include <aws/mediaconvert/model/DvbSubtitleBackgroundColor.h>
#include <aws/mediaconvert/model/DvbddsHandling.h>
#include <aws/mediaconvert/model/DvbSubSubtitleFallbackFont.h>
#include <aws/mediaconvert/model/DvbSubtitleFontColor.h>
#include <aws/mediaconvert/model/FontScript.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/DvbSubtitleOutlineColor.h>
#include <aws/mediaconvert/model/DvbSubtitleShadowColor.h>
#include <aws/mediaconvert/model/DvbSubtitleStylePassthrough.h>
#include <aws/mediaconvert/model/DvbSubtitlingType.h>
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
   * Settings related to DVB-Sub captions. Set up DVB-Sub captions in the same output
   * as your video. For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/dvb-sub-output-captions.html.
   * When you work directly in your JSON job specification, include this object and
   * any required children when you set destinationType to DVB_SUB.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/DvbSubDestinationSettings">AWS
   * API Reference</a></p>
   */
  class DvbSubDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API DvbSubDestinationSettings();
    AWS_MEDIACONVERT_API DvbSubDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API DvbSubDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline const DvbSubtitleAlignment& GetAlignment() const{ return m_alignment; }

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline bool AlignmentHasBeenSet() const { return m_alignmentHasBeenSet; }

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline void SetAlignment(const DvbSubtitleAlignment& value) { m_alignmentHasBeenSet = true; m_alignment = value; }

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline void SetAlignment(DvbSubtitleAlignment&& value) { m_alignmentHasBeenSet = true; m_alignment = std::move(value); }

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline DvbSubDestinationSettings& WithAlignment(const DvbSubtitleAlignment& value) { SetAlignment(value); return *this;}

    /**
     * Specify the alignment of your captions. If no explicit x_position is provided,
     * setting alignment to centered will placethe captions at the bottom center of the
     * output. Similarly, setting a left alignment willalign captions to the bottom
     * left of the output. If x and y positions are given in conjunction with the
     * alignment parameter, the font will be justified (either left or centered)
     * relative to those coordinates. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline DvbSubDestinationSettings& WithAlignment(DvbSubtitleAlignment&& value) { SetAlignment(std::move(value)); return *this;}


    /**
     * Ignore this setting unless Style Passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline const DvbSubtitleApplyFontColor& GetApplyFontColor() const{ return m_applyFontColor; }

    /**
     * Ignore this setting unless Style Passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline bool ApplyFontColorHasBeenSet() const { return m_applyFontColorHasBeenSet; }

    /**
     * Ignore this setting unless Style Passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline void SetApplyFontColor(const DvbSubtitleApplyFontColor& value) { m_applyFontColorHasBeenSet = true; m_applyFontColor = value; }

    /**
     * Ignore this setting unless Style Passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline void SetApplyFontColor(DvbSubtitleApplyFontColor&& value) { m_applyFontColorHasBeenSet = true; m_applyFontColor = std::move(value); }

    /**
     * Ignore this setting unless Style Passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline DvbSubDestinationSettings& WithApplyFontColor(const DvbSubtitleApplyFontColor& value) { SetApplyFontColor(value); return *this;}

    /**
     * Ignore this setting unless Style Passthrough (StylePassthrough) is set to
     * Enabled and Font color (FontColor) set to Black, Yellow, Red, Green, Blue, or
     * Hex. Use Apply font color (ApplyFontColor) for additional font color controls.
     * When you choose White text only (WHITE_TEXT_ONLY), or leave blank, your font
     * color setting only applies to white text in your input captions. For example, if
     * your font color setting is Yellow, and your input captions have red and white
     * text, your output captions will have red and yellow text. When you choose
     * ALL_TEXT, your font color setting applies to all of your output captions text.
     */
    inline DvbSubDestinationSettings& WithApplyFontColor(DvbSubtitleApplyFontColor&& value) { SetApplyFontColor(std::move(value)); return *this;}


    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline const DvbSubtitleBackgroundColor& GetBackgroundColor() const{ return m_backgroundColor; }

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline bool BackgroundColorHasBeenSet() const { return m_backgroundColorHasBeenSet; }

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline void SetBackgroundColor(const DvbSubtitleBackgroundColor& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = value; }

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline void SetBackgroundColor(DvbSubtitleBackgroundColor&& value) { m_backgroundColorHasBeenSet = true; m_backgroundColor = std::move(value); }

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline DvbSubDestinationSettings& WithBackgroundColor(const DvbSubtitleBackgroundColor& value) { SetBackgroundColor(value); return *this;}

    /**
     * Specify the color of the rectangle behind the captions. Leave background color
     * (BackgroundColor) blank and set Style passthrough (StylePassthrough) to enabled
     * to use the background color data from your input captions, if present.
     */
    inline DvbSubDestinationSettings& WithBackgroundColor(DvbSubtitleBackgroundColor&& value) { SetBackgroundColor(std::move(value)); return *this;}


    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough
     * (StylePassthrough) is set to enabled, leave blank to pass through the background
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * backgrounds from your output captions. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline int GetBackgroundOpacity() const{ return m_backgroundOpacity; }

    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough
     * (StylePassthrough) is set to enabled, leave blank to pass through the background
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * backgrounds from your output captions. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline bool BackgroundOpacityHasBeenSet() const { return m_backgroundOpacityHasBeenSet; }

    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough
     * (StylePassthrough) is set to enabled, leave blank to pass through the background
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * backgrounds from your output captions. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline void SetBackgroundOpacity(int value) { m_backgroundOpacityHasBeenSet = true; m_backgroundOpacity = value; }

    /**
     * Specify the opacity of the background rectangle. Enter a value from 0 to 255,
     * where 0 is transparent and 255 is opaque. If Style passthrough
     * (StylePassthrough) is set to enabled, leave blank to pass through the background
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * backgrounds from your output captions. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithBackgroundOpacity(int value) { SetBackgroundOpacity(value); return *this;}


    /**
     * Specify how MediaConvert handles the display definition segment (DDS). Keep the
     * default, None (NONE), to exclude the DDS from this set of captions. Choose No
     * display window (NO_DISPLAY_WINDOW) to have MediaConvert include the DDS but not
     * include display window data. In this case, MediaConvert writes that information
     * to the page composition segment (PCS) instead. Choose Specify (SPECIFIED) to
     * have MediaConvert set up the display window based on the values that you specify
     * in related job settings. For video resolutions that are 576 pixels or smaller in
     * height, MediaConvert doesn't include the DDS, regardless of the value you choose
     * for DDS handling (ddsHandling). In this case, it doesn't write the display
     * window data to the PCS either. Related settings: Use the settings DDS
     * x-coordinate (ddsXCoordinate) and DDS y-coordinate (ddsYCoordinate) to specify
     * the offset between the top left corner of the display window and the top left
     * corner of the video frame. All burn-in and DVB-Sub font settings must match.
     */
    inline const DvbddsHandling& GetDdsHandling() const{ return m_ddsHandling; }

    /**
     * Specify how MediaConvert handles the display definition segment (DDS). Keep the
     * default, None (NONE), to exclude the DDS from this set of captions. Choose No
     * display window (NO_DISPLAY_WINDOW) to have MediaConvert include the DDS but not
     * include display window data. In this case, MediaConvert writes that information
     * to the page composition segment (PCS) instead. Choose Specify (SPECIFIED) to
     * have MediaConvert set up the display window based on the values that you specify
     * in related job settings. For video resolutions that are 576 pixels or smaller in
     * height, MediaConvert doesn't include the DDS, regardless of the value you choose
     * for DDS handling (ddsHandling). In this case, it doesn't write the display
     * window data to the PCS either. Related settings: Use the settings DDS
     * x-coordinate (ddsXCoordinate) and DDS y-coordinate (ddsYCoordinate) to specify
     * the offset between the top left corner of the display window and the top left
     * corner of the video frame. All burn-in and DVB-Sub font settings must match.
     */
    inline bool DdsHandlingHasBeenSet() const { return m_ddsHandlingHasBeenSet; }

    /**
     * Specify how MediaConvert handles the display definition segment (DDS). Keep the
     * default, None (NONE), to exclude the DDS from this set of captions. Choose No
     * display window (NO_DISPLAY_WINDOW) to have MediaConvert include the DDS but not
     * include display window data. In this case, MediaConvert writes that information
     * to the page composition segment (PCS) instead. Choose Specify (SPECIFIED) to
     * have MediaConvert set up the display window based on the values that you specify
     * in related job settings. For video resolutions that are 576 pixels or smaller in
     * height, MediaConvert doesn't include the DDS, regardless of the value you choose
     * for DDS handling (ddsHandling). In this case, it doesn't write the display
     * window data to the PCS either. Related settings: Use the settings DDS
     * x-coordinate (ddsXCoordinate) and DDS y-coordinate (ddsYCoordinate) to specify
     * the offset between the top left corner of the display window and the top left
     * corner of the video frame. All burn-in and DVB-Sub font settings must match.
     */
    inline void SetDdsHandling(const DvbddsHandling& value) { m_ddsHandlingHasBeenSet = true; m_ddsHandling = value; }

    /**
     * Specify how MediaConvert handles the display definition segment (DDS). Keep the
     * default, None (NONE), to exclude the DDS from this set of captions. Choose No
     * display window (NO_DISPLAY_WINDOW) to have MediaConvert include the DDS but not
     * include display window data. In this case, MediaConvert writes that information
     * to the page composition segment (PCS) instead. Choose Specify (SPECIFIED) to
     * have MediaConvert set up the display window based on the values that you specify
     * in related job settings. For video resolutions that are 576 pixels or smaller in
     * height, MediaConvert doesn't include the DDS, regardless of the value you choose
     * for DDS handling (ddsHandling). In this case, it doesn't write the display
     * window data to the PCS either. Related settings: Use the settings DDS
     * x-coordinate (ddsXCoordinate) and DDS y-coordinate (ddsYCoordinate) to specify
     * the offset between the top left corner of the display window and the top left
     * corner of the video frame. All burn-in and DVB-Sub font settings must match.
     */
    inline void SetDdsHandling(DvbddsHandling&& value) { m_ddsHandlingHasBeenSet = true; m_ddsHandling = std::move(value); }

    /**
     * Specify how MediaConvert handles the display definition segment (DDS). Keep the
     * default, None (NONE), to exclude the DDS from this set of captions. Choose No
     * display window (NO_DISPLAY_WINDOW) to have MediaConvert include the DDS but not
     * include display window data. In this case, MediaConvert writes that information
     * to the page composition segment (PCS) instead. Choose Specify (SPECIFIED) to
     * have MediaConvert set up the display window based on the values that you specify
     * in related job settings. For video resolutions that are 576 pixels or smaller in
     * height, MediaConvert doesn't include the DDS, regardless of the value you choose
     * for DDS handling (ddsHandling). In this case, it doesn't write the display
     * window data to the PCS either. Related settings: Use the settings DDS
     * x-coordinate (ddsXCoordinate) and DDS y-coordinate (ddsYCoordinate) to specify
     * the offset between the top left corner of the display window and the top left
     * corner of the video frame. All burn-in and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithDdsHandling(const DvbddsHandling& value) { SetDdsHandling(value); return *this;}

    /**
     * Specify how MediaConvert handles the display definition segment (DDS). Keep the
     * default, None (NONE), to exclude the DDS from this set of captions. Choose No
     * display window (NO_DISPLAY_WINDOW) to have MediaConvert include the DDS but not
     * include display window data. In this case, MediaConvert writes that information
     * to the page composition segment (PCS) instead. Choose Specify (SPECIFIED) to
     * have MediaConvert set up the display window based on the values that you specify
     * in related job settings. For video resolutions that are 576 pixels or smaller in
     * height, MediaConvert doesn't include the DDS, regardless of the value you choose
     * for DDS handling (ddsHandling). In this case, it doesn't write the display
     * window data to the PCS either. Related settings: Use the settings DDS
     * x-coordinate (ddsXCoordinate) and DDS y-coordinate (ddsYCoordinate) to specify
     * the offset between the top left corner of the display window and the top left
     * corner of the video frame. All burn-in and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithDdsHandling(DvbddsHandling&& value) { SetDdsHandling(std::move(value)); return *this;}


    /**
     * Use this setting, along with DDS y-coordinate (ddsYCoordinate), to specify the
     * upper left corner of the display definition segment (DDS) display window. With
     * this setting, specify the distance, in pixels, between the left side of the
     * frame and the left side of the DDS display window. Keep the default value, 0, to
     * have MediaConvert automatically choose this offset. Related setting: When you
     * use this setting, you must set DDS handling (ddsHandling) to a value other than
     * None (NONE). MediaConvert uses these values to determine whether to write page
     * position data to the DDS or to the page composition segment (PCS). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline int GetDdsXCoordinate() const{ return m_ddsXCoordinate; }

    /**
     * Use this setting, along with DDS y-coordinate (ddsYCoordinate), to specify the
     * upper left corner of the display definition segment (DDS) display window. With
     * this setting, specify the distance, in pixels, between the left side of the
     * frame and the left side of the DDS display window. Keep the default value, 0, to
     * have MediaConvert automatically choose this offset. Related setting: When you
     * use this setting, you must set DDS handling (ddsHandling) to a value other than
     * None (NONE). MediaConvert uses these values to determine whether to write page
     * position data to the DDS or to the page composition segment (PCS). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline bool DdsXCoordinateHasBeenSet() const { return m_ddsXCoordinateHasBeenSet; }

    /**
     * Use this setting, along with DDS y-coordinate (ddsYCoordinate), to specify the
     * upper left corner of the display definition segment (DDS) display window. With
     * this setting, specify the distance, in pixels, between the left side of the
     * frame and the left side of the DDS display window. Keep the default value, 0, to
     * have MediaConvert automatically choose this offset. Related setting: When you
     * use this setting, you must set DDS handling (ddsHandling) to a value other than
     * None (NONE). MediaConvert uses these values to determine whether to write page
     * position data to the DDS or to the page composition segment (PCS). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline void SetDdsXCoordinate(int value) { m_ddsXCoordinateHasBeenSet = true; m_ddsXCoordinate = value; }

    /**
     * Use this setting, along with DDS y-coordinate (ddsYCoordinate), to specify the
     * upper left corner of the display definition segment (DDS) display window. With
     * this setting, specify the distance, in pixels, between the left side of the
     * frame and the left side of the DDS display window. Keep the default value, 0, to
     * have MediaConvert automatically choose this offset. Related setting: When you
     * use this setting, you must set DDS handling (ddsHandling) to a value other than
     * None (NONE). MediaConvert uses these values to determine whether to write page
     * position data to the DDS or to the page composition segment (PCS). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithDdsXCoordinate(int value) { SetDdsXCoordinate(value); return *this;}


    /**
     * Use this setting, along with DDS x-coordinate (ddsXCoordinate), to specify the
     * upper left corner of the display definition segment (DDS) display window. With
     * this setting, specify the distance, in pixels, between the top of the frame and
     * the top of the DDS display window. Keep the default value, 0, to have
     * MediaConvert automatically choose this offset. Related setting: When you use
     * this setting, you must set DDS handling (ddsHandling) to a value other than None
     * (NONE). MediaConvert uses these values to determine whether to write page
     * position data to the DDS or to the page composition segment (PCS). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline int GetDdsYCoordinate() const{ return m_ddsYCoordinate; }

    /**
     * Use this setting, along with DDS x-coordinate (ddsXCoordinate), to specify the
     * upper left corner of the display definition segment (DDS) display window. With
     * this setting, specify the distance, in pixels, between the top of the frame and
     * the top of the DDS display window. Keep the default value, 0, to have
     * MediaConvert automatically choose this offset. Related setting: When you use
     * this setting, you must set DDS handling (ddsHandling) to a value other than None
     * (NONE). MediaConvert uses these values to determine whether to write page
     * position data to the DDS or to the page composition segment (PCS). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline bool DdsYCoordinateHasBeenSet() const { return m_ddsYCoordinateHasBeenSet; }

    /**
     * Use this setting, along with DDS x-coordinate (ddsXCoordinate), to specify the
     * upper left corner of the display definition segment (DDS) display window. With
     * this setting, specify the distance, in pixels, between the top of the frame and
     * the top of the DDS display window. Keep the default value, 0, to have
     * MediaConvert automatically choose this offset. Related setting: When you use
     * this setting, you must set DDS handling (ddsHandling) to a value other than None
     * (NONE). MediaConvert uses these values to determine whether to write page
     * position data to the DDS or to the page composition segment (PCS). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline void SetDdsYCoordinate(int value) { m_ddsYCoordinateHasBeenSet = true; m_ddsYCoordinate = value; }

    /**
     * Use this setting, along with DDS x-coordinate (ddsXCoordinate), to specify the
     * upper left corner of the display definition segment (DDS) display window. With
     * this setting, specify the distance, in pixels, between the top of the frame and
     * the top of the DDS display window. Keep the default value, 0, to have
     * MediaConvert automatically choose this offset. Related setting: When you use
     * this setting, you must set DDS handling (ddsHandling) to a value other than None
     * (NONE). MediaConvert uses these values to determine whether to write page
     * position data to the DDS or to the page composition segment (PCS). All burn-in
     * and DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithDdsYCoordinate(int value) { SetDdsYCoordinate(value); return *this;}


    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline const DvbSubSubtitleFallbackFont& GetFallbackFont() const{ return m_fallbackFont; }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline bool FallbackFontHasBeenSet() const { return m_fallbackFontHasBeenSet; }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline void SetFallbackFont(const DvbSubSubtitleFallbackFont& value) { m_fallbackFontHasBeenSet = true; m_fallbackFont = value; }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline void SetFallbackFont(DvbSubSubtitleFallbackFont&& value) { m_fallbackFontHasBeenSet = true; m_fallbackFont = std::move(value); }

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline DvbSubDestinationSettings& WithFallbackFont(const DvbSubSubtitleFallbackFont& value) { SetFallbackFont(value); return *this;}

    /**
     * Specify the font that you want the service to use for your burn in captions when
     * your input captions specify a font that MediaConvert doesn't support. When you
     * set Fallback font (FallbackFont) to best match (BEST_MATCH), or leave blank,
     * MediaConvert uses a supported font that most closely matches the font that your
     * input captions specify. When there are multiple unsupported fonts in your input
     * captions, MediaConvert matches each font with the supported font that matches
     * best. When you explicitly choose a replacement font, MediaConvert uses that font
     * to replace all unsupported fonts from your input.
     */
    inline DvbSubDestinationSettings& WithFallbackFont(DvbSubSubtitleFallbackFont&& value) { SetFallbackFont(std::move(value)); return *this;}


    /**
     * Specify the color of the captions text. Leave Font color (FontColor) blank and
     * set Style passthrough (StylePassthrough) to enabled to use the font color data
     * from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline const DvbSubtitleFontColor& GetFontColor() const{ return m_fontColor; }

    /**
     * Specify the color of the captions text. Leave Font color (FontColor) blank and
     * set Style passthrough (StylePassthrough) to enabled to use the font color data
     * from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline bool FontColorHasBeenSet() const { return m_fontColorHasBeenSet; }

    /**
     * Specify the color of the captions text. Leave Font color (FontColor) blank and
     * set Style passthrough (StylePassthrough) to enabled to use the font color data
     * from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline void SetFontColor(const DvbSubtitleFontColor& value) { m_fontColorHasBeenSet = true; m_fontColor = value; }

    /**
     * Specify the color of the captions text. Leave Font color (FontColor) blank and
     * set Style passthrough (StylePassthrough) to enabled to use the font color data
     * from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline void SetFontColor(DvbSubtitleFontColor&& value) { m_fontColorHasBeenSet = true; m_fontColor = std::move(value); }

    /**
     * Specify the color of the captions text. Leave Font color (FontColor) blank and
     * set Style passthrough (StylePassthrough) to enabled to use the font color data
     * from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithFontColor(const DvbSubtitleFontColor& value) { SetFontColor(value); return *this;}

    /**
     * Specify the color of the captions text. Leave Font color (FontColor) blank and
     * set Style passthrough (StylePassthrough) to enabled to use the font color data
     * from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithFontColor(DvbSubtitleFontColor&& value) { SetFontColor(std::move(value)); return *this;}


    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline int GetFontOpacity() const{ return m_fontOpacity; }

    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline bool FontOpacityHasBeenSet() const { return m_fontOpacityHasBeenSet; }

    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline void SetFontOpacity(int value) { m_fontOpacityHasBeenSet = true; m_fontOpacity = value; }

    /**
     * Specify the opacity of the burned-in captions. 255 is opaque; 0 is
     * transparent.
Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline DvbSubDestinationSettings& WithFontOpacity(int value) { SetFontOpacity(value); return *this;}


    /**
     * Specify the Font resolution (FontResolution) in DPI (dots per inch).
Within your
     * job settings, all of your DVB-Sub settings must be identical.
     */
    inline int GetFontResolution() const{ return m_fontResolution; }

    /**
     * Specify the Font resolution (FontResolution) in DPI (dots per inch).
Within your
     * job settings, all of your DVB-Sub settings must be identical.
     */
    inline bool FontResolutionHasBeenSet() const { return m_fontResolutionHasBeenSet; }

    /**
     * Specify the Font resolution (FontResolution) in DPI (dots per inch).
Within your
     * job settings, all of your DVB-Sub settings must be identical.
     */
    inline void SetFontResolution(int value) { m_fontResolutionHasBeenSet = true; m_fontResolution = value; }

    /**
     * Specify the Font resolution (FontResolution) in DPI (dots per inch).
Within your
     * job settings, all of your DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithFontResolution(int value) { SetFontResolution(value); return *this;}


    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline const FontScript& GetFontScript() const{ return m_fontScript; }

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline bool FontScriptHasBeenSet() const { return m_fontScriptHasBeenSet; }

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline void SetFontScript(const FontScript& value) { m_fontScriptHasBeenSet = true; m_fontScript = value; }

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline void SetFontScript(FontScript&& value) { m_fontScriptHasBeenSet = true; m_fontScript = std::move(value); }

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithFontScript(const FontScript& value) { SetFontScript(value); return *this;}

    /**
     * Set Font script (FontScript) to Automatically determined (AUTOMATIC), or leave
     * blank, to automatically determine the font script in your input captions.
     * Otherwise, set to Simplified Chinese (HANS) or Traditional Chinese (HANT) if
     * your input font script uses Simplified or Traditional Chinese. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithFontScript(FontScript&& value) { SetFontScript(std::move(value)); return *this;}


    /**
     * Specify the Font size (FontSize) in pixels. Must be a positive integer. Set to
     * 0, or leave blank, for automatic font size. Within your job settings, all of
     * your DVB-Sub settings must be identical.
     */
    inline int GetFontSize() const{ return m_fontSize; }

    /**
     * Specify the Font size (FontSize) in pixels. Must be a positive integer. Set to
     * 0, or leave blank, for automatic font size. Within your job settings, all of
     * your DVB-Sub settings must be identical.
     */
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }

    /**
     * Specify the Font size (FontSize) in pixels. Must be a positive integer. Set to
     * 0, or leave blank, for automatic font size. Within your job settings, all of
     * your DVB-Sub settings must be identical.
     */
    inline void SetFontSize(int value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }

    /**
     * Specify the Font size (FontSize) in pixels. Must be a positive integer. Set to
     * 0, or leave blank, for automatic font size. Within your job settings, all of
     * your DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithFontSize(int value) { SetFontSize(value); return *this;}


    /**
     * Specify the height, in pixels, of this set of DVB-Sub captions. The default
     * value is 576 pixels. Related setting: When you use this setting, you must set
     * DDS handling (ddsHandling) to a value other than None (NONE). All burn-in and
     * DVB-Sub font settings must match.
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * Specify the height, in pixels, of this set of DVB-Sub captions. The default
     * value is 576 pixels. Related setting: When you use this setting, you must set
     * DDS handling (ddsHandling) to a value other than None (NONE). All burn-in and
     * DVB-Sub font settings must match.
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * Specify the height, in pixels, of this set of DVB-Sub captions. The default
     * value is 576 pixels. Related setting: When you use this setting, you must set
     * DDS handling (ddsHandling) to a value other than None (NONE). All burn-in and
     * DVB-Sub font settings must match.
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * Specify the height, in pixels, of this set of DVB-Sub captions. The default
     * value is 576 pixels. Related setting: When you use this setting, you must set
     * DDS handling (ddsHandling) to a value other than None (NONE). All burn-in and
     * DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline const Aws::String& GetHexFontColor() const{ return m_hexFontColor; }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline bool HexFontColorHasBeenSet() const { return m_hexFontColorHasBeenSet; }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline void SetHexFontColor(const Aws::String& value) { m_hexFontColorHasBeenSet = true; m_hexFontColor = value; }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline void SetHexFontColor(Aws::String&& value) { m_hexFontColorHasBeenSet = true; m_hexFontColor = std::move(value); }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline void SetHexFontColor(const char* value) { m_hexFontColorHasBeenSet = true; m_hexFontColor.assign(value); }

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline DvbSubDestinationSettings& WithHexFontColor(const Aws::String& value) { SetHexFontColor(value); return *this;}

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline DvbSubDestinationSettings& WithHexFontColor(Aws::String&& value) { SetHexFontColor(std::move(value)); return *this;}

    /**
     * Ignore this setting unless your Font color is set to Hex. Enter either six or
     * eight hexidecimal digits, representing red, green, and blue, with two optional
     * extra digits for alpha. For example a value of 1122AABB is a red value of 0x11,
     * a green value of 0x22, a blue value of 0xAA, and an alpha value of 0xBB.
     */
    inline DvbSubDestinationSettings& WithHexFontColor(const char* value) { SetHexFontColor(value); return *this;}


    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline const DvbSubtitleOutlineColor& GetOutlineColor() const{ return m_outlineColor; }

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline bool OutlineColorHasBeenSet() const { return m_outlineColorHasBeenSet; }

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline void SetOutlineColor(const DvbSubtitleOutlineColor& value) { m_outlineColorHasBeenSet = true; m_outlineColor = value; }

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline void SetOutlineColor(DvbSubtitleOutlineColor&& value) { m_outlineColorHasBeenSet = true; m_outlineColor = std::move(value); }

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithOutlineColor(const DvbSubtitleOutlineColor& value) { SetOutlineColor(value); return *this;}

    /**
     * Specify font outline color. Leave Outline color (OutlineColor) blank and set
     * Style passthrough (StylePassthrough) to enabled to use the font outline color
     * data from your input captions, if present. Within your job settings, all of your
     * DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithOutlineColor(DvbSubtitleOutlineColor&& value) { SetOutlineColor(std::move(value)); return *this;}


    /**
     * Specify the Outline size (OutlineSize) of the caption text, in pixels. Leave
     * Outline size blank and set Style passthrough (StylePassthrough) to enabled to
     * use the outline size data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline int GetOutlineSize() const{ return m_outlineSize; }

    /**
     * Specify the Outline size (OutlineSize) of the caption text, in pixels. Leave
     * Outline size blank and set Style passthrough (StylePassthrough) to enabled to
     * use the outline size data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline bool OutlineSizeHasBeenSet() const { return m_outlineSizeHasBeenSet; }

    /**
     * Specify the Outline size (OutlineSize) of the caption text, in pixels. Leave
     * Outline size blank and set Style passthrough (StylePassthrough) to enabled to
     * use the outline size data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline void SetOutlineSize(int value) { m_outlineSizeHasBeenSet = true; m_outlineSize = value; }

    /**
     * Specify the Outline size (OutlineSize) of the caption text, in pixels. Leave
     * Outline size blank and set Style passthrough (StylePassthrough) to enabled to
     * use the outline size data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithOutlineSize(int value) { SetOutlineSize(value); return *this;}


    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline const DvbSubtitleShadowColor& GetShadowColor() const{ return m_shadowColor; }

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline bool ShadowColorHasBeenSet() const { return m_shadowColorHasBeenSet; }

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline void SetShadowColor(const DvbSubtitleShadowColor& value) { m_shadowColorHasBeenSet = true; m_shadowColor = value; }

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline void SetShadowColor(DvbSubtitleShadowColor&& value) { m_shadowColorHasBeenSet = true; m_shadowColor = std::move(value); }

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithShadowColor(const DvbSubtitleShadowColor& value) { SetShadowColor(value); return *this;}

    /**
     * Specify the color of the shadow cast by the captions. Leave Shadow color
     * (ShadowColor) blank and set Style passthrough (StylePassthrough) to enabled to
     * use the shadow color data from your input captions, if present. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithShadowColor(DvbSubtitleShadowColor&& value) { SetShadowColor(std::move(value)); return *this;}


    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough (StylePassthrough) is set to
     * Enabled, leave Shadow opacity (ShadowOpacity) blank to pass through the shadow
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * shadows from your output captions. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline int GetShadowOpacity() const{ return m_shadowOpacity; }

    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough (StylePassthrough) is set to
     * Enabled, leave Shadow opacity (ShadowOpacity) blank to pass through the shadow
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * shadows from your output captions. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline bool ShadowOpacityHasBeenSet() const { return m_shadowOpacityHasBeenSet; }

    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough (StylePassthrough) is set to
     * Enabled, leave Shadow opacity (ShadowOpacity) blank to pass through the shadow
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * shadows from your output captions. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline void SetShadowOpacity(int value) { m_shadowOpacityHasBeenSet = true; m_shadowOpacity = value; }

    /**
     * Specify the opacity of the shadow. Enter a value from 0 to 255, where 0 is
     * transparent and 255 is opaque. If Style passthrough (StylePassthrough) is set to
     * Enabled, leave Shadow opacity (ShadowOpacity) blank to pass through the shadow
     * style information in your input captions to your output captions. If Style
     * passthrough is set to disabled, leave blank to use a value of 0 and remove all
     * shadows from your output captions. Within your job settings, all of your DVB-Sub
     * settings must be identical.
     */
    inline DvbSubDestinationSettings& WithShadowOpacity(int value) { SetShadowOpacity(value); return *this;}


    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left. Within your
     * job settings, all of your DVB-Sub settings must be identical.
     */
    inline int GetShadowXOffset() const{ return m_shadowXOffset; }

    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left. Within your
     * job settings, all of your DVB-Sub settings must be identical.
     */
    inline bool ShadowXOffsetHasBeenSet() const { return m_shadowXOffsetHasBeenSet; }

    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left. Within your
     * job settings, all of your DVB-Sub settings must be identical.
     */
    inline void SetShadowXOffset(int value) { m_shadowXOffsetHasBeenSet = true; m_shadowXOffset = value; }

    /**
     * Specify the horizontal offset of the shadow, relative to the captions in pixels.
     * A value of -2 would result in a shadow offset 2 pixels to the left. Within your
     * job settings, all of your DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithShadowXOffset(int value) { SetShadowXOffset(value); return *this;}


    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset (ShadowYOffset) blank and set Style passthrough
     * (StylePassthrough) to enabled to use the shadow y-offset data from your input
     * captions, if present. Within your job settings, all of your DVB-Sub settings
     * must be identical.
     */
    inline int GetShadowYOffset() const{ return m_shadowYOffset; }

    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset (ShadowYOffset) blank and set Style passthrough
     * (StylePassthrough) to enabled to use the shadow y-offset data from your input
     * captions, if present. Within your job settings, all of your DVB-Sub settings
     * must be identical.
     */
    inline bool ShadowYOffsetHasBeenSet() const { return m_shadowYOffsetHasBeenSet; }

    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset (ShadowYOffset) blank and set Style passthrough
     * (StylePassthrough) to enabled to use the shadow y-offset data from your input
     * captions, if present. Within your job settings, all of your DVB-Sub settings
     * must be identical.
     */
    inline void SetShadowYOffset(int value) { m_shadowYOffsetHasBeenSet = true; m_shadowYOffset = value; }

    /**
     * Specify the vertical offset of the shadow relative to the captions in pixels. A
     * value of -2 would result in a shadow offset 2 pixels above the text. Leave
     * Shadow y-offset (ShadowYOffset) blank and set Style passthrough
     * (StylePassthrough) to enabled to use the shadow y-offset data from your input
     * captions, if present. Within your job settings, all of your DVB-Sub settings
     * must be identical.
     */
    inline DvbSubDestinationSettings& WithShadowYOffset(int value) { SetShadowYOffset(value); return *this;}


    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline const DvbSubtitleStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline void SetStylePassthrough(const DvbSubtitleStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline void SetStylePassthrough(DvbSubtitleStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline DvbSubDestinationSettings& WithStylePassthrough(const DvbSubtitleStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use default settings:
     * white text with black outlining, bottom-center positioning, and automatic
     * sizing. Whether you set Style passthrough to enabled or not, you can also choose
     * to manually override any of the individual style and position settings.
     */
    inline DvbSubDestinationSettings& WithStylePassthrough(DvbSubtitleStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}


    /**
     * Specify whether your DVB subtitles are standard or for hearing impaired. Choose
     * hearing impaired if your subtitles include audio descriptions and dialogue.
     * Choose standard if your subtitles include only dialogue.
     */
    inline const DvbSubtitlingType& GetSubtitlingType() const{ return m_subtitlingType; }

    /**
     * Specify whether your DVB subtitles are standard or for hearing impaired. Choose
     * hearing impaired if your subtitles include audio descriptions and dialogue.
     * Choose standard if your subtitles include only dialogue.
     */
    inline bool SubtitlingTypeHasBeenSet() const { return m_subtitlingTypeHasBeenSet; }

    /**
     * Specify whether your DVB subtitles are standard or for hearing impaired. Choose
     * hearing impaired if your subtitles include audio descriptions and dialogue.
     * Choose standard if your subtitles include only dialogue.
     */
    inline void SetSubtitlingType(const DvbSubtitlingType& value) { m_subtitlingTypeHasBeenSet = true; m_subtitlingType = value; }

    /**
     * Specify whether your DVB subtitles are standard or for hearing impaired. Choose
     * hearing impaired if your subtitles include audio descriptions and dialogue.
     * Choose standard if your subtitles include only dialogue.
     */
    inline void SetSubtitlingType(DvbSubtitlingType&& value) { m_subtitlingTypeHasBeenSet = true; m_subtitlingType = std::move(value); }

    /**
     * Specify whether your DVB subtitles are standard or for hearing impaired. Choose
     * hearing impaired if your subtitles include audio descriptions and dialogue.
     * Choose standard if your subtitles include only dialogue.
     */
    inline DvbSubDestinationSettings& WithSubtitlingType(const DvbSubtitlingType& value) { SetSubtitlingType(value); return *this;}

    /**
     * Specify whether your DVB subtitles are standard or for hearing impaired. Choose
     * hearing impaired if your subtitles include audio descriptions and dialogue.
     * Choose standard if your subtitles include only dialogue.
     */
    inline DvbSubDestinationSettings& WithSubtitlingType(DvbSubtitlingType&& value) { SetSubtitlingType(std::move(value)); return *this;}


    /**
     * Specify whether the Text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions. Within your job settings, all of your DVB-Sub settings must
     * be identical.
     */
    inline const DvbSubtitleTeletextSpacing& GetTeletextSpacing() const{ return m_teletextSpacing; }

    /**
     * Specify whether the Text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions. Within your job settings, all of your DVB-Sub settings must
     * be identical.
     */
    inline bool TeletextSpacingHasBeenSet() const { return m_teletextSpacingHasBeenSet; }

    /**
     * Specify whether the Text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions. Within your job settings, all of your DVB-Sub settings must
     * be identical.
     */
    inline void SetTeletextSpacing(const DvbSubtitleTeletextSpacing& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = value; }

    /**
     * Specify whether the Text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions. Within your job settings, all of your DVB-Sub settings must
     * be identical.
     */
    inline void SetTeletextSpacing(DvbSubtitleTeletextSpacing&& value) { m_teletextSpacingHasBeenSet = true; m_teletextSpacing = std::move(value); }

    /**
     * Specify whether the Text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions. Within your job settings, all of your DVB-Sub settings must
     * be identical.
     */
    inline DvbSubDestinationSettings& WithTeletextSpacing(const DvbSubtitleTeletextSpacing& value) { SetTeletextSpacing(value); return *this;}

    /**
     * Specify whether the Text spacing (TeletextSpacing) in your captions is set by
     * the captions grid, or varies depending on letter width. Choose fixed grid
     * (FIXED_GRID) to conform to the spacing specified in the captions file more
     * accurately. Choose proportional (PROPORTIONAL) to make the text easier to read
     * for closed captions. Within your job settings, all of your DVB-Sub settings must
     * be identical.
     */
    inline DvbSubDestinationSettings& WithTeletextSpacing(DvbSubtitleTeletextSpacing&& value) { SetTeletextSpacing(std::move(value)); return *this;}


    /**
     * Specify the width, in pixels, of this set of DVB-Sub captions. The default value
     * is 720 pixels. Related setting: When you use this setting, you must set DDS
     * handling (ddsHandling) to a value other than None (NONE). All burn-in and
     * DVB-Sub font settings must match.
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * Specify the width, in pixels, of this set of DVB-Sub captions. The default value
     * is 720 pixels. Related setting: When you use this setting, you must set DDS
     * handling (ddsHandling) to a value other than None (NONE). All burn-in and
     * DVB-Sub font settings must match.
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * Specify the width, in pixels, of this set of DVB-Sub captions. The default value
     * is 720 pixels. Related setting: When you use this setting, you must set DDS
     * handling (ddsHandling) to a value other than None (NONE). All burn-in and
     * DVB-Sub font settings must match.
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * Specify the width, in pixels, of this set of DVB-Sub captions. The default value
     * is 720 pixels. Related setting: When you use this setting, you must set DDS
     * handling (ddsHandling) to a value other than None (NONE). All burn-in and
     * DVB-Sub font settings must match.
     */
    inline DvbSubDestinationSettings& WithWidth(int value) { SetWidth(value); return *this;}


    /**
     * Specify the horizontal position (XPosition) of the captions, relative to the
     * left side of the outputin pixels. A value of 10 would result in the captions
     * starting 10 pixels from the left ofthe output. If no explicit x_position is
     * provided, the horizontal caption position will bedetermined by the alignment
     * parameter. Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline int GetXPosition() const{ return m_xPosition; }

    /**
     * Specify the horizontal position (XPosition) of the captions, relative to the
     * left side of the outputin pixels. A value of 10 would result in the captions
     * starting 10 pixels from the left ofthe output. If no explicit x_position is
     * provided, the horizontal caption position will bedetermined by the alignment
     * parameter. Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline bool XPositionHasBeenSet() const { return m_xPositionHasBeenSet; }

    /**
     * Specify the horizontal position (XPosition) of the captions, relative to the
     * left side of the outputin pixels. A value of 10 would result in the captions
     * starting 10 pixels from the left ofthe output. If no explicit x_position is
     * provided, the horizontal caption position will bedetermined by the alignment
     * parameter. Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline void SetXPosition(int value) { m_xPositionHasBeenSet = true; m_xPosition = value; }

    /**
     * Specify the horizontal position (XPosition) of the captions, relative to the
     * left side of the outputin pixels. A value of 10 would result in the captions
     * starting 10 pixels from the left ofthe output. If no explicit x_position is
     * provided, the horizontal caption position will bedetermined by the alignment
     * parameter. Within your job settings, all of your DVB-Sub settings must be
     * identical.
     */
    inline DvbSubDestinationSettings& WithXPosition(int value) { SetXPosition(value); return *this;}


    /**
     * Specify the vertical position (YPosition) of the captions, relative to the top
     * of the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the top of the output. If no explicit y_position is provided, the
     * caption will be positioned towards the bottom of the output. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline int GetYPosition() const{ return m_yPosition; }

    /**
     * Specify the vertical position (YPosition) of the captions, relative to the top
     * of the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the top of the output. If no explicit y_position is provided, the
     * caption will be positioned towards the bottom of the output. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline bool YPositionHasBeenSet() const { return m_yPositionHasBeenSet; }

    /**
     * Specify the vertical position (YPosition) of the captions, relative to the top
     * of the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the top of the output. If no explicit y_position is provided, the
     * caption will be positioned towards the bottom of the output. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline void SetYPosition(int value) { m_yPositionHasBeenSet = true; m_yPosition = value; }

    /**
     * Specify the vertical position (YPosition) of the captions, relative to the top
     * of the output in pixels. A value of 10 would result in the captions starting 10
     * pixels from the top of the output. If no explicit y_position is provided, the
     * caption will be positioned towards the bottom of the output. Within your job
     * settings, all of your DVB-Sub settings must be identical.
     */
    inline DvbSubDestinationSettings& WithYPosition(int value) { SetYPosition(value); return *this;}

  private:

    DvbSubtitleAlignment m_alignment;
    bool m_alignmentHasBeenSet = false;

    DvbSubtitleApplyFontColor m_applyFontColor;
    bool m_applyFontColorHasBeenSet = false;

    DvbSubtitleBackgroundColor m_backgroundColor;
    bool m_backgroundColorHasBeenSet = false;

    int m_backgroundOpacity;
    bool m_backgroundOpacityHasBeenSet = false;

    DvbddsHandling m_ddsHandling;
    bool m_ddsHandlingHasBeenSet = false;

    int m_ddsXCoordinate;
    bool m_ddsXCoordinateHasBeenSet = false;

    int m_ddsYCoordinate;
    bool m_ddsYCoordinateHasBeenSet = false;

    DvbSubSubtitleFallbackFont m_fallbackFont;
    bool m_fallbackFontHasBeenSet = false;

    DvbSubtitleFontColor m_fontColor;
    bool m_fontColorHasBeenSet = false;

    int m_fontOpacity;
    bool m_fontOpacityHasBeenSet = false;

    int m_fontResolution;
    bool m_fontResolutionHasBeenSet = false;

    FontScript m_fontScript;
    bool m_fontScriptHasBeenSet = false;

    int m_fontSize;
    bool m_fontSizeHasBeenSet = false;

    int m_height;
    bool m_heightHasBeenSet = false;

    Aws::String m_hexFontColor;
    bool m_hexFontColorHasBeenSet = false;

    DvbSubtitleOutlineColor m_outlineColor;
    bool m_outlineColorHasBeenSet = false;

    int m_outlineSize;
    bool m_outlineSizeHasBeenSet = false;

    DvbSubtitleShadowColor m_shadowColor;
    bool m_shadowColorHasBeenSet = false;

    int m_shadowOpacity;
    bool m_shadowOpacityHasBeenSet = false;

    int m_shadowXOffset;
    bool m_shadowXOffsetHasBeenSet = false;

    int m_shadowYOffset;
    bool m_shadowYOffsetHasBeenSet = false;

    DvbSubtitleStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet = false;

    DvbSubtitlingType m_subtitlingType;
    bool m_subtitlingTypeHasBeenSet = false;

    DvbSubtitleTeletextSpacing m_teletextSpacing;
    bool m_teletextSpacingHasBeenSet = false;

    int m_width;
    bool m_widthHasBeenSet = false;

    int m_xPosition;
    bool m_xPositionHasBeenSet = false;

    int m_yPosition;
    bool m_yPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
