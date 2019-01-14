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


    
    inline const ProresCodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    
    inline void SetCodecProfile(const ProresCodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    
    inline void SetCodecProfile(ProresCodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    
    inline ProresSettings& WithCodecProfile(const ProresCodecProfile& value) { SetCodecProfile(value); return *this;}

    
    inline ProresSettings& WithCodecProfile(ProresCodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


    
    inline const ProresFramerateControl& GetFramerateControl() const{ return m_framerateControl; }

    
    inline void SetFramerateControl(const ProresFramerateControl& value) { m_framerateControlHasBeenSet = true; m_framerateControl = value; }

    
    inline void SetFramerateControl(ProresFramerateControl&& value) { m_framerateControlHasBeenSet = true; m_framerateControl = std::move(value); }

    
    inline ProresSettings& WithFramerateControl(const ProresFramerateControl& value) { SetFramerateControl(value); return *this;}

    
    inline ProresSettings& WithFramerateControl(ProresFramerateControl&& value) { SetFramerateControl(std::move(value)); return *this;}


    
    inline const ProresFramerateConversionAlgorithm& GetFramerateConversionAlgorithm() const{ return m_framerateConversionAlgorithm; }

    
    inline void SetFramerateConversionAlgorithm(const ProresFramerateConversionAlgorithm& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = value; }

    
    inline void SetFramerateConversionAlgorithm(ProresFramerateConversionAlgorithm&& value) { m_framerateConversionAlgorithmHasBeenSet = true; m_framerateConversionAlgorithm = std::move(value); }

    
    inline ProresSettings& WithFramerateConversionAlgorithm(const ProresFramerateConversionAlgorithm& value) { SetFramerateConversionAlgorithm(value); return *this;}

    
    inline ProresSettings& WithFramerateConversionAlgorithm(ProresFramerateConversionAlgorithm&& value) { SetFramerateConversionAlgorithm(std::move(value)); return *this;}


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
    inline void SetFramerateNumerator(int value) { m_framerateNumeratorHasBeenSet = true; m_framerateNumerator = value; }

    /**
     * When you use the API for transcode jobs that use frame rate conversion, specify
     * the frame rate as a fraction. For example,  24000 / 1001 = 23.976 fps. Use
     * FramerateNumerator to specify the numerator of this fraction. In this example,
     * use 24000 for the value of FramerateNumerator.
     */
    inline ProresSettings& WithFramerateNumerator(int value) { SetFramerateNumerator(value); return *this;}


    
    inline const ProresInterlaceMode& GetInterlaceMode() const{ return m_interlaceMode; }

    
    inline void SetInterlaceMode(const ProresInterlaceMode& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = value; }

    
    inline void SetInterlaceMode(ProresInterlaceMode&& value) { m_interlaceModeHasBeenSet = true; m_interlaceMode = std::move(value); }

    
    inline ProresSettings& WithInterlaceMode(const ProresInterlaceMode& value) { SetInterlaceMode(value); return *this;}

    
    inline ProresSettings& WithInterlaceMode(ProresInterlaceMode&& value) { SetInterlaceMode(std::move(value)); return *this;}


    
    inline const ProresParControl& GetParControl() const{ return m_parControl; }

    
    inline void SetParControl(const ProresParControl& value) { m_parControlHasBeenSet = true; m_parControl = value; }

    
    inline void SetParControl(ProresParControl&& value) { m_parControlHasBeenSet = true; m_parControl = std::move(value); }

    
    inline ProresSettings& WithParControl(const ProresParControl& value) { SetParControl(value); return *this;}

    
    inline ProresSettings& WithParControl(ProresParControl&& value) { SetParControl(std::move(value)); return *this;}


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
    inline ProresSettings& WithParDenominator(int value) { SetParDenominator(value); return *this;}


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
    inline ProresSettings& WithParNumerator(int value) { SetParNumerator(value); return *this;}


    
    inline const ProresSlowPal& GetSlowPal() const{ return m_slowPal; }

    
    inline void SetSlowPal(const ProresSlowPal& value) { m_slowPalHasBeenSet = true; m_slowPal = value; }

    
    inline void SetSlowPal(ProresSlowPal&& value) { m_slowPalHasBeenSet = true; m_slowPal = std::move(value); }

    
    inline ProresSettings& WithSlowPal(const ProresSlowPal& value) { SetSlowPal(value); return *this;}

    
    inline ProresSettings& WithSlowPal(ProresSlowPal&& value) { SetSlowPal(std::move(value)); return *this;}


    
    inline const ProresTelecine& GetTelecine() const{ return m_telecine; }

    
    inline void SetTelecine(const ProresTelecine& value) { m_telecineHasBeenSet = true; m_telecine = value; }

    
    inline void SetTelecine(ProresTelecine&& value) { m_telecineHasBeenSet = true; m_telecine = std::move(value); }

    
    inline ProresSettings& WithTelecine(const ProresTelecine& value) { SetTelecine(value); return *this;}

    
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
