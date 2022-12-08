/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/XavcAdaptiveQuantization.h>
#include <aws/mediaconvert/model/XavcEntropyEncoding.h>
#include <aws/mediaconvert/model/XavcFramerateControl.h>
#include <aws/mediaconvert/model/XavcFramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/XavcProfile.h>
#include <aws/mediaconvert/model/XavcSlowPal.h>
#include <aws/mediaconvert/model/XavcSpatialAdaptiveQuantization.h>
#include <aws/mediaconvert/model/XavcTemporalAdaptiveQuantization.h>
#include <aws/mediaconvert/model/Xavc4kIntraCbgProfileSettings.h>
#include <aws/mediaconvert/model/Xavc4kIntraVbrProfileSettings.h>
#include <aws/mediaconvert/model/Xavc4kProfileSettings.h>
#include <aws/mediaconvert/model/XavcHdIntraCbgProfileSettings.h>
#include <aws/mediaconvert/model/XavcHdProfileSettings.h>
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
   * value XAVC.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/XavcSettings">AWS
   * API Reference</a></p>
   */
  class XavcSettings
  {
  public:
    AWS_MEDIACONVERT_API XavcSettings();
    AWS_MEDIACONVERT_API XavcSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API XavcSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set Adaptive
     * quantization (adaptiveQuantization) to a value other than Auto (AUTO). Use this
     * setting to specify the strength of any adaptive quantization filters that you
     * enable. If you don't want MediaConvert to do any adaptive quantization in this
     * transcode, set Adaptive quantization to Off (OFF). Related settings: The value
     * that you choose here applies to the following settings: Flicker adaptive
     * quantization (flickerAdaptiveQuantization), Spatial adaptive quantization
     * (spatialAdaptiveQuantization), and Temporal adaptive quantization
     * (temporalAdaptiveQuantization).
     */
    inline const XavcAdaptiveQuantization& GetAdaptiveQuantization() const{ return m_adaptiveQuantization; }

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set Adaptive
     * quantization (adaptiveQuantization) to a value other than Auto (AUTO). Use this
     * setting to specify the strength of any adaptive quantization filters that you
     * enable. If you don't want MediaConvert to do any adaptive quantization in this
     * transcode, set Adaptive quantization to Off (OFF). Related settings: The value
     * that you choose here applies to the following settings: Flicker adaptive
     * quantization (flickerAdaptiveQuantization), Spatial adaptive quantization
     * (spatialAdaptiveQuantization), and Temporal adaptive quantization
     * (temporalAdaptiveQuantization).
     */
    inline bool AdaptiveQuantizationHasBeenSet() const { return m_adaptiveQuantizationHasBeenSet; }

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set Adaptive
     * quantization (adaptiveQuantization) to a value other than Auto (AUTO). Use this
     * setting to specify the strength of any adaptive quantization filters that you
     * enable. If you don't want MediaConvert to do any adaptive quantization in this
     * transcode, set Adaptive quantization to Off (OFF). Related settings: The value
     * that you choose here applies to the following settings: Flicker adaptive
     * quantization (flickerAdaptiveQuantization), Spatial adaptive quantization
     * (spatialAdaptiveQuantization), and Temporal adaptive quantization
     * (temporalAdaptiveQuantization).
     */
    inline void SetAdaptiveQuantization(const XavcAdaptiveQuantization& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = value; }

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set Adaptive
     * quantization (adaptiveQuantization) to a value other than Auto (AUTO). Use this
     * setting to specify the strength of any adaptive quantization filters that you
     * enable. If you don't want MediaConvert to do any adaptive quantization in this
     * transcode, set Adaptive quantization to Off (OFF). Related settings: The value
     * that you choose here applies to the following settings: Flicker adaptive
     * quantization (flickerAdaptiveQuantization), Spatial adaptive quantization
     * (spatialAdaptiveQuantization), and Temporal adaptive quantization
     * (temporalAdaptiveQuantization).
     */
    inline void SetAdaptiveQuantization(XavcAdaptiveQuantization&& value) { m_adaptiveQuantizationHasBeenSet = true; m_adaptiveQuantization = std::move(value); }

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set Adaptive
     * quantization (adaptiveQuantization) to a value other than Auto (AUTO). Use this
     * setting to specify the strength of any adaptive quantization filters that you
     * enable. If you don't want MediaConvert to do any adaptive quantization in this
     * transcode, set Adaptive quantization to Off (OFF). Related settings: The value
     * that you choose here applies to the following settings: Flicker adaptive
     * quantization (flickerAdaptiveQuantization), Spatial adaptive quantization
     * (spatialAdaptiveQuantization), and Temporal adaptive quantization
     * (temporalAdaptiveQuantization).
     */
    inline XavcSettings& WithAdaptiveQuantization(const XavcAdaptiveQuantization& value) { SetAdaptiveQuantization(value); return *this;}

    /**
     * Keep the default value, Auto (AUTO), for this setting to have MediaConvert
     * automatically apply the best types of quantization for your video content. When
     * you want to apply your quantization settings manually, you must set Adaptive
     * quantization (adaptiveQuantization) to a value other than Auto (AUTO). Use this
     * setting to specify the strength of any adaptive quantization filters that you
     * enable. If you don't want MediaConvert to do any adaptive quantization in this
     * transcode, set Adaptive quantization to Off (OFF). Related settings: The value
     * that you choose here applies to the following settings: Flicker adaptive
     * quantization (flickerAdaptiveQuantization), Spatial adaptive quantization
     * (spatialAdaptiveQuantization), and Temporal adaptive quantization
     * (temporalAdaptiveQuantization).
     */
    inline XavcSettings& WithAdaptiveQuantization(XavcAdaptiveQuantization&& value) { SetAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Optional. Choose a specific entropy encoding mode only when you want to override
     * XAVC recommendations. If you choose the value auto, MediaConvert uses the mode
     * that the XAVC file format specifies given this output's operating point.
     */
    inline const XavcEntropyEncoding& GetEntropyEncoding() const{ return m_entropyEncoding; }

    /**
     * Optional. Choose a specific entropy encoding mode only when you want to override
     * XAVC recommendations. If you choose the value auto, MediaConvert uses the mode
     * that the XAVC file format specifies given this output's operating point.
     */
    inline bool EntropyEncodingHasBeenSet() const { return m_entropyEncodingHasBeenSet; }

    /**
     * Optional. Choose a specific entropy encoding mode only when you want to override
     * XAVC recommendations. If you choose the value auto, MediaConvert uses the mode
     * that the XAVC file format specifies given this output's operating point.
     */
    inline void SetEntropyEncoding(const XavcEntropyEncoding& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = value; }

    /**
     * Optional. Choose a specific entropy encoding mode only when you want to override
     * XAVC recommendations. If you choose the value auto, MediaConvert uses the mode
     * that the XAVC file format specifies given this output's operating point.
     */
    inline void SetEntropyEncoding(XavcEntropyEncoding&& value) { m_entropyEncodingHasBeenSet = true; m_entropyEncoding = std::move(value); }

    /**
     * Optional. Choose a specific entropy encoding mode only when you want to override
     * XAVC recommendations. If you choose the value auto, MediaConvert uses the mode
     * that the XAVC file format specifies given this output's operating point.
     */
    inline XavcSettings& WithEntropyEncoding(const XavcEntropyEncoding& value) { SetEntropyEncoding(value); return *this;}

    /**
     * Optional. Choose a specific entropy encoding mode only when you want to override
     * XAVC recommendations. If you choose the value auto, MediaConvert uses the mode
     * that the XAVC file format specifies given this output's operating point.
     */
    inline XavcSettings& WithEntropyEncoding(XavcEntropyEncoding&& value) { SetEntropyEncoding(std::move(value)); return *this;}


    /**
     * If you are using the console, use the Frame rate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list. The framerates shown in the dropdown list are
     * decimal approximations of fractions. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate that you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline const XavcFramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    /**
     * If you are using the console, use the Frame rate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list. The framerates shown in the dropdown list are
     * decimal approximations of fractions. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate that you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline bool FramerateControlHasBeenSet() const { return m_framerateControlHasBeenSet; }

    /**
     * If you are using the console, use the Frame rate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list. The framerates shown in the dropdown list are
     * decimal approximations of fractions. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate that you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline void SetFramerateControl(const XavcFramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    /**
     * If you are using the console, use the Frame rate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list. The framerates shown in the dropdown list are
     * decimal approximations of fractions. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate that you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline void SetFramerateControl(XavcFramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    /**
     * If you are using the console, use the Frame rate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list. The framerates shown in the dropdown list are
     * decimal approximations of fractions. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate that you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline XavcSettings& WithFramerateControl(const XavcFramerateControl& value) { SetFramerateControl(value); return *this;}

    /**
     * If you are using the console, use the Frame rate setting to specify the frame
     * rate for this output. If you want to keep the same frame rate as the input
     * video, choose Follow source. If you want to do frame rate conversion, choose a
     * frame rate from the dropdown list. The framerates shown in the dropdown list are
     * decimal approximations of fractions. If you are creating your transcoding job
     * specification as a JSON file without the console, use FramerateControl to
     * specify which value the service uses for the frame rate for this output. Choose
     * INITIALIZE_FROM_SOURCE if you want the service to use the frame rate from the
     * input. Choose SPECIFIED if you want the service to use the frame rate that you
     * specify in the settings FramerateNumerator and FramerateDenominator.
     */
    inline XavcSettings& WithFramerateControl(XavcFramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


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
    inline const XavcFramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

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
    inline void SetFramerateConversionAlgorithm(const XavcFramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

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
    inline void SetFramerateConversionAlgorithm(XavcFramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

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
    inline XavcSettings& WithFramerateConversionAlgorithm(const XavcFramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

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
    inline XavcSettings& WithFramerateConversionAlgorithm(XavcFramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Frame rate. In this example, specify 23.976.
     */
    inline int GetFramerateDenominator() const{ return m_framerateDenominator; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Frame rate. In this example, specify 23.976.
     */
    inline bool FramerateDenominatorHasBeenSet() const { return m_framerateDenominatorHasBeenSet; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Frame rate. In this example, specify 23.976.
     */
    inline void SetFramerateDenominator(int value) { m_framerateDenominatorHasBeenSet = true; m_framerateDenominator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateDenominator to specify the denominator of this fraction. In this
     * example, use 1001 for the value of FramerateDenominator. When you use the
     * console for transcode jobs that use frame rate conversion, provide the value as
     * a decimal number for Frame rate. In this example, specify 23.976.
     */
    inline XavcSettings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example, 24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator. When you use the console for
     * transcode jobs that use frame rate conversion, provide the value as a decimal
     * number for Framerate. In this example, specify 23.976.
     */
    inline XavcSettings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    /**
     * Specify the XAVC profile for this output. For more information, see the Sony
     * documentation at https://www.xavc-info.org/. Note that MediaConvert doesn't
     * support the interlaced video XAVC operating points for XAVC_HD_INTRA_CBG. To
     * create an interlaced XAVC output, choose the profile XAVC_HD.
     */
    inline const XavcProfile& GetProfile() const{ return m_profile; }

    /**
     * Specify the XAVC profile for this output. For more information, see the Sony
     * documentation at https://www.xavc-info.org/. Note that MediaConvert doesn't
     * support the interlaced video XAVC operating points for XAVC_HD_INTRA_CBG. To
     * create an interlaced XAVC output, choose the profile XAVC_HD.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * Specify the XAVC profile for this output. For more information, see the Sony
     * documentation at https://www.xavc-info.org/. Note that MediaConvert doesn't
     * support the interlaced video XAVC operating points for XAVC_HD_INTRA_CBG. To
     * create an interlaced XAVC output, choose the profile XAVC_HD.
     */
    inline void SetProfile(const XavcProfile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * Specify the XAVC profile for this output. For more information, see the Sony
     * documentation at https://www.xavc-info.org/. Note that MediaConvert doesn't
     * support the interlaced video XAVC operating points for XAVC_HD_INTRA_CBG. To
     * create an interlaced XAVC output, choose the profile XAVC_HD.
     */
    inline void SetProfile(XavcProfile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * Specify the XAVC profile for this output. For more information, see the Sony
     * documentation at https://www.xavc-info.org/. Note that MediaConvert doesn't
     * support the interlaced video XAVC operating points for XAVC_HD_INTRA_CBG. To
     * create an interlaced XAVC output, choose the profile XAVC_HD.
     */
    inline XavcSettings& WithProfile(const XavcProfile& value) { SetProfile(value); return *this;}

    /**
     * Specify the XAVC profile for this output. For more information, see the Sony
     * documentation at https://www.xavc-info.org/. Note that MediaConvert doesn't
     * support the interlaced video XAVC operating points for XAVC_HD_INTRA_CBG. To
     * create an interlaced XAVC output, choose the profile XAVC_HD.
     */
    inline XavcSettings& WithProfile(XavcProfile&& value) { SetProfile(std::move(value)); return *this;}


    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Frame
     * rate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline const XavcSlowPal& GetSlowPal() const{ return m_slowPal; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Frame
     * rate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Frame
     * rate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline void SetSlowPal(const XavcSlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Frame
     * rate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline void SetSlowPal(XavcSlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Frame
     * rate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline XavcSettings& WithSlowPal(const XavcSlowPal& value) { SetSlowPal(value); return *this;}

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output by relabeling the video
     * frames and resampling your audio. Note that enabling this setting will slightly
     * reduce the duration of your video. Related settings: You must also set Frame
     * rate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline XavcSettings& WithSlowPal(XavcSlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    /**
     * Ignore this setting unless your downstream workflow requires that you specify it
     * explicitly. Otherwise, we recommend that you adjust the softness of your output
     * by using a lower value for the setting Sharpness (sharpness) or by enabling a
     * noise reducer filter (noiseReducerFilter). The Softness (softness) setting
     * specifies the quantization matrices that the encoder uses. Keep the default
     * value, 0, for flat quantization. Choose the value 1 or 16 to use the default JVT
     * softening quantization matricies from the H.264 specification. Choose a value
     * from 17 to 128 to use planar interpolation. Increasing values from 17 to 128
     * result in increasing reduction of high-frequency data. The value 128 results in
     * the softest video.
     */
    inline int GetSoftness() const{ return m_softness; }

    /**
     * Ignore this setting unless your downstream workflow requires that you specify it
     * explicitly. Otherwise, we recommend that you adjust the softness of your output
     * by using a lower value for the setting Sharpness (sharpness) or by enabling a
     * noise reducer filter (noiseReducerFilter). The Softness (softness) setting
     * specifies the quantization matrices that the encoder uses. Keep the default
     * value, 0, for flat quantization. Choose the value 1 or 16 to use the default JVT
     * softening quantization matricies from the H.264 specification. Choose a value
     * from 17 to 128 to use planar interpolation. Increasing values from 17 to 128
     * result in increasing reduction of high-frequency data. The value 128 results in
     * the softest video.
     */
    inline bool SoftnessHasBeenSet() const { return m_softnessHasBeenSet; }

    /**
     * Ignore this setting unless your downstream workflow requires that you specify it
     * explicitly. Otherwise, we recommend that you adjust the softness of your output
     * by using a lower value for the setting Sharpness (sharpness) or by enabling a
     * noise reducer filter (noiseReducerFilter). The Softness (softness) setting
     * specifies the quantization matrices that the encoder uses. Keep the default
     * value, 0, for flat quantization. Choose the value 1 or 16 to use the default JVT
     * softening quantization matricies from the H.264 specification. Choose a value
     * from 17 to 128 to use planar interpolation. Increasing values from 17 to 128
     * result in increasing reduction of high-frequency data. The value 128 results in
     * the softest video.
     */
    inline void SetSoftness(int value) { m_softnessHasBeenSet = true; m_softness = value; }

    /**
     * Ignore this setting unless your downstream workflow requires that you specify it
     * explicitly. Otherwise, we recommend that you adjust the softness of your output
     * by using a lower value for the setting Sharpness (sharpness) or by enabling a
     * noise reducer filter (noiseReducerFilter). The Softness (softness) setting
     * specifies the quantization matrices that the encoder uses. Keep the default
     * value, 0, for flat quantization. Choose the value 1 or 16 to use the default JVT
     * softening quantization matricies from the H.264 specification. Choose a value
     * from 17 to 128 to use planar interpolation. Increasing values from 17 to 128
     * result in increasing reduction of high-frequency data. The value 128 results in
     * the softest video.
     */
    inline XavcSettings& WithSoftness(int value) { SetSoftness(value); return *this;}


    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on spatial variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas that can sustain more
     * distortion with no noticeable visual degradation and uses more bits on areas
     * where any small distortion will be noticeable. For example, complex textured
     * blocks are encoded with fewer bits and smooth textured blocks are encoded with
     * more bits. Enabling this feature will almost always improve your video quality.
     * Note, though, that this feature doesn't take into account where the viewer's
     * attention is likely to be. If viewers are likely to be focusing their attention
     * on a part of the screen with a lot of complex texture, you might choose to
     * disable this feature. Related setting: When you enable spatial adaptive
     * quantization, set the value for Adaptive quantization (adaptiveQuantization)
     * depending on your content. For homogeneous content, such as cartoons and video
     * games, set it to Low. For content with a wider variety of textures, set it to
     * High or Higher.
     */
    inline const XavcSpatialAdaptiveQuantization& GetSpatialAdaptiveQuantization() const{ return m_spatialAdaptiveQuantization; }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on spatial variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas that can sustain more
     * distortion with no noticeable visual degradation and uses more bits on areas
     * where any small distortion will be noticeable. For example, complex textured
     * blocks are encoded with fewer bits and smooth textured blocks are encoded with
     * more bits. Enabling this feature will almost always improve your video quality.
     * Note, though, that this feature doesn't take into account where the viewer's
     * attention is likely to be. If viewers are likely to be focusing their attention
     * on a part of the screen with a lot of complex texture, you might choose to
     * disable this feature. Related setting: When you enable spatial adaptive
     * quantization, set the value for Adaptive quantization (adaptiveQuantization)
     * depending on your content. For homogeneous content, such as cartoons and video
     * games, set it to Low. For content with a wider variety of textures, set it to
     * High or Higher.
     */
    inline bool SpatialAdaptiveQuantizationHasBeenSet() const { return m_spatialAdaptiveQuantizationHasBeenSet; }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on spatial variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas that can sustain more
     * distortion with no noticeable visual degradation and uses more bits on areas
     * where any small distortion will be noticeable. For example, complex textured
     * blocks are encoded with fewer bits and smooth textured blocks are encoded with
     * more bits. Enabling this feature will almost always improve your video quality.
     * Note, though, that this feature doesn't take into account where the viewer's
     * attention is likely to be. If viewers are likely to be focusing their attention
     * on a part of the screen with a lot of complex texture, you might choose to
     * disable this feature. Related setting: When you enable spatial adaptive
     * quantization, set the value for Adaptive quantization (adaptiveQuantization)
     * depending on your content. For homogeneous content, such as cartoons and video
     * games, set it to Low. For content with a wider variety of textures, set it to
     * High or Higher.
     */
    inline void SetSpatialAdaptiveQuantization(const XavcSpatialAdaptiveQuantization& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = value; }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on spatial variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas that can sustain more
     * distortion with no noticeable visual degradation and uses more bits on areas
     * where any small distortion will be noticeable. For example, complex textured
     * blocks are encoded with fewer bits and smooth textured blocks are encoded with
     * more bits. Enabling this feature will almost always improve your video quality.
     * Note, though, that this feature doesn't take into account where the viewer's
     * attention is likely to be. If viewers are likely to be focusing their attention
     * on a part of the screen with a lot of complex texture, you might choose to
     * disable this feature. Related setting: When you enable spatial adaptive
     * quantization, set the value for Adaptive quantization (adaptiveQuantization)
     * depending on your content. For homogeneous content, such as cartoons and video
     * games, set it to Low. For content with a wider variety of textures, set it to
     * High or Higher.
     */
    inline void SetSpatialAdaptiveQuantization(XavcSpatialAdaptiveQuantization&& value) { m_spatialAdaptiveQuantizationHasBeenSet = true; m_spatialAdaptiveQuantization = std::move(value); }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on spatial variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas that can sustain more
     * distortion with no noticeable visual degradation and uses more bits on areas
     * where any small distortion will be noticeable. For example, complex textured
     * blocks are encoded with fewer bits and smooth textured blocks are encoded with
     * more bits. Enabling this feature will almost always improve your video quality.
     * Note, though, that this feature doesn't take into account where the viewer's
     * attention is likely to be. If viewers are likely to be focusing their attention
     * on a part of the screen with a lot of complex texture, you might choose to
     * disable this feature. Related setting: When you enable spatial adaptive
     * quantization, set the value for Adaptive quantization (adaptiveQuantization)
     * depending on your content. For homogeneous content, such as cartoons and video
     * games, set it to Low. For content with a wider variety of textures, set it to
     * High or Higher.
     */
    inline XavcSettings& WithSpatialAdaptiveQuantization(const XavcSpatialAdaptiveQuantization& value) { SetSpatialAdaptiveQuantization(value); return *this;}

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on spatial variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas that can sustain more
     * distortion with no noticeable visual degradation and uses more bits on areas
     * where any small distortion will be noticeable. For example, complex textured
     * blocks are encoded with fewer bits and smooth textured blocks are encoded with
     * more bits. Enabling this feature will almost always improve your video quality.
     * Note, though, that this feature doesn't take into account where the viewer's
     * attention is likely to be. If viewers are likely to be focusing their attention
     * on a part of the screen with a lot of complex texture, you might choose to
     * disable this feature. Related setting: When you enable spatial adaptive
     * quantization, set the value for Adaptive quantization (adaptiveQuantization)
     * depending on your content. For homogeneous content, such as cartoons and video
     * games, set it to Low. For content with a wider variety of textures, set it to
     * High or Higher.
     */
    inline XavcSettings& WithSpatialAdaptiveQuantization(XavcSpatialAdaptiveQuantization&& value) { SetSpatialAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on temporal variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas of the frame that
     * aren't moving and uses more bits on complex objects with sharp edges that move a
     * lot. For example, this feature improves the readability of text tickers on
     * newscasts and scoreboards on sports matches. Enabling this feature will almost
     * always improve your video quality. Note, though, that this feature doesn't take
     * into account where the viewer's attention is likely to be. If viewers are likely
     * to be focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal adaptive
     * quantization, adjust the strength of the filter with the setting Adaptive
     * quantization (adaptiveQuantization).
     */
    inline const XavcTemporalAdaptiveQuantization& GetTemporalAdaptiveQuantization() const{ return m_temporalAdaptiveQuantization; }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on temporal variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas of the frame that
     * aren't moving and uses more bits on complex objects with sharp edges that move a
     * lot. For example, this feature improves the readability of text tickers on
     * newscasts and scoreboards on sports matches. Enabling this feature will almost
     * always improve your video quality. Note, though, that this feature doesn't take
     * into account where the viewer's attention is likely to be. If viewers are likely
     * to be focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal adaptive
     * quantization, adjust the strength of the filter with the setting Adaptive
     * quantization (adaptiveQuantization).
     */
    inline bool TemporalAdaptiveQuantizationHasBeenSet() const { return m_temporalAdaptiveQuantizationHasBeenSet; }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on temporal variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas of the frame that
     * aren't moving and uses more bits on complex objects with sharp edges that move a
     * lot. For example, this feature improves the readability of text tickers on
     * newscasts and scoreboards on sports matches. Enabling this feature will almost
     * always improve your video quality. Note, though, that this feature doesn't take
     * into account where the viewer's attention is likely to be. If viewers are likely
     * to be focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal adaptive
     * quantization, adjust the strength of the filter with the setting Adaptive
     * quantization (adaptiveQuantization).
     */
    inline void SetTemporalAdaptiveQuantization(const XavcTemporalAdaptiveQuantization& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = value; }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on temporal variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas of the frame that
     * aren't moving and uses more bits on complex objects with sharp edges that move a
     * lot. For example, this feature improves the readability of text tickers on
     * newscasts and scoreboards on sports matches. Enabling this feature will almost
     * always improve your video quality. Note, though, that this feature doesn't take
     * into account where the viewer's attention is likely to be. If viewers are likely
     * to be focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal adaptive
     * quantization, adjust the strength of the filter with the setting Adaptive
     * quantization (adaptiveQuantization).
     */
    inline void SetTemporalAdaptiveQuantization(XavcTemporalAdaptiveQuantization&& value) { m_temporalAdaptiveQuantizationHasBeenSet = true; m_temporalAdaptiveQuantization = std::move(value); }

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on temporal variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas of the frame that
     * aren't moving and uses more bits on complex objects with sharp edges that move a
     * lot. For example, this feature improves the readability of text tickers on
     * newscasts and scoreboards on sports matches. Enabling this feature will almost
     * always improve your video quality. Note, though, that this feature doesn't take
     * into account where the viewer's attention is likely to be. If viewers are likely
     * to be focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal adaptive
     * quantization, adjust the strength of the filter with the setting Adaptive
     * quantization (adaptiveQuantization).
     */
    inline XavcSettings& WithTemporalAdaptiveQuantization(const XavcTemporalAdaptiveQuantization& value) { SetTemporalAdaptiveQuantization(value); return *this;}

    /**
     * The best way to set up adaptive quantization is to keep the default value, Auto
     * (AUTO), for the setting Adaptive quantization (adaptiveQuantization). When you
     * do so, MediaConvert automatically applies the best types of quantization for
     * your video content. Include this setting in your JSON job specification only
     * when you choose to change the default value for Adaptive quantization. For this
     * setting, keep the default value, Enabled (ENABLED), to adjust quantization
     * within each frame based on temporal variation of content complexity. When you
     * enable this feature, the encoder uses fewer bits on areas of the frame that
     * aren't moving and uses more bits on complex objects with sharp edges that move a
     * lot. For example, this feature improves the readability of text tickers on
     * newscasts and scoreboards on sports matches. Enabling this feature will almost
     * always improve your video quality. Note, though, that this feature doesn't take
     * into account where the viewer's attention is likely to be. If viewers are likely
     * to be focusing their attention on a part of the screen that doesn't have moving
     * objects with sharp edges, such as sports athletes' faces, you might choose to
     * disable this feature. Related setting: When you enable temporal adaptive
     * quantization, adjust the strength of the filter with the setting Adaptive
     * quantization (adaptiveQuantization).
     */
    inline XavcSettings& WithTemporalAdaptiveQuantization(XavcTemporalAdaptiveQuantization&& value) { SetTemporalAdaptiveQuantization(std::move(value)); return *this;}


    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_CBG.
     */
    inline const Xavc4kIntraCbgProfileSettings& GetXavc4kIntraCbgProfileSettings() const{ return m_xavc4kIntraCbgProfileSettings; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_CBG.
     */
    inline bool Xavc4kIntraCbgProfileSettingsHasBeenSet() const { return m_xavc4kIntraCbgProfileSettingsHasBeenSet; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_CBG.
     */
    inline void SetXavc4kIntraCbgProfileSettings(const Xavc4kIntraCbgProfileSettings& value) { m_xavc4kIntraCbgProfileSettingsHasBeenSet = true; m_xavc4kIntraCbgProfileSettings = value; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_CBG.
     */
    inline void SetXavc4kIntraCbgProfileSettings(Xavc4kIntraCbgProfileSettings&& value) { m_xavc4kIntraCbgProfileSettingsHasBeenSet = true; m_xavc4kIntraCbgProfileSettings = std::move(value); }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_CBG.
     */
    inline XavcSettings& WithXavc4kIntraCbgProfileSettings(const Xavc4kIntraCbgProfileSettings& value) { SetXavc4kIntraCbgProfileSettings(value); return *this;}

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_CBG.
     */
    inline XavcSettings& WithXavc4kIntraCbgProfileSettings(Xavc4kIntraCbgProfileSettings&& value) { SetXavc4kIntraCbgProfileSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_VBR.
     */
    inline const Xavc4kIntraVbrProfileSettings& GetXavc4kIntraVbrProfileSettings() const{ return m_xavc4kIntraVbrProfileSettings; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_VBR.
     */
    inline bool Xavc4kIntraVbrProfileSettingsHasBeenSet() const { return m_xavc4kIntraVbrProfileSettingsHasBeenSet; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_VBR.
     */
    inline void SetXavc4kIntraVbrProfileSettings(const Xavc4kIntraVbrProfileSettings& value) { m_xavc4kIntraVbrProfileSettingsHasBeenSet = true; m_xavc4kIntraVbrProfileSettings = value; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_VBR.
     */
    inline void SetXavc4kIntraVbrProfileSettings(Xavc4kIntraVbrProfileSettings&& value) { m_xavc4kIntraVbrProfileSettingsHasBeenSet = true; m_xavc4kIntraVbrProfileSettings = std::move(value); }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_VBR.
     */
    inline XavcSettings& WithXavc4kIntraVbrProfileSettings(const Xavc4kIntraVbrProfileSettings& value) { SetXavc4kIntraVbrProfileSettings(value); return *this;}

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_4K_INTRA_VBR.
     */
    inline XavcSettings& WithXavc4kIntraVbrProfileSettings(Xavc4kIntraVbrProfileSettings&& value) { SetXavc4kIntraVbrProfileSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_4K.
     */
    inline const Xavc4kProfileSettings& GetXavc4kProfileSettings() const{ return m_xavc4kProfileSettings; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_4K.
     */
    inline bool Xavc4kProfileSettingsHasBeenSet() const { return m_xavc4kProfileSettingsHasBeenSet; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_4K.
     */
    inline void SetXavc4kProfileSettings(const Xavc4kProfileSettings& value) { m_xavc4kProfileSettingsHasBeenSet = true; m_xavc4kProfileSettings = value; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_4K.
     */
    inline void SetXavc4kProfileSettings(Xavc4kProfileSettings&& value) { m_xavc4kProfileSettingsHasBeenSet = true; m_xavc4kProfileSettings = std::move(value); }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_4K.
     */
    inline XavcSettings& WithXavc4kProfileSettings(const Xavc4kProfileSettings& value) { SetXavc4kProfileSettings(value); return *this;}

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_4K.
     */
    inline XavcSettings& WithXavc4kProfileSettings(Xavc4kProfileSettings&& value) { SetXavc4kProfileSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_HD_INTRA_CBG.
     */
    inline const XavcHdIntraCbgProfileSettings& GetXavcHdIntraCbgProfileSettings() const{ return m_xavcHdIntraCbgProfileSettings; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_HD_INTRA_CBG.
     */
    inline bool XavcHdIntraCbgProfileSettingsHasBeenSet() const { return m_xavcHdIntraCbgProfileSettingsHasBeenSet; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_HD_INTRA_CBG.
     */
    inline void SetXavcHdIntraCbgProfileSettings(const XavcHdIntraCbgProfileSettings& value) { m_xavcHdIntraCbgProfileSettingsHasBeenSet = true; m_xavcHdIntraCbgProfileSettings = value; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_HD_INTRA_CBG.
     */
    inline void SetXavcHdIntraCbgProfileSettings(XavcHdIntraCbgProfileSettings&& value) { m_xavcHdIntraCbgProfileSettingsHasBeenSet = true; m_xavcHdIntraCbgProfileSettings = std::move(value); }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_HD_INTRA_CBG.
     */
    inline XavcSettings& WithXavcHdIntraCbgProfileSettings(const XavcHdIntraCbgProfileSettings& value) { SetXavcHdIntraCbgProfileSettings(value); return *this;}

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value
     * XAVC_HD_INTRA_CBG.
     */
    inline XavcSettings& WithXavcHdIntraCbgProfileSettings(XavcHdIntraCbgProfileSettings&& value) { SetXavcHdIntraCbgProfileSettings(std::move(value)); return *this;}


    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_HD.
     */
    inline const XavcHdProfileSettings& GetXavcHdProfileSettings() const{ return m_xavcHdProfileSettings; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_HD.
     */
    inline bool XavcHdProfileSettingsHasBeenSet() const { return m_xavcHdProfileSettingsHasBeenSet; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_HD.
     */
    inline void SetXavcHdProfileSettings(const XavcHdProfileSettings& value) { m_xavcHdProfileSettingsHasBeenSet = true; m_xavcHdProfileSettings = value; }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_HD.
     */
    inline void SetXavcHdProfileSettings(XavcHdProfileSettings&& value) { m_xavcHdProfileSettingsHasBeenSet = true; m_xavcHdProfileSettings = std::move(value); }

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_HD.
     */
    inline XavcSettings& WithXavcHdProfileSettings(const XavcHdProfileSettings& value) { SetXavcHdProfileSettings(value); return *this;}

    /**
     * Required when you set (Profile) under
     * (VideoDescription)>(CodecSettings)>(XavcSettings) to the value XAVC_HD.
     */
    inline XavcSettings& WithXavcHdProfileSettings(XavcHdProfileSettings&& value) { SetXavcHdProfileSettings(std::move(value)); return *this;}

  private:

    XavcAdaptiveQuantization m_adaptiveQuantization;
    bool m_adaptiveQuantizationHasBeenSet = false;

    XavcEntropyEncoding m_entropyEncoding;
    bool m_entropyEncodingHasBeenSet = false;

    XavcFramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet = false;

    XavcFramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;

    XavcProfile m_profile;
    bool m_profileHasBeenSet = false;

    XavcSlowPal m_slowPal;
    bool m_slowPalHasBeenSet = false;

    int m_softness;
    bool m_softnessHasBeenSet = false;

    XavcSpatialAdaptiveQuantization m_spatialAdaptiveQuantization;
    bool m_spatialAdaptiveQuantizationHasBeenSet = false;

    XavcTemporalAdaptiveQuantization m_temporalAdaptiveQuantization;
    bool m_temporalAdaptiveQuantizationHasBeenSet = false;

    Xavc4kIntraCbgProfileSettings m_xavc4kIntraCbgProfileSettings;
    bool m_xavc4kIntraCbgProfileSettingsHasBeenSet = false;

    Xavc4kIntraVbrProfileSettings m_xavc4kIntraVbrProfileSettings;
    bool m_xavc4kIntraVbrProfileSettingsHasBeenSet = false;

    Xavc4kProfileSettings m_xavc4kProfileSettings;
    bool m_xavc4kProfileSettingsHasBeenSet = false;

    XavcHdIntraCbgProfileSettings m_xavcHdIntraCbgProfileSettings;
    bool m_xavcHdIntraCbgProfileSettingsHasBeenSet = false;

    XavcHdProfileSettings m_xavcHdProfileSettings;
    bool m_xavcHdProfileSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
