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
#include <aws/mediaconvert/model/H264AdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264CodecLevel.h>
#include <aws/mediaconvert/model/H264CodecProfile.h>
#include <aws/mediaconvert/model/H264DynamicSubGop.h>
#include <aws/mediaconvert/model/H264EntropyEncoding.h>
#include <aws/mediaconvert/model/H264FieldEncoding.h>
#include <aws/mediaconvert/model/H264FlickerAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264FramerateControl.h>
#include <aws/mediaconvert/model/H264FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/H264GopBReference.h>
#include <aws/mediaconvert/model/H264GopSizeUnits.h>
#include <aws/mediaconvert/model/H264InterlaceMode.h>
#include <aws/mediaconvert/model/H264ParControl.h>
#include <aws/mediaconvert/model/H264QualityTuningLevel.h>
#include <aws/mediaconvert/model/H264QvbrSettings.h>
#include <aws/mediaconvert/model/H264RateControlMode.h>
#include <aws/mediaconvert/model/H264RepeatPps.h>
#include <aws/mediaconvert/model/H264SceneChangeDetect.h>
#include <aws/mediaconvert/model/H264SlowPal.h>
#include <aws/mediaconvert/model/H264SpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264Syntax.h>
#include <aws/mediaconvert/model/H264Telecine.h>
#include <aws/mediaconvert/model/H264TemporalAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H264UnregisteredSeiTimecode.h>
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
   * Required when you set (Codec) under (VideoDescription)>(CodecSettings) to the
   * value H_264.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/H264Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API H264Settings
  {
  public:
    H264Settings();
    H264Settings(Aws::Utils::Json::JsonView jsonValue);
    H264Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline const H264AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline void SetAdaptiveQuantization(const H264AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline void SetAdaptiveQuantization(H264AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline H264Settings& WithAdaptiveQuantization(const H264AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline H264Settings& WithAdaptiveQuantization(H264AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Average bitrate in bits/second. Required for VBR and CBR. For MS Smooth outputs,
     * bitrates must be unique when rounded down to the nearest multiple of 1000.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. Required for VBR and CBR. For MS Smooth outputs,
     * bitrates must be unique when rounded down to the nearest multiple of 1000.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Average bitrate in bits/second. Required for VBR and CBR. For MS Smooth outputs,
     * bitrates must be unique when rounded down to the nearest multiple of 1000.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Required for VBR and CBR. For MS Smooth outputs,
     * bitrates must be unique when rounded down to the nearest multiple of 1000.
     */
    inline H264Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline const H264CodecLevel& GetCodecLevel() const{ return m_codecLevel; }

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline bool CodecLevelHasBeenSet() const { return m_codecLevelHasBeenSet; }

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline void SetCodecLevel(const H264CodecLevel& value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline void SetCodecLevel(H264CodecLevel&& value) { m_codecLevelHasBeenSet = true; m_codecLevel = std::move(value); }

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline H264Settings& WithCodecLevel(const H264CodecLevel& value) { SetCodecLevel(value); return *this;}

    /**
     * Specify an H.264 level that is consistent with your output video settings. If
     * you aren't sure what level to specify, choose Auto (AUTO).
     */
    inline H264Settings& WithCodecLevel(H264CodecLevel&& value) { SetCodecLevel(std::move(value)); return *this;}


    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline const H264CodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline void SetCodecProfile(const H264CodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline void SetCodecProfile(H264CodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline H264Settings& WithCodecProfile(const H264CodecProfile& value) { SetCodecProfile(value); return *this;}

    /**
     * H.264 Profile. High 4:2:2 and 10-bit profiles are only available with the AVC-I
     * License.
     */
    inline H264Settings& WithCodecProfile(H264CodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline const H264DynamicSubGop& GetDynamicSubGop() const{ return m_dynamicSubGop; }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline bool DynamicSubGopHasBeenSet() const { return m_dynamicSubGopHasBeenSet; }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline void SetDynamicSubGop(const H264DynamicSubGop& value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = value; }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline void SetDynamicSubGop(H264DynamicSubGop&& value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = std::move(value); }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline H264Settings& WithDynamicSubGop(const H264DynamicSubGop& value) { SetDynamicSubGop(value); return *this;}

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline H264Settings& WithDynamicSubGop(H264DynamicSubGop&& value) { SetDynamicSubGop(std::move(value)); return *this;}


    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline const H264EntropyEncoding& GetEntropyEncoding() const{ return m_entropyEncoding; }

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline bool EntropyEncodingHasBeenSet() const { return m_entropyEncodingHasBeenSet; }

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline void SetEntropyEncoding(const H264EntropyEncoding& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = value; }

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline void SetEntropyEncoding(H264EntropyEncoding&& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = std::move(value); }

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline H264Settings& WithEntropyEncoding(const H264EntropyEncoding& value) { SetEntropyEncoding(value); return *this;}

    /**
     * Entropy encoding mode. Use CABAC (must be in Main or High profile) or CAVLC.
     */
    inline H264Settings& WithEntropyEncoding(H264EntropyEncoding&& value) { SetEntropyEncoding(std::move(value)); return *this;}


    /**
     * Choosing FORCE_FIELD disables PAFF encoding for interlaced outputs.
     */
    inline const H264FieldEncoding& GetFieldEncoding() const{ return m_fieldEncoding; }

    /**
     * Choosing FORCE_FIELD disables PAFF encoding for interlaced outputs.
     */
    inline bool FieldEncodingHasBeenSet() const { return m_fieldEncodingHasBeenSet; }

    /**
     * Choosing FORCE_FIELD disables PAFF encoding for interlaced outputs.
     */
    inline void SetFieldEncoding(const H264FieldEncoding& value) { m_fieldEncodingHasBeenSet = true; m_fieldEncoding = value; }

    /**
     * Choosing FORCE_FIELD disables PAFF encoding for interlaced outputs.
     */
    inline void SetFieldEncoding(H264FieldEncoding&& value) { m_fieldEncodingHasBeenSet = true; m_fieldEncoding = std::move(value); }

    /**
     * Choosing FORCE_FIELD disables PAFF encoding for interlaced outputs.
     */
    inline H264Settings& WithFieldEncoding(const H264FieldEncoding& value) { SetFieldEncoding(value); return *this;}

    /**
     * Choosing FORCE_FIELD disables PAFF encoding for interlaced outputs.
     */
    inline H264Settings& WithFieldEncoding(H264FieldEncoding&& value) { SetFieldEncoding(std::move(value)); return *this;}


    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline const H264FlickerAdaptiveQuantization& GetFlickerAdaptiveQuantization() const{ return m_flickerAdaptiveQuantization; }

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline bool FlickerAdaptiveQuantizationHasBeenSet() const { return m_flickerAdaptiveQuantizationHasBeenSet; }

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline void SetFlickerAdaptiveQuantization(const H264FlickerAdaptiveQuantization& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline void SetFlickerAdaptiveQuantization(H264FlickerAdaptiveQuantization&& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = std::move(value); }

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline H264Settings& WithFlickerAdaptiveQuantization(const H264FlickerAdaptiveQuantization& value) { SetFlickerAdaptiveQuantization(value); return *this;}

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline H264Settings& WithFlickerAdaptiveQuantization(H264FlickerAdaptiveQuantization&& value) { SetFlickerAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline const H264FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline void SetFramerateControl(const H264FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline void SetFramerateControl(H264FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline H264Settings& WithFramerateControl(const H264FramerateControl& value) { SetFramerateControl(value); return *this;}

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline H264Settings& WithFramerateControl(H264FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline const H264FramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline void SetFramerateConversionAlgorithm(const H264FramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline void SetFramerateConversionAlgorithm(H264FramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline H264Settings& WithFramerateConversionAlgorithm(const H264FramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline H264Settings& WithFramerateConversionAlgorithm(H264FramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Framerate. In this example, specify 23.976.
     */
    inline H264Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * Frame rate numerator - frame rate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * Frame rate numerator - frame rate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * Frame rate numerator - frame rate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * Frame rate numerator - frame rate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline H264Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline const H264GopBReference& GetGopBReference() const{ return m_gopBReference; }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline void SetGopBReference(const H264GopBReference& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline void SetGopBReference(H264GopBReference&& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = std::move(value); }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline H264Settings& WithGopBReference(const H264GopBReference& value) { SetGopBReference(value); return *this;}

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline H264Settings& WithGopBReference(H264GopBReference&& value) { SetGopBReference(std::move(value)); return *this;}


    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline int GetGopClosedCadence() const{ return m_gopClosedCadence; }

    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }

    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }

    /**
     * Frequency of closed GOPs. In streaming applications, it is recommended that this
     * be set to 1 so a decoder joining mid-stream will receive an IDR frame as quickly
     * as possible. Setting this value to 0 will break output segmenting.
     */
    inline H264Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}


    /**
     * GOP Length (keyframe interval) in frames or seconds. Must be greater than zero.
     */
    inline double GetGopSize() const{ return m_gopSize; }

    /**
     * GOP Length (keyframe interval) in frames or seconds. Must be greater than zero.
     */
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }

    /**
     * GOP Length (keyframe interval) in frames or seconds. Must be greater than zero.
     */
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * GOP Length (keyframe interval) in frames or seconds. Must be greater than zero.
     */
    inline H264Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    /**
     * Indicates if the GOP Size in H264 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline const H264GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    /**
     * Indicates if the GOP Size in H264 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }

    /**
     * Indicates if the GOP Size in H264 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline void SetGopSizeUnits(const H264GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    /**
     * Indicates if the GOP Size in H264 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline void SetGopSizeUnits(H264GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    /**
     * Indicates if the GOP Size in H264 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline H264Settings& WithGopSizeUnits(const H264GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    /**
     * Indicates if the GOP Size in H264 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline H264Settings& WithGopSizeUnits(H264GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline int GetHrdBufferInitialFillPercentage() const{ return m_hrdBufferInitialFillPercentage; }

    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline bool HrdBufferInitialFillPercentageHasBeenSet() const { return m_hrdBufferInitialFillPercentageHasBeenSet; }

    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline void SetHrdBufferInitialFillPercentage(int value) { m_hrdBufferInitialFillPercentageHasBeenSet = true; m_hrdBufferInitialFillPercentage = value; }

    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline H264Settings& WithHrdBufferInitialFillPercentage(int value) { SetHrdBufferInitialFillPercentage(value); return *this;}


    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline int GetHrdBufferSize() const{ return m_hrdBufferSize; }

    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline bool HrdBufferSizeHasBeenSet() const { return m_hrdBufferSizeHasBeenSet; }

    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }

    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline H264Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}


    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type, as follows.
  - If the
     * source is interlaced, the output will be interlaced with the same polarity as
     * the source (it will follow the source). The output could therefore be a mix of
     * "top field first" and "bottom field first".
  - If the source is progressive,
     * the output will be interlaced with "top field first" or "bottom field first"
     * polarity, depending on which of the Follow options you chose.
     */
    inline const H264InterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type, as follows.
  - If the
     * source is interlaced, the output will be interlaced with the same polarity as
     * the source (it will follow the source). The output could therefore be a mix of
     * "top field first" and "bottom field first".
  - If the source is progressive,
     * the output will be interlaced with "top field first" or "bottom field first"
     * polarity, depending on which of the Follow options you chose.
     */
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type, as follows.
  - If the
     * source is interlaced, the output will be interlaced with the same polarity as
     * the source (it will follow the source). The output could therefore be a mix of
     * "top field first" and "bottom field first".
  - If the source is progressive,
     * the output will be interlaced with "top field first" or "bottom field first"
     * polarity, depending on which of the Follow options you chose.
     */
    inline void SetInterlaceMode(const H264InterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type, as follows.
  - If the
     * source is interlaced, the output will be interlaced with the same polarity as
     * the source (it will follow the source). The output could therefore be a mix of
     * "top field first" and "bottom field first".
  - If the source is progressive,
     * the output will be interlaced with "top field first" or "bottom field first"
     * polarity, depending on which of the Follow options you chose.
     */
    inline void SetInterlaceMode(H264InterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type, as follows.
  - If the
     * source is interlaced, the output will be interlaced with the same polarity as
     * the source (it will follow the source). The output could therefore be a mix of
     * "top field first" and "bottom field first".
  - If the source is progressive,
     * the output will be interlaced with "top field first" or "bottom field first"
     * polarity, depending on which of the Follow options you chose.
     */
    inline H264Settings& WithInterlaceMode(const H264InterlaceMode& value) { SetInterlaceMode(value); return *this;}

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type, as follows.
  - If the
     * source is interlaced, the output will be interlaced with the same polarity as
     * the source (it will follow the source). The output could therefore be a mix of
     * "top field first" and "bottom field first".
  - If the source is progressive,
     * the output will be interlaced with "top field first" or "bottom field first"
     * polarity, depending on which of the Follow options you chose.
     */
    inline H264Settings& WithInterlaceMode(H264InterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000. Required when Rate control mode is QVBR.
     */
    inline H264Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


    /**
     * Enforces separation between repeated (cadence) I-frames and I-frames inserted by
     * Scene Change Detection. If a scene change I-frame is within I-interval frames of
     * a cadence I-frame, the GOP is shrunk and/or stretched to the scene change
     * I-frame. GOP stretch requires enabling lookahead as well as setting I-interval.
     * The normal cadence resumes for the next GOP. This setting is only used when
     * Scene Change Detect is enabled. Note: Maximum GOP stretch = GOP size +
     * Min-I-interval - 1
     */
    inline int GetMinIInterval() const{ return m_minIInterval; }

    /**
     * Enforces separation between repeated (cadence) I-frames and I-frames inserted by
     * Scene Change Detection. If a scene change I-frame is within I-interval frames of
     * a cadence I-frame, the GOP is shrunk and/or stretched to the scene change
     * I-frame. GOP stretch requires enabling lookahead as well as setting I-interval.
     * The normal cadence resumes for the next GOP. This setting is only used when
     * Scene Change Detect is enabled. Note: Maximum GOP stretch = GOP size +
     * Min-I-interval - 1
     */
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }

    /**
     * Enforces separation between repeated (cadence) I-frames and I-frames inserted by
     * Scene Change Detection. If a scene change I-frame is within I-interval frames of
     * a cadence I-frame, the GOP is shrunk and/or stretched to the scene change
     * I-frame. GOP stretch requires enabling lookahead as well as setting I-interval.
     * The normal cadence resumes for the next GOP. This setting is only used when
     * Scene Change Detect is enabled. Note: Maximum GOP stretch = GOP size +
     * Min-I-interval - 1
     */
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }

    /**
     * Enforces separation between repeated (cadence) I-frames and I-frames inserted by
     * Scene Change Detection. If a scene change I-frame is within I-interval frames of
     * a cadence I-frame, the GOP is shrunk and/or stretched to the scene change
     * I-frame. GOP stretch requires enabling lookahead as well as setting I-interval.
     * The normal cadence resumes for the next GOP. This setting is only used when
     * Scene Change Detect is enabled. Note: Maximum GOP stretch = GOP size +
     * Min-I-interval - 1
     */
    inline H264Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}


    /**
     * Number of B-frames between reference frames.
     */
    inline int GetNumberBFramesBetweenReferenceFrames() const{ return m_numberBFramesBetweenReferenceFrames; }

    /**
     * Number of B-frames between reference frames.
     */
    inline bool NumberBFramesBetweenReferenceFramesHasBeenSet() const { return m_numberBFramesBetweenReferenceFramesHasBeenSet; }

    /**
     * Number of B-frames between reference frames.
     */
    inline void SetNumberBFramesBetweenReferenceFrames(int value) { m_numberBFramesBetweenReferenceFramesHasBeenSet = true; m_numberBFramesBetweenReferenceFrames = value; }

    /**
     * Number of B-frames between reference frames.
     */
    inline H264Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}


    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline int GetNumberReferenceFrames() const{ return m_numberReferenceFrames; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline bool NumberReferenceFramesHasBeenSet() const { return m_numberReferenceFramesHasBeenSet; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline void SetNumberReferenceFrames(int value) { m_numberReferenceFramesHasBeenSet = true; m_numberReferenceFrames = value; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline H264Settings& WithNumberReferenceFrames(int value) { SetNumberReferenceFrames(value); return *this;}


    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline const H264ParControl& GetParControl() const{ return m_parControl; }

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline void SetParControl(const H264ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline void SetParControl(H264ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline H264Settings& WithParControl(const H264ParControl& value) { SetParControl(value); return *this;}

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline H264Settings& WithParControl(H264ParControl&& value) { SetParControl(std::move(value)); return *this;}


    /**
     * Pixel Aspect Ratio denominator.
     */
    inline int GetParDenominator() const{ return m_parDenominator; }

    /**
     * Pixel Aspect Ratio denominator.
     */
    inline bool ParDenominatorHasBeenSet() const { return m_parDenominatorHasBeenSet; }

    /**
     * Pixel Aspect Ratio denominator.
     */
    inline void SetParDenominator(int value) { m_parDenominatorHasBeenSet = true; m_parDenominator = value; }

    /**
     * Pixel Aspect Ratio denominator.
     */
    inline H264Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


    /**
     * Pixel Aspect Ratio numerator.
     */
    inline int GetParNumerator() const{ return m_parNumerator; }

    /**
     * Pixel Aspect Ratio numerator.
     */
    inline bool ParNumeratorHasBeenSet() const { return m_parNumeratorHasBeenSet; }

    /**
     * Pixel Aspect Ratio numerator.
     */
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }

    /**
     * Pixel Aspect Ratio numerator.
     */
    inline H264Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    /**
     * Use Quality tuning level (H264QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline const H264QualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

    /**
     * Use Quality tuning level (H264QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }

    /**
     * Use Quality tuning level (H264QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline void SetQualityTuningLevel(const H264QualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    /**
     * Use Quality tuning level (H264QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline void SetQualityTuningLevel(H264QualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    /**
     * Use Quality tuning level (H264QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline H264Settings& WithQualityTuningLevel(const H264QualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    /**
     * Use Quality tuning level (H264QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline H264Settings& WithQualityTuningLevel(H264QualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}


    /**
     * Settings for quality-defined variable bitrate encoding with the H.264 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline const H264QvbrSettings& GetQvbrSettings() const{ return m_qvbrSettings; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.264 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline bool QvbrSettingsHasBeenSet() const { return m_qvbrSettingsHasBeenSet; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.264 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline void SetQvbrSettings(const H264QvbrSettings& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = value; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.264 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline void SetQvbrSettings(H264QvbrSettings&& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = std::move(value); }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.264 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline H264Settings& WithQvbrSettings(const H264QvbrSettings& value) { SetQvbrSettings(value); return *this;}

    /**
     * Settings for quality-defined variable bitrate encoding with the H.264 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline H264Settings& WithQvbrSettings(H264QvbrSettings&& value) { SetQvbrSettings(std::move(value)); return *this;}


    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline const H264RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline void SetRateControlMode(const H264RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline void SetRateControlMode(H264RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline H264Settings& WithRateControlMode(const H264RateControlMode& value) { SetRateControlMode(value); return *this;}

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline H264Settings& WithRateControlMode(H264RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline const H264RepeatPps& GetRepeatPps() const{ return m_repeatPps; }

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline bool RepeatPpsHasBeenSet() const { return m_repeatPpsHasBeenSet; }

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline void SetRepeatPps(const H264RepeatPps& value) { m_repeatPpsHasBeenSet = true; m_repeatPps = value; }

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline void SetRepeatPps(H264RepeatPps&& value) { m_repeatPpsHasBeenSet = true; m_repeatPps = std::move(value); }

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline H264Settings& WithRepeatPps(const H264RepeatPps& value) { SetRepeatPps(value); return *this;}

    /**
     * Places a PPS header on each encoded picture, even if repeated.
     */
    inline H264Settings& WithRepeatPps(H264RepeatPps&& value) { SetRepeatPps(std::move(value)); return *this;}


    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline const H264SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline void SetSceneChangeDetect(const H264SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline void SetSceneChangeDetect(H264SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline H264Settings& WithSceneChangeDetect(const H264SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline H264Settings& WithSceneChangeDetect(H264SceneChangeDetect&& value) { SetSceneChangeDetect(std::move(value)); return *this;}


    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline int GetSlices() const{ return m_slices; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline H264Settings& WithSlices(int value) { SetSlices(value); return *this;}


    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline const H264SlowPal& GetSlowPal() const{ return m_slowPal; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline void SetSlowPal(const H264SlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline void SetSlowPal(H264SlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline H264Settings& WithSlowPal(const H264SlowPal& value) { SetSlowPal(value); return *this;}

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline H264Settings& WithSlowPal(H264SlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    /**
     * Softness. Selects quantizer matrix, larger values reduce high-frequency content
     * in the encoded image.
     */
    inline int GetSoftness() const{ return m_softness; }

    /**
     * Softness. Selects quantizer matrix, larger values reduce high-frequency content
     * in the encoded image.
     */
    inline bool SoftnessHasBeenSet() const { return m_softnessHasBeenSet; }

    /**
     * Softness. Selects quantizer matrix, larger values reduce high-frequency content
     * in the encoded image.
     */
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }

    /**
     * Softness. Selects quantizer matrix, larger values reduce high-frequency content
     * in the encoded image.
     */
    inline H264Settings& WithSoftness(int value) { SetSoftness(value); return *this;}


    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline const H264SpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline void SetSpatialAdaptiveQuantization(const H264SpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline void SetSpatialAdaptiveQuantization(H264SpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline H264Settings& WithSpatialAdaptiveQuantization(const H264SpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline H264Settings& WithSpatialAdaptiveQuantization(H264SpatialAdaptiveQuantization&& value) { SetSpatialAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline const H264Syntax& GetSyntax() const{ return m_syntax; }

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline bool SyntaxHasBeenSet() const { return m_syntaxHasBeenSet; }

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline void SetSyntax(const H264Syntax& value) { m_syntaxHasBeenSet = true; m_syntax = value; }

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline void SetSyntax(H264Syntax&& value) { m_syntaxHasBeenSet = true; m_syntax = std::move(value); }

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline H264Settings& WithSyntax(const H264Syntax& value) { SetSyntax(value); return *this;}

    /**
     * Produces a bitstream compliant with SMPTE RP-2027.
     */
    inline H264Settings& WithSyntax(H264Syntax&& value) { SetSyntax(std::move(value)); return *this;}


    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline const H264Telecine& GetTelecine() const{ return m_telecine; }

    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }

    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline void SetTelecine(const H264Telecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline void SetTelecine(H264Telecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline H264Settings& WithTelecine(const H264Telecine& value) { SetTelecine(value); return *this;}

    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline H264Settings& WithTelecine(H264Telecine&& value) { SetTelecine(std::move(value)); return *this;}


    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline const H264TemporalAdaptiveQuantization& GetTemporalAdaptiveQuantization() const{ return m_temporalAdaptiveQuantization; }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline void SetTemporalAdaptiveQuantization(const H264TemporalAdaptiveQuantization& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline void SetTemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization&& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = std::move(value); }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline H264Settings& WithTemporalAdaptiveQuantization(const H264TemporalAdaptiveQuantization& value) { SetTemporalAdaptiveQuantization(value); return *this;}

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline H264Settings& WithTemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization&& value) { SetTemporalAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline const H264UnregisteredSeiTimecode& GetUnregisteredSeiTimecode() const{ return m_unregisteredSeiTimecode; }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline bool UnregisteredSeiTimecodeHasBeenSet() const { return m_unregisteredSeiTimecodeHasBeenSet; }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline void SetUnregisteredSeiTimecode(const H264UnregisteredSeiTimecode& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = value; }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline void SetUnregisteredSeiTimecode(H264UnregisteredSeiTimecode&& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = std::move(value); }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline H264Settings& WithUnregisteredSeiTimecode(const H264UnregisteredSeiTimecode& value) { SetUnregisteredSeiTimecode(value); return *this;}

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline H264Settings& WithUnregisteredSeiTimecode(H264UnregisteredSeiTimecode&& value) { SetUnregisteredSeiTimecode(std::move(value)); return *this;}

  private:

    H264AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet;

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    H264CodecLevel m_codecLevel;
    bool m_codecLevelHasBeenSet;

    H264CodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet;

    H264DynamicSubGop m_dynamicSubGop;
    bool m_dynamicSubGopHasBeenSet;

    H264EntropyEncoding m_entropyEncoding;
    bool m_entropyEncodingHasBeenSet;

    H264FieldEncoding m_fieldEncoding;
    bool m_fieldEncodingHasBeenSet;

    H264FlickerAdaptiveQuantization m_flickerAdaptiveQuantization;
    bool m_flickerAdaptiveQuantizationHasBeenSet;

    H264FramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet;

    H264FramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet;

    H264GopBReference m_gopBReference;
    bool m_gopBReferenceHasBeenSet;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet;

    double m_gopSize;
    bool m_gopSizeHasBeenSet;

    H264GopSizeUnits m_gopSizeUnits;
    bool m_gopSizeUnitsHasBeenSet;

    int m_hrdBufferInitialFillPercentage;
    bool m_hrdBufferInitialFillPercentageHasBeenSet;

    int m_hrdBufferSize;
    bool m_hrdBufferSizeHasBeenSet;

    H264InterlaceMode m_interlaceMode;
    bool m_interlaceModeHasBeenSet;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet;

    int m_minIInterval;
    bool m_minIIntervalHasBeenSet;

    int m_numberBFramesBetweenReferenceFrames;
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet;

    int m_numberReferenceFrames;
    bool m_numberReferenceFramesHasBeenSet;

    H264ParControl m_parControl;
    bool m_parControlHasBeenSet;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet;

    H264QualityTuningLevel m_qualityTuningLevel;
    bool m_qualityTuningLevelHasBeenSet;

    H264QvbrSettings m_qvbrSettings;
    bool m_qvbrSettingsHasBeenSet;

    H264RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet;

    H264RepeatPps m_repeatPps;
    bool m_repeatPpsHasBeenSet;

    H264SceneChangeDetect m_sceneChangeDetect;
    bool m_sceneChangeDetectHasBeenSet;

    int m_slices;
    bool m_slicesHasBeenSet;

    H264SlowPal m_slowPal;
    bool m_slowPalHasBeenSet;

    int m_softness;
    bool m_softnessHasBeenSet;

    H264SpatialAdaptiveQuantization m_spatialAdaptiveQuantization;
    bool m_spatialAdaptiveQuantizationHasBeenSet;

    H264Syntax m_syntax;
    bool m_syntaxHasBeenSet;

    H264Telecine m_telecine;
    bool m_telecineHasBeenSet;

    H264TemporalAdaptiveQuantization m_temporalAdaptiveQuantization;
    bool m_temporalAdaptiveQuantizationHasBeenSet;

    H264UnregisteredSeiTimecode m_unregisteredSeiTimecode;
    bool m_unregisteredSeiTimecodeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
