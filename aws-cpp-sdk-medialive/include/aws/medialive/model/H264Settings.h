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
#include <aws/medialive/model/H264AdaptiveQuantization.h>
#include <aws/medialive/model/AfdSignaling.h>
#include <aws/medialive/model/H264ColorMetadata.h>
#include <aws/medialive/model/H264EntropyEncoding.h>
#include <aws/medialive/model/FixedAfd.h>
#include <aws/medialive/model/H264FlickerAq.h>
#include <aws/medialive/model/H264FramerateControl.h>
#include <aws/medialive/model/H264GopBReference.h>
#include <aws/medialive/model/H264GopSizeUnits.h>
#include <aws/medialive/model/H264Level.h>
#include <aws/medialive/model/H264LookAheadRateControl.h>
#include <aws/medialive/model/H264ParControl.h>
#include <aws/medialive/model/H264Profile.h>
#include <aws/medialive/model/H264RateControlMode.h>
#include <aws/medialive/model/H264ScanType.h>
#include <aws/medialive/model/H264SceneChangeDetect.h>
#include <aws/medialive/model/H264SpatialAq.h>
#include <aws/medialive/model/H264SubGopLength.h>
#include <aws/medialive/model/H264Syntax.h>
#include <aws/medialive/model/H264TemporalAq.h>
#include <aws/medialive/model/H264TimecodeInsertionBehavior.h>
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
   * H264 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H264Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API H264Settings
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
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline const AfdSignaling& GetAfdSignaling() const{ return m_afdSignaling; }

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline bool AfdSignalingHasBeenSet() const { return m_afdSignalingHasBeenSet; }

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline void SetAfdSignaling(const AfdSignaling& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = value; }

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline void SetAfdSignaling(AfdSignaling&& value) { m_afdSignalingHasBeenSet = true; m_afdSignaling = std::move(value); }

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline H264Settings& WithAfdSignaling(const AfdSignaling& value) { SetAfdSignaling(value); return *this;}

    /**
     * Indicates that AFD values will be written into the output stream.  If
     * afdSignaling is "auto", the system will try to preserve the input AFD value (in
     * cases where multiple AFD values are valid). If set to "fixed", the AFD value
     * will be the value configured in the fixedAfd parameter.
     */
    inline H264Settings& WithAfdSignaling(AfdSignaling&& value) { SetAfdSignaling(std::move(value)); return *this;}


    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Required when the rate control mode is VBR or
     * CBR. Not used for QVBR. In an MS Smooth output group, each output must have a
     * unique value when its bitrate is rounded down to the nearest multiple of 1000.
     */
    inline H264Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline int GetBufFillPct() const{ return m_bufFillPct; }

    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline bool BufFillPctHasBeenSet() const { return m_bufFillPctHasBeenSet; }

    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline void SetBufFillPct(int value) { m_bufFillPctHasBeenSet = true; m_bufFillPct = value; }

    /**
     * Percentage of the buffer that should initially be filled (HRD buffer model).
     */
    inline H264Settings& WithBufFillPct(int value) { SetBufFillPct(value); return *this;}


    /**
     * Size of buffer (HRD buffer model) in bits/second.
     */
    inline int GetBufSize() const{ return m_bufSize; }

    /**
     * Size of buffer (HRD buffer model) in bits/second.
     */
    inline bool BufSizeHasBeenSet() const { return m_bufSizeHasBeenSet; }

    /**
     * Size of buffer (HRD buffer model) in bits/second.
     */
    inline void SetBufSize(int value) { m_bufSizeHasBeenSet = true; m_bufSize = value; }

    /**
     * Size of buffer (HRD buffer model) in bits/second.
     */
    inline H264Settings& WithBufSize(int value) { SetBufSize(value); return *this;}


    /**
     * Includes colorspace metadata in the output.
     */
    inline const H264ColorMetadata& GetColorMetadata() const{ return m_colorMetadata; }

    /**
     * Includes colorspace metadata in the output.
     */
    inline bool ColorMetadataHasBeenSet() const { return m_colorMetadataHasBeenSet; }

    /**
     * Includes colorspace metadata in the output.
     */
    inline void SetColorMetadata(const H264ColorMetadata& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = value; }

    /**
     * Includes colorspace metadata in the output.
     */
    inline void SetColorMetadata(H264ColorMetadata&& value) { m_colorMetadataHasBeenSet = true; m_colorMetadata = std::move(value); }

    /**
     * Includes colorspace metadata in the output.
     */
    inline H264Settings& WithColorMetadata(const H264ColorMetadata& value) { SetColorMetadata(value); return *this;}

    /**
     * Includes colorspace metadata in the output.
     */
    inline H264Settings& WithColorMetadata(H264ColorMetadata&& value) { SetColorMetadata(std::move(value)); return *this;}


    /**
     * Entropy encoding mode.  Use cabac (must be in Main or High profile) or cavlc.
     */
    inline const H264EntropyEncoding& GetEntropyEncoding() const{ return m_entropyEncoding; }

    /**
     * Entropy encoding mode.  Use cabac (must be in Main or High profile) or cavlc.
     */
    inline bool EntropyEncodingHasBeenSet() const { return m_entropyEncodingHasBeenSet; }

    /**
     * Entropy encoding mode.  Use cabac (must be in Main or High profile) or cavlc.
     */
    inline void SetEntropyEncoding(const H264EntropyEncoding& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = value; }

    /**
     * Entropy encoding mode.  Use cabac (must be in Main or High profile) or cavlc.
     */
    inline void SetEntropyEncoding(H264EntropyEncoding&& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = std::move(value); }

    /**
     * Entropy encoding mode.  Use cabac (must be in Main or High profile) or cavlc.
     */
    inline H264Settings& WithEntropyEncoding(const H264EntropyEncoding& value) { SetEntropyEncoding(value); return *this;}

    /**
     * Entropy encoding mode.  Use cabac (must be in Main or High profile) or cavlc.
     */
    inline H264Settings& WithEntropyEncoding(H264EntropyEncoding&& value) { SetEntropyEncoding(std::move(value)); return *this;}


    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline const FixedAfd& GetFixedAfd() const{ return m_fixedAfd; }

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline bool FixedAfdHasBeenSet() const { return m_fixedAfdHasBeenSet; }

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline void SetFixedAfd(const FixedAfd& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = value; }

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline void SetFixedAfd(FixedAfd&& value) { m_fixedAfdHasBeenSet = true; m_fixedAfd = std::move(value); }

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline H264Settings& WithFixedAfd(const FixedAfd& value) { SetFixedAfd(value); return *this;}

    /**
     * Four bit AFD value to write on all frames of video in the output stream. Only
     * valid when afdSignaling is set to 'Fixed'.
     */
    inline H264Settings& WithFixedAfd(FixedAfd&& value) { SetFixedAfd(std::move(value)); return *this;}


    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline const H264FlickerAq& GetFlickerAq() const{ return m_flickerAq; }

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline bool FlickerAqHasBeenSet() const { return m_flickerAqHasBeenSet; }

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline void SetFlickerAq(const H264FlickerAq& value) { m_flickerAqHasBeenSet = true; m_flickerAq = value; }

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline void SetFlickerAq(H264FlickerAq&& value) { m_flickerAqHasBeenSet = true; m_flickerAq = std::move(value); }

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline H264Settings& WithFlickerAq(const H264FlickerAq& value) { SetFlickerAq(value); return *this;}

    /**
     * If set to enabled, adjust quantization within each frame to reduce flicker or
     * 'pop' on I-frames.
     */
    inline H264Settings& WithFlickerAq(H264FlickerAq&& value) { SetFlickerAq(std::move(value)); return *this;}


    /**
     * This field indicates how the output video frame rate is specified.  If
     * "specified" is selected then the output video frame rate is determined by
     * framerateNumerator and framerateDenominator, else if "initializeFromSource" is
     * selected then the output video frame rate will be set equal to the input video
     * frame rate of the first input.
     */
    inline const H264FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    /**
     * This field indicates how the output video frame rate is specified.  If
     * "specified" is selected then the output video frame rate is determined by
     * framerateNumerator and framerateDenominator, else if "initializeFromSource" is
     * selected then the output video frame rate will be set equal to the input video
     * frame rate of the first input.
     */
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }

    /**
     * This field indicates how the output video frame rate is specified.  If
     * "specified" is selected then the output video frame rate is determined by
     * framerateNumerator and framerateDenominator, else if "initializeFromSource" is
     * selected then the output video frame rate will be set equal to the input video
     * frame rate of the first input.
     */
    inline void SetFramerateControl(const H264FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    /**
     * This field indicates how the output video frame rate is specified.  If
     * "specified" is selected then the output video frame rate is determined by
     * framerateNumerator and framerateDenominator, else if "initializeFromSource" is
     * selected then the output video frame rate will be set equal to the input video
     * frame rate of the first input.
     */
    inline void SetFramerateControl(H264FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    /**
     * This field indicates how the output video frame rate is specified.  If
     * "specified" is selected then the output video frame rate is determined by
     * framerateNumerator and framerateDenominator, else if "initializeFromSource" is
     * selected then the output video frame rate will be set equal to the input video
     * frame rate of the first input.
     */
    inline H264Settings& WithFramerateControl(const H264FramerateControl& value) { SetFramerateControl(value); return *this;}

    /**
     * This field indicates how the output video frame rate is specified.  If
     * "specified" is selected then the output video frame rate is determined by
     * framerateNumerator and framerateDenominator, else if "initializeFromSource" is
     * selected then the output video frame rate will be set equal to the input video
     * frame rate of the first input.
     */
    inline H264Settings& WithFramerateControl(H264FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    /**
     * Framerate denominator.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * Framerate denominator.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * Framerate denominator.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * Framerate denominator.
     */
    inline H264Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * Framerate numerator - framerate is a fraction, e.g. 24000 / 1001 = 23.976 fps.
     */
    inline H264Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * Documentation update needed
     */
    inline const H264GopBReference& GetGopBReference() const{ return m_gopBReference; }

    /**
     * Documentation update needed
     */
    inline bool GopBReferenceHasBeenSet() const { return m_gopBReferenceHasBeenSet; }

    /**
     * Documentation update needed
     */
    inline void SetGopBReference(const H264GopBReference& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = value; }

    /**
     * Documentation update needed
     */
    inline void SetGopBReference(H264GopBReference&& value) { m_gopBReferenceHasBeenSet = true; m_gopBReference = std::move(value); }

    /**
     * Documentation update needed
     */
    inline H264Settings& WithGopBReference(const H264GopBReference& value) { SetGopBReference(value); return *this;}

    /**
     * Documentation update needed
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
     * Number of B-frames between reference frames.
     */
    inline int GetGopNumBFrames() const{ return m_gopNumBFrames; }

    /**
     * Number of B-frames between reference frames.
     */
    inline bool GopNumBFramesHasBeenSet() const { return m_gopNumBFramesHasBeenSet; }

    /**
     * Number of B-frames between reference frames.
     */
    inline void SetGopNumBFrames(int value) { m_gopNumBFramesHasBeenSet = true; m_gopNumBFrames = value; }

    /**
     * Number of B-frames between reference frames.
     */
    inline H264Settings& WithGopNumBFrames(int value) { SetGopNumBFrames(value); return *this;}


    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits. Must be greater than zero.
     */
    inline double GetGopSize() const{ return m_gopSize; }

    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits. Must be greater than zero.
     */
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }

    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits. Must be greater than zero.
     */
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * GOP size (keyframe interval) in units of either frames or seconds per
     * gopSizeUnits. Must be greater than zero.
     */
    inline H264Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline const H264GopSizeUnits& GetGopSizeUnits() const{ return m_gopSizeUnits; }

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline bool GopSizeUnitsHasBeenSet() const { return m_gopSizeUnitsHasBeenSet; }

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline void SetGopSizeUnits(const H264GopSizeUnits& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = value; }

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline void SetGopSizeUnits(H264GopSizeUnits&& value) { m_gopSizeUnitsHasBeenSet = true; m_gopSizeUnits = std::move(value); }

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline H264Settings& WithGopSizeUnits(const H264GopSizeUnits& value) { SetGopSizeUnits(value); return *this;}

    /**
     * Indicates if the gopSize is specified in frames or seconds. If seconds the
     * system will convert the gopSize into a frame count at run time.
     */
    inline H264Settings& WithGopSizeUnits(H264GopSizeUnits&& value) { SetGopSizeUnits(std::move(value)); return *this;}


    /**
     * H.264 Level.
     */
    inline const H264Level& GetLevel() const{ return m_level; }

    /**
     * H.264 Level.
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * H.264 Level.
     */
    inline void SetLevel(const H264Level& value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * H.264 Level.
     */
    inline void SetLevel(H264Level&& value) { m_levelHasBeenSet = true; m_level = std::move(value); }

    /**
     * H.264 Level.
     */
    inline H264Settings& WithLevel(const H264Level& value) { SetLevel(value); return *this;}

    /**
     * H.264 Level.
     */
    inline H264Settings& WithLevel(H264Level&& value) { SetLevel(std::move(value)); return *this;}


    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline const H264LookAheadRateControl& GetLookAheadRateControl() const{ return m_lookAheadRateControl; }

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline bool LookAheadRateControlHasBeenSet() const { return m_lookAheadRateControlHasBeenSet; }

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline void SetLookAheadRateControl(const H264LookAheadRateControl& value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = value; }

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline void SetLookAheadRateControl(H264LookAheadRateControl&& value) { m_lookAheadRateControlHasBeenSet = true; m_lookAheadRateControl = std::move(value); }

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline H264Settings& WithLookAheadRateControl(const H264LookAheadRateControl& value) { SetLookAheadRateControl(value); return *this;}

    /**
     * Amount of lookahead. A value of low can decrease latency and memory usage, while
     * high can produce better quality for certain content.
     */
    inline H264Settings& WithLookAheadRateControl(H264LookAheadRateControl&& value) { SetLookAheadRateControl(std::move(value)); return *this;}


    /**
     * For QVBR: See the tooltip for Quality level 

For VBR: Set the maximum bitrate
     * in order to accommodate expected spikes in the complexity of the video.
     */
    inline int GetMaxBitrate() const{ return m_maxBitrate; }

    /**
     * For QVBR: See the tooltip for Quality level 

For VBR: Set the maximum bitrate
     * in order to accommodate expected spikes in the complexity of the video.
     */
    inline bool MaxBitrateHasBeenSet() const { return m_maxBitrateHasBeenSet; }

    /**
     * For QVBR: See the tooltip for Quality level 

For VBR: Set the maximum bitrate
     * in order to accommodate expected spikes in the complexity of the video.
     */
    inline void SetMaxBitrate(int value) { m_maxBitrateHasBeenSet = true; m_maxBitrate = value; }

    /**
     * For QVBR: See the tooltip for Quality level 

For VBR: Set the maximum bitrate
     * in order to accommodate expected spikes in the complexity of the video.
     */
    inline H264Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


    /**
     * Only meaningful if sceneChangeDetect is set to enabled.  Enforces separation
     * between repeated (cadence) I-frames and I-frames inserted by Scene Change
     * Detection. If a scene change I-frame is within I-interval frames of a cadence
     * I-frame, the GOP is shrunk and/or stretched to the scene change I-frame. GOP
     * stretch requires enabling lookahead as well as setting I-interval. The normal
     * cadence resumes for the next GOP. Note: Maximum GOP stretch = GOP size +
     * Min-I-interval - 1
     */
    inline int GetMinIInterval() const{ return m_minIInterval; }

    /**
     * Only meaningful if sceneChangeDetect is set to enabled.  Enforces separation
     * between repeated (cadence) I-frames and I-frames inserted by Scene Change
     * Detection. If a scene change I-frame is within I-interval frames of a cadence
     * I-frame, the GOP is shrunk and/or stretched to the scene change I-frame. GOP
     * stretch requires enabling lookahead as well as setting I-interval. The normal
     * cadence resumes for the next GOP. Note: Maximum GOP stretch = GOP size +
     * Min-I-interval - 1
     */
    inline bool MinIIntervalHasBeenSet() const { return m_minIIntervalHasBeenSet; }

    /**
     * Only meaningful if sceneChangeDetect is set to enabled.  Enforces separation
     * between repeated (cadence) I-frames and I-frames inserted by Scene Change
     * Detection. If a scene change I-frame is within I-interval frames of a cadence
     * I-frame, the GOP is shrunk and/or stretched to the scene change I-frame. GOP
     * stretch requires enabling lookahead as well as setting I-interval. The normal
     * cadence resumes for the next GOP. Note: Maximum GOP stretch = GOP size +
     * Min-I-interval - 1
     */
    inline void SetMinIInterval(int value) { m_minIIntervalHasBeenSet = true; m_minIInterval = value; }

    /**
     * Only meaningful if sceneChangeDetect is set to enabled.  Enforces separation
     * between repeated (cadence) I-frames and I-frames inserted by Scene Change
     * Detection. If a scene change I-frame is within I-interval frames of a cadence
     * I-frame, the GOP is shrunk and/or stretched to the scene change I-frame. GOP
     * stretch requires enabling lookahead as well as setting I-interval. The normal
     * cadence resumes for the next GOP. Note: Maximum GOP stretch = GOP size +
     * Min-I-interval - 1
     */
    inline H264Settings& WithMinIInterval(int value) { SetMinIInterval(value); return *this;}


    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline int GetNumRefFrames() const{ return m_numRefFrames; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline bool NumRefFramesHasBeenSet() const { return m_numRefFramesHasBeenSet; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline void SetNumRefFrames(int value) { m_numRefFramesHasBeenSet = true; m_numRefFrames = value; }

    /**
     * Number of reference frames to use. The encoder may use more than requested if
     * using B-frames and/or interlaced encoding.
     */
    inline H264Settings& WithNumRefFrames(int value) { SetNumRefFrames(value); return *this;}


    /**
     * This field indicates how the output pixel aspect ratio is specified.  If
     * "specified" is selected then the output video pixel aspect ratio is determined
     * by parNumerator and parDenominator, else if "initializeFromSource" is selected
     * then the output pixsel aspect ratio will be set equal to the input video pixel
     * aspect ratio of the first input.
     */
    inline const H264ParControl& GetParControl() const{ return m_parControl; }

    /**
     * This field indicates how the output pixel aspect ratio is specified.  If
     * "specified" is selected then the output video pixel aspect ratio is determined
     * by parNumerator and parDenominator, else if "initializeFromSource" is selected
     * then the output pixsel aspect ratio will be set equal to the input video pixel
     * aspect ratio of the first input.
     */
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }

    /**
     * This field indicates how the output pixel aspect ratio is specified.  If
     * "specified" is selected then the output video pixel aspect ratio is determined
     * by parNumerator and parDenominator, else if "initializeFromSource" is selected
     * then the output pixsel aspect ratio will be set equal to the input video pixel
     * aspect ratio of the first input.
     */
    inline void SetParControl(const H264ParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    /**
     * This field indicates how the output pixel aspect ratio is specified.  If
     * "specified" is selected then the output video pixel aspect ratio is determined
     * by parNumerator and parDenominator, else if "initializeFromSource" is selected
     * then the output pixsel aspect ratio will be set equal to the input video pixel
     * aspect ratio of the first input.
     */
    inline void SetParControl(H264ParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    /**
     * This field indicates how the output pixel aspect ratio is specified.  If
     * "specified" is selected then the output video pixel aspect ratio is determined
     * by parNumerator and parDenominator, else if "initializeFromSource" is selected
     * then the output pixsel aspect ratio will be set equal to the input video pixel
     * aspect ratio of the first input.
     */
    inline H264Settings& WithParControl(const H264ParControl& value) { SetParControl(value); return *this;}

    /**
     * This field indicates how the output pixel aspect ratio is specified.  If
     * "specified" is selected then the output video pixel aspect ratio is determined
     * by parNumerator and parDenominator, else if "initializeFromSource" is selected
     * then the output pixsel aspect ratio will be set equal to the input video pixel
     * aspect ratio of the first input.
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
     * H.264 Profile.
     */
    inline const H264Profile& GetProfile() const{ return m_profile; }

    /**
     * H.264 Profile.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * H.264 Profile.
     */
    inline void SetProfile(const H264Profile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * H.264 Profile.
     */
    inline void SetProfile(H264Profile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * H.264 Profile.
     */
    inline H264Settings& WithProfile(const H264Profile& value) { SetProfile(value); return *this;}

    /**
     * H.264 Profile.
     */
    inline H264Settings& WithProfile(H264Profile&& value) { SetProfile(std::move(value)); return *this;}


    /**
     * Controls the target quality for the video encode. Applies only when the rate
     * control mode is QVBR. Set values for the QVBR quality level field and Max
     * bitrate field that suit your most important viewing devices. Recommended values
     * are:
- Primary screen: Quality level: 8 to 10. Max bitrate: 4M
- PC or tablet:
     * Quality level: 7. Max bitrate: 1.5M to 3M
- Smartphone: Quality level: 6. Max
     * bitrate: 1M to 1.5M
     */
    inline int GetQvbrQualityLevel() const{ return m_qvbrQualityLevel; }

    /**
     * Controls the target quality for the video encode. Applies only when the rate
     * control mode is QVBR. Set values for the QVBR quality level field and Max
     * bitrate field that suit your most important viewing devices. Recommended values
     * are:
- Primary screen: Quality level: 8 to 10. Max bitrate: 4M
- PC or tablet:
     * Quality level: 7. Max bitrate: 1.5M to 3M
- Smartphone: Quality level: 6. Max
     * bitrate: 1M to 1.5M
     */
    inline bool QvbrQualityLevelHasBeenSet() const { return m_qvbrQualityLevelHasBeenSet; }

    /**
     * Controls the target quality for the video encode. Applies only when the rate
     * control mode is QVBR. Set values for the QVBR quality level field and Max
     * bitrate field that suit your most important viewing devices. Recommended values
     * are:
- Primary screen: Quality level: 8 to 10. Max bitrate: 4M
- PC or tablet:
     * Quality level: 7. Max bitrate: 1.5M to 3M
- Smartphone: Quality level: 6. Max
     * bitrate: 1M to 1.5M
     */
    inline void SetQvbrQualityLevel(int value) { m_qvbrQualityLevelHasBeenSet = true; m_qvbrQualityLevel = value; }

    /**
     * Controls the target quality for the video encode. Applies only when the rate
     * control mode is QVBR. Set values for the QVBR quality level field and Max
     * bitrate field that suit your most important viewing devices. Recommended values
     * are:
- Primary screen: Quality level: 8 to 10. Max bitrate: 4M
- PC or tablet:
     * Quality level: 7. Max bitrate: 1.5M to 3M
- Smartphone: Quality level: 6. Max
     * bitrate: 1M to 1.5M
     */
    inline H264Settings& WithQvbrQualityLevel(int value) { SetQvbrQualityLevel(value); return *this;}


    /**
     * Rate control mode. 

QVBR: Quality will match the specified quality level except
     * when it is constrained by the
maximum bitrate.  Recommended if you or your
     * viewers pay for bandwidth.

VBR: Quality and bitrate vary, depending on the
     * video complexity. Recommended instead of QVBR
if you want to maintain a specific
     * average bitrate over the duration of the channel.

CBR: Quality varies,
     * depending on the video complexity. Recommended only if you distribute
your
     * assets to devices that cannot handle variable bitrates.
     */
    inline const H264RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    /**
     * Rate control mode. 

QVBR: Quality will match the specified quality level except
     * when it is constrained by the
maximum bitrate.  Recommended if you or your
     * viewers pay for bandwidth.

VBR: Quality and bitrate vary, depending on the
     * video complexity. Recommended instead of QVBR
if you want to maintain a specific
     * average bitrate over the duration of the channel.

CBR: Quality varies,
     * depending on the video complexity. Recommended only if you distribute
your
     * assets to devices that cannot handle variable bitrates.
     */
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }

    /**
     * Rate control mode. 

QVBR: Quality will match the specified quality level except
     * when it is constrained by the
maximum bitrate.  Recommended if you or your
     * viewers pay for bandwidth.

VBR: Quality and bitrate vary, depending on the
     * video complexity. Recommended instead of QVBR
if you want to maintain a specific
     * average bitrate over the duration of the channel.

CBR: Quality varies,
     * depending on the video complexity. Recommended only if you distribute
your
     * assets to devices that cannot handle variable bitrates.
     */
    inline void SetRateControlMode(const H264RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    /**
     * Rate control mode. 

QVBR: Quality will match the specified quality level except
     * when it is constrained by the
maximum bitrate.  Recommended if you or your
     * viewers pay for bandwidth.

VBR: Quality and bitrate vary, depending on the
     * video complexity. Recommended instead of QVBR
if you want to maintain a specific
     * average bitrate over the duration of the channel.

CBR: Quality varies,
     * depending on the video complexity. Recommended only if you distribute
your
     * assets to devices that cannot handle variable bitrates.
     */
    inline void SetRateControlMode(H264RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    /**
     * Rate control mode. 

QVBR: Quality will match the specified quality level except
     * when it is constrained by the
maximum bitrate.  Recommended if you or your
     * viewers pay for bandwidth.

VBR: Quality and bitrate vary, depending on the
     * video complexity. Recommended instead of QVBR
if you want to maintain a specific
     * average bitrate over the duration of the channel.

CBR: Quality varies,
     * depending on the video complexity. Recommended only if you distribute
your
     * assets to devices that cannot handle variable bitrates.
     */
    inline H264Settings& WithRateControlMode(const H264RateControlMode& value) { SetRateControlMode(value); return *this;}

    /**
     * Rate control mode. 

QVBR: Quality will match the specified quality level except
     * when it is constrained by the
maximum bitrate.  Recommended if you or your
     * viewers pay for bandwidth.

VBR: Quality and bitrate vary, depending on the
     * video complexity. Recommended instead of QVBR
if you want to maintain a specific
     * average bitrate over the duration of the channel.

CBR: Quality varies,
     * depending on the video complexity. Recommended only if you distribute
your
     * assets to devices that cannot handle variable bitrates.
     */
    inline H264Settings& WithRateControlMode(H264RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline const H264ScanType& GetScanType() const{ return m_scanType; }

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline bool ScanTypeHasBeenSet() const { return m_scanTypeHasBeenSet; }

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline void SetScanType(const H264ScanType& value) { m_scanTypeHasBeenSet = true; m_scanType = value; }

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline void SetScanType(H264ScanType&& value) { m_scanTypeHasBeenSet = true; m_scanType = std::move(value); }

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline H264Settings& WithScanType(const H264ScanType& value) { SetScanType(value); return *this;}

    /**
     * Sets the scan type of the output to progressive or top-field-first interlaced.
     */
    inline H264Settings& WithScanType(H264ScanType&& value) { SetScanType(std::move(value)); return *this;}


    /**
     * Scene change detection.

- On: inserts I-frames when scene change is detected.
-
     * Off: does not force an I-frame when scene change is detected.
     */
    inline const H264SceneChangeDetect& GetSceneChangeDetect() const{ return m_sceneChangeDetect; }

    /**
     * Scene change detection.

- On: inserts I-frames when scene change is detected.
-
     * Off: does not force an I-frame when scene change is detected.
     */
    inline bool SceneChangeDetectHasBeenSet() const { return m_sceneChangeDetectHasBeenSet; }

    /**
     * Scene change detection.

- On: inserts I-frames when scene change is detected.
-
     * Off: does not force an I-frame when scene change is detected.
     */
    inline void SetSceneChangeDetect(const H264SceneChangeDetect& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = value; }

    /**
     * Scene change detection.

- On: inserts I-frames when scene change is detected.
-
     * Off: does not force an I-frame when scene change is detected.
     */
    inline void SetSceneChangeDetect(H264SceneChangeDetect&& value) { m_sceneChangeDetectHasBeenSet = true; m_sceneChangeDetect = std::move(value); }

    /**
     * Scene change detection.

- On: inserts I-frames when scene change is detected.
-
     * Off: does not force an I-frame when scene change is detected.
     */
    inline H264Settings& WithSceneChangeDetect(const H264SceneChangeDetect& value) { SetSceneChangeDetect(value); return *this;}

    /**
     * Scene change detection.

- On: inserts I-frames when scene change is detected.
-
     * Off: does not force an I-frame when scene change is detected.
     */
    inline H264Settings& WithSceneChangeDetect(H264SceneChangeDetect&& value) { SetSceneChangeDetect(std::move(value)); return *this;}


    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline int GetSlices() const{ return m_slices; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }

    /**
     * Number of slices per picture. Must be less than or equal to the number of
     * macroblock rows for progressive pictures, and less than or equal to half the
     * number of macroblock rows for interlaced pictures.
This field is optional; when
     * no value is specified the encoder will choose the number of slices based on
     * encode resolution.
     */
    inline H264Settings& WithSlices(int value) { SetSlices(value); return *this;}


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
     * If set to enabled, adjust quantization within each frame based on spatial
     * variation of content complexity.
     */
    inline const H264SpatialAq& GetSpatialAq() const{ return m_spatialAq; }

    /**
     * If set to enabled, adjust quantization within each frame based on spatial
     * variation of content complexity.
     */
    inline bool SpatialAqHasBeenSet() const { return m_spatialAqHasBeenSet; }

    /**
     * If set to enabled, adjust quantization within each frame based on spatial
     * variation of content complexity.
     */
    inline void SetSpatialAq(const H264SpatialAq& value) { m_spatialAqHasBeenSet = true; m_spatialAq = value; }

    /**
     * If set to enabled, adjust quantization within each frame based on spatial
     * variation of content complexity.
     */
    inline void SetSpatialAq(H264SpatialAq&& value) { m_spatialAqHasBeenSet = true; m_spatialAq = std::move(value); }

    /**
     * If set to enabled, adjust quantization within each frame based on spatial
     * variation of content complexity.
     */
    inline H264Settings& WithSpatialAq(const H264SpatialAq& value) { SetSpatialAq(value); return *this;}

    /**
     * If set to enabled, adjust quantization within each frame based on spatial
     * variation of content complexity.
     */
    inline H264Settings& WithSpatialAq(H264SpatialAq&& value) { SetSpatialAq(std::move(value)); return *this;}


    /**
     * If set to fixed, use gopNumBFrames B-frames per sub-GOP. If set to dynamic,
     * optimize the number of B-frames used for each sub-GOP to improve visual quality.
     */
    inline const H264SubGopLength& GetSubgopLength() const{ return m_subgopLength; }

    /**
     * If set to fixed, use gopNumBFrames B-frames per sub-GOP. If set to dynamic,
     * optimize the number of B-frames used for each sub-GOP to improve visual quality.
     */
    inline bool SubgopLengthHasBeenSet() const { return m_subgopLengthHasBeenSet; }

    /**
     * If set to fixed, use gopNumBFrames B-frames per sub-GOP. If set to dynamic,
     * optimize the number of B-frames used for each sub-GOP to improve visual quality.
     */
    inline void SetSubgopLength(const H264SubGopLength& value) { m_subgopLengthHasBeenSet = true; m_subgopLength = value; }

    /**
     * If set to fixed, use gopNumBFrames B-frames per sub-GOP. If set to dynamic,
     * optimize the number of B-frames used for each sub-GOP to improve visual quality.
     */
    inline void SetSubgopLength(H264SubGopLength&& value) { m_subgopLengthHasBeenSet = true; m_subgopLength = std::move(value); }

    /**
     * If set to fixed, use gopNumBFrames B-frames per sub-GOP. If set to dynamic,
     * optimize the number of B-frames used for each sub-GOP to improve visual quality.
     */
    inline H264Settings& WithSubgopLength(const H264SubGopLength& value) { SetSubgopLength(value); return *this;}

    /**
     * If set to fixed, use gopNumBFrames B-frames per sub-GOP. If set to dynamic,
     * optimize the number of B-frames used for each sub-GOP to improve visual quality.
     */
    inline H264Settings& WithSubgopLength(H264SubGopLength&& value) { SetSubgopLength(std::move(value)); return *this;}


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
     * If set to enabled, adjust quantization within each frame based on temporal
     * variation of content complexity.
     */
    inline const H264TemporalAq& GetTemporalAq() const{ return m_temporalAq; }

    /**
     * If set to enabled, adjust quantization within each frame based on temporal
     * variation of content complexity.
     */
    inline bool TemporalAqHasBeenSet() const { return m_temporalAqHasBeenSet; }

    /**
     * If set to enabled, adjust quantization within each frame based on temporal
     * variation of content complexity.
     */
    inline void SetTemporalAq(const H264TemporalAq& value) { m_temporalAqHasBeenSet = true; m_temporalAq = value; }

    /**
     * If set to enabled, adjust quantization within each frame based on temporal
     * variation of content complexity.
     */
    inline void SetTemporalAq(H264TemporalAq&& value) { m_temporalAqHasBeenSet = true; m_temporalAq = std::move(value); }

    /**
     * If set to enabled, adjust quantization within each frame based on temporal
     * variation of content complexity.
     */
    inline H264Settings& WithTemporalAq(const H264TemporalAq& value) { SetTemporalAq(value); return *this;}

    /**
     * If set to enabled, adjust quantization within each frame based on temporal
     * variation of content complexity.
     */
    inline H264Settings& WithTemporalAq(H264TemporalAq&& value) { SetTemporalAq(std::move(value)); return *this;}


    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline const H264TimecodeInsertionBehavior& GetTimecodeInsertion() const{ return m_timecodeInsertion; }

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline bool TimecodeInsertionHasBeenSet() const { return m_timecodeInsertionHasBeenSet; }

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline void SetTimecodeInsertion(const H264TimecodeInsertionBehavior& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = value; }

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline void SetTimecodeInsertion(H264TimecodeInsertionBehavior&& value) { m_timecodeInsertionHasBeenSet = true; m_timecodeInsertion = std::move(value); }

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline H264Settings& WithTimecodeInsertion(const H264TimecodeInsertionBehavior& value) { SetTimecodeInsertion(value); return *this;}

    /**
     * Determines how timecodes should be inserted into the video elementary stream.
-
     * 'disabled': Do not include timecodes
- 'picTimingSei': Pass through picture
     * timing SEI messages from the source specified in Timecode Config
     */
    inline H264Settings& WithTimecodeInsertion(H264TimecodeInsertionBehavior&& value) { SetTimecodeInsertion(std::move(value)); return *this;}

  private:

    H264AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet;

    AfdSignaling m_afdSignaling;
    bool m_afdSignalingHasBeenSet;

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    int m_bufFillPct;
    bool m_bufFillPctHasBeenSet;

    int m_bufSize;
    bool m_bufSizeHasBeenSet;

    H264ColorMetadata m_colorMetadata;
    bool m_colorMetadataHasBeenSet;

    H264EntropyEncoding m_entropyEncoding;
    bool m_entropyEncodingHasBeenSet;

    FixedAfd m_fixedAfd;
    bool m_fixedAfdHasBeenSet;

    H264FlickerAq m_flickerAq;
    bool m_flickerAqHasBeenSet;

    H264FramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet;

    H264GopBReference m_gopBReference;
    bool m_gopBReferenceHasBeenSet;

    int m_gopClosedCadence;
    bool m_gopClosedCadenceHasBeenSet;

    int m_gopNumBFrames;
    bool m_gopNumBFramesHasBeenSet;

    double m_gopSize;
    bool m_gopSizeHasBeenSet;

    H264GopSizeUnits m_gopSizeUnits;
    bool m_gopSizeUnitsHasBeenSet;

    H264Level m_level;
    bool m_levelHasBeenSet;

    H264LookAheadRateControl m_lookAheadRateControl;
    bool m_lookAheadRateControlHasBeenSet;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet;

    int m_minIInterval;
    bool m_minIIntervalHasBeenSet;

    int m_numRefFrames;
    bool m_numRefFramesHasBeenSet;

    H264ParControl m_parControl;
    bool m_parControlHasBeenSet;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet;

    H264Profile m_profile;
    bool m_profileHasBeenSet;

    int m_qvbrQualityLevel;
    bool m_qvbrQualityLevelHasBeenSet;

    H264RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet;

    H264ScanType m_scanType;
    bool m_scanTypeHasBeenSet;

    H264SceneChangeDetect m_sceneChangeDetect;
    bool m_sceneChangeDetectHasBeenSet;

    int m_slices;
    bool m_slicesHasBeenSet;

    int m_softness;
    bool m_softnessHasBeenSet;

    H264SpatialAq m_spatialAq;
    bool m_spatialAqHasBeenSet;

    H264SubGopLength m_subgopLength;
    bool m_subgopLengthHasBeenSet;

    H264Syntax m_syntax;
    bool m_syntaxHasBeenSet;

    H264TemporalAq m_temporalAq;
    bool m_temporalAqHasBeenSet;

    H264TimecodeInsertionBehavior m_timecodeInsertion;
    bool m_timecodeInsertionHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
