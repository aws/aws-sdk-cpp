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
#include <aws/mediaconvert/model/H265AdaptiveQuantization.h>
#include <aws/mediaconvert/model/H265AlternateTransferFunctionSei.h>
#include <aws/mediaconvert/model/H265CodecLevel.h>
#include <aws/mediaconvert/model/H265CodecProfile.h>
#include <aws/mediaconvert/model/H265DynamicSubGop.h>
#include <aws/mediaconvert/model/H265FlickerAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H265FramerateControl.h>
#include <aws/mediaconvert/model/H265FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/H265GopBReference.h>
#include <aws/mediaconvert/model/H265GopSizeUnits.h>
#include <aws/mediaconvert/model/H265InterlaceMode.h>
#include <aws/mediaconvert/model/H265ParControl.h>
#include <aws/mediaconvert/model/H265QualityTuningLevel.h>
#include <aws/mediaconvert/model/H265QvbrSettings.h>
#include <aws/mediaconvert/model/H265RateControlMode.h>
#include <aws/mediaconvert/model/H265SampleAdaptiveOffsetFilterMode.h>
#include <aws/mediaconvert/model/H265SceneChangeDetect.h>
#include <aws/mediaconvert/model/H265SlowPal.h>
#include <aws/mediaconvert/model/H265SpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H265Telecine.h>
#include <aws/mediaconvert/model/H265TemporalAdaptiveQuantization.h>
#include <aws/mediaconvert/model/H265TemporalIds.h>
#include <aws/mediaconvert/model/H265Tiles.h>
#include <aws/mediaconvert/model/H265UnregisteredSeiTimecode.h>
#include <aws/mediaconvert/model/H265WriteMp4PackagingType.h>
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
   * Settings for H265 codec<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/H265Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API H265Settings
  {
  public:
    H265Settings();
    H265Settings(Aws::Utils::Json::JsonView jsonValue);
    H265Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline const H265AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline void SetAdaptiveQuantization(const H265AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline void SetAdaptiveQuantization(H265AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline H265Settings& WithAdaptiveQuantization(const H265AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline H265Settings& WithAdaptiveQuantization(H265AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Enables Alternate Transfer Function SEI message for outputs using Hybrid Log
     * Gamma (HLG) Electro-Optical Transfer Function (EOTF).
     */
    inline const H265AlternateTransferFunctionSei& GetAlternateTransferFunctionSei() const{ return m_alternateTransferFunctionSei; }

    /**
     * Enables Alternate Transfer Function SEI message for outputs using Hybrid Log
     * Gamma (HLG) Electro-Optical Transfer Function (EOTF).
     */
    inline bool AlternateTransferFunctionSeiHasBeenSet() const { return m_alternateTransferFunctionSeiHasBeenSet; }

    /**
     * Enables Alternate Transfer Function SEI message for outputs using Hybrid Log
     * Gamma (HLG) Electro-Optical Transfer Function (EOTF).
     */
    inline void SetAlternateTransferFunctionSei(const H265AlternateTransferFunctionSei& value) { m_alternateTransferFunctionSeiHasBeenSet = true; m_alternateTransferFunctionSei = value; }

    /**
     * Enables Alternate Transfer Function SEI message for outputs using Hybrid Log
     * Gamma (HLG) Electro-Optical Transfer Function (EOTF).
     */
    inline void SetAlternateTransferFunctionSei(H265AlternateTransferFunctionSei&& value) { m_alternateTransferFunctionSeiHasBeenSet = true; m_alternateTransferFunctionSei = std::move(value); }

    /**
     * Enables Alternate Transfer Function SEI message for outputs using Hybrid Log
     * Gamma (HLG) Electro-Optical Transfer Function (EOTF).
     */
    inline H265Settings& WithAlternateTransferFunctionSei(const H265AlternateTransferFunctionSei& value) { SetAlternateTransferFunctionSei(value); return *this;}

    /**
     * Enables Alternate Transfer Function SEI message for outputs using Hybrid Log
     * Gamma (HLG) Electro-Optical Transfer Function (EOTF).
     */
    inline H265Settings& WithAlternateTransferFunctionSei(H265AlternateTransferFunctionSei&& value) { SetAlternateTransferFunctionSei(std::move(value)); return *this;}


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
    inline H265Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * H.265 Level.
     */
    inline const H265CodecLevel& GetCodecLevel() const{ return m_codecLevel; }

    /**
     * H.265 Level.
     */
    inline bool CodecLevelHasBeenSet() const { return m_codecLevelHasBeenSet; }

    /**
     * H.265 Level.
     */
    inline void SetCodecLevel(const H265CodecLevel& value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }

    /**
     * H.265 Level.
     */
    inline void SetCodecLevel(H265CodecLevel&& value) { m_codecLevelHasBeenSet = true; m_codecLevel = std::move(value); }

    /**
     * H.265 Level.
     */
    inline H265Settings& WithCodecLevel(const H265CodecLevel& value) { SetCodecLevel(value); return *this;}

    /**
     * H.265 Level.
     */
    inline H265Settings& WithCodecLevel(H265CodecLevel&& value) { SetCodecLevel(std::move(value)); return *this;}


    /**
     * Represents the Profile and Tier, per the HEVC (H.265) specification. Selections
     * are grouped as [Profile] / [Tier], so "Main/High" represents Main Profile with
     * High Tier. 4:2:2 profiles are only available with the HEVC 4:2:2 License.
     */
    inline const H265CodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    /**
     * Represents the Profile and Tier, per the HEVC (H.265) specification. Selections
     * are grouped as [Profile] / [Tier], so "Main/High" represents Main Profile with
     * High Tier. 4:2:2 profiles are only available with the HEVC 4:2:2 License.
     */
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }

    /**
     * Represents the Profile and Tier, per the HEVC (H.265) specification. Selections
     * are grouped as [Profile] / [Tier], so "Main/High" represents Main Profile with
     * High Tier. 4:2:2 profiles are only available with the HEVC 4:2:2 License.
     */
    inline void SetCodecProfile(const H265CodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    /**
     * Represents the Profile and Tier, per the HEVC (H.265) specification. Selections
     * are grouped as [Profile] / [Tier], so "Main/High" represents Main Profile with
     * High Tier. 4:2:2 profiles are only available with the HEVC 4:2:2 License.
     */
    inline void SetCodecProfile(H265CodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    /**
     * Represents the Profile and Tier, per the HEVC (H.265) specification. Selections
     * are grouped as [Profile] / [Tier], so "Main/High" represents Main Profile with
     * High Tier. 4:2:2 profiles are only available with the HEVC 4:2:2 License.
     */
    inline H265Settings& WithCodecProfile(const H265CodecProfile& value) { SetCodecProfile(value); return *this;}

    /**
     * Represents the Profile and Tier, per the HEVC (H.265) specification. Selections
     * are grouped as [Profile] / [Tier], so "Main/High" represents Main Profile with
     * High Tier. 4:2:2 profiles are only available with the HEVC 4:2:2 License.
     */
    inline H265Settings& WithCodecProfile(H265CodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline const H265DynamicSubGop& GetDynamicSubGop() const{ return m_dynamicSubGop; }

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
    inline void SetDynamicSubGop(const H265DynamicSubGop& value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = value; }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline void SetDynamicSubGop(H265DynamicSubGop&& value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = std::move(value); }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline H265Settings& WithDynamicSubGop(const H265DynamicSubGop& value) { SetDynamicSubGop(value); return *this;}

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline H265Settings& WithDynamicSubGop(H265DynamicSubGop&& value) { SetDynamicSubGop(std::move(value)); return *this;}


    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline const H265FlickerAdaptiveQuantization& GetFlickerAdaptiveQuantization() const{ return m_flickerAdaptiveQuantization; }

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline bool FlickerAdaptiveQuantizationHasBeenSet() const { return m_flickerAdaptiveQuantizationHasBeenSet; }

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline void SetFlickerAdaptiveQuantization(const H265FlickerAdaptiveQuantization& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline void SetFlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization&& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = std::move(value); }

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline H265Settings& WithFlickerAdaptiveQuantization(const H265FlickerAdaptiveQuantization& value) { SetFlickerAdaptiveQuantization(value); return *this;}

    /**
     * Adjust quantization within each frame to reduce flicker or 'pop' on I-frames.
     */
    inline H265Settings& WithFlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization&& value) { SetFlickerAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * sepecification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline const H265FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * sepecification as a JSON file without the console, use FramerateControl to
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
     * sepecification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline void SetFramerateControl(const H265FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * sepecification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline void SetFramerateControl(H265FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * sepecification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline H265Settings& WithFramerateControl(const H265FramerateControl& value) { SetFramerateControl(value); return *this;}

    /**
     * If you are using the console, use the Framerate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list or choose Custom. The framerates shown in the
     * dropdown list are decimal approximations of fractions. If you choose Custom,
     * specify your frame rate as a fraction. If you are creating your transcoding job
     * sepecification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline H265Settings& WithFramerateControl(H265FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline const H265FramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline void SetFramerateConversionAlgorithm(const H265FramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline void SetFramerateConversionAlgorithm(H265FramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline H265Settings& WithFramerateConversionAlgorithm(const H265FramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline H265Settings& WithFramerateConversionAlgorithm(H265FramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


    /**
     * Frame rate denominator.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * Frame rate denominator.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * Frame rate denominator.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * Frame rate denominator.
     */
    inline H265Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


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
    inline H265Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline const H265GopBReference& GetGopBReference() const{ return m_gopBReference; }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline void SetGopBReference(const H265GopBReference& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline void SetGopBReference(H265GopBReference&& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = std::move(value); }

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline H265Settings& WithGopBReference(const H265GopBReference& value) { SetGopBReference(value); return *this;}

    /**
     * If enable, use reference B frames for GOP structures that have B frames > 1.
     */
    inline H265Settings& WithGopBReference(H265GopBReference&& value) { SetGopBReference(std::move(value)); return *this;}


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
    inline H265Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}


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
    inline H265Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    /**
     * Indicates if the GOP Size in H265 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline const H265GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    /**
     * Indicates if the GOP Size in H265 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }

    /**
     * Indicates if the GOP Size in H265 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline void SetGopSizeUnits(const H265GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    /**
     * Indicates if the GOP Size in H265 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline void SetGopSizeUnits(H265GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    /**
     * Indicates if the GOP Size in H265 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline H265Settings& WithGopSizeUnits(const H265GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    /**
     * Indicates if the GOP Size in H265 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline H265Settings& WithGopSizeUnits(H265GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


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
    inline H265Settings& WithHrdBufferInitialFillPercentage(int value) { SetHrdBufferInitialFillPercentage(value); return *this;}


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
    inline H265Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}


    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type.
  - If the source is
     * interlaced, the output will be interlaced with the same polarity as the source
     * (it will follow the source). The output could therefore be a mix of "top field
     * first" and "bottom field first".
  - If the source is progressive, the output
     * will be interlaced with "top field first" or "bottom field first" polarity,
     * depending on which of the Follow options you chose.
     */
    inline const H265InterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type.
  - If the source is
     * interlaced, the output will be interlaced with the same polarity as the source
     * (it will follow the source). The output could therefore be a mix of "top field
     * first" and "bottom field first".
  - If the source is progressive, the output
     * will be interlaced with "top field first" or "bottom field first" polarity,
     * depending on which of the Follow options you chose.
     */
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type.
  - If the source is
     * interlaced, the output will be interlaced with the same polarity as the source
     * (it will follow the source). The output could therefore be a mix of "top field
     * first" and "bottom field first".
  - If the source is progressive, the output
     * will be interlaced with "top field first" or "bottom field first" polarity,
     * depending on which of the Follow options you chose.
     */
    inline void SetInterlaceMode(const H265InterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type.
  - If the source is
     * interlaced, the output will be interlaced with the same polarity as the source
     * (it will follow the source). The output could therefore be a mix of "top field
     * first" and "bottom field first".
  - If the source is progressive, the output
     * will be interlaced with "top field first" or "bottom field first" polarity,
     * depending on which of the Follow options you chose.
     */
    inline void SetInterlaceMode(H265InterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type.
  - If the source is
     * interlaced, the output will be interlaced with the same polarity as the source
     * (it will follow the source). The output could therefore be a mix of "top field
     * first" and "bottom field first".
  - If the source is progressive, the output
     * will be interlaced with "top field first" or "bottom field first" polarity,
     * depending on which of the Follow options you chose.
     */
    inline H265Settings& WithInterlaceMode(const H265InterlaceMode& value) { SetInterlaceMode(value); return *this;}

    /**
     * Use Interlace mode (InterlaceMode) to choose the scan line type for the output.
     * * Top Field First (TOP_FIELD) and Bottom Field First (BOTTOM_FIELD) produce
     * interlaced output with the entire output having the same field polarity (top or
     * bottom first). * Follow, Default Top (FOLLOW_TOP_FIELD) and Follow, Default
     * Bottom (FOLLOW_BOTTOM_FIELD) use the same field polarity as the source.
     * Therefore, behavior depends on the input scan type.
  - If the source is
     * interlaced, the output will be interlaced with the same polarity as the source
     * (it will follow the source). The output could therefore be a mix of "top field
     * first" and "bottom field first".
  - If the source is progressive, the output
     * will be interlaced with "top field first" or "bottom field first" polarity,
     * depending on which of the Follow options you chose.
     */
    inline H265Settings& WithInterlaceMode(H265InterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


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
    inline H265Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


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
    inline H265Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}


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
    inline H265Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}


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
    inline H265Settings& WithNumberReferenceFrames(int value) { SetNumberReferenceFrames(value); return *this;}


    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline const H265ParControl& GetParControl() const{ return m_parControl; }

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
    inline void SetParControl(const H265ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline void SetParControl(H265ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline H265Settings& WithParControl(const H265ParControl& value) { SetParControl(value); return *this;}

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline H265Settings& WithParControl(H265ParControl&& value) { SetParControl(std::move(value)); return *this;}


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
    inline H265Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


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
    inline H265Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    /**
     * Use Quality tuning level (H265QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline const H265QualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

    /**
     * Use Quality tuning level (H265QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }

    /**
     * Use Quality tuning level (H265QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline void SetQualityTuningLevel(const H265QualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    /**
     * Use Quality tuning level (H265QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline void SetQualityTuningLevel(H265QualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    /**
     * Use Quality tuning level (H265QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline H265Settings& WithQualityTuningLevel(const H265QualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    /**
     * Use Quality tuning level (H265QualityTuningLevel) to specifiy whether to use
     * fast single-pass, high-quality singlepass, or high-quality multipass video
     * encoding.
     */
    inline H265Settings& WithQualityTuningLevel(H265QualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}


    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline const H265QvbrSettings& GetQvbrSettings() const{ return m_qvbrSettings; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline bool QvbrSettingsHasBeenSet() const { return m_qvbrSettingsHasBeenSet; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline void SetQvbrSettings(const H265QvbrSettings& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = value; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline void SetQvbrSettings(H265QvbrSettings&& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = std::move(value); }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline H265Settings& WithQvbrSettings(const H265QvbrSettings& value) { SetQvbrSettings(value); return *this;}

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec.
     * Required when you set Rate control mode to QVBR. Not valid when you set Rate
     * control mode to a value other than QVBR, or when you don't define Rate control
     * mode.
     */
    inline H265Settings& WithQvbrSettings(H265QvbrSettings&& value) { SetQvbrSettings(std::move(value)); return *this;}


    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline const H265RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline void SetRateControlMode(const H265RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline void SetRateControlMode(H265RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline H265Settings& WithRateControlMode(const H265RateControlMode& value) { SetRateControlMode(value); return *this;}

    /**
     * Use this setting to specify whether this output has a variable bitrate (VBR),
     * constant bitrate (CBR) or quality-defined variable bitrate (QVBR).
     */
    inline H265Settings& WithRateControlMode(H265RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    /**
     * Specify Sample Adaptive Offset (SAO) filter strength.  Adaptive mode dynamically
     * selects best strength based on content
     */
    inline const H265SampleAdaptiveOffsetFilterMode& GetSampleAdaptiveOffsetFilterMode() const{ return m_sampleAdaptiveOffsetFilterMode; }

    /**
     * Specify Sample Adaptive Offset (SAO) filter strength.  Adaptive mode dynamically
     * selects best strength based on content
     */
    inline bool SampleAdaptiveOffsetFilterModeHasBeenSet() const { return m_sampleAdaptiveOffsetFilterModeHasBeenSet; }

    /**
     * Specify Sample Adaptive Offset (SAO) filter strength.  Adaptive mode dynamically
     * selects best strength based on content
     */
    inline void SetSampleAdaptiveOffsetFilterMode(const H265SampleAdaptiveOffsetFilterMode& value) { m_sampleAdaptiveOffsetFilterModeHasBeenSet = true; m_sampleAdaptiveOffsetFilterMode = value; }

    /**
     * Specify Sample Adaptive Offset (SAO) filter strength.  Adaptive mode dynamically
     * selects best strength based on content
     */
    inline void SetSampleAdaptiveOffsetFilterMode(H265SampleAdaptiveOffsetFilterMode&& value) { m_sampleAdaptiveOffsetFilterModeHasBeenSet = true; m_sampleAdaptiveOffsetFilterMode = std::move(value); }

    /**
     * Specify Sample Adaptive Offset (SAO) filter strength.  Adaptive mode dynamically
     * selects best strength based on content
     */
    inline H265Settings& WithSampleAdaptiveOffsetFilterMode(const H265SampleAdaptiveOffsetFilterMode& value) { SetSampleAdaptiveOffsetFilterMode(value); return *this;}

    /**
     * Specify Sample Adaptive Offset (SAO) filter strength.  Adaptive mode dynamically
     * selects best strength based on content
     */
    inline H265Settings& WithSampleAdaptiveOffsetFilterMode(H265SampleAdaptiveOffsetFilterMode&& value) { SetSampleAdaptiveOffsetFilterMode(std::move(value)); return *this;}


    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline const H265SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline void SetSceneChangeDetect(const H265SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline void SetSceneChangeDetect(H265SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline H265Settings& WithSceneChangeDetect(const H265SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline H265Settings& WithSceneChangeDetect(H265SceneChangeDetect&& value) { SetSceneChangeDetect(std::move(value)); return *this;}


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
    inline H265Settings& WithSlices(int value) { SetSlices(value); return *this;}


    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline const H265SlowPal& GetSlowPal() const{ return m_slowPal; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline void SetSlowPal(const H265SlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline void SetSlowPal(H265SlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline H265Settings& WithSlowPal(const H265SlowPal& value) { SetSlowPal(value); return *this;}

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline H265Settings& WithSlowPal(H265SlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline const H265SpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline void SetSpatialAdaptiveQuantization(const H265SpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline void SetSpatialAdaptiveQuantization(H265SpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline H265Settings& WithSpatialAdaptiveQuantization(const H265SpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline H265Settings& WithSpatialAdaptiveQuantization(H265SpatialAdaptiveQuantization&& value) { SetSpatialAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline const H265Telecine& GetTelecine() const{ return m_telecine; }

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
    inline void SetTelecine(const H265Telecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline void SetTelecine(H265Telecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline H265Settings& WithTelecine(const H265Telecine& value) { SetTelecine(value); return *this;}

    /**
     * This field applies only if the Streams > Advanced > Framerate (framerate) field 
     * is set to 29.970. This field works with the Streams > Advanced > Preprocessors >
     * Deinterlacer  field (deinterlace_mode) and the Streams > Advanced > Interlaced
     * Mode field (interlace_mode)  to identify the scan type for the output:
     * Progressive, Interlaced, Hard Telecine or Soft Telecine. - Hard: produces 29.97i
     * output from 23.976 input. - Soft: produces 23.976; the player converts this
     * output to 29.97i.
     */
    inline H265Settings& WithTelecine(H265Telecine&& value) { SetTelecine(std::move(value)); return *this;}


    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline const H265TemporalAdaptiveQuantization& GetTemporalAdaptiveQuantization() const{ return m_temporalAdaptiveQuantization; }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline void SetTemporalAdaptiveQuantization(const H265TemporalAdaptiveQuantization& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline void SetTemporalAdaptiveQuantization(H265TemporalAdaptiveQuantization&& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = std::move(value); }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline H265Settings& WithTemporalAdaptiveQuantization(const H265TemporalAdaptiveQuantization& value) { SetTemporalAdaptiveQuantization(value); return *this;}

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline H265Settings& WithTemporalAdaptiveQuantization(H265TemporalAdaptiveQuantization&& value) { SetTemporalAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Enables temporal layer identifiers in the encoded bitstream. Up to 3 layers are
     * supported depending on GOP structure: I- and P-frames form one layer, reference
     * B-frames can form a second layer and non-reference b-frames can form a third
     * layer. Decoders can optionally decode only the lower temporal layers to generate
     * a lower frame rate output. For example, given a bitstream with temporal IDs and
     * with b-frames = 1 (i.e. IbPbPb display order), a decoder could decode all the
     * frames for full frame rate output or only the I and P frames (lowest temporal
     * layer) for a half frame rate output.
     */
    inline const H265TemporalIds& GetTemporalIds() const{ return m_temporalIds; }

    /**
     * Enables temporal layer identifiers in the encoded bitstream. Up to 3 layers are
     * supported depending on GOP structure: I- and P-frames form one layer, reference
     * B-frames can form a second layer and non-reference b-frames can form a third
     * layer. Decoders can optionally decode only the lower temporal layers to generate
     * a lower frame rate output. For example, given a bitstream with temporal IDs and
     * with b-frames = 1 (i.e. IbPbPb display order), a decoder could decode all the
     * frames for full frame rate output or only the I and P frames (lowest temporal
     * layer) for a half frame rate output.
     */
    inline bool TemporalIdsHasBeenSet() const { return m_temporalIdsHasBeenSet; }

    /**
     * Enables temporal layer identifiers in the encoded bitstream. Up to 3 layers are
     * supported depending on GOP structure: I- and P-frames form one layer, reference
     * B-frames can form a second layer and non-reference b-frames can form a third
     * layer. Decoders can optionally decode only the lower temporal layers to generate
     * a lower frame rate output. For example, given a bitstream with temporal IDs and
     * with b-frames = 1 (i.e. IbPbPb display order), a decoder could decode all the
     * frames for full frame rate output or only the I and P frames (lowest temporal
     * layer) for a half frame rate output.
     */
    inline void SetTemporalIds(const H265TemporalIds& value) { m_temporalIdsHasBeenSet = true; m_temporalIds = value; }

    /**
     * Enables temporal layer identifiers in the encoded bitstream. Up to 3 layers are
     * supported depending on GOP structure: I- and P-frames form one layer, reference
     * B-frames can form a second layer and non-reference b-frames can form a third
     * layer. Decoders can optionally decode only the lower temporal layers to generate
     * a lower frame rate output. For example, given a bitstream with temporal IDs and
     * with b-frames = 1 (i.e. IbPbPb display order), a decoder could decode all the
     * frames for full frame rate output or only the I and P frames (lowest temporal
     * layer) for a half frame rate output.
     */
    inline void SetTemporalIds(H265TemporalIds&& value) { m_temporalIdsHasBeenSet = true; m_temporalIds = std::move(value); }

    /**
     * Enables temporal layer identifiers in the encoded bitstream. Up to 3 layers are
     * supported depending on GOP structure: I- and P-frames form one layer, reference
     * B-frames can form a second layer and non-reference b-frames can form a third
     * layer. Decoders can optionally decode only the lower temporal layers to generate
     * a lower frame rate output. For example, given a bitstream with temporal IDs and
     * with b-frames = 1 (i.e. IbPbPb display order), a decoder could decode all the
     * frames for full frame rate output or only the I and P frames (lowest temporal
     * layer) for a half frame rate output.
     */
    inline H265Settings& WithTemporalIds(const H265TemporalIds& value) { SetTemporalIds(value); return *this;}

    /**
     * Enables temporal layer identifiers in the encoded bitstream. Up to 3 layers are
     * supported depending on GOP structure: I- and P-frames form one layer, reference
     * B-frames can form a second layer and non-reference b-frames can form a third
     * layer. Decoders can optionally decode only the lower temporal layers to generate
     * a lower frame rate output. For example, given a bitstream with temporal IDs and
     * with b-frames = 1 (i.e. IbPbPb display order), a decoder could decode all the
     * frames for full frame rate output or only the I and P frames (lowest temporal
     * layer) for a half frame rate output.
     */
    inline H265Settings& WithTemporalIds(H265TemporalIds&& value) { SetTemporalIds(std::move(value)); return *this;}


    /**
     * Enable use of tiles, allowing horizontal as well as vertical subdivision of the
     * encoded pictures.
     */
    inline const H265Tiles& GetTiles() const{ return m_tiles; }

    /**
     * Enable use of tiles, allowing horizontal as well as vertical subdivision of the
     * encoded pictures.
     */
    inline bool TilesHasBeenSet() const { return m_tilesHasBeenSet; }

    /**
     * Enable use of tiles, allowing horizontal as well as vertical subdivision of the
     * encoded pictures.
     */
    inline void SetTiles(const H265Tiles& value) { m_tilesHasBeenSet = true; m_tiles = value; }

    /**
     * Enable use of tiles, allowing horizontal as well as vertical subdivision of the
     * encoded pictures.
     */
    inline void SetTiles(H265Tiles&& value) { m_tilesHasBeenSet = true; m_tiles = std::move(value); }

    /**
     * Enable use of tiles, allowing horizontal as well as vertical subdivision of the
     * encoded pictures.
     */
    inline H265Settings& WithTiles(const H265Tiles& value) { SetTiles(value); return *this;}

    /**
     * Enable use of tiles, allowing horizontal as well as vertical subdivision of the
     * encoded pictures.
     */
    inline H265Settings& WithTiles(H265Tiles&& value) { SetTiles(std::move(value)); return *this;}


    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline const H265UnregisteredSeiTimecode& GetUnregisteredSeiTimecode() const{ return m_unregisteredSeiTimecode; }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline bool UnregisteredSeiTimecodeHasBeenSet() const { return m_unregisteredSeiTimecodeHasBeenSet; }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline void SetUnregisteredSeiTimecode(const H265UnregisteredSeiTimecode& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = value; }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline void SetUnregisteredSeiTimecode(H265UnregisteredSeiTimecode&& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = std::move(value); }

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline H265Settings& WithUnregisteredSeiTimecode(const H265UnregisteredSeiTimecode& value) { SetUnregisteredSeiTimecode(value); return *this;}

    /**
     * Inserts timecode for each frame as 4 bytes of an unregistered SEI message.
     */
    inline H265Settings& WithUnregisteredSeiTimecode(H265UnregisteredSeiTimecode&& value) { SetUnregisteredSeiTimecode(std::move(value)); return *this;}


    /**
     * Use this setting only for outputs encoded with H.265 that are in CMAF or DASH
     * output groups. If you include writeMp4PackagingType in your JSON job
     * specification for other outputs, your video might not work properly with
     * downstream systems and video players. If the location of parameter set NAL units
     * don't matter in your workflow, ignore this setting. The service defaults to
     * marking your output as HEV1. Choose HVC1 to mark your output as HVC1. This makes
     * your output compliant with this specification: ISO IECJTC1 SC29 N13798 Text
     * ISO/IEC FDIS 14496-15 3rd Edition. For these outputs, the service stores
     * parameter set NAL units in the sample headers but not in the samples directly.
     * Keep the default HEV1 to mark your output as HEV1. For these outputs, the
     * service writes parameter set NAL units directly into the samples.
     */
    inline const H265WriteMp4PackagingType& GetWriteMp4PackagingType() const{ return m_writeMp4PackagingType; }

    /**
     * Use this setting only for outputs encoded with H.265 that are in CMAF or DASH
     * output groups. If you include writeMp4PackagingType in your JSON job
     * specification for other outputs, your video might not work properly with
     * downstream systems and video players. If the location of parameter set NAL units
     * don't matter in your workflow, ignore this setting. The service defaults to
     * marking your output as HEV1. Choose HVC1 to mark your output as HVC1. This makes
     * your output compliant with this specification: ISO IECJTC1 SC29 N13798 Text
     * ISO/IEC FDIS 14496-15 3rd Edition. For these outputs, the service stores
     * parameter set NAL units in the sample headers but not in the samples directly.
     * Keep the default HEV1 to mark your output as HEV1. For these outputs, the
     * service writes parameter set NAL units directly into the samples.
     */
    inline bool WriteMp4PackagingTypeHasBeenSet() const { return m_writeMp4PackagingTypeHasBeenSet; }

    /**
     * Use this setting only for outputs encoded with H.265 that are in CMAF or DASH
     * output groups. If you include writeMp4PackagingType in your JSON job
     * specification for other outputs, your video might not work properly with
     * downstream systems and video players. If the location of parameter set NAL units
     * don't matter in your workflow, ignore this setting. The service defaults to
     * marking your output as HEV1. Choose HVC1 to mark your output as HVC1. This makes
     * your output compliant with this specification: ISO IECJTC1 SC29 N13798 Text
     * ISO/IEC FDIS 14496-15 3rd Edition. For these outputs, the service stores
     * parameter set NAL units in the sample headers but not in the samples directly.
     * Keep the default HEV1 to mark your output as HEV1. For these outputs, the
     * service writes parameter set NAL units directly into the samples.
     */
    inline void SetWriteMp4PackagingType(const H265WriteMp4PackagingType& value) { m_writeMp4PackagingTypeHasBeenSet = true; m_writeMp4PackagingType = value; }

    /**
     * Use this setting only for outputs encoded with H.265 that are in CMAF or DASH
     * output groups. If you include writeMp4PackagingType in your JSON job
     * specification for other outputs, your video might not work properly with
     * downstream systems and video players. If the location of parameter set NAL units
     * don't matter in your workflow, ignore this setting. The service defaults to
     * marking your output as HEV1. Choose HVC1 to mark your output as HVC1. This makes
     * your output compliant with this specification: ISO IECJTC1 SC29 N13798 Text
     * ISO/IEC FDIS 14496-15 3rd Edition. For these outputs, the service stores
     * parameter set NAL units in the sample headers but not in the samples directly.
     * Keep the default HEV1 to mark your output as HEV1. For these outputs, the
     * service writes parameter set NAL units directly into the samples.
     */
    inline void SetWriteMp4PackagingType(H265WriteMp4PackagingType&& value) { m_writeMp4PackagingTypeHasBeenSet = true; m_writeMp4PackagingType = std::move(value); }

    /**
     * Use this setting only for outputs encoded with H.265 that are in CMAF or DASH
     * output groups. If you include writeMp4PackagingType in your JSON job
     * specification for other outputs, your video might not work properly with
     * downstream systems and video players. If the location of parameter set NAL units
     * don't matter in your workflow, ignore this setting. The service defaults to
     * marking your output as HEV1. Choose HVC1 to mark your output as HVC1. This makes
     * your output compliant with this specification: ISO IECJTC1 SC29 N13798 Text
     * ISO/IEC FDIS 14496-15 3rd Edition. For these outputs, the service stores
     * parameter set NAL units in the sample headers but not in the samples directly.
     * Keep the default HEV1 to mark your output as HEV1. For these outputs, the
     * service writes parameter set NAL units directly into the samples.
     */
    inline H265Settings& WithWriteMp4PackagingType(const H265WriteMp4PackagingType& value) { SetWriteMp4PackagingType(value); return *this;}

    /**
     * Use this setting only for outputs encoded with H.265 that are in CMAF or DASH
     * output groups. If you include writeMp4PackagingType in your JSON job
     * specification for other outputs, your video might not work properly with
     * downstream systems and video players. If the location of parameter set NAL units
     * don't matter in your workflow, ignore this setting. The service defaults to
     * marking your output as HEV1. Choose HVC1 to mark your output as HVC1. This makes
     * your output compliant with this specification: ISO IECJTC1 SC29 N13798 Text
     * ISO/IEC FDIS 14496-15 3rd Edition. For these outputs, the service stores
     * parameter set NAL units in the sample headers but not in the samples directly.
     * Keep the default HEV1 to mark your output as HEV1. For these outputs, the
     * service writes parameter set NAL units directly into the samples.
     */
    inline H265Settings& WithWriteMp4PackagingType(H265WriteMp4PackagingType&& value) { SetWriteMp4PackagingType(std::move(value)); return *this;}

  private:

    H265AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet;

    H265AlternateTransferFunctionSei m_alternateTransferFunctionSei;
    bool m_alternateTransferFunctionSeiHasBeenSet;

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    H265CodecLevel m_codecLevel;
    bool m_codecLevelHasBeenSet;

    H265CodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet;

    H265DynamicSubGop m_dynamicSubGop;
    bool m_dynamicSubGopHasBeenSet;

    H265FlickerAdaptiveQuantization m_flickerAdaptiveQuantization;
    bool m_flickerAdaptiveQuantizationHasBeenSet;

    H265FramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet;

    H265FramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet;

    H265GopBReference m_gopBReference;
    bool m_gopBReferenceHasBeenSet;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet;

    double m_gopSize;
    bool m_gopSizeHasBeenSet;

    H265GopSizeUnits m_gopSizeUnits;
    bool m_gopSizeUnitsHasBeenSet;

    int m_hrdBufferInitialFillPercentage;
    bool m_hrdBufferInitialFillPercentageHasBeenSet;

    int m_hrdBufferSize;
    bool m_hrdBufferSizeHasBeenSet;

    H265InterlaceMode m_interlaceMode;
    bool m_interlaceModeHasBeenSet;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet;

    int m_minIInterval;
    bool m_minIIntervalHasBeenSet;

    int m_numberBFramesBetweenReferenceFrames;
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet;

    int m_numberReferenceFrames;
    bool m_numberReferenceFramesHasBeenSet;

    H265ParControl m_parControl;
    bool m_parControlHasBeenSet;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet;

    H265QualityTuningLevel m_qualityTuningLevel;
    bool m_qualityTuningLevelHasBeenSet;

    H265QvbrSettings m_qvbrSettings;
    bool m_qvbrSettingsHasBeenSet;

    H265RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet;

    H265SampleAdaptiveOffsetFilterMode m_sampleAdaptiveOffsetFilterMode;
    bool m_sampleAdaptiveOffsetFilterModeHasBeenSet;

    H265SceneChangeDetect m_sceneChangeDetect;
    bool m_sceneChangeDetectHasBeenSet;

    int m_slices;
    bool m_slicesHasBeenSet;

    H265SlowPal m_slowPal;
    bool m_slowPalHasBeenSet;

    H265SpatialAdaptiveQuantization m_spatialAdaptiveQuantization;
    bool m_spatialAdaptiveQuantizationHasBeenSet;

    H265Telecine m_telecine;
    bool m_telecineHasBeenSet;

    H265TemporalAdaptiveQuantization m_temporalAdaptiveQuantization;
    bool m_temporalAdaptiveQuantizationHasBeenSet;

    H265TemporalIds m_temporalIds;
    bool m_temporalIdsHasBeenSet;

    H265Tiles m_tiles;
    bool m_tilesHasBeenSet;

    H265UnregisteredSeiTimecode m_unregisteredSeiTimecode;
    bool m_unregisteredSeiTimecodeHasBeenSet;

    H265WriteMp4PackagingType m_writeMp4PackagingType;
    bool m_writeMp4PackagingTypeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
