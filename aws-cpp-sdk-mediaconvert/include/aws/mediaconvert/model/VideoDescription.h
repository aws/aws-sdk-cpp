﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * Settings related to video encoding of your output. The specific video settings
   * depend on the video codec that you choose. When you work directly in your JSON
   * job specification, include one instance of Video description (VideoDescription)
   * per output.<p><h3>See Also:</h3>   <a
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


    /**
     * This setting only applies to H.264, H.265, and MPEG2 outputs. Use Insert AFD
     * signaling (AfdSignaling) to specify whether the service includes AFD values in
     * the output video data and what those values are. * Choose None to remove all AFD
     * values from this output. * Choose Fixed to ignore input AFD values and instead
     * encode the value specified in the job. * Choose Auto to calculate output AFD
     * values based on the input AFD scaler data.
     */
    inline const AfdSignaling& GetAfdSignaling() const{ return m_afdSignaling; }

    /**
     * This setting only applies to H.264, H.265, and MPEG2 outputs. Use Insert AFD
     * signaling (AfdSignaling) to specify whether the service includes AFD values in
     * the output video data and what those values are. * Choose None to remove all AFD
     * values from this output. * Choose Fixed to ignore input AFD values and instead
     * encode the value specified in the job. * Choose Auto to calculate output AFD
     * values based on the input AFD scaler data.
     */
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }

    /**
     * This setting only applies to H.264, H.265, and MPEG2 outputs. Use Insert AFD
     * signaling (AfdSignaling) to specify whether the service includes AFD values in
     * the output video data and what those values are. * Choose None to remove all AFD
     * values from this output. * Choose Fixed to ignore input AFD values and instead
     * encode the value specified in the job. * Choose Auto to calculate output AFD
     * values based on the input AFD scaler data.
     */
    inline void SetAfdSignaling(const AfdSignaling& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }

    /**
     * This setting only applies to H.264, H.265, and MPEG2 outputs. Use Insert AFD
     * signaling (AfdSignaling) to specify whether the service includes AFD values in
     * the output video data and what those values are. * Choose None to remove all AFD
     * values from this output. * Choose Fixed to ignore input AFD values and instead
     * encode the value specified in the job. * Choose Auto to calculate output AFD
     * values based on the input AFD scaler data.
     */
    inline void SetAfdSignaling(AfdSignaling&& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = std::move(value); }

    /**
     * This setting only applies to H.264, H.265, and MPEG2 outputs. Use Insert AFD
     * signaling (AfdSignaling) to specify whether the service includes AFD values in
     * the output video data and what those values are. * Choose None to remove all AFD
     * values from this output. * Choose Fixed to ignore input AFD values and instead
     * encode the value specified in the job. * Choose Auto to calculate output AFD
     * values based on the input AFD scaler data.
     */
    inline VideoDescription& WithAfdSignaling(const AfdSignaling& value) { SetAfdSignaling(value); return *this;}

    /**
     * This setting only applies to H.264, H.265, and MPEG2 outputs. Use Insert AFD
     * signaling (AfdSignaling) to specify whether the service includes AFD values in
     * the output video data and what those values are. * Choose None to remove all AFD
     * values from this output. * Choose Fixed to ignore input AFD values and instead
     * encode the value specified in the job. * Choose Auto to calculate output AFD
     * values based on the input AFD scaler data.
     */
    inline VideoDescription& WithAfdSignaling(AfdSignaling&& value) { SetAfdSignaling(std::move(value)); return *this;}


    /**
     * The anti-alias filter is automatically applied to all outputs. The service no
     * longer accepts the value DISABLED for AntiAlias. If you specify that in your
     * job, the service will ignore the setting.
     */
    inline const AntiAlias& GetAntiAlias() const{ return m_antiAlias; }

    /**
     * The anti-alias filter is automatically applied to all outputs. The service no
     * longer accepts the value DISABLED for AntiAlias. If you specify that in your
     * job, the service will ignore the setting.
     */
    inline bool AntiAliasHasBeenSet() const { return m_antiAliasHasBeenSet; }

    /**
     * The anti-alias filter is automatically applied to all outputs. The service no
     * longer accepts the value DISABLED for AntiAlias. If you specify that in your
     * job, the service will ignore the setting.
     */
    inline void SetAntiAlias(const AntiAlias& value) { m_antiAliasHasBeenSet = true; m_antiAlias = value; }

    /**
     * The anti-alias filter is automatically applied to all outputs. The service no
     * longer accepts the value DISABLED for AntiAlias. If you specify that in your
     * job, the service will ignore the setting.
     */
    inline void SetAntiAlias(AntiAlias&& value) { m_antiAliasHasBeenSet = true; m_antiAlias = std::move(value); }

    /**
     * The anti-alias filter is automatically applied to all outputs. The service no
     * longer accepts the value DISABLED for AntiAlias. If you specify that in your
     * job, the service will ignore the setting.
     */
    inline VideoDescription& WithAntiAlias(const AntiAlias& value) { SetAntiAlias(value); return *this;}

    /**
     * The anti-alias filter is automatically applied to all outputs. The service no
     * longer accepts the value DISABLED for AntiAlias. If you specify that in your
     * job, the service will ignore the setting.
     */
    inline VideoDescription& WithAntiAlias(AntiAlias&& value) { SetAntiAlias(std::move(value)); return *this;}


    /**
     * Video codec settings, (CodecSettings) under (VideoDescription), contains the
     * group of settings related to video encoding. The settings in this group vary
     * depending on the value that you choose for Video codec (Codec). For each codec
     * enum that you choose, define the corresponding settings object. The following
     * lists the codec enum, settings object pairs. * AV1, Av1Settings * AVC_INTRA,
     * AvcIntraSettings * FRAME_CAPTURE, FrameCaptureSettings * H_264, H264Settings *
     * H_265, H265Settings * MPEG2, Mpeg2Settings * PRORES, ProresSettings * VC3,
     * Vc3Settings * VP8, Vp8Settings * VP9, Vp9Settings * XAVC, XavcSettings
     */
    inline const VideoCodecSettings& GetCodecSettings() const{ return m_codecSettings; }

    /**
     * Video codec settings, (CodecSettings) under (VideoDescription), contains the
     * group of settings related to video encoding. The settings in this group vary
     * depending on the value that you choose for Video codec (Codec). For each codec
     * enum that you choose, define the corresponding settings object. The following
     * lists the codec enum, settings object pairs. * AV1, Av1Settings * AVC_INTRA,
     * AvcIntraSettings * FRAME_CAPTURE, FrameCaptureSettings * H_264, H264Settings *
     * H_265, H265Settings * MPEG2, Mpeg2Settings * PRORES, ProresSettings * VC3,
     * Vc3Settings * VP8, Vp8Settings * VP9, Vp9Settings * XAVC, XavcSettings
     */
    inline bool CodecSettingsHasBeenSet() const { return m_codecSettingsHasBeenSet; }

    /**
     * Video codec settings, (CodecSettings) under (VideoDescription), contains the
     * group of settings related to video encoding. The settings in this group vary
     * depending on the value that you choose for Video codec (Codec). For each codec
     * enum that you choose, define the corresponding settings object. The following
     * lists the codec enum, settings object pairs. * AV1, Av1Settings * AVC_INTRA,
     * AvcIntraSettings * FRAME_CAPTURE, FrameCaptureSettings * H_264, H264Settings *
     * H_265, H265Settings * MPEG2, Mpeg2Settings * PRORES, ProresSettings * VC3,
     * Vc3Settings * VP8, Vp8Settings * VP9, Vp9Settings * XAVC, XavcSettings
     */
    inline void SetCodecSettings(const VideoCodecSettings& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = value; }

    /**
     * Video codec settings, (CodecSettings) under (VideoDescription), contains the
     * group of settings related to video encoding. The settings in this group vary
     * depending on the value that you choose for Video codec (Codec). For each codec
     * enum that you choose, define the corresponding settings object. The following
     * lists the codec enum, settings object pairs. * AV1, Av1Settings * AVC_INTRA,
     * AvcIntraSettings * FRAME_CAPTURE, FrameCaptureSettings * H_264, H264Settings *
     * H_265, H265Settings * MPEG2, Mpeg2Settings * PRORES, ProresSettings * VC3,
     * Vc3Settings * VP8, Vp8Settings * VP9, Vp9Settings * XAVC, XavcSettings
     */
    inline void SetCodecSettings(VideoCodecSettings&& value) { m_codecSettingsHasBeenSet = true; m_codecSettings = std::move(value); }

    /**
     * Video codec settings, (CodecSettings) under (VideoDescription), contains the
     * group of settings related to video encoding. The settings in this group vary
     * depending on the value that you choose for Video codec (Codec). For each codec
     * enum that you choose, define the corresponding settings object. The following
     * lists the codec enum, settings object pairs. * AV1, Av1Settings * AVC_INTRA,
     * AvcIntraSettings * FRAME_CAPTURE, FrameCaptureSettings * H_264, H264Settings *
     * H_265, H265Settings * MPEG2, Mpeg2Settings * PRORES, ProresSettings * VC3,
     * Vc3Settings * VP8, Vp8Settings * VP9, Vp9Settings * XAVC, XavcSettings
     */
    inline VideoDescription& WithCodecSettings(const VideoCodecSettings& value) { SetCodecSettings(value); return *this;}

    /**
     * Video codec settings, (CodecSettings) under (VideoDescription), contains the
     * group of settings related to video encoding. The settings in this group vary
     * depending on the value that you choose for Video codec (Codec). For each codec
     * enum that you choose, define the corresponding settings object. The following
     * lists the codec enum, settings object pairs. * AV1, Av1Settings * AVC_INTRA,
     * AvcIntraSettings * FRAME_CAPTURE, FrameCaptureSettings * H_264, H264Settings *
     * H_265, H265Settings * MPEG2, Mpeg2Settings * PRORES, ProresSettings * VC3,
     * Vc3Settings * VP8, Vp8Settings * VP9, Vp9Settings * XAVC, XavcSettings
     */
    inline VideoDescription& WithCodecSettings(VideoCodecSettings&& value) { SetCodecSettings(std::move(value)); return *this;}


    /**
     * Choose Insert (INSERT) for this setting to include color metadata in this
     * output. Choose Ignore (IGNORE) to exclude color metadata from this output. If
     * you don't specify a value, the service sets this to Insert by default.
     */
    inline const ColorMetadata& GetColorMetadata() const{ return m_colorMetadata; }

    /**
     * Choose Insert (INSERT) for this setting to include color metadata in this
     * output. Choose Ignore (IGNORE) to exclude color metadata from this output. If
     * you don't specify a value, the service sets this to Insert by default.
     */
    inline bool ColorMetadataHasBeenSet() const { return m_colorMetadataHasBeenSet; }

    /**
     * Choose Insert (INSERT) for this setting to include color metadata in this
     * output. Choose Ignore (IGNORE) to exclude color metadata from this output. If
     * you don't specify a value, the service sets this to Insert by default.
     */
    inline void SetColorMetadata(const ColorMetadata& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }

    /**
     * Choose Insert (INSERT) for this setting to include color metadata in this
     * output. Choose Ignore (IGNORE) to exclude color metadata from this output. If
     * you don't specify a value, the service sets this to Insert by default.
     */
    inline void SetColorMetadata(ColorMetadata&& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = std::move(value); }

    /**
     * Choose Insert (INSERT) for this setting to include color metadata in this
     * output. Choose Ignore (IGNORE) to exclude color metadata from this output. If
     * you don't specify a value, the service sets this to Insert by default.
     */
    inline VideoDescription& WithColorMetadata(const ColorMetadata& value) { SetColorMetadata(value); return *this;}

    /**
     * Choose Insert (INSERT) for this setting to include color metadata in this
     * output. Choose Ignore (IGNORE) to exclude color metadata from this output. If
     * you don't specify a value, the service sets this to Insert by default.
     */
    inline VideoDescription& WithColorMetadata(ColorMetadata&& value) { SetColorMetadata(std::move(value)); return *this;}


    /**
     * Use Cropping selection (crop) to specify the video area that the service will
     * include in the output video frame.
     */
    inline const Rectangle& GetCrop() const{ return m_crop; }

    /**
     * Use Cropping selection (crop) to specify the video area that the service will
     * include in the output video frame.
     */
    inline bool CropHasBeenSet() const { return m_cropHasBeenSet; }

    /**
     * Use Cropping selection (crop) to specify the video area that the service will
     * include in the output video frame.
     */
    inline void SetCrop(const Rectangle& value) { m_cropHasBeenSet = true; m_crop = value; }

    /**
     * Use Cropping selection (crop) to specify the video area that the service will
     * include in the output video frame.
     */
    inline void SetCrop(Rectangle&& value) { m_cropHasBeenSet = true; m_crop = std::move(value); }

    /**
     * Use Cropping selection (crop) to specify the video area that the service will
     * include in the output video frame.
     */
    inline VideoDescription& WithCrop(const Rectangle& value) { SetCrop(value); return *this;}

    /**
     * Use Cropping selection (crop) to specify the video area that the service will
     * include in the output video frame.
     */
    inline VideoDescription& WithCrop(Rectangle&& value) { SetCrop(std::move(value)); return *this;}


    /**
     * Applies only to 29.97 fps outputs. When this feature is enabled, the service
     * will use drop-frame timecode on outputs. If it is not possible to use drop-frame
     * timecode, the system will fall back to non-drop-frame. This setting is enabled
     * by default when Timecode insertion (TimecodeInsertion) is enabled.
     */
    inline const DropFrameTimecode& GetDropFrameTimecode() const{ return m_dropFrameTimecode; }

    /**
     * Applies only to 29.97 fps outputs. When this feature is enabled, the service
     * will use drop-frame timecode on outputs. If it is not possible to use drop-frame
     * timecode, the system will fall back to non-drop-frame. This setting is enabled
     * by default when Timecode insertion (TimecodeInsertion) is enabled.
     */
    inline bool DropFrameTimecodeHasBeenSet() const { return m_dropFrameTimecodeHasBeenSet; }

    /**
     * Applies only to 29.97 fps outputs. When this feature is enabled, the service
     * will use drop-frame timecode on outputs. If it is not possible to use drop-frame
     * timecode, the system will fall back to non-drop-frame. This setting is enabled
     * by default when Timecode insertion (TimecodeInsertion) is enabled.
     */
    inline void SetDropFrameTimecode(const DropFrameTimecode& value) { m_dropFrameTimecodeHasBeenSet = true; m_dropFrameTimecode = value; }

    /**
     * Applies only to 29.97 fps outputs. When this feature is enabled, the service
     * will use drop-frame timecode on outputs. If it is not possible to use drop-frame
     * timecode, the system will fall back to non-drop-frame. This setting is enabled
     * by default when Timecode insertion (TimecodeInsertion) is enabled.
     */
    inline void SetDropFrameTimecode(DropFrameTimecode&& value) { m_dropFrameTimecodeHasBeenSet = true; m_dropFrameTimecode = std::move(value); }

    /**
     * Applies only to 29.97 fps outputs. When this feature is enabled, the service
     * will use drop-frame timecode on outputs. If it is not possible to use drop-frame
     * timecode, the system will fall back to non-drop-frame. This setting is enabled
     * by default when Timecode insertion (TimecodeInsertion) is enabled.
     */
    inline VideoDescription& WithDropFrameTimecode(const DropFrameTimecode& value) { SetDropFrameTimecode(value); return *this;}

    /**
     * Applies only to 29.97 fps outputs. When this feature is enabled, the service
     * will use drop-frame timecode on outputs. If it is not possible to use drop-frame
     * timecode, the system will fall back to non-drop-frame. This setting is enabled
     * by default when Timecode insertion (TimecodeInsertion) is enabled.
     */
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
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }

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
    inline bool HeightHasBeenSet() const { return m_heightHasBeenSet; }

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
     * Use Selection placement (position) to define the video area in your output
     * frame. The area outside of the rectangle that you specify here is black.
     */
    inline const Rectangle& GetPosition() const{ return m_position; }

    /**
     * Use Selection placement (position) to define the video area in your output
     * frame. The area outside of the rectangle that you specify here is black.
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * Use Selection placement (position) to define the video area in your output
     * frame. The area outside of the rectangle that you specify here is black.
     */
    inline void SetPosition(const Rectangle& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * Use Selection placement (position) to define the video area in your output
     * frame. The area outside of the rectangle that you specify here is black.
     */
    inline void SetPosition(Rectangle&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * Use Selection placement (position) to define the video area in your output
     * frame. The area outside of the rectangle that you specify here is black.
     */
    inline VideoDescription& WithPosition(const Rectangle& value) { SetPosition(value); return *this;}

    /**
     * Use Selection placement (position) to define the video area in your output
     * frame. The area outside of the rectangle that you specify here is black.
     */
    inline VideoDescription& WithPosition(Rectangle&& value) { SetPosition(std::move(value)); return *this;}


    /**
     * Use Respond to AFD (RespondToAfd) to specify how the service changes the video
     * itself in response to AFD values in the input. * Choose Respond to clip the
     * input video frame according to the AFD value, input display aspect ratio, and
     * output display aspect ratio. * Choose Passthrough to include the input AFD
     * values. Do not choose this when AfdSignaling is set to (NONE). A preferred
     * implementation of this workflow is to set RespondToAfd to (NONE) and set
     * AfdSignaling to (AUTO). * Choose None to remove all input AFD values from this
     * output.
     */
    inline const RespondToAfd& GetRespondToAfd() const{ return m_respondToAfd; }

    /**
     * Use Respond to AFD (RespondToAfd) to specify how the service changes the video
     * itself in response to AFD values in the input. * Choose Respond to clip the
     * input video frame according to the AFD value, input display aspect ratio, and
     * output display aspect ratio. * Choose Passthrough to include the input AFD
     * values. Do not choose this when AfdSignaling is set to (NONE). A preferred
     * implementation of this workflow is to set RespondToAfd to (NONE) and set
     * AfdSignaling to (AUTO). * Choose None to remove all input AFD values from this
     * output.
     */
    inline bool RespondToAfdHasBeenSet() const { return m_respondToAfdHasBeenSet; }

    /**
     * Use Respond to AFD (RespondToAfd) to specify how the service changes the video
     * itself in response to AFD values in the input. * Choose Respond to clip the
     * input video frame according to the AFD value, input display aspect ratio, and
     * output display aspect ratio. * Choose Passthrough to include the input AFD
     * values. Do not choose this when AfdSignaling is set to (NONE). A preferred
     * implementation of this workflow is to set RespondToAfd to (NONE) and set
     * AfdSignaling to (AUTO). * Choose None to remove all input AFD values from this
     * output.
     */
    inline void SetRespondToAfd(const RespondToAfd& value) { m_respondToAfdHasBeenSet = true; m_respondToAfd = value; }

    /**
     * Use Respond to AFD (RespondToAfd) to specify how the service changes the video
     * itself in response to AFD values in the input. * Choose Respond to clip the
     * input video frame according to the AFD value, input display aspect ratio, and
     * output display aspect ratio. * Choose Passthrough to include the input AFD
     * values. Do not choose this when AfdSignaling is set to (NONE). A preferred
     * implementation of this workflow is to set RespondToAfd to (NONE) and set
     * AfdSignaling to (AUTO). * Choose None to remove all input AFD values from this
     * output.
     */
    inline void SetRespondToAfd(RespondToAfd&& value) { m_respondToAfdHasBeenSet = true; m_respondToAfd = std::move(value); }

    /**
     * Use Respond to AFD (RespondToAfd) to specify how the service changes the video
     * itself in response to AFD values in the input. * Choose Respond to clip the
     * input video frame according to the AFD value, input display aspect ratio, and
     * output display aspect ratio. * Choose Passthrough to include the input AFD
     * values. Do not choose this when AfdSignaling is set to (NONE). A preferred
     * implementation of this workflow is to set RespondToAfd to (NONE) and set
     * AfdSignaling to (AUTO). * Choose None to remove all input AFD values from this
     * output.
     */
    inline VideoDescription& WithRespondToAfd(const RespondToAfd& value) { SetRespondToAfd(value); return *this;}

    /**
     * Use Respond to AFD (RespondToAfd) to specify how the service changes the video
     * itself in response to AFD values in the input. * Choose Respond to clip the
     * input video frame according to the AFD value, input display aspect ratio, and
     * output display aspect ratio. * Choose Passthrough to include the input AFD
     * values. Do not choose this when AfdSignaling is set to (NONE). A preferred
     * implementation of this workflow is to set RespondToAfd to (NONE) and set
     * AfdSignaling to (AUTO). * Choose None to remove all input AFD values from this
     * output.
     */
    inline VideoDescription& WithRespondToAfd(RespondToAfd&& value) { SetRespondToAfd(std::move(value)); return *this;}


    /**
     * Specify how the service handles outputs that have a different aspect ratio from
     * the input aspect ratio. Choose Stretch to output (STRETCH_TO_OUTPUT) to have the
     * service stretch your video image to fit. Keep the setting Default (DEFAULT) to
     * have the service letterbox your video instead. This setting overrides any value
     * that you specify for the setting Selection placement (position) in this output.
     */
    inline const ScalingBehavior& GetScalingBehavior() const{ return m_scalingBehavior; }

    /**
     * Specify how the service handles outputs that have a different aspect ratio from
     * the input aspect ratio. Choose Stretch to output (STRETCH_TO_OUTPUT) to have the
     * service stretch your video image to fit. Keep the setting Default (DEFAULT) to
     * have the service letterbox your video instead. This setting overrides any value
     * that you specify for the setting Selection placement (position) in this output.
     */
    inline bool ScalingBehaviorHasBeenSet() const { return m_scalingBehaviorHasBeenSet; }

    /**
     * Specify how the service handles outputs that have a different aspect ratio from
     * the input aspect ratio. Choose Stretch to output (STRETCH_TO_OUTPUT) to have the
     * service stretch your video image to fit. Keep the setting Default (DEFAULT) to
     * have the service letterbox your video instead. This setting overrides any value
     * that you specify for the setting Selection placement (position) in this output.
     */
    inline void SetScalingBehavior(const ScalingBehavior& value) { m_scalingBehaviorHasBeenSet = true; m_scalingBehavior = value; }

    /**
     * Specify how the service handles outputs that have a different aspect ratio from
     * the input aspect ratio. Choose Stretch to output (STRETCH_TO_OUTPUT) to have the
     * service stretch your video image to fit. Keep the setting Default (DEFAULT) to
     * have the service letterbox your video instead. This setting overrides any value
     * that you specify for the setting Selection placement (position) in this output.
     */
    inline void SetScalingBehavior(ScalingBehavior&& value) { m_scalingBehaviorHasBeenSet = true; m_scalingBehavior = std::move(value); }

    /**
     * Specify how the service handles outputs that have a different aspect ratio from
     * the input aspect ratio. Choose Stretch to output (STRETCH_TO_OUTPUT) to have the
     * service stretch your video image to fit. Keep the setting Default (DEFAULT) to
     * have the service letterbox your video instead. This setting overrides any value
     * that you specify for the setting Selection placement (position) in this output.
     */
    inline VideoDescription& WithScalingBehavior(const ScalingBehavior& value) { SetScalingBehavior(value); return *this;}

    /**
     * Specify how the service handles outputs that have a different aspect ratio from
     * the input aspect ratio. Choose Stretch to output (STRETCH_TO_OUTPUT) to have the
     * service stretch your video image to fit. Keep the setting Default (DEFAULT) to
     * have the service letterbox your video instead. This setting overrides any value
     * that you specify for the setting Selection placement (position) in this output.
     */
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
    inline bool SharpnessHasBeenSet() const { return m_sharpnessHasBeenSet; }

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


    /**
     * Applies only to H.264, H.265, MPEG2, and ProRes outputs. Only enable Timecode
     * insertion when the input frame rate is identical to the output frame rate. To
     * include timecodes in this output, set Timecode insertion
     * (VideoTimecodeInsertion) to PIC_TIMING_SEI. To leave them out, set it to
     * DISABLED. Default is DISABLED. When the service inserts timecodes in an output,
     * by default, it uses any embedded timecodes from the input. If none are present,
     * the service will set the timecode for the first output frame to zero. To change
     * this default behavior, adjust the settings under Timecode configuration
     * (TimecodeConfig). In the console, these settings are located under Job > Job
     * settings > Timecode configuration. Note - Timecode source under input settings
     * (InputTimecodeSource) does not affect the timecodes that are inserted in the
     * output. Source under Job settings > Timecode configuration (TimecodeSource)
     * does.
     */
    inline const VideoTimecodeInsertion& GetTimecodeInsertion() const{ return m_timecodeInsertion; }

    /**
     * Applies only to H.264, H.265, MPEG2, and ProRes outputs. Only enable Timecode
     * insertion when the input frame rate is identical to the output frame rate. To
     * include timecodes in this output, set Timecode insertion
     * (VideoTimecodeInsertion) to PIC_TIMING_SEI. To leave them out, set it to
     * DISABLED. Default is DISABLED. When the service inserts timecodes in an output,
     * by default, it uses any embedded timecodes from the input. If none are present,
     * the service will set the timecode for the first output frame to zero. To change
     * this default behavior, adjust the settings under Timecode configuration
     * (TimecodeConfig). In the console, these settings are located under Job > Job
     * settings > Timecode configuration. Note - Timecode source under input settings
     * (InputTimecodeSource) does not affect the timecodes that are inserted in the
     * output. Source under Job settings > Timecode configuration (TimecodeSource)
     * does.
     */
    inline bool TimecodeInsertionHasBeenSet() const { return m_timecodeInsertionHasBeenSet; }

    /**
     * Applies only to H.264, H.265, MPEG2, and ProRes outputs. Only enable Timecode
     * insertion when the input frame rate is identical to the output frame rate. To
     * include timecodes in this output, set Timecode insertion
     * (VideoTimecodeInsertion) to PIC_TIMING_SEI. To leave them out, set it to
     * DISABLED. Default is DISABLED. When the service inserts timecodes in an output,
     * by default, it uses any embedded timecodes from the input. If none are present,
     * the service will set the timecode for the first output frame to zero. To change
     * this default behavior, adjust the settings under Timecode configuration
     * (TimecodeConfig). In the console, these settings are located under Job > Job
     * settings > Timecode configuration. Note - Timecode source under input settings
     * (InputTimecodeSource) does not affect the timecodes that are inserted in the
     * output. Source under Job settings > Timecode configuration (TimecodeSource)
     * does.
     */
    inline void SetTimecodeInsertion(const VideoTimecodeInsertion& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }

    /**
     * Applies only to H.264, H.265, MPEG2, and ProRes outputs. Only enable Timecode
     * insertion when the input frame rate is identical to the output frame rate. To
     * include timecodes in this output, set Timecode insertion
     * (VideoTimecodeInsertion) to PIC_TIMING_SEI. To leave them out, set it to
     * DISABLED. Default is DISABLED. When the service inserts timecodes in an output,
     * by default, it uses any embedded timecodes from the input. If none are present,
     * the service will set the timecode for the first output frame to zero. To change
     * this default behavior, adjust the settings under Timecode configuration
     * (TimecodeConfig). In the console, these settings are located under Job > Job
     * settings > Timecode configuration. Note - Timecode source under input settings
     * (InputTimecodeSource) does not affect the timecodes that are inserted in the
     * output. Source under Job settings > Timecode configuration (TimecodeSource)
     * does.
     */
    inline void SetTimecodeInsertion(VideoTimecodeInsertion&& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = std::move(value); }

    /**
     * Applies only to H.264, H.265, MPEG2, and ProRes outputs. Only enable Timecode
     * insertion when the input frame rate is identical to the output frame rate. To
     * include timecodes in this output, set Timecode insertion
     * (VideoTimecodeInsertion) to PIC_TIMING_SEI. To leave them out, set it to
     * DISABLED. Default is DISABLED. When the service inserts timecodes in an output,
     * by default, it uses any embedded timecodes from the input. If none are present,
     * the service will set the timecode for the first output frame to zero. To change
     * this default behavior, adjust the settings under Timecode configuration
     * (TimecodeConfig). In the console, these settings are located under Job > Job
     * settings > Timecode configuration. Note - Timecode source under input settings
     * (InputTimecodeSource) does not affect the timecodes that are inserted in the
     * output. Source under Job settings > Timecode configuration (TimecodeSource)
     * does.
     */
    inline VideoDescription& WithTimecodeInsertion(const VideoTimecodeInsertion& value) { SetTimecodeInsertion(value); return *this;}

    /**
     * Applies only to H.264, H.265, MPEG2, and ProRes outputs. Only enable Timecode
     * insertion when the input frame rate is identical to the output frame rate. To
     * include timecodes in this output, set Timecode insertion
     * (VideoTimecodeInsertion) to PIC_TIMING_SEI. To leave them out, set it to
     * DISABLED. Default is DISABLED. When the service inserts timecodes in an output,
     * by default, it uses any embedded timecodes from the input. If none are present,
     * the service will set the timecode for the first output frame to zero. To change
     * this default behavior, adjust the settings under Timecode configuration
     * (TimecodeConfig). In the console, these settings are located under Job > Job
     * settings > Timecode configuration. Note - Timecode source under input settings
     * (InputTimecodeSource) does not affect the timecodes that are inserted in the
     * output. Source under Job settings > Timecode configuration (TimecodeSource)
     * does.
     */
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
    inline bool VideoPreprocessorsHasBeenSet() const { return m_videoPreprocessorsHasBeenSet; }

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
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }

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
