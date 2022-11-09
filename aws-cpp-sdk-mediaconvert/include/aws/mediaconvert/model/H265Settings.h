﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
#include <aws/mediaconvert/model/H265ScanTypeConversionMode.h>
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
     * When you set Adaptive Quantization (H265AdaptiveQuantization) to Auto (AUTO), or
     * leave blank, MediaConvert automatically applies quantization to improve the
     * video quality of your output. Set Adaptive Quantization to Low (LOW), Medium
     * (MEDIUM), High (HIGH), Higher (HIGHER), or Max (MAX) to manually control the
     * strength of the quantization filter. When you do, you can specify a value for
     * Spatial Adaptive Quantization (H265SpatialAdaptiveQuantization), Temporal
     * Adaptive Quantization (H265TemporalAdaptiveQuantization), and Flicker Adaptive
     * Quantization (H265FlickerAdaptiveQuantization), to further control the
     * quantization filter. Set Adaptive Quantization to Off (OFF) to apply no
     * quantization to your output.
     */
    inline const H265AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    /**
     * When you set Adaptive Quantization (H265AdaptiveQuantization) to Auto (AUTO), or
     * leave blank, MediaConvert automatically applies quantization to improve the
     * video quality of your output. Set Adaptive Quantization to Low (LOW), Medium
     * (MEDIUM), High (HIGH), Higher (HIGHER), or Max (MAX) to manually control the
     * strength of the quantization filter. When you do, you can specify a value for
     * Spatial Adaptive Quantization (H265SpatialAdaptiveQuantization), Temporal
     * Adaptive Quantization (H265TemporalAdaptiveQuantization), and Flicker Adaptive
     * Quantization (H265FlickerAdaptiveQuantization), to further control the
     * quantization filter. Set Adaptive Quantization to Off (OFF) to apply no
     * quantization to your output.
     */
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }

    /**
     * When you set Adaptive Quantization (H265AdaptiveQuantization) to Auto (AUTO), or
     * leave blank, MediaConvert automatically applies quantization to improve the
     * video quality of your output. Set Adaptive Quantization to Low (LOW), Medium
     * (MEDIUM), High (HIGH), Higher (HIGHER), or Max (MAX) to manually control the
     * strength of the quantization filter. When you do, you can specify a value for
     * Spatial Adaptive Quantization (H265SpatialAdaptiveQuantization), Temporal
     * Adaptive Quantization (H265TemporalAdaptiveQuantization), and Flicker Adaptive
     * Quantization (H265FlickerAdaptiveQuantization), to further control the
     * quantization filter. Set Adaptive Quantization to Off (OFF) to apply no
     * quantization to your output.
     */
    inline void SetAdaptiveQuantization(const H265AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    /**
     * When you set Adaptive Quantization (H265AdaptiveQuantization) to Auto (AUTO), or
     * leave blank, MediaConvert automatically applies quantization to improve the
     * video quality of your output. Set Adaptive Quantization to Low (LOW), Medium
     * (MEDIUM), High (HIGH), Higher (HIGHER), or Max (MAX) to manually control the
     * strength of the quantization filter. When you do, you can specify a value for
     * Spatial Adaptive Quantization (H265SpatialAdaptiveQuantization), Temporal
     * Adaptive Quantization (H265TemporalAdaptiveQuantization), and Flicker Adaptive
     * Quantization (H265FlickerAdaptiveQuantization), to further control the
     * quantization filter. Set Adaptive Quantization to Off (OFF) to apply no
     * quantization to your output.
     */
    inline void SetAdaptiveQuantization(H265AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    /**
     * When you set Adaptive Quantization (H265AdaptiveQuantization) to Auto (AUTO), or
     * leave blank, MediaConvert automatically applies quantization to improve the
     * video quality of your output. Set Adaptive Quantization to Low (LOW), Medium
     * (MEDIUM), High (HIGH), Higher (HIGHER), or Max (MAX) to manually control the
     * strength of the quantization filter. When you do, you can specify a value for
     * Spatial Adaptive Quantization (H265SpatialAdaptiveQuantization), Temporal
     * Adaptive Quantization (H265TemporalAdaptiveQuantization), and Flicker Adaptive
     * Quantization (H265FlickerAdaptiveQuantization), to further control the
     * quantization filter. Set Adaptive Quantization to Off (OFF) to apply no
     * quantization to your output.
     */
    inline H265Settings& WithAdaptiveQuantization(const H265AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    /**
     * When you set Adaptive Quantization (H265AdaptiveQuantization) to Auto (AUTO), or
     * leave blank, MediaConvert automatically applies quantization to improve the
     * video quality of your output. Set Adaptive Quantization to Low (LOW), Medium
     * (MEDIUM), High (HIGH), Higher (HIGHER), or Max (MAX) to manually control the
     * strength of the quantization filter. When you do, you can specify a value for
     * Spatial Adaptive Quantization (H265SpatialAdaptiveQuantization), Temporal
     * Adaptive Quantization (H265TemporalAdaptiveQuantization), and Flicker Adaptive
     * Quantization (H265FlickerAdaptiveQuantization), to further control the
     * quantization filter. Set Adaptive Quantization to Off (OFF) to apply no
     * quantization to your output.
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
     * Specify the average bitrate in bits per second. Required for VBR and CBR. For MS
     * Smooth outputs, bitrates must be unique when rounded down to the nearest
     * multiple of 1000.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Specify the average bitrate in bits per second. Required for VBR and CBR. For MS
     * Smooth outputs, bitrates must be unique when rounded down to the nearest
     * multiple of 1000.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Specify the average bitrate in bits per second. Required for VBR and CBR. For MS
     * Smooth outputs, bitrates must be unique when rounded down to the nearest
     * multiple of 1000.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Specify the average bitrate in bits per second. Required for VBR and CBR. For MS
     * Smooth outputs, bitrates must be unique when rounded down to the nearest
     * multiple of 1000.
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
     * Enable this setting to have the encoder reduce I-frame pop. I-frame pop appears
     * as a visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set adaptiveQuantization to a value other than Off (OFF).
     */
    inline const H265FlickerAdaptiveQuantization& GetFlickerAdaptiveQuantization() const{ return m_flickerAdaptiveQuantization; }

    /**
     * Enable this setting to have the encoder reduce I-frame pop. I-frame pop appears
     * as a visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set adaptiveQuantization to a value other than Off (OFF).
     */
    inline bool FlickerAdaptiveQuantizationHasBeenSet() const { return m_flickerAdaptiveQuantizationHasBeenSet; }

    /**
     * Enable this setting to have the encoder reduce I-frame pop. I-frame pop appears
     * as a visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set adaptiveQuantization to a value other than Off (OFF).
     */
    inline void SetFlickerAdaptiveQuantization(const H265FlickerAdaptiveQuantization& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }

    /**
     * Enable this setting to have the encoder reduce I-frame pop. I-frame pop appears
     * as a visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set adaptiveQuantization to a value other than Off (OFF).
     */
    inline void SetFlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization&& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = std::move(value); }

    /**
     * Enable this setting to have the encoder reduce I-frame pop. I-frame pop appears
     * as a visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set adaptiveQuantization to a value other than Off (OFF).
     */
    inline H265Settings& WithFlickerAdaptiveQuantization(const H265FlickerAdaptiveQuantization& value) { SetFlickerAdaptiveQuantization(value); return *this;}

    /**
     * Enable this setting to have the encoder reduce I-frame pop. I-frame pop appears
     * as a visual flicker that can arise when the encoder saves bits by copying some
     * macroblocks many times from frame to frame, and then refreshes them at the
     * I-frame. When you enable this setting, the encoder updates these macroblocks
     * slightly more often to smooth out the flicker. This setting is disabled by
     * default. Related setting: In addition to enabling this setting, you must also
     * set adaptiveQuantization to a value other than Off (OFF).
     */
    inline H265Settings& WithFlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization&& value) { SetFlickerAdaptiveQuantization(std::move(value)); return *this;}


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
    inline const H265FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

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
    inline void SetFramerateControl(const H265FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

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
    inline void SetFramerateControl(H265FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

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
    inline H265Settings& WithFramerateControl(const H265FramerateControl& value) { SetFramerateControl(value); return *this;}

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
    inline H265Settings& WithFramerateControl(H265FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline const H265FramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline void SetFramerateConversionAlgorithm(const H265FramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline void SetFramerateConversionAlgorithm(H265FramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline H265Settings& WithFramerateConversionAlgorithm(const H265FramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    /**
     * Choose the method that you want MediaConvert to use when increasing or
     * decreasing the frame rate. We recommend using drop duplicate (DUPLICATE_DROP)
     * for numerically simple conversions, such as 60 fps to 30 fps. For numerically
     * complex conversions, you can use interpolate (INTERPOLATE) to avoid stutter.
     * This results in a smooth picture, but might introduce undesirable video
     * artifacts. For complex frame rate conversions, especially if your source video
     * has already been converted from its original cadence, use FrameFormer
     * (FRAMEFORMER) to do motion-compensated interpolation. FrameFormer chooses the
     * best conversion method frame by frame. Note that using FrameFormer increases the
     * transcoding time and incurs a significant add-on cost.
     */
    inline H265Settings& WithFramerateConversionAlgorithm(H265FramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


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
    inline H265Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
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
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. To enable this
     * automatic behavior, keep the default value by leaving this setting out of your
     * JSON job specification. In the console, do this by keeping the default empty
     * value. If you do explicitly specify a value, for segmented outputs, don't set
     * this value to 0.
     */
    inline int GetGopClosedCadence() const{ return m_gopClosedCadence; }

    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. To enable this
     * automatic behavior, keep the default value by leaving this setting out of your
     * JSON job specification. In the console, do this by keeping the default empty
     * value. If you do explicitly specify a value, for segmented outputs, don't set
     * this value to 0.
     */
    inline bool GopClosedCadenceHasBeenSet() const { return m_gopClosedCadenceHasBeenSet; }

    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. To enable this
     * automatic behavior, keep the default value by leaving this setting out of your
     * JSON job specification. In the console, do this by keeping the default empty
     * value. If you do explicitly specify a value, for segmented outputs, don't set
     * this value to 0.
     */
    inline void SetGopClosedCadence(int value) { m_gopClosedCadenceHasBeenSet = true; m_gopClosedCadence = value; }

    /**
     * Specify the relative frequency of open to closed GOPs in this output. For
     * example, if you want to allow four open GOPs and then require a closed GOP, set
     * this value to 5. We recommend that you have the transcoder automatically choose
     * this value for you based on characteristics of your input video. To enable this
     * automatic behavior, keep the default value by leaving this setting out of your
     * JSON job specification. In the console, do this by keeping the default empty
     * value. If you do explicitly specify a value, for segmented outputs, don't set
     * this value to 0.
     */
    inline H265Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}


    /**
     * Use this setting only when you set GOP mode control (GopSizeUnits) to Specified,
     * frames (FRAMES) or Specified, seconds (SECONDS). Specify the GOP length using a
     * whole number of frames or a decimal value of seconds. MediaConvert will
     * interpret this value as frames or seconds depending on the value you choose for
     * GOP mode control (GopSizeUnits). If you want to allow MediaConvert to
     * automatically determine GOP size, leave GOP size blank and set GOP mode control
     * to Auto (AUTO). If your output group specifies HLS, DASH, or CMAF, leave GOP
     * size blank and set GOP mode control to Auto in each output in your output group.
     */
    inline double GetGopSize() const{ return m_gopSize; }

    /**
     * Use this setting only when you set GOP mode control (GopSizeUnits) to Specified,
     * frames (FRAMES) or Specified, seconds (SECONDS). Specify the GOP length using a
     * whole number of frames or a decimal value of seconds. MediaConvert will
     * interpret this value as frames or seconds depending on the value you choose for
     * GOP mode control (GopSizeUnits). If you want to allow MediaConvert to
     * automatically determine GOP size, leave GOP size blank and set GOP mode control
     * to Auto (AUTO). If your output group specifies HLS, DASH, or CMAF, leave GOP
     * size blank and set GOP mode control to Auto in each output in your output group.
     */
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }

    /**
     * Use this setting only when you set GOP mode control (GopSizeUnits) to Specified,
     * frames (FRAMES) or Specified, seconds (SECONDS). Specify the GOP length using a
     * whole number of frames or a decimal value of seconds. MediaConvert will
     * interpret this value as frames or seconds depending on the value you choose for
     * GOP mode control (GopSizeUnits). If you want to allow MediaConvert to
     * automatically determine GOP size, leave GOP size blank and set GOP mode control
     * to Auto (AUTO). If your output group specifies HLS, DASH, or CMAF, leave GOP
     * size blank and set GOP mode control to Auto in each output in your output group.
     */
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * Use this setting only when you set GOP mode control (GopSizeUnits) to Specified,
     * frames (FRAMES) or Specified, seconds (SECONDS). Specify the GOP length using a
     * whole number of frames or a decimal value of seconds. MediaConvert will
     * interpret this value as frames or seconds depending on the value you choose for
     * GOP mode control (GopSizeUnits). If you want to allow MediaConvert to
     * automatically determine GOP size, leave GOP size blank and set GOP mode control
     * to Auto (AUTO). If your output group specifies HLS, DASH, or CMAF, leave GOP
     * size blank and set GOP mode control to Auto in each output in your output group.
     */
    inline H265Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline const H265GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline void SetGopSizeUnits(const H265GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline void SetGopSizeUnits(H265GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline H265Settings& WithGopSizeUnits(const H265GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    /**
     * Specify how the transcoder determines GOP size for this output. We recommend
     * that you have the transcoder automatically choose this value for you based on
     * characteristics of your input video. To enable this automatic behavior, choose
     * Auto (AUTO) and and leave GOP size (GopSize) blank. By default, if you don't
     * specify GOP mode control (GopSizeUnits), MediaConvert will use automatic
     * behavior. If your output group specifies HLS, DASH, or CMAF, set GOP mode
     * control to Auto and leave GOP size blank in each output in your output group. To
     * explicitly specify the GOP length, choose Specified, frames (FRAMES) or
     * Specified, seconds (SECONDS) and then provide the GOP length in the related
     * setting GOP size (GopSize).
     */
    inline H265Settings& WithGopSizeUnits(H265GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


    /**
     * If your downstream systems have strict buffer requirements: Specify the minimum
     * percentage of the HRD buffer that's available at the end of each encoded video
     * segment. For the best video quality: Set to 0 or leave blank to automatically
     * determine the final buffer fill percentage.
     */
    inline int GetHrdBufferFinalFillPercentage() const{ return m_hrdBufferFinalFillPercentage; }

    /**
     * If your downstream systems have strict buffer requirements: Specify the minimum
     * percentage of the HRD buffer that's available at the end of each encoded video
     * segment. For the best video quality: Set to 0 or leave blank to automatically
     * determine the final buffer fill percentage.
     */
    inline bool HrdBufferFinalFillPercentageHasBeenSet() const { return m_hrdBufferFinalFillPercentageHasBeenSet; }

    /**
     * If your downstream systems have strict buffer requirements: Specify the minimum
     * percentage of the HRD buffer that's available at the end of each encoded video
     * segment. For the best video quality: Set to 0 or leave blank to automatically
     * determine the final buffer fill percentage.
     */
    inline void SetHrdBufferFinalFillPercentage(int value) { m_hrdBufferFinalFillPercentageHasBeenSet = true; m_hrdBufferFinalFillPercentage = value; }

    /**
     * If your downstream systems have strict buffer requirements: Specify the minimum
     * percentage of the HRD buffer that's available at the end of each encoded video
     * segment. For the best video quality: Set to 0 or leave blank to automatically
     * determine the final buffer fill percentage.
     */
    inline H265Settings& WithHrdBufferFinalFillPercentage(int value) { SetHrdBufferFinalFillPercentage(value); return *this;}


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
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline const H265InterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline bool InterlaceModeHasBeenSet() const { return m_interlaceModeHasBeenSet; }

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline void SetInterlaceMode(const H265InterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline void SetInterlaceMode(H265InterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
     */
    inline H265Settings& WithInterlaceMode(const H265InterlaceMode& value) { SetInterlaceMode(value); return *this;}

    /**
     * Choose the scan line type for the output. Keep the default value, Progressive
     * (PROGRESSIVE) to create a progressive output, regardless of the scan type of
     * your input. Use Top field first (TOP_FIELD) or Bottom field first (BOTTOM_FIELD)
     * to create an output that's interlaced with the same field polarity throughout.
     * Use Follow, default top (FOLLOW_TOP_FIELD) or Follow, default bottom
     * (FOLLOW_BOTTOM_FIELD) to produce outputs with the same field polarity as the
     * source. For jobs that have multiple inputs, the output field polarity might
     * change over the course of the output. Follow behavior depends on the input scan
     * type. If the source is interlaced, the output will be interlaced with the same
     * polarity as the source. If the source is progressive, the output will be
     * interlaced with top field bottom field first, depending on which of the Follow
     * options you choose.
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
     * Use this setting only when you also enable Scene change detection
     * (SceneChangeDetect). This setting determines how the encoder manages the spacing
     * between I-frames that it inserts as part of the I-frame cadence and the I-frames
     * that it inserts for Scene change detection. We recommend that you have the
     * transcoder automatically choose this value for you based on characteristics of
     * your input video. To enable this automatic behavior, keep the default value by
     * leaving this setting out of your JSON job specification. In the console, do this
     * by keeping the default empty value. When you explicitly specify a value for this
     * setting, the encoder determines whether to skip a cadence-driven I-frame by the
     * value you set. For example, if you set Min I interval (minIInterval) to 5 and a
     * cadence-driven I-frame would fall within 5 frames of a scene-change I-frame,
     * then the encoder skips the cadence-driven I-frame. In this way, one GOP is
     * shrunk slightly and one GOP is stretched slightly. When the cadence-driven
     * I-frames are farther from the scene-change I-frame than the value you set, then
     * the encoder leaves all I-frames in place and the GOPs surrounding the scene
     * change are smaller than the usual cadence GOPs.
     */
    inline int GetMinIInterval() const{ return m_minIInterval; }

    /**
     * Use this setting only when you also enable Scene change detection
     * (SceneChangeDetect). This setting determines how the encoder manages the spacing
     * between I-frames that it inserts as part of the I-frame cadence and the I-frames
     * that it inserts for Scene change detection. We recommend that you have the
     * transcoder automatically choose this value for you based on characteristics of
     * your input video. To enable this automatic behavior, keep the default value by
     * leaving this setting out of your JSON job specification. In the console, do this
     * by keeping the default empty value. When you explicitly specify a value for this
     * setting, the encoder determines whether to skip a cadence-driven I-frame by the
     * value you set. For example, if you set Min I interval (minIInterval) to 5 and a
     * cadence-driven I-frame would fall within 5 frames of a scene-change I-frame,
     * then the encoder skips the cadence-driven I-frame. In this way, one GOP is
     * shrunk slightly and one GOP is stretched slightly. When the cadence-driven
     * I-frames are farther from the scene-change I-frame than the value you set, then
     * the encoder leaves all I-frames in place and the GOPs surrounding the scene
     * change are smaller than the usual cadence GOPs.
     */
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }

    /**
     * Use this setting only when you also enable Scene change detection
     * (SceneChangeDetect). This setting determines how the encoder manages the spacing
     * between I-frames that it inserts as part of the I-frame cadence and the I-frames
     * that it inserts for Scene change detection. We recommend that you have the
     * transcoder automatically choose this value for you based on characteristics of
     * your input video. To enable this automatic behavior, keep the default value by
     * leaving this setting out of your JSON job specification. In the console, do this
     * by keeping the default empty value. When you explicitly specify a value for this
     * setting, the encoder determines whether to skip a cadence-driven I-frame by the
     * value you set. For example, if you set Min I interval (minIInterval) to 5 and a
     * cadence-driven I-frame would fall within 5 frames of a scene-change I-frame,
     * then the encoder skips the cadence-driven I-frame. In this way, one GOP is
     * shrunk slightly and one GOP is stretched slightly. When the cadence-driven
     * I-frames are farther from the scene-change I-frame than the value you set, then
     * the encoder leaves all I-frames in place and the GOPs surrounding the scene
     * change are smaller than the usual cadence GOPs.
     */
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }

    /**
     * Use this setting only when you also enable Scene change detection
     * (SceneChangeDetect). This setting determines how the encoder manages the spacing
     * between I-frames that it inserts as part of the I-frame cadence and the I-frames
     * that it inserts for Scene change detection. We recommend that you have the
     * transcoder automatically choose this value for you based on characteristics of
     * your input video. To enable this automatic behavior, keep the default value by
     * leaving this setting out of your JSON job specification. In the console, do this
     * by keeping the default empty value. When you explicitly specify a value for this
     * setting, the encoder determines whether to skip a cadence-driven I-frame by the
     * value you set. For example, if you set Min I interval (minIInterval) to 5 and a
     * cadence-driven I-frame would fall within 5 frames of a scene-change I-frame,
     * then the encoder skips the cadence-driven I-frame. In this way, one GOP is
     * shrunk slightly and one GOP is stretched slightly. When the cadence-driven
     * I-frames are farther from the scene-change I-frame than the value you set, then
     * the encoder leaves all I-frames in place and the GOPs surrounding the scene
     * change are smaller than the usual cadence GOPs.
     */
    inline H265Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}


    /**
     * Specify the number of B-frames that MediaConvert puts between reference frames
     * in this output. Valid values are whole numbers from 0 through 7. When you don't
     * specify a value, MediaConvert defaults to 2.
     */
    inline int GetNumberBFramesBetweenReferenceFrames() const{ return m_numberBFramesBetweenReferenceFrames; }

    /**
     * Specify the number of B-frames that MediaConvert puts between reference frames
     * in this output. Valid values are whole numbers from 0 through 7. When you don't
     * specify a value, MediaConvert defaults to 2.
     */
    inline bool NumberBFramesBetweenReferenceFramesHasBeenSet() const { return m_numberBFramesBetweenReferenceFramesHasBeenSet; }

    /**
     * Specify the number of B-frames that MediaConvert puts between reference frames
     * in this output. Valid values are whole numbers from 0 through 7. When you don't
     * specify a value, MediaConvert defaults to 2.
     */
    inline void SetNumberBFramesBetweenReferenceFrames(int value) { m_numberBFramesBetweenReferenceFramesHasBeenSet = true; m_numberBFramesBetweenReferenceFrames = value; }

    /**
     * Specify the number of B-frames that MediaConvert puts between reference frames
     * in this output. Valid values are whole numbers from 0 through 7. When you don't
     * specify a value, MediaConvert defaults to 2.
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
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline const H265ParControl& GetParControl() const{ return m_parControl; }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline void SetParControl(const H265ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline void SetParControl(H265ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline H265Settings& WithParControl(const H265ParControl& value) { SetParControl(value); return *this;}

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline H265Settings& WithParControl(H265ParControl&& value) { SetParControl(std::move(value)); return *this;}


    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parDenominator is 33.
     */
    inline int GetParDenominator() const{ return m_parDenominator; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parDenominator is 33.
     */
    inline bool ParDenominatorHasBeenSet() const { return m_parDenominatorHasBeenSet; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parDenominator is 33.
     */
    inline void SetParDenominator(int value) { m_parDenominatorHasBeenSet = true; m_parDenominator = value; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parDenominator is 33.
     */
    inline H265Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parNumerator is 40.
     */
    inline int GetParNumerator() const{ return m_parNumerator; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parNumerator is 40.
     */
    inline bool ParNumeratorHasBeenSet() const { return m_parNumeratorHasBeenSet; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parNumerator is 40.
     */
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }

    /**
     * Required when you set Pixel aspect ratio (parControl) to SPECIFIED. On the
     * console, this corresponds to any value other than Follow source. When you
     * specify an output pixel aspect ratio (PAR) that is different from your input
     * video PAR, provide your output PAR as a ratio. For example, for D1/DV NTSC
     * widescreen, you would specify the ratio 40:33. In this example, the value for
     * parNumerator is 40.
     */
    inline H265Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline const H265QualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline void SetQualityTuningLevel(const H265QualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline void SetQualityTuningLevel(H265QualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline H265Settings& WithQualityTuningLevel(const H265QualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    /**
     * Optional. Use Quality tuning level (qualityTuningLevel) to choose how you want
     * to trade off encoding speed for output video quality. The default behavior is
     * faster, lower quality, single-pass encoding.
     */
    inline H265Settings& WithQualityTuningLevel(H265QualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}


    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline const H265QvbrSettings& GetQvbrSettings() const{ return m_qvbrSettings; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline bool QvbrSettingsHasBeenSet() const { return m_qvbrSettingsHasBeenSet; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline void SetQvbrSettings(const H265QvbrSettings& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = value; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline void SetQvbrSettings(H265QvbrSettings&& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = std::move(value); }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline H265Settings& WithQvbrSettings(const H265QvbrSettings& value) { SetQvbrSettings(value); return *this;}

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
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
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline const H265ScanTypeConversionMode& GetScanTypeConversionMode() const{ return m_scanTypeConversionMode; }

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline bool ScanTypeConversionModeHasBeenSet() const { return m_scanTypeConversionModeHasBeenSet; }

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline void SetScanTypeConversionMode(const H265ScanTypeConversionMode& value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = value; }

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline void SetScanTypeConversionMode(H265ScanTypeConversionMode&& value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = std::move(value); }

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline H265Settings& WithScanTypeConversionMode(const H265ScanTypeConversionMode& value) { SetScanTypeConversionMode(value); return *this;}

    /**
     * Use this setting for interlaced outputs, when your output frame rate is half of
     * your input frame rate. In this situation, choose Optimized interlacing
     * (INTERLACED_OPTIMIZE) to create a better quality interlaced output. In this
     * case, each progressive frame from the input corresponds to an interlaced field
     * in the output. Keep the default value, Basic interlacing (INTERLACED), for all
     * other output frame rates. With basic interlacing, MediaConvert performs any
     * frame rate conversion first and then interlaces the frames. When you choose
     * Optimized interlacing and you set your output frame rate to a value that isn't
     * suitable for optimized interlacing, MediaConvert automatically falls back to
     * basic interlacing. Required settings: To use optimized interlacing, you must set
     * Telecine (telecine) to None (NONE) or Soft (SOFT). You can't use optimized
     * interlacing for hard telecine outputs. You must also set Interlace mode
     * (interlaceMode) to a value other than Progressive (PROGRESSIVE).
     */
    inline H265Settings& WithScanTypeConversionMode(H265ScanTypeConversionMode&& value) { SetScanTypeConversionMode(std::move(value)); return *this;}


    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline const H265SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline void SetSceneChangeDetect(const H265SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline void SetSceneChangeDetect(H265SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
     */
    inline H265Settings& WithSceneChangeDetect(const H265SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    /**
     * Enable this setting to insert I-frames at scene changes that the service
     * automatically detects. This improves video quality and is enabled by default. If
     * this output uses QVBR, choose Transition detection (TRANSITION_DETECTION) for
     * further video quality improvement. For more information about QVBR, see
     * https://docs.aws.amazon.com/console/mediaconvert/cbr-vbr-qvbr.
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
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline const H265SlowPal& GetSlowPal() const{ return m_slowPal; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline void SetSlowPal(const H265SlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline void SetSlowPal(H265SlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline H265Settings& WithSlowPal(const H265SlowPal& value) { SetSlowPal(value); return *this;}

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline H265Settings& WithSlowPal(H265SlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on spatial variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas that can sustain more distortion
     * with no noticeable visual degradation and uses more bits on areas where any
     * small distortion will be noticeable. For example, complex textured blocks are
     * encoded with fewer bits and smooth textured blocks are encoded with more bits.
     * Enabling this feature will almost always improve your video quality. Note,
     * though, that this feature doesn't take into account where the viewer's attention
     * is likely to be. If viewers are likely to be focusing their attention on a part
     * of the screen with a lot of complex texture, you might choose to disable this
     * feature. Related setting: When you enable spatial adaptive quantization, set the
     * value for Adaptive quantization (adaptiveQuantization) depending on your
     * content. For homogeneous content, such as cartoons and video games, set it to
     * Low. For content with a wider variety of textures, set it to High or Higher.
     */
    inline const H265SpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on spatial variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas that can sustain more distortion
     * with no noticeable visual degradation and uses more bits on areas where any
     * small distortion will be noticeable. For example, complex textured blocks are
     * encoded with fewer bits and smooth textured blocks are encoded with more bits.
     * Enabling this feature will almost always improve your video quality. Note,
     * though, that this feature doesn't take into account where the viewer's attention
     * is likely to be. If viewers are likely to be focusing their attention on a part
     * of the screen with a lot of complex texture, you might choose to disable this
     * feature. Related setting: When you enable spatial adaptive quantization, set the
     * value for Adaptive quantization (adaptiveQuantization) depending on your
     * content. For homogeneous content, such as cartoons and video games, set it to
     * Low. For content with a wider variety of textures, set it to High or Higher.
     */
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on spatial variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas that can sustain more distortion
     * with no noticeable visual degradation and uses more bits on areas where any
     * small distortion will be noticeable. For example, complex textured blocks are
     * encoded with fewer bits and smooth textured blocks are encoded with more bits.
     * Enabling this feature will almost always improve your video quality. Note,
     * though, that this feature doesn't take into account where the viewer's attention
     * is likely to be. If viewers are likely to be focusing their attention on a part
     * of the screen with a lot of complex texture, you might choose to disable this
     * feature. Related setting: When you enable spatial adaptive quantization, set the
     * value for Adaptive quantization (adaptiveQuantization) depending on your
     * content. For homogeneous content, such as cartoons and video games, set it to
     * Low. For content with a wider variety of textures, set it to High or Higher.
     */
    inline void SetSpatialAdaptiveQuantization(const H265SpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on spatial variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas that can sustain more distortion
     * with no noticeable visual degradation and uses more bits on areas where any
     * small distortion will be noticeable. For example, complex textured blocks are
     * encoded with fewer bits and smooth textured blocks are encoded with more bits.
     * Enabling this feature will almost always improve your video quality. Note,
     * though, that this feature doesn't take into account where the viewer's attention
     * is likely to be. If viewers are likely to be focusing their attention on a part
     * of the screen with a lot of complex texture, you might choose to disable this
     * feature. Related setting: When you enable spatial adaptive quantization, set the
     * value for Adaptive quantization (adaptiveQuantization) depending on your
     * content. For homogeneous content, such as cartoons and video games, set it to
     * Low. For content with a wider variety of textures, set it to High or Higher.
     */
    inline void SetSpatialAdaptiveQuantization(H265SpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on spatial variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas that can sustain more distortion
     * with no noticeable visual degradation and uses more bits on areas where any
     * small distortion will be noticeable. For example, complex textured blocks are
     * encoded with fewer bits and smooth textured blocks are encoded with more bits.
     * Enabling this feature will almost always improve your video quality. Note,
     * though, that this feature doesn't take into account where the viewer's attention
     * is likely to be. If viewers are likely to be focusing their attention on a part
     * of the screen with a lot of complex texture, you might choose to disable this
     * feature. Related setting: When you enable spatial adaptive quantization, set the
     * value for Adaptive quantization (adaptiveQuantization) depending on your
     * content. For homogeneous content, such as cartoons and video games, set it to
     * Low. For content with a wider variety of textures, set it to High or Higher.
     */
    inline H265Settings& WithSpatialAdaptiveQuantization(const H265SpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on spatial variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas that can sustain more distortion
     * with no noticeable visual degradation and uses more bits on areas where any
     * small distortion will be noticeable. For example, complex textured blocks are
     * encoded with fewer bits and smooth textured blocks are encoded with more bits.
     * Enabling this feature will almost always improve your video quality. Note,
     * though, that this feature doesn't take into account where the viewer's attention
     * is likely to be. If viewers are likely to be focusing their attention on a part
     * of the screen with a lot of complex texture, you might choose to disable this
     * feature. Related setting: When you enable spatial adaptive quantization, set the
     * value for Adaptive quantization (adaptiveQuantization) depending on your
     * content. For homogeneous content, such as cartoons and video games, set it to
     * Low. For content with a wider variety of textures, set it to High or Higher.
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
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on temporal variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas of the frame that aren't moving
     * and uses more bits on complex objects with sharp edges that move a lot. For
     * example, this feature improves the readability of text tickers on newscasts and
     * scoreboards on sports matches. Enabling this feature will almost always improve
     * your video quality. Note, though, that this feature doesn't take into account
     * where the viewer's attention is likely to be. If viewers are likely to be
     * focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal quantization,
     * adjust the strength of the filter with the setting Adaptive quantization
     * (adaptiveQuantization).
     */
    inline const H265TemporalAdaptiveQuantization& GetTemporalAdaptiveQuantization() const{ return m_temporalAdaptiveQuantization; }

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on temporal variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas of the frame that aren't moving
     * and uses more bits on complex objects with sharp edges that move a lot. For
     * example, this feature improves the readability of text tickers on newscasts and
     * scoreboards on sports matches. Enabling this feature will almost always improve
     * your video quality. Note, though, that this feature doesn't take into account
     * where the viewer's attention is likely to be. If viewers are likely to be
     * focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal quantization,
     * adjust the strength of the filter with the setting Adaptive quantization
     * (adaptiveQuantization).
     */
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on temporal variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas of the frame that aren't moving
     * and uses more bits on complex objects with sharp edges that move a lot. For
     * example, this feature improves the readability of text tickers on newscasts and
     * scoreboards on sports matches. Enabling this feature will almost always improve
     * your video quality. Note, though, that this feature doesn't take into account
     * where the viewer's attention is likely to be. If viewers are likely to be
     * focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal quantization,
     * adjust the strength of the filter with the setting Adaptive quantization
     * (adaptiveQuantization).
     */
    inline void SetTemporalAdaptiveQuantization(const H265TemporalAdaptiveQuantization& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on temporal variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas of the frame that aren't moving
     * and uses more bits on complex objects with sharp edges that move a lot. For
     * example, this feature improves the readability of text tickers on newscasts and
     * scoreboards on sports matches. Enabling this feature will almost always improve
     * your video quality. Note, though, that this feature doesn't take into account
     * where the viewer's attention is likely to be. If viewers are likely to be
     * focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal quantization,
     * adjust the strength of the filter with the setting Adaptive quantization
     * (adaptiveQuantization).
     */
    inline void SetTemporalAdaptiveQuantization(H265TemporalAdaptiveQuantization&& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = std::move(value); }

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on temporal variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas of the frame that aren't moving
     * and uses more bits on complex objects with sharp edges that move a lot. For
     * example, this feature improves the readability of text tickers on newscasts and
     * scoreboards on sports matches. Enabling this feature will almost always improve
     * your video quality. Note, though, that this feature doesn't take into account
     * where the viewer's attention is likely to be. If viewers are likely to be
     * focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal quantization,
     * adjust the strength of the filter with the setting Adaptive quantization
     * (adaptiveQuantization).
     */
    inline H265Settings& WithTemporalAdaptiveQuantization(const H265TemporalAdaptiveQuantization& value) { SetTemporalAdaptiveQuantization(value); return *this;}

    /**
     * Keep the default value, Enabled (ENABLED), to adjust quantization within each
     * frame based on temporal variation of content complexity. When you enable this
     * feature, the encoder uses fewer bits on areas of the frame that aren't moving
     * and uses more bits on complex objects with sharp edges that move a lot. For
     * example, this feature improves the readability of text tickers on newscasts and
     * scoreboards on sports matches. Enabling this feature will almost always improve
     * your video quality. Note, though, that this feature doesn't take into account
     * where the viewer's attention is likely to be. If viewers are likely to be
     * focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal quantization,
     * adjust the strength of the filter with the setting Adaptive quantization
     * (adaptiveQuantization).
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
     * If the location of parameter set NAL units doesn't matter in your workflow,
     * ignore this setting. Use this setting only with CMAF or DASH outputs, or with
     * standalone file outputs in an MPEG-4 container (MP4 outputs). Choose HVC1 to
     * mark your output as HVC1. This makes your output compliant with the following
     * specification: ISO IECJTC1 SC29 N13798 Text ISO/IEC FDIS 14496-15 3rd Edition.
     * For these outputs, the service stores parameter set NAL units in the sample
     * headers but not in the samples directly. For MP4 outputs, when you choose HVC1,
     * your output video might not work properly with some downstream systems and video
     * players. The service defaults to marking your output as HEV1. For these outputs,
     * the service writes parameter set NAL units directly into the samples.
     */
    inline const H265WriteMp4PackagingType& GetWriteMp4PackagingType() const{ return m_writeMp4PackagingType; }

    /**
     * If the location of parameter set NAL units doesn't matter in your workflow,
     * ignore this setting. Use this setting only with CMAF or DASH outputs, or with
     * standalone file outputs in an MPEG-4 container (MP4 outputs). Choose HVC1 to
     * mark your output as HVC1. This makes your output compliant with the following
     * specification: ISO IECJTC1 SC29 N13798 Text ISO/IEC FDIS 14496-15 3rd Edition.
     * For these outputs, the service stores parameter set NAL units in the sample
     * headers but not in the samples directly. For MP4 outputs, when you choose HVC1,
     * your output video might not work properly with some downstream systems and video
     * players. The service defaults to marking your output as HEV1. For these outputs,
     * the service writes parameter set NAL units directly into the samples.
     */
    inline bool WriteMp4PackagingTypeHasBeenSet() const { return m_writeMp4PackagingTypeHasBeenSet; }

    /**
     * If the location of parameter set NAL units doesn't matter in your workflow,
     * ignore this setting. Use this setting only with CMAF or DASH outputs, or with
     * standalone file outputs in an MPEG-4 container (MP4 outputs). Choose HVC1 to
     * mark your output as HVC1. This makes your output compliant with the following
     * specification: ISO IECJTC1 SC29 N13798 Text ISO/IEC FDIS 14496-15 3rd Edition.
     * For these outputs, the service stores parameter set NAL units in the sample
     * headers but not in the samples directly. For MP4 outputs, when you choose HVC1,
     * your output video might not work properly with some downstream systems and video
     * players. The service defaults to marking your output as HEV1. For these outputs,
     * the service writes parameter set NAL units directly into the samples.
     */
    inline void SetWriteMp4PackagingType(const H265WriteMp4PackagingType& value) { m_writeMp4PackagingTypeHasBeenSet = true; m_writeMp4PackagingType = value; }

    /**
     * If the location of parameter set NAL units doesn't matter in your workflow,
     * ignore this setting. Use this setting only with CMAF or DASH outputs, or with
     * standalone file outputs in an MPEG-4 container (MP4 outputs). Choose HVC1 to
     * mark your output as HVC1. This makes your output compliant with the following
     * specification: ISO IECJTC1 SC29 N13798 Text ISO/IEC FDIS 14496-15 3rd Edition.
     * For these outputs, the service stores parameter set NAL units in the sample
     * headers but not in the samples directly. For MP4 outputs, when you choose HVC1,
     * your output video might not work properly with some downstream systems and video
     * players. The service defaults to marking your output as HEV1. For these outputs,
     * the service writes parameter set NAL units directly into the samples.
     */
    inline void SetWriteMp4PackagingType(H265WriteMp4PackagingType&& value) { m_writeMp4PackagingTypeHasBeenSet = true; m_writeMp4PackagingType = std::move(value); }

    /**
     * If the location of parameter set NAL units doesn't matter in your workflow,
     * ignore this setting. Use this setting only with CMAF or DASH outputs, or with
     * standalone file outputs in an MPEG-4 container (MP4 outputs). Choose HVC1 to
     * mark your output as HVC1. This makes your output compliant with the following
     * specification: ISO IECJTC1 SC29 N13798 Text ISO/IEC FDIS 14496-15 3rd Edition.
     * For these outputs, the service stores parameter set NAL units in the sample
     * headers but not in the samples directly. For MP4 outputs, when you choose HVC1,
     * your output video might not work properly with some downstream systems and video
     * players. The service defaults to marking your output as HEV1. For these outputs,
     * the service writes parameter set NAL units directly into the samples.
     */
    inline H265Settings& WithWriteMp4PackagingType(const H265WriteMp4PackagingType& value) { SetWriteMp4PackagingType(value); return *this;}

    /**
     * If the location of parameter set NAL units doesn't matter in your workflow,
     * ignore this setting. Use this setting only with CMAF or DASH outputs, or with
     * standalone file outputs in an MPEG-4 container (MP4 outputs). Choose HVC1 to
     * mark your output as HVC1. This makes your output compliant with the following
     * specification: ISO IECJTC1 SC29 N13798 Text ISO/IEC FDIS 14496-15 3rd Edition.
     * For these outputs, the service stores parameter set NAL units in the sample
     * headers but not in the samples directly. For MP4 outputs, when you choose HVC1,
     * your output video might not work properly with some downstream systems and video
     * players. The service defaults to marking your output as HEV1. For these outputs,
     * the service writes parameter set NAL units directly into the samples.
     */
    inline H265Settings& WithWriteMp4PackagingType(H265WriteMp4PackagingType&& value) { SetWriteMp4PackagingType(std::move(value)); return *this;}

  private:

    H265AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet = false;

    H265AlternateTransferFunctionSei m_alternateTransferFunctionSei;
    bool m_alternateTransferFunctionSeiHasBeenSet = false;

    int m_bitrate;
    bool m_bitrateHasBeenSet = false;

    H265CodecLevel m_codecLevel;
    bool m_codecLevelHasBeenSet = false;

    H265CodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet = false;

    H265DynamicSubGop m_dynamicSubGop;
    bool m_dynamicSubGopHasBeenSet = false;

    H265FlickerAdaptiveQuantization m_flickerAdaptiveQuantization;
    bool m_flickerAdaptiveQuantizationHasBeenSet = false;

    H265FramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet = false;

    H265FramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;

    H265GopBReference m_gopBReference;
    bool m_gopBReferenceHasBeenSet = false;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet = false;

    double m_gopSize;
    bool m_gopSizeHasBeenSet = false;

    H265GopSizeUnits m_gopSizeUnits;
    bool m_gopSizeUnitsHasBeenSet = false;

    int m_hrdBufferFinalFillPercentage;
    bool m_hrdBufferFinalFillPercentageHasBeenSet = false;

    int m_hrdBufferInitialFillPercentage;
    bool m_hrdBufferInitialFillPercentageHasBeenSet = false;

    int m_hrdBufferSize;
    bool m_hrdBufferSizeHasBeenSet = false;

    H265InterlaceMode m_interlaceMode;
    bool m_interlaceModeHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    int m_minIInterval;
    bool m_minIIntervalHasBeenSet = false;

    int m_numberBFramesBetweenReferenceFrames;
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet = false;

    int m_numberReferenceFrames;
    bool m_numberReferenceFramesHasBeenSet = false;

    H265ParControl m_parControl;
    bool m_parControlHasBeenSet = false;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet = false;

    H265QualityTuningLevel m_qualityTuningLevel;
    bool m_qualityTuningLevelHasBeenSet = false;

    H265QvbrSettings m_qvbrSettings;
    bool m_qvbrSettingsHasBeenSet = false;

    H265RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet = false;

    H265SampleAdaptiveOffsetFilterMode m_sampleAdaptiveOffsetFilterMode;
    bool m_sampleAdaptiveOffsetFilterModeHasBeenSet = false;

    H265ScanTypeConversionMode m_scanTypeConversionMode;
    bool m_scanTypeConversionModeHasBeenSet = false;

    H265SceneChangeDetect m_sceneChangeDetect;
    bool m_sceneChangeDetectHasBeenSet = false;

    int m_slices;
    bool m_slicesHasBeenSet = false;

    H265SlowPal m_slowPal;
    bool m_slowPalHasBeenSet = false;

    H265SpatialAdaptiveQuantization m_spatialAdaptiveQuantization;
    bool m_spatialAdaptiveQuantizationHasBeenSet = false;

    H265Telecine m_telecine;
    bool m_telecineHasBeenSet = false;

    H265TemporalAdaptiveQuantization m_temporalAdaptiveQuantization;
    bool m_temporalAdaptiveQuantizationHasBeenSet = false;

    H265TemporalIds m_temporalIds;
    bool m_temporalIdsHasBeenSet = false;

    H265Tiles m_tiles;
    bool m_tilesHasBeenSet = false;

    H265UnregisteredSeiTimecode m_unregisteredSeiTimecode;
    bool m_unregisteredSeiTimecodeHasBeenSet = false;

    H265WriteMp4PackagingType m_writeMp4PackagingType;
    bool m_writeMp4PackagingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
