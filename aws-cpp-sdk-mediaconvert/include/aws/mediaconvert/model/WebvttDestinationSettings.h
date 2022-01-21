/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/WebvttAccessibilitySubs.h>
#include <aws/mediaconvert/model/WebvttStylePassthrough.h>
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
   * Settings related to WebVTT captions. WebVTT is a sidecar format that holds
   * captions in a file that is separate from the video container. Set up sidecar
   * captions in the same output group, but different output from your video. For
   * more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.
   * When you work directly in your JSON job specification, include this object and
   * any required children when you set destinationType to WebVTT.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/WebvttDestinationSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API WebvttDestinationSettings
  {
  public:
    WebvttDestinationSettings();
    WebvttDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    WebvttDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify whether to flag this caption track as accessibility in your HLS/CMAF
     * parent manifest. When you choose ENABLED, MediaConvert includes the parameters
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES" in the EXT-X-MEDIA entry for this track. When you keep the
     * default choice, DISABLED, MediaConvert leaves this parameter out.
     */
    inline const WebvttAccessibilitySubs& GetAccessibility() const{ return m_accessibility; }

    /**
     * Specify whether to flag this caption track as accessibility in your HLS/CMAF
     * parent manifest. When you choose ENABLED, MediaConvert includes the parameters
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES" in the EXT-X-MEDIA entry for this track. When you keep the
     * default choice, DISABLED, MediaConvert leaves this parameter out.
     */
    inline bool AccessibilityHasBeenSet() const { return m_accessibilityHasBeenSet; }

    /**
     * Specify whether to flag this caption track as accessibility in your HLS/CMAF
     * parent manifest. When you choose ENABLED, MediaConvert includes the parameters
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES" in the EXT-X-MEDIA entry for this track. When you keep the
     * default choice, DISABLED, MediaConvert leaves this parameter out.
     */
    inline void SetAccessibility(const WebvttAccessibilitySubs& value) { m_accessibilityHasBeenSet = true; m_accessibility = value; }

    /**
     * Specify whether to flag this caption track as accessibility in your HLS/CMAF
     * parent manifest. When you choose ENABLED, MediaConvert includes the parameters
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES" in the EXT-X-MEDIA entry for this track. When you keep the
     * default choice, DISABLED, MediaConvert leaves this parameter out.
     */
    inline void SetAccessibility(WebvttAccessibilitySubs&& value) { m_accessibilityHasBeenSet = true; m_accessibility = std::move(value); }

    /**
     * Specify whether to flag this caption track as accessibility in your HLS/CMAF
     * parent manifest. When you choose ENABLED, MediaConvert includes the parameters
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES" in the EXT-X-MEDIA entry for this track. When you keep the
     * default choice, DISABLED, MediaConvert leaves this parameter out.
     */
    inline WebvttDestinationSettings& WithAccessibility(const WebvttAccessibilitySubs& value) { SetAccessibility(value); return *this;}

    /**
     * Specify whether to flag this caption track as accessibility in your HLS/CMAF
     * parent manifest. When you choose ENABLED, MediaConvert includes the parameters
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES" in the EXT-X-MEDIA entry for this track. When you keep the
     * default choice, DISABLED, MediaConvert leaves this parameter out.
     */
    inline WebvttDestinationSettings& WithAccessibility(WebvttAccessibilitySubs&& value) { SetAccessibility(std::move(value)); return *this;}


    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline const WebvttStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline void SetStylePassthrough(const WebvttStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline void SetStylePassthrough(WebvttStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline WebvttDestinationSettings& WithStylePassthrough(const WebvttStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Set Style passthrough (StylePassthrough) to ENABLED to use the available style,
     * color, and position information from your input captions. MediaConvert uses
     * default settings for any missing style and position information in your input
     * captions. Set Style passthrough to DISABLED, or leave blank, to ignore the style
     * and position information from your input captions and use simplified output
     * captions.
     */
    inline WebvttDestinationSettings& WithStylePassthrough(WebvttStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}

  private:

    WebvttAccessibilitySubs m_accessibility;
    bool m_accessibilityHasBeenSet;

    WebvttStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
