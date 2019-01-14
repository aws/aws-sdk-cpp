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


    
    inline const H264AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    
    inline void SetAdaptiveQuantization(const H264AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    
    inline void SetAdaptiveQuantization(H264AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    
    inline H264Settings& WithAdaptiveQuantization(const H264AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    
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
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Required for VBR and CBR. For MS Smooth outputs,
     * bitrates must be unique when rounded down to the nearest multiple of 1000.
     */
    inline H264Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    
    inline const H264CodecLevel& GetCodecLevel() const{ return m_codecLevel; }

    
    inline void SetCodecLevel(const H264CodecLevel& value) { m_codecLevelHasBeenSet = true; m_codecLevel = value; }

    
    inline void SetCodecLevel(H264CodecLevel&& value) { m_codecLevelHasBeenSet = true; m_codecLevel = std::move(value); }

    
    inline H264Settings& WithCodecLevel(const H264CodecLevel& value) { SetCodecLevel(value); return *this;}

    
    inline H264Settings& WithCodecLevel(H264CodecLevel&& value) { SetCodecLevel(std::move(value)); return *this;}


    
    inline const H264CodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    
    inline void SetCodecProfile(const H264CodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    
    inline void SetCodecProfile(H264CodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    
    inline H264Settings& WithCodecProfile(const H264CodecProfile& value) { SetCodecProfile(value); return *this;}

    
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


    
    inline const H264EntropyEncoding& GetEntropyEncoding() const{ return m_entropyEncoding; }

    
    inline void SetEntropyEncoding(const H264EntropyEncoding& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = value; }

    
    inline void SetEntropyEncoding(H264EntropyEncoding&& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = std::move(value); }

    
    inline H264Settings& WithEntropyEncoding(const H264EntropyEncoding& value) { SetEntropyEncoding(value); return *this;}

    
    inline H264Settings& WithEntropyEncoding(H264EntropyEncoding&& value) { SetEntropyEncoding(std::move(value)); return *this;}


    
    inline const H264FieldEncoding& GetFieldEncoding() const{ return m_fieldEncoding; }

    
    inline void SetFieldEncoding(const H264FieldEncoding& value) { m_fieldEncodingHasBeenSet = true; m_fieldEncoding = value; }

    
    inline void SetFieldEncoding(H264FieldEncoding&& value) { m_fieldEncodingHasBeenSet = true; m_fieldEncoding = std::move(value); }

    
    inline H264Settings& WithFieldEncoding(const H264FieldEncoding& value) { SetFieldEncoding(value); return *this;}

    
    inline H264Settings& WithFieldEncoding(H264FieldEncoding&& value) { SetFieldEncoding(std::move(value)); return *this;}


    
    inline const H264FlickerAdaptiveQuantization& GetFlickerAdaptiveQuantization() const{ return m_flickerAdaptiveQuantization; }

    
    inline void SetFlickerAdaptiveQuantization(const H264FlickerAdaptiveQuantization& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = value; }

    
    inline void SetFlickerAdaptiveQuantization(H264FlickerAdaptiveQuantization&& value) { m_flickerAdaptiveQuantizationHasBeenSet = true; m_flickerAdaptiveQuantization = std::move(value); }

    
    inline H264Settings& WithFlickerAdaptiveQuantization(const H264FlickerAdaptiveQuantization& value) { SetFlickerAdaptiveQuantization(value); return *this;}

    
    inline H264Settings& WithFlickerAdaptiveQuantization(H264FlickerAdaptiveQuantization&& value) { SetFlickerAdaptiveQuantization(std::move(value)); return *this;}


    
    inline const H264FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    
    inline void SetFramerateControl(const H264FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    
    inline void SetFramerateControl(H264FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    
    inline H264Settings& WithFramerateControl(const H264FramerateControl& value) { SetFramerateControl(value); return *this;}

    
    inline H264Settings& WithFramerateControl(H264FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    
    inline const H264FramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    
    inline void SetFramerateConversionAlgorithm(const H264FramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    
    inline void SetFramerateConversionAlgorithm(H264FramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    
    inline H264Settings& WithFramerateConversionAlgorithm(const H264FramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    
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
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * Frame rate numerator - frame rate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline H264Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    
    inline const H264GopBReference& GetGopBReference() const{ return m_gopBReference; }

    
    inline void SetGopBReference(const H264GopBReference& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }

    
    inline void SetGopBReference(H264GopBReference&& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = std::move(value); }

    
    inline H264Settings& WithGopBReference(const H264GopBReference& value) { SetGopBReference(value); return *this;}

    
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
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * GOP Length (keyframe interval) in frames or seconds. Must be greater than zero.
     */
    inline H264Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    
    inline const H264GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    
    inline void SetGopSizeUnits(const H264GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    
    inline void SetGopSizeUnits(H264GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    
    inline H264Settings& WithGopSizeUnits(const H264GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    
    inline H264Settings& WithGopSizeUnits(H264GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


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
    inline void SetHrdBufferSize(int value) { m_hrdBufferSizeHasBeenSet = true; m_hrdBufferSize = value; }

    /**
     * Size of buffer (HRD buffer model) in bits. For example, enter five megabits as
     * 5000000.
     */
    inline H264Settings& WithHrdBufferSize(int value) { SetHrdBufferSize(value); return *this;}


    
    inline const H264InterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

    
    inline void SetInterlaceMode(const H264InterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

    
    inline void SetInterlaceMode(H264InterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

    
    inline H264Settings& WithInterlaceMode(const H264InterlaceMode& value) { SetInterlaceMode(value); return *this;}

    
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
    inline void SetNumberReferenceFrames(int value) { m_numberReferenceFramesHasBeenSet = true; m_numberReferenceFrames = value; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline H264Settings& WithNumberReferenceFrames(int value) { SetNumberReferenceFrames(value); return *this;}


    
    inline const H264ParControl& GetParControl() const{ return m_parControl; }

    
    inline void SetParControl(const H264ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    
    inline void SetParControl(H264ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    
    inline H264Settings& WithParControl(const H264ParControl& value) { SetParControl(value); return *this;}

    
    inline H264Settings& WithParControl(H264ParControl&& value) { SetParControl(std::move(value)); return *this;}


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
    inline H264Settings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


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
    inline H264Settings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    
    inline const H264QualityTuningLevel& GetQualityTuningLevel() const{ return m_qualityTuningLevel; }

    
    inline void SetQualityTuningLevel(const H264QualityTuningLevel& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = value; }

    
    inline void SetQualityTuningLevel(H264QualityTuningLevel&& value) { m_qualityTuningLevelHasBeenSet = true; m_qualityTuningLevel = std::move(value); }

    
    inline H264Settings& WithQualityTuningLevel(const H264QualityTuningLevel& value) { SetQualityTuningLevel(value); return *this;}

    
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


    
    inline const H264RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    
    inline void SetRateControlMode(const H264RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    
    inline void SetRateControlMode(H264RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    
    inline H264Settings& WithRateControlMode(const H264RateControlMode& value) { SetRateControlMode(value); return *this;}

    
    inline H264Settings& WithRateControlMode(H264RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    
    inline const H264RepeatPps& GetRepeatPps() const{ return m_repeatPps; }

    
    inline void SetRepeatPps(const H264RepeatPps& value) { m_repeatPpsHasBeenSet = true; m_repeatPps = value; }

    
    inline void SetRepeatPps(H264RepeatPps&& value) { m_repeatPpsHasBeenSet = true; m_repeatPps = std::move(value); }

    
    inline H264Settings& WithRepeatPps(const H264RepeatPps& value) { SetRepeatPps(value); return *this;}

    
    inline H264Settings& WithRepeatPps(H264RepeatPps&& value) { SetRepeatPps(std::move(value)); return *this;}


    
    inline const H264SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    
    inline void SetSceneChangeDetect(const H264SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    
    inline void SetSceneChangeDetect(H264SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    
    inline H264Settings& WithSceneChangeDetect(const H264SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    
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
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
     */
    inline H264Settings& WithSlices(int value) { SetSlices(value); return *this;}


    
    inline const H264SlowPal& GetSlowPal() const{ return m_slowPal; }

    
    inline void SetSlowPal(const H264SlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    
    inline void SetSlowPal(H264SlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    
    inline H264Settings& WithSlowPal(const H264SlowPal& value) { SetSlowPal(value); return *this;}

    
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
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }

    /**
     * Softness. Selects quantizer matrix, larger values reduce high-frequency content
     * in the encoded image.
     */
    inline H264Settings& WithSoftness(int value) { SetSoftness(value); return *this;}


    
    inline const H264SpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

    
    inline void SetSpatialAdaptiveQuantization(const H264SpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

    
    inline void SetSpatialAdaptiveQuantization(H264SpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

    
    inline H264Settings& WithSpatialAdaptiveQuantization(const H264SpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

    
    inline H264Settings& WithSpatialAdaptiveQuantization(H264SpatialAdaptiveQuantization&& value) { SetSpatialAdaptiveQuantization(std::move(value)); return *this;}


    
    inline const H264Syntax& GetSyntax() const{ return m_syntax; }

    
    inline void SetSyntax(const H264Syntax& value) { m_syntaxHasBeenSet = true; m_syntax = value; }

    
    inline void SetSyntax(H264Syntax&& value) { m_syntaxHasBeenSet = true; m_syntax = std::move(value); }

    
    inline H264Settings& WithSyntax(const H264Syntax& value) { SetSyntax(value); return *this;}

    
    inline H264Settings& WithSyntax(H264Syntax&& value) { SetSyntax(std::move(value)); return *this;}


    
    inline const H264Telecine& GetTelecine() const{ return m_telecine; }

    
    inline void SetTelecine(const H264Telecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    
    inline void SetTelecine(H264Telecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    
    inline H264Settings& WithTelecine(const H264Telecine& value) { SetTelecine(value); return *this;}

    
    inline H264Settings& WithTelecine(H264Telecine&& value) { SetTelecine(std::move(value)); return *this;}


    
    inline const H264TemporalAdaptiveQuantization& GetTemporalAdaptiveQuantization() const{ return m_temporalAdaptiveQuantization; }

    
    inline void SetTemporalAdaptiveQuantization(const H264TemporalAdaptiveQuantization& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }

    
    inline void SetTemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization&& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = std::move(value); }

    
    inline H264Settings& WithTemporalAdaptiveQuantization(const H264TemporalAdaptiveQuantization& value) { SetTemporalAdaptiveQuantization(value); return *this;}

    
    inline H264Settings& WithTemporalAdaptiveQuantization(H264TemporalAdaptiveQuantization&& value) { SetTemporalAdaptiveQuantization(std::move(value)); return *this;}


    
    inline const H264UnregisteredSeiTimecode& GetUnregisteredSeiTimecode() const{ return m_unregisteredSeiTimecode; }

    
    inline void SetUnregisteredSeiTimecode(const H264UnregisteredSeiTimecode& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = value; }

    
    inline void SetUnregisteredSeiTimecode(H264UnregisteredSeiTimecode&& value) { m_unregisteredSeiTimecodeHasBeenSet = true; m_unregisteredSeiTimecode = std::move(value); }

    
    inline H264Settings& WithUnregisteredSeiTimecode(const H264UnregisteredSeiTimecode& value) { SetUnregisteredSeiTimecode(value); return *this;}

    
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
