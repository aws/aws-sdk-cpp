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


    
    inline const H265AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    
    inline void SetAdaptiveQuantization(const H265AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    
    inline void SetAdaptiveQuantization(H265AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    
    inline H265Settings& WithAdaptiveQuantization(const H265AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    
    inline H265Settings& WithAdaptiveQuantization(H265AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


    
    inline const H265AlternateTransferFunctionSei& GetAlternateTransferFunctionSei() const{ return m_alternateTransferFunctionSei; }

    
    inline void SetAlternateTransferFunctionSei(const H265AlternateTransferFunctionSei& value) { m_alternateTransferFunctionSeiHasBeenSet = true; m_alternateTransferFunctionSei = value; }

    
    inline void SetAlternateTransferFunctionSei(H265AlternateTransferFunctionSei&& value) { m_alternateTransferFunctionSeiHasBeenSet = true; m_alternateTransferFunctionSei = std::move(value); }

    
    inline H265Settings& WithAlternateTransferFunctionSei(const H265AlternateTransferFunctionSei& value) { SetAlternateTransferFunctionSei(value); return *this;}

    
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
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Required for VBR and CBR. For MS Smooth outputs,
     * bitrates must be unique when rounded down to the nearest multiple of 1000.
     */
    inline H265Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    
    inline const H265CodecLevel& GetCodecLevel() const{ return m_codecLevel; }

    
    inline void SetCodecLevel(const H265CodecLevel& value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }

    
    inline void SetCodecLevel(H265CodecLevel&& value) { m_codecLevelHasBeenSet = true; m_codecLevel = std::move(value); }

    
    inline H265Settings& WithCodecLevel(const H265CodecLevel& value) { SetCodecLevel(value); return *this;}

    
    inline H265Settings& WithCodecLevel(H265CodecLevel&& value) { SetCodecLevel(std::move(value)); return *this;}


    
    inline const H265CodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    
    inline void SetCodecProfile(const H265CodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    
    inline void SetCodecProfile(H265CodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    
    inline H265Settings& WithCodecProfile(const H265CodecProfile& value) { SetCodecProfile(value); return *this;}

    
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


    
    inline const H265FlickerAdaptiveQuantization& GetFlickerAdaptiveQuantization() const{ return m_flickerAdaptiveQuantization; }

    
    inline void SetFlickerAdaptiveQuantization(const H265FlickerAdaptiveQuantization& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }

    
    inline void SetFlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization&& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = std::move(value); }

    
    inline H265Settings& WithFlickerAdaptiveQuantization(const H265FlickerAdaptiveQuantization& value) { SetFlickerAdaptiveQuantization(value); return *this;}

    
    inline H265Settings& WithFlickerAdaptiveQuantization(H265FlickerAdaptiveQuantization&& value) { SetFlickerAdaptiveQuantization(std::move(value)); return *this;}


    
    inline const H265FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    
    inline void SetFramerateControl(const H265FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    
    inline void SetFramerateControl(H265FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    
    inline H265Settings& WithFramerateControl(const H265FramerateControl& value) { SetFramerateControl(value); return *this;}

    
    inline H265Settings& WithFramerateControl(H265FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    
    inline const H265FramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    
    inline void SetFramerateConversionAlgorithm(const H265FramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    
    inline void SetFramerateConversionAlgorithm(H265FramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    
    inline H265Settings& WithFramerateConversionAlgorithm(const H265FramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    
    inline H265Settings& WithFramerateConversionAlgorithm(H265FramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


    /**
     * Frame rate denominator.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

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
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * Frame rate numerator - frame rate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline H265Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    
    inline const H265GopBReference& GetGopBReference() const{ return m_gopBReference; }

    
    inline void SetGopBReference(const H265GopBReference& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }

    
    inline void SetGopBReference(H265GopBReference&& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = std::move(value); }

    
    inline H265Settings& WithGopBReference(const H265GopBReference& value) { SetGopBReference(value); return *this;}

    
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
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * GOP Length (keyframe interval) in frames or seconds. Must be greater than zero.
     */
    inline H265Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    
    inline const H265GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    
    inline void SetGopSizeUnits(const H265GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    
    inline void SetGopSizeUnits(H265GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    
    inline H265Settings& WithGopSizeUnits(const H265GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    
    inline H265Settings& WithGopSizeUnits(H265GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline int GetHrdBufferInitialFillPercentage() const{ return m_hrdBufferInitialFillPercentage; }

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
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }

    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline H265Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}


    
    inline const H265InterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

    
    inline void SetInterlaceMode(const H265InterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

    
    inline void SetInterlaceMode(H265InterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

    
    inline H265Settings& WithInterlaceMode(const H265InterlaceMode& value) { SetInterlaceMode(value); return *this;}

    
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
    inline void SetNumberReferenceFrames(int value) { m_numberReferenceFramesHasBeenSet = true; m_numberReferenceFrames = value; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline H265Settings& WithNumberReferenceFrames(int value) { SetNumberReferenceFrames(value); return *this;}


    
    inline const H265ParControl& GetParControl() const{ return m_parControl; }

    
    inline void SetParControl(const H265ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    
    inline void SetParControl(H265ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    
    inline H265Settings& WithParControl(const H265ParControl& value) { SetParControl(value); return *this;}

    
    inline H265Settings& WithParControl(H265ParControl&& value) { SetParControl(std::move(value)); return *this;}


    /**
     * Pixel Aspect Ratio denominator.
     */
    inline int GetParDenominator() const{ return m_parDenominator; }

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
    inline void SetParNumerator(int value) { m_parNumeratorHasBeenSet = true; m_parNumerator = value; }

    /**
     * Pixel Aspect Ratio numerator.
     */
    inline H265Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    
    inline const H265QualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

    
    inline void SetQualityTuningLevel(const H265QualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    
    inline void SetQualityTuningLevel(H265QualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    
    inline H265Settings& WithQualityTuningLevel(const H265QualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    
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


    
    inline const H265RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    
    inline void SetRateControlMode(const H265RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    
    inline void SetRateControlMode(H265RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    
    inline H265Settings& WithRateControlMode(const H265RateControlMode& value) { SetRateControlMode(value); return *this;}

    
    inline H265Settings& WithRateControlMode(H265RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    
    inline const H265SampleAdaptiveOffsetFilterMode& GetSampleAdaptiveOffsetFilterMode() const{ return m_sampleAdaptiveOffsetFilterMode; }

    
    inline void SetSampleAdaptiveOffsetFilterMode(const H265SampleAdaptiveOffsetFilterMode& value) { m_sampleAdaptiveOffsetFilterModeHasBeenSet = true; m_sampleAdaptiveOffsetFilterMode = value; }

    
    inline void SetSampleAdaptiveOffsetFilterMode(H265SampleAdaptiveOffsetFilterMode&& value) { m_sampleAdaptiveOffsetFilterModeHasBeenSet = true; m_sampleAdaptiveOffsetFilterMode = std::move(value); }

    
    inline H265Settings& WithSampleAdaptiveOffsetFilterMode(const H265SampleAdaptiveOffsetFilterMode& value) { SetSampleAdaptiveOffsetFilterMode(value); return *this;}

    
    inline H265Settings& WithSampleAdaptiveOffsetFilterMode(H265SampleAdaptiveOffsetFilterMode&& value) { SetSampleAdaptiveOffsetFilterMode(std::move(value)); return *this;}


    
    inline const H265SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    
    inline void SetSceneChangeDetect(const H265SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    
    inline void SetSceneChangeDetect(H265SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    
    inline H265Settings& WithSceneChangeDetect(const H265SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    
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
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline H265Settings& WithSlices(int value) { SetSlices(value); return *this;}


    
    inline const H265SlowPal& GetSlowPal() const{ return m_slowPal; }

    
    inline void SetSlowPal(const H265SlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    
    inline void SetSlowPal(H265SlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    
    inline H265Settings& WithSlowPal(const H265SlowPal& value) { SetSlowPal(value); return *this;}

    
    inline H265Settings& WithSlowPal(H265SlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    
    inline const H265SpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

    
    inline void SetSpatialAdaptiveQuantization(const H265SpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

    
    inline void SetSpatialAdaptiveQuantization(H265SpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

    
    inline H265Settings& WithSpatialAdaptiveQuantization(const H265SpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

    
    inline H265Settings& WithSpatialAdaptiveQuantization(H265SpatialAdaptiveQuantization&& value) { SetSpatialAdaptiveQuantization(std::move(value)); return *this;}


    
    inline const H265Telecine& GetTelecine() const{ return m_telecine; }

    
    inline void SetTelecine(const H265Telecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    
    inline void SetTelecine(H265Telecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    
    inline H265Settings& WithTelecine(const H265Telecine& value) { SetTelecine(value); return *this;}

    
    inline H265Settings& WithTelecine(H265Telecine&& value) { SetTelecine(std::move(value)); return *this;}


    
    inline const H265TemporalAdaptiveQuantization& GetTemporalAdaptiveQuantization() const{ return m_temporalAdaptiveQuantization; }

    
    inline void SetTemporalAdaptiveQuantization(const H265TemporalAdaptiveQuantization& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }

    
    inline void SetTemporalAdaptiveQuantization(H265TemporalAdaptiveQuantization&& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = std::move(value); }

    
    inline H265Settings& WithTemporalAdaptiveQuantization(const H265TemporalAdaptiveQuantization& value) { SetTemporalAdaptiveQuantization(value); return *this;}

    
    inline H265Settings& WithTemporalAdaptiveQuantization(H265TemporalAdaptiveQuantization&& value) { SetTemporalAdaptiveQuantization(std::move(value)); return *this;}


    
    inline const H265TemporalIds& GetTemporalIds() const{ return m_temporalIds; }

    
    inline void SetTemporalIds(const H265TemporalIds& value) { m_temporalIdsHasBeenSet = true; m_temporalIds = value; }

    
    inline void SetTemporalIds(H265TemporalIds&& value) { m_temporalIdsHasBeenSet = true; m_temporalIds = std::move(value); }

    
    inline H265Settings& WithTemporalIds(const H265TemporalIds& value) { SetTemporalIds(value); return *this;}

    
    inline H265Settings& WithTemporalIds(H265TemporalIds&& value) { SetTemporalIds(std::move(value)); return *this;}


    
    inline const H265Tiles& GetTiles() const{ return m_tiles; }

    
    inline void SetTiles(const H265Tiles& value) { m_tilesHasBeenSet = true; m_tiles = value; }

    
    inline void SetTiles(H265Tiles&& value) { m_tilesHasBeenSet = true; m_tiles = std::move(value); }

    
    inline H265Settings& WithTiles(const H265Tiles& value) { SetTiles(value); return *this;}

    
    inline H265Settings& WithTiles(H265Tiles&& value) { SetTiles(std::move(value)); return *this;}


    
    inline const H265UnregisteredSeiTimecode& GetUnregisteredSeiTimecode() const{ return m_unregisteredSeiTimecode; }

    
    inline void SetUnregisteredSeiTimecode(const H265UnregisteredSeiTimecode& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = value; }

    
    inline void SetUnregisteredSeiTimecode(H265UnregisteredSeiTimecode&& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = std::move(value); }

    
    inline H265Settings& WithUnregisteredSeiTimecode(const H265UnregisteredSeiTimecode& value) { SetUnregisteredSeiTimecode(value); return *this;}

    
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
