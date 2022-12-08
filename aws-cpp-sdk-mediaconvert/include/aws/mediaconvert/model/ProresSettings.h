/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ProresChromaSampling.h>
#include <aws/mediaconvert/model/ProresCodecProfile.h>
#include <aws/mediaconvert/model/ProresFramerateControl.h>
#include <aws/mediaconvert/model/ProresFramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/ProresInterlaceMode.h>
#include <aws/mediaconvert/model/ProresParControl.h>
#include <aws/mediaconvert/model/ProresScanTypeConversionMode.h>
#include <aws/mediaconvert/model/ProresSlowPal.h>
#include <aws/mediaconvert/model/ProresTelecine.h>
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
   * value PRORES.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ProresSettings">AWS
   * API Reference</a></p>
   */
  class ProresSettings
  {
  public:
    AWS_MEDIACONVERT_API ProresSettings();
    AWS_MEDIACONVERT_API ProresSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ProresSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * This setting applies only to ProRes 4444 and ProRes 4444 XQ outputs that you
     * create from inputs that use 4:4:4 chroma sampling. Set Preserve 4:4:4 sampling
     * (PRESERVE_444_SAMPLING) to allow outputs to also use 4:4:4 chroma sampling. You
     * must specify a value for this setting when your output codec profile supports
     * 4:4:4 chroma sampling. Related Settings: When you set Chroma sampling to
     * Preserve 4:4:4 sampling (PRESERVE_444_SAMPLING), you must choose an output codec
     * profile that supports 4:4:4 chroma sampling. These values for Profile
     * (CodecProfile) support 4:4:4 chroma sampling: Apple ProRes 4444
     * (APPLE_PRORES_4444) or Apple ProRes 4444 XQ (APPLE_PRORES_4444_XQ). When you set
     * Chroma sampling to Preserve 4:4:4 sampling, you must disable all video
     * preprocessors except for Nexguard file marker (PartnerWatermarking). When you
     * set Chroma sampling to Preserve 4:4:4 sampling and use framerate conversion, you
     * must set Frame rate conversion algorithm (FramerateConversionAlgorithm) to Drop
     * duplicate (DUPLICATE_DROP).
     */
    inline const ProresChromaSampling& GetChromaSampling() const{ return m_chromaSampling; }

    /**
     * This setting applies only to ProRes 4444 and ProRes 4444 XQ outputs that you
     * create from inputs that use 4:4:4 chroma sampling. Set Preserve 4:4:4 sampling
     * (PRESERVE_444_SAMPLING) to allow outputs to also use 4:4:4 chroma sampling. You
     * must specify a value for this setting when your output codec profile supports
     * 4:4:4 chroma sampling. Related Settings: When you set Chroma sampling to
     * Preserve 4:4:4 sampling (PRESERVE_444_SAMPLING), you must choose an output codec
     * profile that supports 4:4:4 chroma sampling. These values for Profile
     * (CodecProfile) support 4:4:4 chroma sampling: Apple ProRes 4444
     * (APPLE_PRORES_4444) or Apple ProRes 4444 XQ (APPLE_PRORES_4444_XQ). When you set
     * Chroma sampling to Preserve 4:4:4 sampling, you must disable all video
     * preprocessors except for Nexguard file marker (PartnerWatermarking). When you
     * set Chroma sampling to Preserve 4:4:4 sampling and use framerate conversion, you
     * must set Frame rate conversion algorithm (FramerateConversionAlgorithm) to Drop
     * duplicate (DUPLICATE_DROP).
     */
    inline bool ChromaSamplingHasBeenSet() const { return m_chromaSamplingHasBeenSet; }

    /**
     * This setting applies only to ProRes 4444 and ProRes 4444 XQ outputs that you
     * create from inputs that use 4:4:4 chroma sampling. Set Preserve 4:4:4 sampling
     * (PRESERVE_444_SAMPLING) to allow outputs to also use 4:4:4 chroma sampling. You
     * must specify a value for this setting when your output codec profile supports
     * 4:4:4 chroma sampling. Related Settings: When you set Chroma sampling to
     * Preserve 4:4:4 sampling (PRESERVE_444_SAMPLING), you must choose an output codec
     * profile that supports 4:4:4 chroma sampling. These values for Profile
     * (CodecProfile) support 4:4:4 chroma sampling: Apple ProRes 4444
     * (APPLE_PRORES_4444) or Apple ProRes 4444 XQ (APPLE_PRORES_4444_XQ). When you set
     * Chroma sampling to Preserve 4:4:4 sampling, you must disable all video
     * preprocessors except for Nexguard file marker (PartnerWatermarking). When you
     * set Chroma sampling to Preserve 4:4:4 sampling and use framerate conversion, you
     * must set Frame rate conversion algorithm (FramerateConversionAlgorithm) to Drop
     * duplicate (DUPLICATE_DROP).
     */
    inline void SetChromaSampling(const ProresChromaSampling& value) { m_chromaSamplingHasBeenSet = true; m_chromaSampling = value; }

    /**
     * This setting applies only to ProRes 4444 and ProRes 4444 XQ outputs that you
     * create from inputs that use 4:4:4 chroma sampling. Set Preserve 4:4:4 sampling
     * (PRESERVE_444_SAMPLING) to allow outputs to also use 4:4:4 chroma sampling. You
     * must specify a value for this setting when your output codec profile supports
     * 4:4:4 chroma sampling. Related Settings: When you set Chroma sampling to
     * Preserve 4:4:4 sampling (PRESERVE_444_SAMPLING), you must choose an output codec
     * profile that supports 4:4:4 chroma sampling. These values for Profile
     * (CodecProfile) support 4:4:4 chroma sampling: Apple ProRes 4444
     * (APPLE_PRORES_4444) or Apple ProRes 4444 XQ (APPLE_PRORES_4444_XQ). When you set
     * Chroma sampling to Preserve 4:4:4 sampling, you must disable all video
     * preprocessors except for Nexguard file marker (PartnerWatermarking). When you
     * set Chroma sampling to Preserve 4:4:4 sampling and use framerate conversion, you
     * must set Frame rate conversion algorithm (FramerateConversionAlgorithm) to Drop
     * duplicate (DUPLICATE_DROP).
     */
    inline void SetChromaSampling(ProresChromaSampling&& value) { m_chromaSamplingHasBeenSet = true; m_chromaSampling = std::move(value); }

    /**
     * This setting applies only to ProRes 4444 and ProRes 4444 XQ outputs that you
     * create from inputs that use 4:4:4 chroma sampling. Set Preserve 4:4:4 sampling
     * (PRESERVE_444_SAMPLING) to allow outputs to also use 4:4:4 chroma sampling. You
     * must specify a value for this setting when your output codec profile supports
     * 4:4:4 chroma sampling. Related Settings: When you set Chroma sampling to
     * Preserve 4:4:4 sampling (PRESERVE_444_SAMPLING), you must choose an output codec
     * profile that supports 4:4:4 chroma sampling. These values for Profile
     * (CodecProfile) support 4:4:4 chroma sampling: Apple ProRes 4444
     * (APPLE_PRORES_4444) or Apple ProRes 4444 XQ (APPLE_PRORES_4444_XQ). When you set
     * Chroma sampling to Preserve 4:4:4 sampling, you must disable all video
     * preprocessors except for Nexguard file marker (PartnerWatermarking). When you
     * set Chroma sampling to Preserve 4:4:4 sampling and use framerate conversion, you
     * must set Frame rate conversion algorithm (FramerateConversionAlgorithm) to Drop
     * duplicate (DUPLICATE_DROP).
     */
    inline ProresSettings& WithChromaSampling(const ProresChromaSampling& value) { SetChromaSampling(value); return *this;}

    /**
     * This setting applies only to ProRes 4444 and ProRes 4444 XQ outputs that you
     * create from inputs that use 4:4:4 chroma sampling. Set Preserve 4:4:4 sampling
     * (PRESERVE_444_SAMPLING) to allow outputs to also use 4:4:4 chroma sampling. You
     * must specify a value for this setting when your output codec profile supports
     * 4:4:4 chroma sampling. Related Settings: When you set Chroma sampling to
     * Preserve 4:4:4 sampling (PRESERVE_444_SAMPLING), you must choose an output codec
     * profile that supports 4:4:4 chroma sampling. These values for Profile
     * (CodecProfile) support 4:4:4 chroma sampling: Apple ProRes 4444
     * (APPLE_PRORES_4444) or Apple ProRes 4444 XQ (APPLE_PRORES_4444_XQ). When you set
     * Chroma sampling to Preserve 4:4:4 sampling, you must disable all video
     * preprocessors except for Nexguard file marker (PartnerWatermarking). When you
     * set Chroma sampling to Preserve 4:4:4 sampling and use framerate conversion, you
     * must set Frame rate conversion algorithm (FramerateConversionAlgorithm) to Drop
     * duplicate (DUPLICATE_DROP).
     */
    inline ProresSettings& WithChromaSampling(ProresChromaSampling&& value) { SetChromaSampling(std::move(value)); return *this;}


    /**
     * Use Profile (ProResCodecProfile) to specify the type of Apple ProRes codec to
     * use for this output.
     */
    inline const ProresCodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    /**
     * Use Profile (ProResCodecProfile) to specify the type of Apple ProRes codec to
     * use for this output.
     */
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }

    /**
     * Use Profile (ProResCodecProfile) to specify the type of Apple ProRes codec to
     * use for this output.
     */
    inline void SetCodecProfile(const ProresCodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    /**
     * Use Profile (ProResCodecProfile) to specify the type of Apple ProRes codec to
     * use for this output.
     */
    inline void SetCodecProfile(ProresCodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    /**
     * Use Profile (ProResCodecProfile) to specify the type of Apple ProRes codec to
     * use for this output.
     */
    inline ProresSettings& WithCodecProfile(const ProresCodecProfile& value) { SetCodecProfile(value); return *this;}

    /**
     * Use Profile (ProResCodecProfile) to specify the type of Apple ProRes codec to
     * use for this output.
     */
    inline ProresSettings& WithCodecProfile(ProresCodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


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
    inline const ProresFramerateControl& GetFramerateControl() const{ return m_framerateControl; }

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
    inline void SetFramerateControl(const ProresFramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

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
    inline void SetFramerateControl(ProresFramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

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
    inline ProresSettings& WithFramerateControl(const ProresFramerateControl& value) { SetFramerateControl(value); return *this;}

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
    inline ProresSettings& WithFramerateControl(ProresFramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


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
    inline const ProresFramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

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
    inline void SetFramerateConversionAlgorithm(const ProresFramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

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
    inline void SetFramerateConversionAlgorithm(ProresFramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

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
    inline ProresSettings& WithFramerateConversionAlgorithm(const ProresFramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

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
    inline ProresSettings& WithFramerateConversionAlgorithm(ProresFramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


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
    inline ProresSettings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


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
    inline ProresSettings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


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
    inline const ProresInterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

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
    inline void SetInterlaceMode(const ProresInterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

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
    inline void SetInterlaceMode(ProresInterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

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
    inline ProresSettings& WithInterlaceMode(const ProresInterlaceMode& value) { SetInterlaceMode(value); return *this;}

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
    inline ProresSettings& WithInterlaceMode(ProresInterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline const ProresParControl& GetParControl() const{ return m_parControl; }

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
    inline void SetParControl(const ProresParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline void SetParControl(ProresParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline ProresSettings& WithParControl(const ProresParControl& value) { SetParControl(value); return *this;}

    /**
     * Optional. Specify how the service determines the pixel aspect ratio (PAR) for
     * this output. The default behavior, Follow source (INITIALIZE_FROM_SOURCE), uses
     * the PAR from your input video for your output. To specify a different PAR in the
     * console, choose any value other than Follow source. To specify a different PAR
     * by editing the JSON job specification, choose SPECIFIED. When you choose
     * SPECIFIED for this setting, you must also specify values for the parNumerator
     * and parDenominator settings.
     */
    inline ProresSettings& WithParControl(ProresParControl&& value) { SetParControl(std::move(value)); return *this;}


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
    inline ProresSettings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


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
    inline ProresSettings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


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
    inline const ProresScanTypeConversionMode& GetScanTypeConversionMode() const{ return m_scanTypeConversionMode; }

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
    inline void SetScanTypeConversionMode(const ProresScanTypeConversionMode& value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = value; }

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
    inline void SetScanTypeConversionMode(ProresScanTypeConversionMode&& value) { m_scanTypeConversionModeHasBeenSet = true; m_scanTypeConversionMode = std::move(value); }

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
    inline ProresSettings& WithScanTypeConversionMode(const ProresScanTypeConversionMode& value) { SetScanTypeConversionMode(value); return *this;}

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
    inline ProresSettings& WithScanTypeConversionMode(ProresScanTypeConversionMode&& value) { SetScanTypeConversionMode(std::move(value)); return *this;}


    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline const ProresSlowPal& GetSlowPal() const{ return m_slowPal; }

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
    inline void SetSlowPal(const ProresSlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline void SetSlowPal(ProresSlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline ProresSettings& WithSlowPal(const ProresSlowPal& value) { SetSlowPal(value); return *this;}

    /**
     * Ignore this setting unless your input frame rate is 23.976 or 24 frames per
     * second (fps). Enable slow PAL to create a 25 fps output. When you enable slow
     * PAL, MediaConvert relabels the video frames to 25 fps and resamples your audio
     * to keep it synchronized with the video. Note that enabling this setting will
     * slightly reduce the duration of your video. Required settings: You must also set
     * Framerate to 25. In your JSON job specification, set (framerateControl) to
     * (SPECIFIED), (framerateNumerator) to 25 and (framerateDenominator) to 1.
     */
    inline ProresSettings& WithSlowPal(ProresSlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine (HARD) to create a smoother picture. When you keep the default value,
     * None (NONE), MediaConvert does a standard frame rate conversion to 29.97 without
     * doing anything with the field polarity to create a smoother picture.
     */
    inline const ProresTelecine& GetTelecine() const{ return m_telecine; }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine (HARD) to create a smoother picture. When you keep the default value,
     * None (NONE), MediaConvert does a standard frame rate conversion to 29.97 without
     * doing anything with the field polarity to create a smoother picture.
     */
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine (HARD) to create a smoother picture. When you keep the default value,
     * None (NONE), MediaConvert does a standard frame rate conversion to 29.97 without
     * doing anything with the field polarity to create a smoother picture.
     */
    inline void SetTelecine(const ProresTelecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine (HARD) to create a smoother picture. When you keep the default value,
     * None (NONE), MediaConvert does a standard frame rate conversion to 29.97 without
     * doing anything with the field polarity to create a smoother picture.
     */
    inline void SetTelecine(ProresTelecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine (HARD) to create a smoother picture. When you keep the default value,
     * None (NONE), MediaConvert does a standard frame rate conversion to 29.97 without
     * doing anything with the field polarity to create a smoother picture.
     */
    inline ProresSettings& WithTelecine(const ProresTelecine& value) { SetTelecine(value); return *this;}

    /**
     * When you do frame rate conversion from 23.976 frames per second (fps) to 29.97
     * fps, and your output scan type is interlaced, you can optionally enable hard
     * telecine (HARD) to create a smoother picture. When you keep the default value,
     * None (NONE), MediaConvert does a standard frame rate conversion to 29.97 without
     * doing anything with the field polarity to create a smoother picture.
     */
    inline ProresSettings& WithTelecine(ProresTelecine&& value) { SetTelecine(std::move(value)); return *this;}

  private:

    ProresChromaSampling m_chromaSampling;
    bool m_chromaSamplingHasBeenSet = false;

    ProresCodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet = false;

    ProresFramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet = false;

    ProresFramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet = false;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet = false;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet = false;

    ProresInterlaceMode m_interlaceMode;
    bool m_interlaceModeHasBeenSet = false;

    ProresParControl m_parControl;
    bool m_parControlHasBeenSet = false;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet = false;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet = false;

    ProresScanTypeConversionMode m_scanTypeConversionMode;
    bool m_scanTypeConversionModeHasBeenSet = false;

    ProresSlowPal m_slowPal;
    bool m_slowPalHasBeenSet = false;

    ProresTelecine m_telecine;
    bool m_telecineHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
