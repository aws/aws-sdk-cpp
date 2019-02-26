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
#include <aws/mediaconvert/model/AfdSignaling.h>
#include <aws/mediaconvert/model/AntiAlias.h>
#include <aws/mediaconvert/model/VideoCodecSettings.h>
#include <aws/mediaconvert/model/ColorMetadata.h>
#include <aws/mediaconvert/model/Rectangle.h>
#include <aws/mediaconvert/model/DropFrameTimecode.h>
#include <aws/mediaconvert/model/RespondToAfd.h>
#include <aws/mediaconvert/model/ScalingBehavior.h>
#include <aws/mediaconvert/model/VideoTimecodeInsertion.h>
#include <aws/mediaconvert/model/VideoPreprocessor.h>
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
   * Settings for video outputs<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/VideoDescription">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API VideoDescription
  {
  public:
    VideoDescription();
    VideoDescription(Aws::Utils::Json::JsonView jsonValue);
    VideoDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AfdSignaling& GetAfdSignaling() const{ return m_afdSignaling; }

    
    inline void SetAfdSignaling(const AfdSignaling& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }

    
    inline void SetAfdSignaling(AfdSignaling&& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = std::move(value); }

    
    inline VideoDescription& WithAfdSignaling(const AfdSignaling& value) { SetAfdSignaling(value); return *this;}

    
    inline VideoDescription& WithAfdSignaling(AfdSignaling&& value) { SetAfdSignaling(std::move(value)); return *this;}


    /**
     * You no longer need to specify the anti-alias filter. It's now automatically
     * applied to all outputs. This property is deprecated.
     */
    inline const AntiAlias& GetAntiAlias() const{ return m_antiAlias; }

    /**
     * You no longer need to specify the anti-alias filter. It's now automatically
     * applied to all outputs. This property is deprecated.
     */
    inline void SetAntiAlias(const AntiAlias& value) { m_antiAliasHasBeenSet = true; m_antiAlias = value; }

    /**
     * You no longer need to specify the anti-alias filter. It's now automatically
     * applied to all outputs. This property is deprecated.
     */
    inline void SetAntiAlias(AntiAlias&& value) { m_antiAliasHasBeenSet = true; m_antiAlias = std::move(value); }

    /**
     * You no longer need to specify the anti-alias filter. It's now automatically
     * applied to all outputs. This property is deprecated.
     */
    inline VideoDescription& WithAntiAlias(const AntiAlias& value) { SetAntiAlias(value); return *this;}

    /**
     * You no longer need to specify the anti-alias filter. It's now automatically
     * applied to all outputs. This property is deprecated.
     */
    inline VideoDescription& WithAntiAlias(AntiAlias&& value) { SetAntiAlias(std::move(value)); return *this;}


    
    inline const VideoCodecSettings& GetCodecSettings() const{ return m_codecSettings; }

    
    inline void SetCodecSettings(const VideoCodecSettings& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = value; }

    
    inline void SetCodecSettings(VideoCodecSettings&& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = std::move(value); }

    
    inline VideoDescription& WithCodecSettings(const VideoCodecSettings& value) { SetCodecSettings(value); return *this;}

    
    inline VideoDescription& WithCodecSettings(VideoCodecSettings&& value) { SetCodecSettings(std::move(value)); return *this;}


    
    inline const ColorMetadata& GetColorMetadata() const{ return m_colorMetadata; }

    
    inline void SetColorMetadata(const ColorMetadata& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }

    
    inline void SetColorMetadata(ColorMetadata&& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = std::move(value); }

    
    inline VideoDescription& WithColorMetadata(const ColorMetadata& value) { SetColorMetadata(value); return *this;}

    
    inline VideoDescription& WithColorMetadata(ColorMetadata&& value) { SetColorMetadata(std::move(value)); return *this;}


    /**
     * Applies only if your input aspect ratio is different from your output aspect
     * ratio. Use Input cropping rectangle (Crop) to specify the  video area the
     * service will include in the output. This will crop the input source, causing
     * video pixels to be removed on encode. If you crop your input frame size to
     * smaller than your output frame size, make sure to specify the behavior you want
     * in your output setting "Scaling behavior".
     */
    inline const Rectangle& GetCrop() const{ return m_crop; }

    /**
     * Applies only if your input aspect ratio is different from your output aspect
     * ratio. Use Input cropping rectangle (Crop) to specify the  video area the
     * service will include in the output. This will crop the input source, causing
     * video pixels to be removed on encode. If you crop your input frame size to
     * smaller than your output frame size, make sure to specify the behavior you want
     * in your output setting "Scaling behavior".
     */
    inline void SetCrop(const Rectangle& value) { m_cropHasBeenSet = true; m_crop = value; }

    /**
     * Applies only if your input aspect ratio is different from your output aspect
     * ratio. Use Input cropping rectangle (Crop) to specify the  video area the
     * service will include in the output. This will crop the input source, causing
     * video pixels to be removed on encode. If you crop your input frame size to
     * smaller than your output frame size, make sure to specify the behavior you want
     * in your output setting "Scaling behavior".
     */
    inline void SetCrop(Rectangle&& value) { m_cropHasBeenSet = true; m_crop = std::move(value); }

    /**
     * Applies only if your input aspect ratio is different from your output aspect
     * ratio. Use Input cropping rectangle (Crop) to specify the  video area the
     * service will include in the output. This will crop the input source, causing
     * video pixels to be removed on encode. If you crop your input frame size to
     * smaller than your output frame size, make sure to specify the behavior you want
     * in your output setting "Scaling behavior".
     */
    inline VideoDescription& WithCrop(const Rectangle& value) { SetCrop(value); return *this;}

    /**
     * Applies only if your input aspect ratio is different from your output aspect
     * ratio. Use Input cropping rectangle (Crop) to specify the  video area the
     * service will include in the output. This will crop the input source, causing
     * video pixels to be removed on encode. If you crop your input frame size to
     * smaller than your output frame size, make sure to specify the behavior you want
     * in your output setting "Scaling behavior".
     */
    inline VideoDescription& WithCrop(Rectangle&& value) { SetCrop(std::move(value)); return *this;}


    
    inline const DropFrameTimecode& GetDropFrameTimecode() const{ return m_dropFrameTimecode; }

    
    inline void SetDropFrameTimecode(const DropFrameTimecode& value) { m_dropFrameTimecodeHasBeenSet = true; m_dropFrameTimecode = value; }

    
    inline void SetDropFrameTimecode(DropFrameTimecode&& value) { m_dropFrameTimecodeHasBeenSet = true; m_dropFrameTimecode = std::move(value); }

    
    inline VideoDescription& WithDropFrameTimecode(const DropFrameTimecode& value) { SetDropFrameTimecode(value); return *this;}

    
    inline VideoDescription& WithDropFrameTimecode(DropFrameTimecode&& value) { SetDropFrameTimecode(std::move(value)); return *this;}


    /**
     * Applies only if you set AFD Signaling(AfdSignaling) to Fixed (FIXED). Use Fixed
     * (FixedAfd) to specify a four-bit AFD value which the service will write on all 
     * frames of this video output.
     */
    inline int GetFixedAfd() const{ return m_fixedAfd; }

    /**
     * Applies only if you set AFD Signaling(AfdSignaling) to Fixed (FIXED). Use Fixed
     * (FixedAfd) to specify a four-bit AFD value which the service will write on all 
     * frames of this video output.
     */
    inline void SetFixedAfd(int value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }

    /**
     * Applies only if you set AFD Signaling(AfdSignaling) to Fixed (FIXED). Use Fixed
     * (FixedAfd) to specify a four-bit AFD value which the service will write on all 
     * frames of this video output.
     */
    inline VideoDescription& WithFixedAfd(int value) { SetFixedAfd(value); return *this;}


    /**
     * Use the Height (Height) setting to define the video resolution height for this
     * output. Specify in pixels. If you don't provide a value here, the service will
     * use the input height.
     */
    inline int GetHeight() const{ return m_height; }

    /**
     * Use the Height (Height) setting to define the video resolution height for this
     * output. Specify in pixels. If you don't provide a value here, the service will
     * use the input height.
     */
    inline void SetHeight(int value) { m_heightHasBeenSet = true; m_height = value; }

    /**
     * Use the Height (Height) setting to define the video resolution height for this
     * output. Specify in pixels. If you don't provide a value here, the service will
     * use the input height.
     */
    inline VideoDescription& WithHeight(int value) { SetHeight(value); return *this;}


    /**
     * Use Position (Position) to point to a rectangle object to define your position.
     * This setting overrides any other aspect ratio.
     */
    inline const Rectangle& GetPosition() const{ return m_position; }

    /**
     * Use Position (Position) to point to a rectangle object to define your position.
     * This setting overrides any other aspect ratio.
     */
    inline void SetPosition(const Rectangle& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * Use Position (Position) to point to a rectangle object to define your position.
     * This setting overrides any other aspect ratio.
     */
    inline void SetPosition(Rectangle&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * Use Position (Position) to point to a rectangle object to define your position.
     * This setting overrides any other aspect ratio.
     */
    inline VideoDescription& WithPosition(const Rectangle& value) { SetPosition(value); return *this;}

    /**
     * Use Position (Position) to point to a rectangle object to define your position.
     * This setting overrides any other aspect ratio.
     */
    inline VideoDescription& WithPosition(Rectangle&& value) { SetPosition(std::move(value)); return *this;}


    
    inline const RespondToAfd& GetRespondToAfd() const{ return m_respondToAfd; }

    
    inline void SetRespondToAfd(const RespondToAfd& value) { m_respondToAfdHasBeenSet = true; m_respondToAfd = value; }

    
    inline void SetRespondToAfd(RespondToAfd&& value) { m_respondToAfdHasBeenSet = true; m_respondToAfd = std::move(value); }

    
    inline VideoDescription& WithRespondToAfd(const RespondToAfd& value) { SetRespondToAfd(value); return *this;}

    
    inline VideoDescription& WithRespondToAfd(RespondToAfd&& value) { SetRespondToAfd(std::move(value)); return *this;}


    
    inline const ScalingBehavior& GetScalingBehavior() const{ return m_scalingBehavior; }

    
    inline void SetScalingBehavior(const ScalingBehavior& value) { m_scalingBehaviorHasBeenSet = true; m_scalingBehavior = value; }

    
    inline void SetScalingBehavior(ScalingBehavior&& value) { m_scalingBehaviorHasBeenSet = true; m_scalingBehavior = std::move(value); }

    
    inline VideoDescription& WithScalingBehavior(const ScalingBehavior& value) { SetScalingBehavior(value); return *this;}

    
    inline VideoDescription& WithScalingBehavior(ScalingBehavior&& value) { SetScalingBehavior(std::move(value)); return *this;}


    /**
     * Use Sharpness (Sharpness) setting to specify the strength of anti-aliasing. This
     * setting changes the width of the anti-alias filter kernel used for scaling.
     * Sharpness only applies if your output resolution is different from your input
     * resolution. 0 is the softest setting, 100 the sharpest, and 50 recommended for
     * most content.
     */
    inline int GetSharpness() const{ return m_sharpness; }

    /**
     * Use Sharpness (Sharpness) setting to specify the strength of anti-aliasing. This
     * setting changes the width of the anti-alias filter kernel used for scaling.
     * Sharpness only applies if your output resolution is different from your input
     * resolution. 0 is the softest setting, 100 the sharpest, and 50 recommended for
     * most content.
     */
    inline void SetSharpness(int value) { m_sharpnessHasBeenSet = true; m_sharpness = value; }

    /**
     * Use Sharpness (Sharpness) setting to specify the strength of anti-aliasing. This
     * setting changes the width of the anti-alias filter kernel used for scaling.
     * Sharpness only applies if your output resolution is different from your input
     * resolution. 0 is the softest setting, 100 the sharpest, and 50 recommended for
     * most content.
     */
    inline VideoDescription& WithSharpness(int value) { SetSharpness(value); return *this;}


    
    inline const VideoTimecodeInsertion& GetTimecodeInsertion() const{ return m_timecodeInsertion; }

    
    inline void SetTimecodeInsertion(const VideoTimecodeInsertion& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }

    
    inline void SetTimecodeInsertion(VideoTimecodeInsertion&& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = std::move(value); }

    
    inline VideoDescription& WithTimecodeInsertion(const VideoTimecodeInsertion& value) { SetTimecodeInsertion(value); return *this;}

    
    inline VideoDescription& WithTimecodeInsertion(VideoTimecodeInsertion&& value) { SetTimecodeInsertion(std::move(value)); return *this;}


    /**
     * Find additional transcoding features under Preprocessors (VideoPreprocessors).
     * Enable the features at each output individually. These features are disabled by
     * default.
     */
    inline const VideoPreprocessor& GetVideoPreprocessors() const{ return m_videoPreprocessors; }

    /**
     * Find additional transcoding features under Preprocessors (VideoPreprocessors).
     * Enable the features at each output individually. These features are disabled by
     * default.
     */
    inline void SetVideoPreprocessors(const VideoPreprocessor& value) { m_videoPreprocessorsHasBeenSet = true; m_videoPreprocessors = value; }

    /**
     * Find additional transcoding features under Preprocessors (VideoPreprocessors).
     * Enable the features at each output individually. These features are disabled by
     * default.
     */
    inline void SetVideoPreprocessors(VideoPreprocessor&& value) { m_videoPreprocessorsHasBeenSet = true; m_videoPreprocessors = std::move(value); }

    /**
     * Find additional transcoding features under Preprocessors (VideoPreprocessors).
     * Enable the features at each output individually. These features are disabled by
     * default.
     */
    inline VideoDescription& WithVideoPreprocessors(const VideoPreprocessor& value) { SetVideoPreprocessors(value); return *this;}

    /**
     * Find additional transcoding features under Preprocessors (VideoPreprocessors).
     * Enable the features at each output individually. These features are disabled by
     * default.
     */
    inline VideoDescription& WithVideoPreprocessors(VideoPreprocessor&& value) { SetVideoPreprocessors(std::move(value)); return *this;}


    /**
     * Use Width (Width) to define the video resolution width, in pixels, for this
     * output. If you don't provide a value here, the service will use the input width.
     */
    inline int GetWidth() const{ return m_width; }

    /**
     * Use Width (Width) to define the video resolution width, in pixels, for this
     * output. If you don't provide a value here, the service will use the input width.
     */
    inline void SetWidth(int value) { m_widthHasBeenSet = true; m_width = value; }

    /**
     * Use Width (Width) to define the video resolution width, in pixels, for this
     * output. If you don't provide a value here, the service will use the input width.
     */
    inline VideoDescription& WithWidth(int value) { SetWidth(value); return *this;}

  private:

    AfdSignaling m_afdSignaling;
    bool m_afdSignalingHasBeenSet;

    AntiAlias m_antiAlias;
    bool m_antiAliasHasBeenSet;

    VideoCodecSettings m_codecSettings;
    bool m_codecSettingsHasBeenSet;

    ColorMetadata m_colorMetadata;
    bool m_colorMetadataHasBeenSet;

    Rectangle m_crop;
    bool m_cropHasBeenSet;

    DropFrameTimecode m_dropFrameTimecode;
    bool m_dropFrameTimecodeHasBeenSet;

    int m_fixedAfd;
    bool m_fixedAfdHasBeenSet;

    int m_height;
    bool m_heightHasBeenSet;

    Rectangle m_position;
    bool m_positionHasBeenSet;

    RespondToAfd m_respondToAfd;
    bool m_respondToAfdHasBeenSet;

    ScalingBehavior m_scalingBehavior;
    bool m_scalingBehaviorHasBeenSet;

    int m_sharpness;
    bool m_sharpnessHasBeenSet;

    VideoTimecodeInsertion m_timecodeInsertion;
    bool m_timecodeInsertionHasBeenSet;

    VideoPreprocessor m_videoPreprocessors;
    bool m_videoPreprocessorsHasBeenSet;

    int m_width;
    bool m_widthHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
