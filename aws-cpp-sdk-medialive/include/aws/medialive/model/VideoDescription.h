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
#include <aws/medialive/model/VideoCodecSettings.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/VideoDescriptionRespondToAfd.h>
#include <aws/medialive/model/VideoDescriptionScalingBehavior.h>
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
   * Video settings for this stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoDescription">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API VideoDescription
  {
  public:
    VideoDescription();
    VideoDescription(Aws::Utils::Json::JsonView jsonValue);
    VideoDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Video codec settings.
     */
    inline const VideoCodecSettings& GetCodecSettings() const{ return m_codecSettings; }

    /**
     * Video codec settings.
     */
    inline bool CodecSettingsHasBeenSet() const { return m_codecSettingsHasBeenSet; }

    /**
     * Video codec settings.
     */
    inline void SetCodecSettings(const VideoCodecSettings& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = value; }

    /**
     * Video codec settings.
     */
    inline void SetCodecSettings(VideoCodecSettings&& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = std::move(value); }

    /**
     * Video codec settings.
     */
    inline VideoDescription& WithCodecSettings(const VideoCodecSettings& value) { SetCodecSettings(value); return *this;}

    /**
     * Video codec settings.
     */
    inline VideoDescription& WithCodecSettings(VideoCodecSettings&& value) { SetCodecSettings(std::move(value)); return *this;}


    /**
     * Output video height, in pixels. Must be an even number. For most codecs, you can
     * leave this field and width blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * Output video height, in pixels. Must be an even number. For most codecs, you can
     * leave this field and width blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

    /**
     * Output video height, in pixels. Must be an even number. For most codecs, you can
     * leave this field and width blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * Output video height, in pixels. Must be an even number. For most codecs, you can
     * leave this field and width blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline VideoDescription& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * The name of this VideoDescription. Outputs will use this name to uniquely
     * identify this Description.  Description names should be unique within this Live
     * Event.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of this VideoDescription. Outputs will use this name to uniquely
     * identify this Description.  Description names should be unique within this Live
     * Event.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of this VideoDescription. Outputs will use this name to uniquely
     * identify this Description.  Description names should be unique within this Live
     * Event.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of this VideoDescription. Outputs will use this name to uniquely
     * identify this Description.  Description names should be unique within this Live
     * Event.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of this VideoDescription. Outputs will use this name to uniquely
     * identify this Description.  Description names should be unique within this Live
     * Event.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of this VideoDescription. Outputs will use this name to uniquely
     * identify this Description.  Description names should be unique within this Live
     * Event.
     */
    inline VideoDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of this VideoDescription. Outputs will use this name to uniquely
     * identify this Description.  Description names should be unique within this Live
     * Event.
     */
    inline VideoDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of this VideoDescription. Outputs will use this name to uniquely
     * identify this Description.  Description names should be unique within this Live
     * Event.
     */
    inline VideoDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * Indicates how to respond to the AFD values in the input stream. RESPOND causes
     * input video to be clipped, depending on the AFD value, input display aspect
     * ratio, and output display aspect ratio, and (except for FRAMECAPTURE codec)
     * includes the values in the output. PASSTHROUGH (does not apply to FRAMECAPTURE
     * codec) ignores the AFD values and includes the values in the output, so input
     * video is not clipped. NONE ignores the AFD values and does not include the
     * values through to the output, so input video is not clipped.
     */
    inline const VideoDescriptionRespondToAfd& GetRespondToAfd() const{ return m_respondToAfd; }

    /**
     * Indicates how to respond to the AFD values in the input stream. RESPOND causes
     * input video to be clipped, depending on the AFD value, input display aspect
     * ratio, and output display aspect ratio, and (except for FRAMECAPTURE codec)
     * includes the values in the output. PASSTHROUGH (does not apply to FRAMECAPTURE
     * codec) ignores the AFD values and includes the values in the output, so input
     * video is not clipped. NONE ignores the AFD values and does not include the
     * values through to the output, so input video is not clipped.
     */
    inline bool RespondToAfdHasBeenSet() const { return m_respondToAfdHasBeenSet; }

    /**
     * Indicates how to respond to the AFD values in the input stream. RESPOND causes
     * input video to be clipped, depending on the AFD value, input display aspect
     * ratio, and output display aspect ratio, and (except for FRAMECAPTURE codec)
     * includes the values in the output. PASSTHROUGH (does not apply to FRAMECAPTURE
     * codec) ignores the AFD values and includes the values in the output, so input
     * video is not clipped. NONE ignores the AFD values and does not include the
     * values through to the output, so input video is not clipped.
     */
    inline void SetRespondToAfd(const VideoDescriptionRespondToAfd& value) { m_respondToAfdHasBeenSet = true; m_respondToAfd = value; }

    /**
     * Indicates how to respond to the AFD values in the input stream. RESPOND causes
     * input video to be clipped, depending on the AFD value, input display aspect
     * ratio, and output display aspect ratio, and (except for FRAMECAPTURE codec)
     * includes the values in the output. PASSTHROUGH (does not apply to FRAMECAPTURE
     * codec) ignores the AFD values and includes the values in the output, so input
     * video is not clipped. NONE ignores the AFD values and does not include the
     * values through to the output, so input video is not clipped.
     */
    inline void SetRespondToAfd(VideoDescriptionRespondToAfd&& value) { m_respondToAfdHasBeenSet = true; m_respondToAfd = std::move(value); }

    /**
     * Indicates how to respond to the AFD values in the input stream. RESPOND causes
     * input video to be clipped, depending on the AFD value, input display aspect
     * ratio, and output display aspect ratio, and (except for FRAMECAPTURE codec)
     * includes the values in the output. PASSTHROUGH (does not apply to FRAMECAPTURE
     * codec) ignores the AFD values and includes the values in the output, so input
     * video is not clipped. NONE ignores the AFD values and does not include the
     * values through to the output, so input video is not clipped.
     */
    inline VideoDescription& WithRespondToAfd(const VideoDescriptionRespondToAfd& value) { SetRespondToAfd(value); return *this;}

    /**
     * Indicates how to respond to the AFD values in the input stream. RESPOND causes
     * input video to be clipped, depending on the AFD value, input display aspect
     * ratio, and output display aspect ratio, and (except for FRAMECAPTURE codec)
     * includes the values in the output. PASSTHROUGH (does not apply to FRAMECAPTURE
     * codec) ignores the AFD values and includes the values in the output, so input
     * video is not clipped. NONE ignores the AFD values and does not include the
     * values through to the output, so input video is not clipped.
     */
    inline VideoDescription& WithRespondToAfd(VideoDescriptionRespondToAfd&& value) { SetRespondToAfd(std::move(value)); return *this;}


    /**
     * STRETCHTOOUTPUT configures the output position to stretch the video to the
     * specified output resolution (height and width). This option will override any
     * position value. DEFAULT may insert black boxes (pillar boxes or letter boxes)
     * around the video to provide the specified output resolution.
     */
    inline const VideoDescriptionScalingBehavior& GetScalingBehavior() const{ return m_scalingBehavior; }

    /**
     * STRETCHTOOUTPUT configures the output position to stretch the video to the
     * specified output resolution (height and width). This option will override any
     * position value. DEFAULT may insert black boxes (pillar boxes or letter boxes)
     * around the video to provide the specified output resolution.
     */
    inline bool ScalingBehaviorHasBeenSet() const { return m_scalingBehaviorHasBeenSet; }

    /**
     * STRETCHTOOUTPUT configures the output position to stretch the video to the
     * specified output resolution (height and width). This option will override any
     * position value. DEFAULT may insert black boxes (pillar boxes or letter boxes)
     * around the video to provide the specified output resolution.
     */
    inline void SetScalingBehavior(const VideoDescriptionScalingBehavior& value) { m_scalingBehaviorHasBeenSet = true; m_scalingBehavior = value; }

    /**
     * STRETCHTOOUTPUT configures the output position to stretch the video to the
     * specified output resolution (height and width). This option will override any
     * position value. DEFAULT may insert black boxes (pillar boxes or letter boxes)
     * around the video to provide the specified output resolution.
     */
    inline void SetScalingBehavior(VideoDescriptionScalingBehavior&& value) { m_scalingBehaviorHasBeenSet = true; m_scalingBehavior = std::move(value); }

    /**
     * STRETCHTOOUTPUT configures the output position to stretch the video to the
     * specified output resolution (height and width). This option will override any
     * position value. DEFAULT may insert black boxes (pillar boxes or letter boxes)
     * around the video to provide the specified output resolution.
     */
    inline VideoDescription& WithScalingBehavior(const VideoDescriptionScalingBehavior& value) { SetScalingBehavior(value); return *this;}

    /**
     * STRETCHTOOUTPUT configures the output position to stretch the video to the
     * specified output resolution (height and width). This option will override any
     * position value. DEFAULT may insert black boxes (pillar boxes or letter boxes)
     * around the video to provide the specified output resolution.
     */
    inline VideoDescription& WithScalingBehavior(VideoDescriptionScalingBehavior&& value) { SetScalingBehavior(std::move(value)); return *this;}


    /**
     * Changes the strength of the anti-alias filter used for scaling. 0 is the softest
     * setting, 100 is the sharpest. A setting of 50 is recommended for most content.
     */
    inline int GetSharpness() const{ return m_sharpness; }

    /**
     * Changes the strength of the anti-alias filter used for scaling. 0 is the softest
     * setting, 100 is the sharpest. A setting of 50 is recommended for most content.
     */
    inline bool SharpnessHasBeenSet() const { return m_sharpnessHasBeenSet; }

    /**
     * Changes the strength of the anti-alias filter used for scaling. 0 is the softest
     * setting, 100 is the sharpest. A setting of 50 is recommended for most content.
     */
    inline void SetSharpness(int value) { m_sharpnessHasBeenSet = true; m_sharpness = value; }

    /**
     * Changes the strength of the anti-alias filter used for scaling. 0 is the softest
     * setting, 100 is the sharpest. A setting of 50 is recommended for most content.
     */
    inline VideoDescription& WithSharpness(int value) { SetSharpness(value); return *this;}


    /**
     * Output video width, in pixels. Must be an even number. For most codecs, you can
     * leave this field and height blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * Output video width, in pixels. Must be an even number. For most codecs, you can
     * leave this field and height blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

    /**
     * Output video width, in pixels. Must be an even number. For most codecs, you can
     * leave this field and height blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * Output video width, in pixels. Must be an even number. For most codecs, you can
     * leave this field and height blank in order to use the height and width
     * (resolution) from the source. Note, however, that leaving blank is not
     * recommended. For the Frame Capture codec, height and width are required.
     */
    inline VideoDescription& WithWidth(int value) { SetWidth(value); return *this;}

  private:

    VideoCodecSettings m_codecSettings;
    bool m_codecSettingsHasBeenSet;

    int m_height;
    bool m_heightHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    VideoDescriptionRespondToAfd m_respondToAfd;
    bool m_respondToAfdHasBeenSet;

    VideoDescriptionScalingBehavior m_scalingBehavior;
    bool m_scalingBehaviorHasBeenSet;

    int m_sharpness;
    bool m_sharpnessHasBeenSet;

    int m_width;
    bool m_widthHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
