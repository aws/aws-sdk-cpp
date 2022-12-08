/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Av1AdaptiveQuantization.h>
#include <aws/mediaconvert/model/Av1BitDepth.h>
#include <aws/mediaconvert/model/Av1FramerateControl.h>
#include <aws/mediaconvert/model/Av1FramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/Av1QvbrSettings.h>
#include <aws/mediaconvert/model/Av1RateControlMode.h>
#include <aws/mediaconvert/model/Av1SpatialAdaptiveQuantization.h>
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
   * Required when you set Codec, under VideoDescription>CodecSettings to the value
   * AV1.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Av1Settings">AWS
   * API Reference</a></p>
   */
  class Av1Settings
  {
  public:
    AWS_MEDIACONVERT_API Av1Settings();
    AWS_MEDIACONVERT_API Av1Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Av1Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the strength of any adaptive quantization filters that you enable. The
     * value that you choose here applies to Spatial adaptive quantization
     * (spatialAdaptiveQuantization).
     */
    inline const Av1AdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    /**
     * Specify the strength of any adaptive quantization filters that you enable. The
     * value that you choose here applies to Spatial adaptive quantization
     * (spatialAdaptiveQuantization).
     */
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }

    /**
     * Specify the strength of any adaptive quantization filters that you enable. The
     * value that you choose here applies to Spatial adaptive quantization
     * (spatialAdaptiveQuantization).
     */
    inline void SetAdaptiveQuantization(const Av1AdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    /**
     * Specify the strength of any adaptive quantization filters that you enable. The
     * value that you choose here applies to Spatial adaptive quantization
     * (spatialAdaptiveQuantization).
     */
    inline void SetAdaptiveQuantization(Av1AdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    /**
     * Specify the strength of any adaptive quantization filters that you enable. The
     * value that you choose here applies to Spatial adaptive quantization
     * (spatialAdaptiveQuantization).
     */
    inline Av1Settings& WithAdaptiveQuantization(const Av1AdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    /**
     * Specify the strength of any adaptive quantization filters that you enable. The
     * value that you choose here applies to Spatial adaptive quantization
     * (spatialAdaptiveQuantization).
     */
    inline Av1Settings& WithAdaptiveQuantization(Av1AdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Specify the Bit depth (Av1BitDepth). You can choose 8-bit (BIT_8) or 10-bit
     * (BIT_10).
     */
    inline const Av1BitDepth& GetBitDepth() const{ return m_bitDepth; }

    /**
     * Specify the Bit depth (Av1BitDepth). You can choose 8-bit (BIT_8) or 10-bit
     * (BIT_10).
     */
    inline bool BitDepthHasBeenSet() const { return m_bitDepthHasBeenSet; }

    /**
     * Specify the Bit depth (Av1BitDepth). You can choose 8-bit (BIT_8) or 10-bit
     * (BIT_10).
     */
    inline void SetBitDepth(const Av1BitDepth& value) { m_bitDepthHasBeenSet = true; m_bitDepth = value; }

    /**
     * Specify the Bit depth (Av1BitDepth). You can choose 8-bit (BIT_8) or 10-bit
     * (BIT_10).
     */
    inline void SetBitDepth(Av1BitDepth&& value) { m_bitDepthHasBeenSet = true; m_bitDepth = std::move(value); }

    /**
     * Specify the Bit depth (Av1BitDepth). You can choose 8-bit (BIT_8) or 10-bit
     * (BIT_10).
     */
    inline Av1Settings& WithBitDepth(const Av1BitDepth& value) { SetBitDepth(value); return *this;}

    /**
     * Specify the Bit depth (Av1BitDepth). You can choose 8-bit (BIT_8) or 10-bit
     * (BIT_10).
     */
    inline Av1Settings& WithBitDepth(Av1BitDepth&& value) { SetBitDepth(std::move(value)); return *this;}


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
    inline const Av1FramerateControl& GetFramerateControl() const{ return m_framerateControl; }

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
    inline void SetFramerateControl(const Av1FramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

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
    inline void SetFramerateControl(Av1FramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

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
    inline Av1Settings& WithFramerateControl(const Av1FramerateControl& value) { SetFramerateControl(value); return *this;}

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
    inline Av1Settings& WithFramerateControl(Av1FramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


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
    inline const Av1FramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

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
    inline void SetFramerateConversionAlgorithm(const Av1FramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

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
    inline void SetFramerateConversionAlgorithm(Av1FramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

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
    inline Av1Settings& WithFramerateConversionAlgorithm(const Av1FramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

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
    inline Av1Settings& WithFramerateConversionAlgorithm(Av1FramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


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
    inline Av1Settings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


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
    inline Av1Settings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * Specify the GOP length (keyframe interval) in frames. With AV1, MediaConvert
     * doesn't support GOP length in seconds. This value must be greater than zero and
     * preferably equal to 1 + ((numberBFrames + 1) * x), where x is an integer value.
     */
    inline double GetGopSize() const{ return m_gopSize; }

    /**
     * Specify the GOP length (keyframe interval) in frames. With AV1, MediaConvert
     * doesn't support GOP length in seconds. This value must be greater than zero and
     * preferably equal to 1 + ((numberBFrames + 1) * x), where x is an integer value.
     */
    inline bool GopSizeHasBeenSet() const { return m_gopSizeHasBeenSet; }

    /**
     * Specify the GOP length (keyframe interval) in frames. With AV1, MediaConvert
     * doesn't support GOP length in seconds. This value must be greater than zero and
     * preferably equal to 1 + ((numberBFrames + 1) * x), where x is an integer value.
     */
    inline void SetGopSize(double value) { m_gopSizeHasBeenSet = true; m_gopSize = value; }

    /**
     * Specify the GOP length (keyframe interval) in frames. With AV1, MediaConvert
     * doesn't support GOP length in seconds. This value must be greater than zero and
     * preferably equal to 1 + ((numberBFrames + 1) * x), where x is an integer value.
     */
    inline Av1Settings& WithGopSize(double value) { SetGopSize(value); return *this;}


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
    inline Av1Settings& WithMaxBitrate(int value) { SetMaxBitrate(value); return *this;}


    /**
     * Specify from the number of B-frames, in the range of 0-15. For AV1 encoding, we
     * recommend using 7 or 15. Choose a larger number for a lower bitrate and smaller
     * file size; choose a smaller number for better video quality.
     */
    inline int GetNumberBFramesBetweenReferenceFrames() const{ return m_numberBFramesBetweenReferenceFrames; }

    /**
     * Specify from the number of B-frames, in the range of 0-15. For AV1 encoding, we
     * recommend using 7 or 15. Choose a larger number for a lower bitrate and smaller
     * file size; choose a smaller number for better video quality.
     */
    inline bool NumberBFramesBetweenReferenceFramesHasBeenSet() const { return m_numberBFramesBetweenReferenceFramesHasBeenSet; }

    /**
     * Specify from the number of B-frames, in the range of 0-15. For AV1 encoding, we
     * recommend using 7 or 15. Choose a larger number for a lower bitrate and smaller
     * file size; choose a smaller number for better video quality.
     */
    inline void SetNumberBFramesBetweenReferenceFrames(int value) { m_numberBFramesBetweenReferenceFramesHasBeenSet = true; m_numberBFramesBetweenReferenceFrames = value; }

    /**
     * Specify from the number of B-frames, in the range of 0-15. For AV1 encoding, we
     * recommend using 7 or 15. Choose a larger number for a lower bitrate and smaller
     * file size; choose a smaller number for better video quality.
     */
    inline Av1Settings& WithNumberBFramesBetweenReferenceFrames(int value) { SetNumberBFramesBetweenReferenceFrames(value); return *this;}


    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline const Av1QvbrSettings& GetQvbrSettings() const{ return m_qvbrSettings; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline bool QvbrSettingsHasBeenSet() const { return m_qvbrSettingsHasBeenSet; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline void SetQvbrSettings(const Av1QvbrSettings& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = value; }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline void SetQvbrSettings(Av1QvbrSettings&& value) { m_qvbrSettingsHasBeenSet = true; m_qvbrSettings = std::move(value); }

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline Av1Settings& WithQvbrSettings(const Av1QvbrSettings& value) { SetQvbrSettings(value); return *this;}

    /**
     * Settings for quality-defined variable bitrate encoding with the H.265 codec. Use
     * these settings only when you set QVBR for Rate control mode (RateControlMode).
     */
    inline Av1Settings& WithQvbrSettings(Av1QvbrSettings&& value) { SetQvbrSettings(std::move(value)); return *this;}


    /**
     * 'With AV1 outputs, for rate control mode, MediaConvert supports only
     * quality-defined variable bitrate (QVBR). You can''t use CBR or VBR.'
     */
    inline const Av1RateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    /**
     * 'With AV1 outputs, for rate control mode, MediaConvert supports only
     * quality-defined variable bitrate (QVBR). You can''t use CBR or VBR.'
     */
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }

    /**
     * 'With AV1 outputs, for rate control mode, MediaConvert supports only
     * quality-defined variable bitrate (QVBR). You can''t use CBR or VBR.'
     */
    inline void SetRateControlMode(const Av1RateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    /**
     * 'With AV1 outputs, for rate control mode, MediaConvert supports only
     * quality-defined variable bitrate (QVBR). You can''t use CBR or VBR.'
     */
    inline void SetRateControlMode(Av1RateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    /**
     * 'With AV1 outputs, for rate control mode, MediaConvert supports only
     * quality-defined variable bitrate (QVBR). You can''t use CBR or VBR.'
     */
    inline Av1Settings& WithRateControlMode(const Av1RateControlMode& value) { SetRateControlMode(value); return *this;}

    /**
     * 'With AV1 outputs, for rate control mode, MediaConvert supports only
     * quality-defined variable bitrate (QVBR). You can''t use CBR or VBR.'
     */
    inline Av1Settings& WithRateControlMode(Av1RateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    /**
     * Specify the number of slices per picture. This value must be 1, 2, 4, 8, 16, or
     * 32. For progressive pictures, this value must be less than or equal to the
     * number of macroblock rows. For interlaced pictures, this value must be less than
     * or equal to half the number of macroblock rows.
     */
    inline int GetSlices() const{ return m_slices; }

    /**
     * Specify the number of slices per picture. This value must be 1, 2, 4, 8, 16, or
     * 32. For progressive pictures, this value must be less than or equal to the
     * number of macroblock rows. For interlaced pictures, this value must be less than
     * or equal to half the number of macroblock rows.
     */
    inline bool SlicesHasBeenSet() const { return m_slicesHasBeenSet; }

    /**
     * Specify the number of slices per picture. This value must be 1, 2, 4, 8, 16, or
     * 32. For progressive pictures, this value must be less than or equal to the
     * number of macroblock rows. For interlaced pictures, this value must be less than
     * or equal to half the number of macroblock rows.
     */
    inline void SetSlices(int value) { m_slicesHasBeenSet = true; m_slices = value; }

    /**
     * Specify the number of slices per picture. This value must be 1, 2, 4, 8, 16, or
     * 32. For progressive pictures, this value must be less than or equal to the
     * number of macroblock rows. For interlaced pictures, this value must be less than
     * or equal to half the number of macroblock rows.
     */
    inline Av1Settings& WithSlices(int value) { SetSlices(value); return *this;}


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
    inline const Av1SpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

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
    inline void SetSpatialAdaptiveQuantization(const Av1SpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

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
    inline void SetSpatialAdaptiveQuantization(Av1SpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

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
    inline Av1Settings& WithSpatialAdaptiveQuantization(const Av1SpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

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
    inline Av1Settings& WithSpatialAdaptiveQuantization(Av1SpatialAdaptiveQuantization&& value) { SetSpatialAdaptiveQuantization(std::move(value)); return *this;}

  private:

    Av1AdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet = false;

    Av1BitDepth m_bitDepth;
    bool m_bitDepthHasBeenSet = false;

    Av1FramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet = false;

    Av1FramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;

    double m_gopSize;
    bool m_gopSizeHasBeenSet = false;

    int m_maxBitrate;
    bool m_maxBitrateHasBeenSet = false;

    int m_numberBFramesBetweenReferenceFrames;
    bool m_numberBFramesBetweenReferenceFramesHasBeenSet = false;

    Av1QvbrSettings m_qvbrSettings;
    bool m_qvbrSettingsHasBeenSet = false;

    Av1RateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet = false;

    int m_slices;
    bool m_slicesHasBeenSet = false;

    Av1SpatialAdaptiveQuantization m_spatialAdaptiveQuantization;
    bool m_spatialAdaptiveQuantizationHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
