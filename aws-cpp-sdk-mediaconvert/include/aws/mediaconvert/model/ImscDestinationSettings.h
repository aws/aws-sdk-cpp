/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ImscAccessibilitySubs.h>
#include <aws/mediaconvert/model/ImscStylePassthrough.h>
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
   * Settings related to IMSC captions. IMSC is a sidecar format that holds captions
   * in a file that is separate from the video container. Set up sidecar captions in
   * the same output group, but different output from your video. For more
   * information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.
   * When you work directly in your JSON job specification, include this object and
   * any required children when you set destinationType to IMSC.<p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ImscDestinationSettings">AWS
   * API Reference</a></p>
   */
  class ImscDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API ImscDestinationSettings();
    AWS_MEDIACONVERT_API ImscDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ImscDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline const ImscAccessibilitySubs& GetAccessibility() const{ return m_accessibility; }

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline bool AccessibilityHasBeenSet() const { return m_accessibilityHasBeenSet; }

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline void SetAccessibility(const ImscAccessibilitySubs& value) { m_accessibilityHasBeenSet = true; m_accessibility = value; }

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline void SetAccessibility(ImscAccessibilitySubs&& value) { m_accessibilityHasBeenSet = true; m_accessibility = std::move(value); }

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline ImscDestinationSettings& WithAccessibility(const ImscAccessibilitySubs& value) { SetAccessibility(value); return *this;}

    /**
     * Set Accessibility subtitles to Enabled if the ISMC or WebVTT captions track is
     * intended to provide accessibility for people who are deaf or hard of hearing.
     * When you enable this feature, MediaConvert adds the following attributes under
     * EXT-X-MEDIA in the HLS or CMAF manifest for this track:
     * CHARACTERISTICS="public.accessibility.describes-spoken-dialog,public.accessibility.describes-music-and-sound"
     * and AUTOSELECT="YES". Keep the default value, Disabled, if the captions track is
     * not intended to provide such accessibility. MediaConvert will not add the above
     * attributes.
     */
    inline ImscDestinationSettings& WithAccessibility(ImscAccessibilitySubs&& value) { SetAccessibility(std::move(value)); return *this;}


    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline const ImscStylePassthrough& GetStylePassthrough() const{ return m_stylePassthrough; }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline bool StylePassthroughHasBeenSet() const { return m_stylePassthroughHasBeenSet; }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline void SetStylePassthrough(const ImscStylePassthrough& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = value; }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline void SetStylePassthrough(ImscStylePassthrough&& value) { m_stylePassthroughHasBeenSet = true; m_stylePassthrough = std::move(value); }

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline ImscDestinationSettings& WithStylePassthrough(const ImscStylePassthrough& value) { SetStylePassthrough(value); return *this;}

    /**
     * Keep this setting enabled to have MediaConvert use the font style and position
     * information from the captions source in the output. This option is available
     * only when your input captions are IMSC, SMPTE-TT, or TTML. Disable this setting
     * for simplified output captions.
     */
    inline ImscDestinationSettings& WithStylePassthrough(ImscStylePassthrough&& value) { SetStylePassthrough(std::move(value)); return *this;}

  private:

    ImscAccessibilitySubs m_accessibility;
    bool m_accessibilityHasBeenSet = false;

    ImscStylePassthrough m_stylePassthrough;
    bool m_stylePassthroughHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
