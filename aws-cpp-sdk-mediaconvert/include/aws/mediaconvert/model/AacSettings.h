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
#include <aws/mediaconvert/model/AacAudioDescriptionBroadcasterMix.h>
#include <aws/mediaconvert/model/AacCodecProfile.h>
#include <aws/mediaconvert/model/AacCodingMode.h>
#include <aws/mediaconvert/model/AacRateControlMode.h>
#include <aws/mediaconvert/model/AacRawFormat.h>
#include <aws/mediaconvert/model/AacSpecification.h>
#include <aws/mediaconvert/model/AacVbrQuality.h>
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
   * Required when you set (Codec) under (AudioDescriptions)>(CodecSettings) to the
   * value AAC. The service accepts one of two mutually exclusive groups of AAC
   * settings--VBR and CBR. To select one of these modes, set the value of Bitrate
   * control mode (rateControlMode) to "VBR" or "CBR".  In VBR mode, you control the
   * audio quality with the setting VBR quality (vbrQuality). In CBR mode, you use
   * the setting Bitrate (bitrate). Defaults and valid values depend on the rate
   * control mode.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/AacSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API AacSettings
  {
  public:
    AacSettings();
    AacSettings(Aws::Utils::Json::JsonView jsonValue);
    AacSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const AacAudioDescriptionBroadcasterMix& GetAudioDescriptionBroadcasterMix() const{ return m_audioDescriptionBroadcasterMix; }

    
    inline void SetAudioDescriptionBroadcasterMix(const AacAudioDescriptionBroadcasterMix& value) { m_audioDescriptionBroadcasterMixHasBeenSet = true; m_audioDescriptionBroadcasterMix = value; }

    
    inline void SetAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix&& value) { m_audioDescriptionBroadcasterMixHasBeenSet = true; m_audioDescriptionBroadcasterMix = std::move(value); }

    
    inline AacSettings& WithAudioDescriptionBroadcasterMix(const AacAudioDescriptionBroadcasterMix& value) { SetAudioDescriptionBroadcasterMix(value); return *this;}

    
    inline AacSettings& WithAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix&& value) { SetAudioDescriptionBroadcasterMix(std::move(value)); return *this;}


    /**
     * Average bitrate in bits/second. Defaults and valid values depend on rate control
     * mode and profile.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. Defaults and valid values depend on rate control
     * mode and profile.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Defaults and valid values depend on rate control
     * mode and profile.
     */
    inline AacSettings& WithBitrate(int value) { SetBitrate(value); return *this;}


    
    inline const AacCodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    
    inline void SetCodecProfile(const AacCodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    
    inline void SetCodecProfile(AacCodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    
    inline AacSettings& WithCodecProfile(const AacCodecProfile& value) { SetCodecProfile(value); return *this;}

    
    inline AacSettings& WithCodecProfile(AacCodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


    
    inline const AacCodingMode& GetCodingMode() const{ return m_codingMode; }

    
    inline void SetCodingMode(const AacCodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    
    inline void SetCodingMode(AacCodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    
    inline AacSettings& WithCodingMode(const AacCodingMode& value) { SetCodingMode(value); return *this;}

    
    inline AacSettings& WithCodingMode(AacCodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


    
    inline const AacRateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    
    inline void SetRateControlMode(const AacRateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    
    inline void SetRateControlMode(AacRateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    
    inline AacSettings& WithRateControlMode(const AacRateControlMode& value) { SetRateControlMode(value); return *this;}

    
    inline AacSettings& WithRateControlMode(AacRateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    
    inline const AacRawFormat& GetRawFormat() const{ return m_rawFormat; }

    
    inline void SetRawFormat(const AacRawFormat& value) { m_rawFormatHasBeenSet = true; m_rawFormat = value; }

    
    inline void SetRawFormat(AacRawFormat&& value) { m_rawFormatHasBeenSet = true; m_rawFormat = std::move(value); }

    
    inline AacSettings& WithRawFormat(const AacRawFormat& value) { SetRawFormat(value); return *this;}

    
    inline AacSettings& WithRawFormat(AacRawFormat&& value) { SetRawFormat(std::move(value)); return *this;}


    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline AacSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}


    
    inline const AacSpecification& GetSpecification() const{ return m_specification; }

    
    inline void SetSpecification(const AacSpecification& value) { m_specificationHasBeenSet = true; m_specification = value; }

    
    inline void SetSpecification(AacSpecification&& value) { m_specificationHasBeenSet = true; m_specification = std::move(value); }

    
    inline AacSettings& WithSpecification(const AacSpecification& value) { SetSpecification(value); return *this;}

    
    inline AacSettings& WithSpecification(AacSpecification&& value) { SetSpecification(std::move(value)); return *this;}


    
    inline const AacVbrQuality& GetVbrQuality() const{ return m_vbrQuality; }

    
    inline void SetVbrQuality(const AacVbrQuality& value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = value; }

    
    inline void SetVbrQuality(AacVbrQuality&& value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = std::move(value); }

    
    inline AacSettings& WithVbrQuality(const AacVbrQuality& value) { SetVbrQuality(value); return *this;}

    
    inline AacSettings& WithVbrQuality(AacVbrQuality&& value) { SetVbrQuality(std::move(value)); return *this;}

  private:

    AacAudioDescriptionBroadcasterMix m_audioDescriptionBroadcasterMix;
    bool m_audioDescriptionBroadcasterMixHasBeenSet;

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    AacCodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet;

    AacCodingMode m_codingMode;
    bool m_codingModeHasBeenSet;

    AacRateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet;

    AacRawFormat m_rawFormat;
    bool m_rawFormatHasBeenSet;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet;

    AacSpecification m_specification;
    bool m_specificationHasBeenSet;

    AacVbrQuality m_vbrQuality;
    bool m_vbrQualityHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
