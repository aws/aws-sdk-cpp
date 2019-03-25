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
#include <aws/mediaconvert/model/Mpeg2AdaptiveQuantization.h>
#include <aws/mediaconvert/model/Mpeg2CodecLevel.h>
#include <aws/mediaconvert/model/Mpeg2CodecProfile.h>
#include <aws/mediaconvert/model/Mpeg2DynamicSubGop.h>
#include <aws/mediaconvert/model/Mpeg2FramerateControl.h>
#include <aws/mediaconvert/model/Mpeg2FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/Mpeg2GopSizeUnits.h>
#include <aws/mediaconvert/model/Mpeg2InterlaceMode.h>
#include <aws/mediaconvert/model/Mpeg2IntraDcPrecision.h>
#include <aws/mediaconvert/model/Mpeg2ParControl.h>
#include <aws/mediaconvert/model/Mpeg2QualityTuningLevel.h>
#include <aws/mediaconvert/model/Mpeg2RateControlMode.h>
#include <aws/mediaconvert/model/Mpeg2SceneChangeDetect.h>
#include <aws/mediaconvert/model/Mpeg2SlowPal.h>
#include <aws/mediaconvert/model/Mpeg2SpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/Mpeg2Syntax.h>
#include <aws/mediaconvert/model/Mpeg2Telecine.h>
#include <aws/mediaconvert/model/Mpeg2TemporalAdaptiveQuantization.h>
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
   * value MPEG2.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Mpeg2Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Mpeg2Settings
  {
  public:
    Mpeg2Settings();
    Mpeg2Settings(Aws::Utils::Json::JsonView jsonValue);
    Mpeg2Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline const Mpeg2AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline void SetAdaptiveQuantization(const Mpeg2AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline void SetAdaptiveQuantization(Mpeg2AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline Mpeg2Settings& WithAdaptiveQuantization(const Mpeg2AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    /**
     * Adaptive quantization. Allows intra-frame quantizers to vary to improve visual
     * quality.
     */
    inline Mpeg2Settings& WithAdaptiveQuantization(Mpeg2AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


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
    inline Mpeg2Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Use Level (Mpeg2CodecLevel) to set the MPEG-2 level for the video output.
     */
    inline const Mpeg2CodecLevel& GetCodecLevel() const{ return m_codecLevel; }

    /**
     * Use Level (Mpeg2CodecLevel) to set the MPEG-2 level for the video output.
     */
    inline bool CodecLevelHasBeenSet() const { return m_codecLevelHasBeenSet; }

    /**
     * Use Level (Mpeg2CodecLevel) to set the MPEG-2 level for the video output.
     */
    inline void SetCodecLevel(const Mpeg2CodecLevel& value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }

    /**
     * Use Level (Mpeg2CodecLevel) to set the MPEG-2 level for the video output.
     */
    inline void SetCodecLevel(Mpeg2CodecLevel&& value) { m_codecLevelHasBeenSet = true; m_codecLevel = std::move(value); }

    /**
     * Use Level (Mpeg2CodecLevel) to set the MPEG-2 level for the video output.
     */
    inline Mpeg2Settings& WithCodecLevel(const Mpeg2CodecLevel& value) { SetCodecLevel(value); return *this;}

    /**
     * Use Level (Mpeg2CodecLevel) to set the MPEG-2 level for the video output.
     */
    inline Mpeg2Settings& WithCodecLevel(Mpeg2CodecLevel&& value) { SetCodecLevel(std::move(value)); return *this;}


    /**
     * Use Profile (Mpeg2CodecProfile) to set the MPEG-2 profile for the video output.
     */
    inline const Mpeg2CodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    /**
     * Use Profile (Mpeg2CodecProfile) to set the MPEG-2 profile for the video output.
     */
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }

    /**
     * Use Profile (Mpeg2CodecProfile) to set the MPEG-2 profile for the video output.
     */
    inline void SetCodecProfile(const Mpeg2CodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    /**
     * Use Profile (Mpeg2CodecProfile) to set the MPEG-2 profile for the video output.
     */
    inline void SetCodecProfile(Mpeg2CodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    /**
     * Use Profile (Mpeg2CodecProfile) to set the MPEG-2 profile for the video output.
     */
    inline Mpeg2Settings& WithCodecProfile(const Mpeg2CodecProfile& value) { SetCodecProfile(value); return *this;}

    /**
     * Use Profile (Mpeg2CodecProfile) to set the MPEG-2 profile for the video output.
     */
    inline Mpeg2Settings& WithCodecProfile(Mpeg2CodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline const Mpeg2DynamicSubGop& GetDynamicSubGop() const{ return m_dynamicSubGop; }

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
    inline void SetDynamicSubGop(const Mpeg2DynamicSubGop& value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = value; }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline void SetDynamicSubGop(Mpeg2DynamicSubGop&& value) { m_dynamicSubGopHasBeenSet = true; m_dynamicSubGop = std::move(value); }

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline Mpeg2Settings& WithDynamicSubGop(const Mpeg2DynamicSubGop& value) { SetDynamicSubGop(value); return *this;}

    /**
     * Choose Adaptive to improve subjective video quality for high-motion content.
     * This will cause the service to use fewer B-frames (which infer information based
     * on other frames) for high-motion portions of the video and more B-frames for
     * low-motion portions. The maximum number of B-frames is limited by the value you
     * provide for the setting B frames between reference frames
     * (numberBFramesBetweenReferenceFrames).
     */
    inline Mpeg2Settings& WithDynamicSubGop(Mpeg2DynamicSubGop&& value) { SetDynamicSubGop(std::move(value)); return *this;}


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
    inline const Mpeg2FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

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
    inline void SetFramerateControl(const Mpeg2FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

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
    inline void SetFramerateControl(Mpeg2FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

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
    inline Mpeg2Settings& WithFramerateControl(const Mpeg2FramerateControl& value) { SetFramerateControl(value); return *this;}

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
    inline Mpeg2Settings& WithFramerateControl(Mpeg2FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline const Mpeg2FramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline void SetFramerateConversionAlgorithm(const Mpeg2FramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline void SetFramerateConversionAlgorithm(Mpeg2FramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline Mpeg2Settings& WithFramerateConversionAlgorithm(const Mpeg2FramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline Mpeg2Settings& WithFramerateConversionAlgorithm(Mpeg2FramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


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
    inline Mpeg2Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


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
    inline Mpeg2Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


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
    inline Mpeg2Settings& WithGopClosedCadence(int value) { SetGopClosedCadence(value); return *this;}


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
    inline Mpeg2Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    /**
     * Indicates if the GOP Size in MPEG2 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline const Mpeg2GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    /**
     * Indicates if the GOP Size in MPEG2 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }

    /**
     * Indicates if the GOP Size in MPEG2 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline void SetGopSizeUnits(const Mpeg2GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    /**
     * Indicates if the GOP Size in MPEG2 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline void SetGopSizeUnits(Mpeg2GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    /**
     * Indicates if the GOP Size in MPEG2 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline Mpeg2Settings& WithGopSizeUnits(const Mpeg2GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    /**
     * Indicates if the GOP Size in MPEG2 is specified in frames or seconds. If seconds
     * the system will convert the GOP Size into a frame count at run time.
     */
    inline Mpeg2Settings& WithGopSizeUnits(Mpeg2GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


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
    inline Mpeg2Settings& WithHrdBufferInitialFillPercentage(int value) { SetHrdBufferInitialFillPercentage(value); return *this;}


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
    inline Mpeg2Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}


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
    inline const Mpeg2InterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

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
    inline void SetInterlaceMode(const Mpeg2InterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

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
    inline void SetInterlaceMode(Mpeg2InterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

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
    inline Mpeg2Settings& WithInterlaceMode(const Mpeg2InterlaceMode& value) { SetInterlaceMode(value); return *this;}

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
    inline Mpeg2Settings& WithInterlaceMode(Mpeg2InterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


    /**
     * Use Intra DC precision (Mpeg2IntraDcPrecision) to set quantization precision for
     * intra-block DC coefficients. If you choose the value auto, the service will
     * automatically select the precision based on the per-frame compression ratio.
     */
    inline const Mpeg2IntraDcPrecision& GetIntraDcPrecision() const{ return m_intraDcPrecision; }

    /**
     * Use Intra DC precision (Mpeg2IntraDcPrecision) to set quantization precision for
     * intra-block DC coefficients. If you choose the value auto, the service will
     * automatically select the precision based on the per-frame compression ratio.
     */
    inline bool IntraDcPrecisionHasBeenSet() const { return m_intraDcPrecisionHasBeenSet; }

    /**
     * Use Intra DC precision (Mpeg2IntraDcPrecision) to set quantization precision for
     * intra-block DC coefficients. If you choose the value auto, the service will
     * automatically select the precision based on the per-frame compression ratio.
     */
    inline void SetIntraDcPrecision(const Mpeg2IntraDcPrecision& value) { m_intraDcPrecisionHasBeenSet = true; m_intraDcPrecision = value; }

    /**
     * Use Intra DC precision (Mpeg2IntraDcPrecision) to set quantization precision for
     * intra-block DC coefficients. If you choose the value auto, the service will
     * automatically select the precision based on the per-frame compression ratio.
     */
    inline void SetIntraDcPrecision(Mpeg2IntraDcPrecision&& value) { m_intraDcPrecisionHasBeenSet = true; m_intraDcPrecision = std::move(value); }

    /**
     * Use Intra DC precision (Mpeg2IntraDcPrecision) to set quantization precision for
     * intra-block DC coefficients. If you choose the value auto, the service will
     * automatically select the precision based on the per-frame compression ratio.
     */
    inline Mpeg2Settings& WithIntraDcPrecision(const Mpeg2IntraDcPrecision& value) { SetIntraDcPrecision(value); return *this;}

    /**
     * Use Intra DC precision (Mpeg2IntraDcPrecision) to set quantization precision for
     * intra-block DC coefficients. If you choose the value auto, the service will
     * automatically select the precision based on the per-frame compression ratio.
     */
    inline Mpeg2Settings& WithIntraDcPrecision(Mpeg2IntraDcPrecision&& value) { SetIntraDcPrecision(std::move(value)); return *this;}


    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * Maximum bitrate in bits/second. For example, enter five megabits per second as
     * 5000000.
     */
    inline Mpeg2Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


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
    inline Mpeg2Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}


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
    inline Mpeg2Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}


    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline const Mpeg2ParControl& GetParControl() const{ return m_parControl; }

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
    inline void SetParControl(const Mpeg2ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline void SetParControl(Mpeg2ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline Mpeg2Settings& WithParControl(const Mpeg2ParControl& value) { SetParControl(value); return *this;}

    /**
     * Using the API, enable ParFollowSource if you want the service to use the pixel
     * aspect ratio from the input. Using the console, do this by choosing Follow
     * source for Pixel aspect ratio.
     */
    inline Mpeg2Settings& WithParControl(Mpeg2ParControl&& value) { SetParControl(std::move(value)); return *this;}


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
    inline Mpeg2Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


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
    inline Mpeg2Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    /**
     * Use Quality tuning level (Mpeg2QualityTuningLevel) to specifiy whether to use
     * single-pass or multipass video encoding.
     */
    inline const Mpeg2QualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

    /**
     * Use Quality tuning level (Mpeg2QualityTuningLevel) to specifiy whether to use
     * single-pass or multipass video encoding.
     */
    inline bool QualityTuningLevelHasBeenSet() const { return m_qualityTuningLevelHasBeenSet; }

    /**
     * Use Quality tuning level (Mpeg2QualityTuningLevel) to specifiy whether to use
     * single-pass or multipass video encoding.
     */
    inline void SetQualityTuningLevel(const Mpeg2QualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    /**
     * Use Quality tuning level (Mpeg2QualityTuningLevel) to specifiy whether to use
     * single-pass or multipass video encoding.
     */
    inline void SetQualityTuningLevel(Mpeg2QualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    /**
     * Use Quality tuning level (Mpeg2QualityTuningLevel) to specifiy whether to use
     * single-pass or multipass video encoding.
     */
    inline Mpeg2Settings& WithQualityTuningLevel(const Mpeg2QualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    /**
     * Use Quality tuning level (Mpeg2QualityTuningLevel) to specifiy whether to use
     * single-pass or multipass video encoding.
     */
    inline Mpeg2Settings& WithQualityTuningLevel(Mpeg2QualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}


    /**
     * Use Rate control mode (Mpeg2RateControlMode) to specifiy whether the bitrate is
     * variable (vbr) or constant (cbr).
     */
    inline const Mpeg2RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    /**
     * Use Rate control mode (Mpeg2RateControlMode) to specifiy whether the bitrate is
     * variable (vbr) or constant (cbr).
     */
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }

    /**
     * Use Rate control mode (Mpeg2RateControlMode) to specifiy whether the bitrate is
     * variable (vbr) or constant (cbr).
     */
    inline void SetRateControlMode(const Mpeg2RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    /**
     * Use Rate control mode (Mpeg2RateControlMode) to specifiy whether the bitrate is
     * variable (vbr) or constant (cbr).
     */
    inline void SetRateControlMode(Mpeg2RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    /**
     * Use Rate control mode (Mpeg2RateControlMode) to specifiy whether the bitrate is
     * variable (vbr) or constant (cbr).
     */
    inline Mpeg2Settings& WithRateControlMode(const Mpeg2RateControlMode& value) { SetRateControlMode(value); return *this;}

    /**
     * Use Rate control mode (Mpeg2RateControlMode) to specifiy whether the bitrate is
     * variable (vbr) or constant (cbr).
     */
    inline Mpeg2Settings& WithRateControlMode(Mpeg2RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline const Mpeg2SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline void SetSceneChangeDetect(const Mpeg2SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline void SetSceneChangeDetect(Mpeg2SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline Mpeg2Settings& WithSceneChangeDetect(const Mpeg2SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    /**
     * Scene change detection (inserts I-frames on scene changes).
     */
    inline Mpeg2Settings& WithSceneChangeDetect(Mpeg2SceneChangeDetect&& value) { SetSceneChangeDetect(std::move(value)); return *this;}


    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline const Mpeg2SlowPal& GetSlowPal() const{ return m_slowPal; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline void SetSlowPal(const Mpeg2SlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline void SetSlowPal(Mpeg2SlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline Mpeg2Settings& WithSlowPal(const Mpeg2SlowPal& value) { SetSlowPal(value); return *this;}

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline Mpeg2Settings& WithSlowPal(Mpeg2SlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


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
    inline Mpeg2Settings& WithSoftness(int value) { SetSoftness(value); return *this;}


    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline const Mpeg2SpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline void SetSpatialAdaptiveQuantization(const Mpeg2SpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline void SetSpatialAdaptiveQuantization(Mpeg2SpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline Mpeg2Settings& WithSpatialAdaptiveQuantization(const Mpeg2SpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

    /**
     * Adjust quantization within each frame based on spatial variation of content
     * complexity.
     */
    inline Mpeg2Settings& WithSpatialAdaptiveQuantization(Mpeg2SpatialAdaptiveQuantization&& value) { SetSpatialAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Produces a Type D-10 compatible bitstream (SMPTE 356M-2001).
     */
    inline const Mpeg2Syntax& GetSyntax() const{ return m_syntax; }

    /**
     * Produces a Type D-10 compatible bitstream (SMPTE 356M-2001).
     */
    inline bool SyntaxHasBeenSet() const { return m_syntaxHasBeenSet; }

    /**
     * Produces a Type D-10 compatible bitstream (SMPTE 356M-2001).
     */
    inline void SetSyntax(const Mpeg2Syntax& value) { m_syntaxHasBeenSet = true; m_syntax = value; }

    /**
     * Produces a Type D-10 compatible bitstream (SMPTE 356M-2001).
     */
    inline void SetSyntax(Mpeg2Syntax&& value) { m_syntaxHasBeenSet = true; m_syntax = std::move(value); }

    /**
     * Produces a Type D-10 compatible bitstream (SMPTE 356M-2001).
     */
    inline Mpeg2Settings& WithSyntax(const Mpeg2Syntax& value) { SetSyntax(value); return *this;}

    /**
     * Produces a Type D-10 compatible bitstream (SMPTE 356M-2001).
     */
    inline Mpeg2Settings& WithSyntax(Mpeg2Syntax&& value) { SetSyntax(std::move(value)); return *this;}


    /**
     * Only use Telecine (Mpeg2Telecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (Mpeg2Telecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline const Mpeg2Telecine& GetTelecine() const{ return m_telecine; }

    /**
     * Only use Telecine (Mpeg2Telecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (Mpeg2Telecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }

    /**
     * Only use Telecine (Mpeg2Telecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (Mpeg2Telecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline void SetTelecine(const Mpeg2Telecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    /**
     * Only use Telecine (Mpeg2Telecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (Mpeg2Telecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline void SetTelecine(Mpeg2Telecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    /**
     * Only use Telecine (Mpeg2Telecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (Mpeg2Telecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline Mpeg2Settings& WithTelecine(const Mpeg2Telecine& value) { SetTelecine(value); return *this;}

    /**
     * Only use Telecine (Mpeg2Telecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (Mpeg2Telecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline Mpeg2Settings& WithTelecine(Mpeg2Telecine&& value) { SetTelecine(std::move(value)); return *this;}


    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline const Mpeg2TemporalAdaptiveQuantization& GetTemporalAdaptiveQuantization() const{ return m_temporalAdaptiveQuantization; }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline void SetTemporalAdaptiveQuantization(const Mpeg2TemporalAdaptiveQuantization& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline void SetTemporalAdaptiveQuantization(Mpeg2TemporalAdaptiveQuantization&& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = std::move(value); }

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline Mpeg2Settings& WithTemporalAdaptiveQuantization(const Mpeg2TemporalAdaptiveQuantization& value) { SetTemporalAdaptiveQuantization(value); return *this;}

    /**
     * Adjust quantization within each frame based on temporal variation of content
     * complexity.
     */
    inline Mpeg2Settings& WithTemporalAdaptiveQuantization(Mpeg2TemporalAdaptiveQuantization&& value) { SetTemporalAdaptiveQuantization(std::move(value)); return *this;}

  private:

    Mpeg2AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet;

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    Mpeg2CodecLevel m_codecLevel;
    bool m_codecLevelHasBeenSet;

    Mpeg2CodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet;

    Mpeg2DynamicSubGop m_dynamicSubGop;
    bool m_dynamicSubGopHasBeenSet;

    Mpeg2FramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet;

    Mpeg2FramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet;

    double m_gopSize;
    bool m_gopSizeHasBeenSet;

    Mpeg2GopSizeUnits m_gopSizeUnits;
    bool m_gopSizeUnitsHasBeenSet;

    int m_hrdBufferInitialFillPercentage;
    bool m_hrdBufferInitialFillPercentageHasBeenSet;

    int m_hrdBufferSize;
    bool m_hrdBufferSizeHasBeenSet;

    Mpeg2InterlaceMode m_interlaceMode;
    bool m_interlaceModeHasBeenSet;

    Mpeg2IntraDcPrecision m_intraDcPrecision;
    bool m_intraDcPrecisionHasBeenSet;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet;

    int m_minIInterval;
    bool m_minIIntervalHasBeenSet;

    int m_numberBFramesBetweenReferenceFrames;
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet;

    Mpeg2ParControl m_parControl;
    bool m_parControlHasBeenSet;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet;

    Mpeg2QualityTuningLevel m_qualityTuningLevel;
    bool m_qualityTuningLevelHasBeenSet;

    Mpeg2RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet;

    Mpeg2SceneChangeDetect m_sceneChangeDetect;
    bool m_sceneChangeDetectHasBeenSet;

    Mpeg2SlowPal m_slowPal;
    bool m_slowPalHasBeenSet;

    int m_softness;
    bool m_softnessHasBeenSet;

    Mpeg2SpatialAdaptiveQuantization m_spatialAdaptiveQuantization;
    bool m_spatialAdaptiveQuantizationHasBeenSet;

    Mpeg2Syntax m_syntax;
    bool m_syntaxHasBeenSet;

    Mpeg2Telecine m_telecine;
    bool m_telecineHasBeenSet;

    Mpeg2TemporalAdaptiveQuantization m_temporalAdaptiveQuantization;
    bool m_temporalAdaptiveQuantizationHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
