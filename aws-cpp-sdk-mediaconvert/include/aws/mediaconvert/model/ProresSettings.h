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
#include <aws/mediaconvert/model/ProresCodecProfile.h>
#include <aws/mediaconvert/model/ProresFramerateControl.h>
#include <aws/mediaconvert/model/ProresFramerateConversionAlgorithm.h>
#include <aws/mediaconvert/model/ProresInterlaceMode.h>
#include <aws/mediaconvert/model/ProresParControl.h>
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
  class AWS_MEDIACONVERT_API ProresSettings
  {
  public:
    ProresSettings();
    ProresSettings(Aws::Utils::Json::JsonView jsonValue);
    ProresSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Use Profile (ProResCodecProfile) to specifiy the type of Apple ProRes codec to
     * use for this output.
     */
    inline const ProresCodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    /**
     * Use Profile (ProResCodecProfile) to specifiy the type of Apple ProRes codec to
     * use for this output.
     */
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }

    /**
     * Use Profile (ProResCodecProfile) to specifiy the type of Apple ProRes codec to
     * use for this output.
     */
    inline void SetCodecProfile(const ProresCodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    /**
     * Use Profile (ProResCodecProfile) to specifiy the type of Apple ProRes codec to
     * use for this output.
     */
    inline void SetCodecProfile(ProresCodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    /**
     * Use Profile (ProResCodecProfile) to specifiy the type of Apple ProRes codec to
     * use for this output.
     */
    inline ProresSettings& WithCodecProfile(const ProresCodecProfile& value) { SetCodecProfile(value); return *this;}

    /**
     * Use Profile (ProResCodecProfile) to specifiy the type of Apple ProRes codec to
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
     * sepecification as a JSON file without the console, use FramerateControl to
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
    inline void SetFramerateControl(const ProresFramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

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
    inline void SetFramerateControl(ProresFramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

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
    inline ProresSettings& WithFramerateControl(const ProresFramerateControl& value) { SetFramerateControl(value); return *this;}

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
    inline ProresSettings& WithFramerateControl(ProresFramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline const ProresFramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline bool FramerateConversionAlgorithmHasBeenSet() const { return m_framerateConversionAlgorithmHasBeenSet; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline void SetFramerateConversionAlgorithm(const ProresFramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline void SetFramerateConversionAlgorithm(ProresFramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline ProresSettings& WithFramerateConversionAlgorithm(const ProresFramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    /**
     * When set to INTERPOLATE, produces smoother motion during frame rate conversion.
     */
    inline ProresSettings& WithFramerateConversionAlgorithm(ProresFramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


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
    inline ProresSettings& WithFramerateDenominator(int value) { SetFramerateDenominator(value); return *this;}


    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator.
     */
    inline int GetFramerateNumerator() const{ return m_framerateNumerator; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator.
     */
    inline bool FramerateNumeratorHasBeenSet() const { return m_framerateNumeratorHasBeenSet; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator.
     */
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator.
     */
    inline ProresSettings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


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
    inline const ProresInterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

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
    inline void SetInterlaceMode(const ProresInterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

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
    inline void SetInterlaceMode(ProresInterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

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
    inline ProresSettings& WithInterlaceMode(const ProresInterlaceMode& value) { SetInterlaceMode(value); return *this;}

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
    inline ProresSettings& WithInterlaceMode(ProresInterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


    /**
     * Use (ProresParControl) to specify how the service determines the pixel aspect
     * ratio. Set to Follow source (INITIALIZE_FROM_SOURCE) to use the pixel aspect
     * ratio from the input.  To specify a different pixel aspect ratio: Using the
     * console, choose it from the dropdown menu. Using the API, set ProresParControl
     * to (SPECIFIED) and provide  for (ParNumerator) and (ParDenominator).
     */
    inline const ProresParControl& GetParControl() const{ return m_parControl; }

    /**
     * Use (ProresParControl) to specify how the service determines the pixel aspect
     * ratio. Set to Follow source (INITIALIZE_FROM_SOURCE) to use the pixel aspect
     * ratio from the input.  To specify a different pixel aspect ratio: Using the
     * console, choose it from the dropdown menu. Using the API, set ProresParControl
     * to (SPECIFIED) and provide  for (ParNumerator) and (ParDenominator).
     */
    inline bool ParControlHasBeenSet() const { return m_parControlHasBeenSet; }

    /**
     * Use (ProresParControl) to specify how the service determines the pixel aspect
     * ratio. Set to Follow source (INITIALIZE_FROM_SOURCE) to use the pixel aspect
     * ratio from the input.  To specify a different pixel aspect ratio: Using the
     * console, choose it from the dropdown menu. Using the API, set ProresParControl
     * to (SPECIFIED) and provide  for (ParNumerator) and (ParDenominator).
     */
    inline void SetParControl(const ProresParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    /**
     * Use (ProresParControl) to specify how the service determines the pixel aspect
     * ratio. Set to Follow source (INITIALIZE_FROM_SOURCE) to use the pixel aspect
     * ratio from the input.  To specify a different pixel aspect ratio: Using the
     * console, choose it from the dropdown menu. Using the API, set ProresParControl
     * to (SPECIFIED) and provide  for (ParNumerator) and (ParDenominator).
     */
    inline void SetParControl(ProresParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    /**
     * Use (ProresParControl) to specify how the service determines the pixel aspect
     * ratio. Set to Follow source (INITIALIZE_FROM_SOURCE) to use the pixel aspect
     * ratio from the input.  To specify a different pixel aspect ratio: Using the
     * console, choose it from the dropdown menu. Using the API, set ProresParControl
     * to (SPECIFIED) and provide  for (ParNumerator) and (ParDenominator).
     */
    inline ProresSettings& WithParControl(const ProresParControl& value) { SetParControl(value); return *this;}

    /**
     * Use (ProresParControl) to specify how the service determines the pixel aspect
     * ratio. Set to Follow source (INITIALIZE_FROM_SOURCE) to use the pixel aspect
     * ratio from the input.  To specify a different pixel aspect ratio: Using the
     * console, choose it from the dropdown menu. Using the API, set ProresParControl
     * to (SPECIFIED) and provide  for (ParNumerator) and (ParDenominator).
     */
    inline ProresSettings& WithParControl(ProresParControl&& value) { SetParControl(std::move(value)); return *this;}


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
    inline ProresSettings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


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
    inline ProresSettings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline const ProresSlowPal& GetSlowPal() const{ return m_slowPal; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline bool SlowPalHasBeenSet() const { return m_slowPalHasBeenSet; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline void SetSlowPal(const ProresSlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline void SetSlowPal(ProresSlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline ProresSettings& WithSlowPal(const ProresSlowPal& value) { SetSlowPal(value); return *this;}

    /**
     * Enables Slow PAL rate conversion. 23.976fps and 24fps input is relabeled as
     * 25fps, and audio is sped up correspondingly.
     */
    inline ProresSettings& WithSlowPal(ProresSlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    /**
     * Only use Telecine (ProresTelecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (ProresTelecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline const ProresTelecine& GetTelecine() const{ return m_telecine; }

    /**
     * Only use Telecine (ProresTelecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (ProresTelecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline bool TelecineHasBeenSet() const { return m_telecineHasBeenSet; }

    /**
     * Only use Telecine (ProresTelecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (ProresTelecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline void SetTelecine(const ProresTelecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    /**
     * Only use Telecine (ProresTelecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (ProresTelecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline void SetTelecine(ProresTelecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    /**
     * Only use Telecine (ProresTelecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (ProresTelecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline ProresSettings& WithTelecine(const ProresTelecine& value) { SetTelecine(value); return *this;}

    /**
     * Only use Telecine (ProresTelecine) when you set Framerate (Framerate) to 29.970.
     * Set Telecine (ProresTelecine) to Hard (hard) to produce a 29.97i output from a
     * 23.976 input. Set it to Soft (soft) to produce 23.976 output and leave
     * converstion to the player.
     */
    inline ProresSettings& WithTelecine(ProresTelecine&& value) { SetTelecine(std::move(value)); return *this;}

  private:

    ProresCodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet;

    ProresFramerateControl m_framerateControl;
    bool m_framerateControlHasBeenSet;

    ProresFramerateConversionAlgorithm m_framerateConversionAlgorithm;
    bool m_framerateConversionAlgorithmHasBeenSet;

    int m_framerateDenominator;
    bool m_framerateDenominatorHasBeenSet;

    int m_framerateNumerator;
    bool m_framerateNumeratorHasBeenSet;

    ProresInterlaceMode m_interlaceMode;
    bool m_interlaceModeHasBeenSet;

    ProresParControl m_parControl;
    bool m_parControlHasBeenSet;

    int m_parDenominator;
    bool m_parDenominatorHasBeenSet;

    int m_parNumerator;
    bool m_parNumeratorHasBeenSet;

    ProresSlowPal m_slowPal;
    bool m_slowPalHasBeenSet;

    ProresTelecine m_telecine;
    bool m_telecineHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
