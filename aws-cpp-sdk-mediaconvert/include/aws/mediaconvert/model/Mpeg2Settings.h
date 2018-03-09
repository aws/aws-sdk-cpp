﻿/*
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
    Mpeg2Settings(const Aws::Utils::Json::JsonValue& jsonValue);
    Mpeg2Settings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Mpeg2AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    
    inline void SetAdaptiveQuantization(const Mpeg2AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    
    inline void SetAdaptiveQuantization(Mpeg2AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    
    inline Mpeg2Settings& WithAdaptiveQuantization(const Mpeg2AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    
    inline Mpeg2Settings& WithAdaptiveQuantization(Mpeg2AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Average bitrate in bits/second. Required for VBR, CBR, and ABR. Five megabits
     * can be entered as 5000000 or 5m. Five hundred kilobits can be entered as 500000
     * or 0.5m. For MS Smooth outputs, bitrates must be unique when rounded down to the
     * nearest multiple of 1000.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. Required for VBR, CBR, and ABR. Five megabits
     * can be entered as 5000000 or 5m. Five hundred kilobits can be entered as 500000
     * or 0.5m. For MS Smooth outputs, bitrates must be unique when rounded down to the
     * nearest multiple of 1000.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Required for VBR, CBR, and ABR. Five megabits
     * can be entered as 5000000 or 5m. Five hundred kilobits can be entered as 500000
     * or 0.5m. For MS Smooth outputs, bitrates must be unique when rounded down to the
     * nearest multiple of 1000.
     */
    inline Mpeg2Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    
    inline const Mpeg2CodecLevel& GetCodecLevel() const{ return m_codecLevel; }

    
    inline void SetCodecLevel(const Mpeg2CodecLevel& value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }

    
    inline void SetCodecLevel(Mpeg2CodecLevel&& value) { m_codecLevelHasBeenSet = true; m_codecLevel = std::move(value); }

    
    inline Mpeg2Settings& WithCodecLevel(const Mpeg2CodecLevel& value) { SetCodecLevel(value); return *this;}

    
    inline Mpeg2Settings& WithCodecLevel(Mpeg2CodecLevel&& value) { SetCodecLevel(std::move(value)); return *this;}


    
    inline const Mpeg2CodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    
    inline void SetCodecProfile(const Mpeg2CodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    
    inline void SetCodecProfile(Mpeg2CodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    
    inline Mpeg2Settings& WithCodecProfile(const Mpeg2CodecProfile& value) { SetCodecProfile(value); return *this;}

    
    inline Mpeg2Settings& WithCodecProfile(Mpeg2CodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


    
    inline const Mpeg2FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    
    inline void SetFramerateControl(const Mpeg2FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    
    inline void SetFramerateControl(Mpeg2FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    
    inline Mpeg2Settings& WithFramerateControl(const Mpeg2FramerateControl& value) { SetFramerateControl(value); return *this;}

    
    inline Mpeg2Settings& WithFramerateControl(Mpeg2FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    
    inline const Mpeg2FramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    
    inline void SetFramerateConversionAlgorithm(const Mpeg2FramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    
    inline void SetFramerateConversionAlgorithm(Mpeg2FramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    
    inline Mpeg2Settings& WithFramerateConversionAlgorithm(const Mpeg2FramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    
    inline Mpeg2Settings& WithFramerateConversionAlgorithm(Mpeg2FramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


    /**
     * Framerate denominator.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * Framerate denominator.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * Framerate denominator.
     */
    inline Mpeg2Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
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
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * GOP Length (keyframe interval) in frames or seconds. Must be greater than zero.
     */
    inline Mpeg2Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    
    inline const Mpeg2GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    
    inline void SetGopSizeUnits(const Mpeg2GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    
    inline void SetGopSizeUnits(Mpeg2GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    
    inline Mpeg2Settings& WithGopSizeUnits(const Mpeg2GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    
    inline Mpeg2Settings& WithGopSizeUnits(Mpeg2GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


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
    inline Mpeg2Settings& WithHrdBufferInitialFillPercentage(int value) { SetHrdBufferInitialFillPercentage(value); return *this;}


    /**
     * Size of buffer (HRD buffer model). Five megabits can be entered as 5000000 or
     * 5m. Five hundred kilobits can be entered as 500000 or 0.5m.
     */
    inline int GetHrdBufferSize() const{ return m_hrdBufferSize; }

    /**
     * Size of buffer (HRD buffer model). Five megabits can be entered as 5000000 or
     * 5m. Five hundred kilobits can be entered as 500000 or 0.5m.
     */
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }

    /**
     * Size of buffer (HRD buffer model). Five megabits can be entered as 5000000 or
     * 5m. Five hundred kilobits can be entered as 500000 or 0.5m.
     */
    inline Mpeg2Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}


    
    inline const Mpeg2InterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

    
    inline void SetInterlaceMode(const Mpeg2InterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

    
    inline void SetInterlaceMode(Mpeg2InterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

    
    inline Mpeg2Settings& WithInterlaceMode(const Mpeg2InterlaceMode& value) { SetInterlaceMode(value); return *this;}

    
    inline Mpeg2Settings& WithInterlaceMode(Mpeg2InterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


    
    inline const Mpeg2IntraDcPrecision& GetIntraDcPrecision() const{ return m_intraDcPrecision; }

    
    inline void SetIntraDcPrecision(const Mpeg2IntraDcPrecision& value) { m_intraDcPrecisionHasBeenSet = true; m_intraDcPrecision = value; }

    
    inline void SetIntraDcPrecision(Mpeg2IntraDcPrecision&& value) { m_intraDcPrecisionHasBeenSet = true; m_intraDcPrecision = std::move(value); }

    
    inline Mpeg2Settings& WithIntraDcPrecision(const Mpeg2IntraDcPrecision& value) { SetIntraDcPrecision(value); return *this;}

    
    inline Mpeg2Settings& WithIntraDcPrecision(Mpeg2IntraDcPrecision&& value) { SetIntraDcPrecision(std::move(value)); return *this;}


    /**
     * Maximum bitrate in bits/second (for VBR mode only). Five megabits can be entered
     * as 5000000 or 5m. Five hundred kilobits can be entered as 500000 or 0.5m.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * Maximum bitrate in bits/second (for VBR mode only). Five megabits can be entered
     * as 5000000 or 5m. Five hundred kilobits can be entered as 500000 or 0.5m.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * Maximum bitrate in bits/second (for VBR mode only). Five megabits can be entered
     * as 5000000 or 5m. Five hundred kilobits can be entered as 500000 or 0.5m.
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
    inline void SetNumberBFramesBetweenReferenceFrames(int value) { m_numberBFramesBetweenReferenceFramesHasBeenSet = true; m_numberBFramesBetweenReferenceFrames = value; }

    /**
     * Number of B-frames between reference frames.
     */
    inline Mpeg2Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}


    
    inline const Mpeg2ParControl& GetParControl() const{ return m_parControl; }

    
    inline void SetParControl(const Mpeg2ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    
    inline void SetParControl(Mpeg2ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    
    inline Mpeg2Settings& WithParControl(const Mpeg2ParControl& value) { SetParControl(value); return *this;}

    
    inline Mpeg2Settings& WithParControl(Mpeg2ParControl&& value) { SetParControl(std::move(value)); return *this;}


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
    inline Mpeg2Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


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
    inline Mpeg2Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    
    inline const Mpeg2QualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

    
    inline void SetQualityTuningLevel(const Mpeg2QualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    
    inline void SetQualityTuningLevel(Mpeg2QualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    
    inline Mpeg2Settings& WithQualityTuningLevel(const Mpeg2QualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    
    inline Mpeg2Settings& WithQualityTuningLevel(Mpeg2QualityTuningLevel&& value) { SetQualityTuningLevel(std::move(value)); return *this;}


    
    inline const Mpeg2RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    
    inline void SetRateControlMode(const Mpeg2RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    
    inline void SetRateControlMode(Mpeg2RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    
    inline Mpeg2Settings& WithRateControlMode(const Mpeg2RateControlMode& value) { SetRateControlMode(value); return *this;}

    
    inline Mpeg2Settings& WithRateControlMode(Mpeg2RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    
    inline const Mpeg2SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    
    inline void SetSceneChangeDetect(const Mpeg2SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    
    inline void SetSceneChangeDetect(Mpeg2SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    
    inline Mpeg2Settings& WithSceneChangeDetect(const Mpeg2SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    
    inline Mpeg2Settings& WithSceneChangeDetect(Mpeg2SceneChangeDetect&& value) { SetSceneChangeDetect(std::move(value)); return *this;}


    
    inline const Mpeg2SlowPal& GetSlowPal() const{ return m_slowPal; }

    
    inline void SetSlowPal(const Mpeg2SlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    
    inline void SetSlowPal(Mpeg2SlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    
    inline Mpeg2Settings& WithSlowPal(const Mpeg2SlowPal& value) { SetSlowPal(value); return *this;}

    
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
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }

    /**
     * Softness. Selects quantizer matrix, larger values reduce high-frequency content
     * in the encoded image.
     */
    inline Mpeg2Settings& WithSoftness(int value) { SetSoftness(value); return *this;}


    
    inline const Mpeg2SpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

    
    inline void SetSpatialAdaptiveQuantization(const Mpeg2SpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

    
    inline void SetSpatialAdaptiveQuantization(Mpeg2SpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

    
    inline Mpeg2Settings& WithSpatialAdaptiveQuantization(const Mpeg2SpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

    
    inline Mpeg2Settings& WithSpatialAdaptiveQuantization(Mpeg2SpatialAdaptiveQuantization&& value) { SetSpatialAdaptiveQuantization(std::move(value)); return *this;}


    
    inline const Mpeg2Syntax& GetSyntax() const{ return m_syntax; }

    
    inline void SetSyntax(const Mpeg2Syntax& value) { m_syntaxHasBeenSet = true; m_syntax = value; }

    
    inline void SetSyntax(Mpeg2Syntax&& value) { m_syntaxHasBeenSet = true; m_syntax = std::move(value); }

    
    inline Mpeg2Settings& WithSyntax(const Mpeg2Syntax& value) { SetSyntax(value); return *this;}

    
    inline Mpeg2Settings& WithSyntax(Mpeg2Syntax&& value) { SetSyntax(std::move(value)); return *this;}


    
    inline const Mpeg2Telecine& GetTelecine() const{ return m_telecine; }

    
    inline void SetTelecine(const Mpeg2Telecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    
    inline void SetTelecine(Mpeg2Telecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    
    inline Mpeg2Settings& WithTelecine(const Mpeg2Telecine& value) { SetTelecine(value); return *this;}

    
    inline Mpeg2Settings& WithTelecine(Mpeg2Telecine&& value) { SetTelecine(std::move(value)); return *this;}


    
    inline const Mpeg2TemporalAdaptiveQuantization& GetTemporalAdaptiveQuantization() const{ return m_temporalAdaptiveQuantization; }

    
    inline void SetTemporalAdaptiveQuantization(const Mpeg2TemporalAdaptiveQuantization& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }

    
    inline void SetTemporalAdaptiveQuantization(Mpeg2TemporalAdaptiveQuantization&& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = std::move(value); }

    
    inline Mpeg2Settings& WithTemporalAdaptiveQuantization(const Mpeg2TemporalAdaptiveQuantization& value) { SetTemporalAdaptiveQuantization(value); return *this;}

    
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
