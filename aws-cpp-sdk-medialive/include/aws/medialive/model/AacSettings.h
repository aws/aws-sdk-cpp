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
#include <aws/medialive/model/AacCodingMode.h>
#include <aws/medialive/model/AacInputType.h>
#include <aws/medialive/model/AacProfile.h>
#include <aws/medialive/model/AacRateControlMode.h>
#include <aws/medialive/model/AacRawFormat.h>
#include <aws/medialive/model/AacSpec.h>
#include <aws/medialive/model/AacVbrQuality.h>
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
   * Aac Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AacSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API AacSettings
  {
  public:
    AacSettings();
    AacSettings(Aws::Utils::Json::JsonView jsonValue);
    AacSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Average bitrate in bits/second. Valid values depend on rate control mode and
     * profile.
     */
    inline double GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. Valid values depend on rate control mode and
     * profile.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Average bitrate in bits/second. Valid values depend on rate control mode and
     * profile.
     */
    inline void SetBitrate(double value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Valid values depend on rate control mode and
     * profile.
     */
    inline AacSettings& WithBitrate(double value) { SetBitrate(value); return *this;}


    /**
     * Mono, Stereo, or 5.1 channel layout. Valid values depend on rate control mode
     * and profile. The adReceiverMix setting receives a stereo description plus
     * control track and emits a mono AAC encode of the description track, with control
     * data emitted in the PES header as per ETSI TS 101 154 Annex E.
     */
    inline const AacCodingMode& GetCodingMode() const{ return m_codingMode; }

    /**
     * Mono, Stereo, or 5.1 channel layout. Valid values depend on rate control mode
     * and profile. The adReceiverMix setting receives a stereo description plus
     * control track and emits a mono AAC encode of the description track, with control
     * data emitted in the PES header as per ETSI TS 101 154 Annex E.
     */
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }

    /**
     * Mono, Stereo, or 5.1 channel layout. Valid values depend on rate control mode
     * and profile. The adReceiverMix setting receives a stereo description plus
     * control track and emits a mono AAC encode of the description track, with control
     * data emitted in the PES header as per ETSI TS 101 154 Annex E.
     */
    inline void SetCodingMode(const AacCodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    /**
     * Mono, Stereo, or 5.1 channel layout. Valid values depend on rate control mode
     * and profile. The adReceiverMix setting receives a stereo description plus
     * control track and emits a mono AAC encode of the description track, with control
     * data emitted in the PES header as per ETSI TS 101 154 Annex E.
     */
    inline void SetCodingMode(AacCodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    /**
     * Mono, Stereo, or 5.1 channel layout. Valid values depend on rate control mode
     * and profile. The adReceiverMix setting receives a stereo description plus
     * control track and emits a mono AAC encode of the description track, with control
     * data emitted in the PES header as per ETSI TS 101 154 Annex E.
     */
    inline AacSettings& WithCodingMode(const AacCodingMode& value) { SetCodingMode(value); return *this;}

    /**
     * Mono, Stereo, or 5.1 channel layout. Valid values depend on rate control mode
     * and profile. The adReceiverMix setting receives a stereo description plus
     * control track and emits a mono AAC encode of the description track, with control
     * data emitted in the PES header as per ETSI TS 101 154 Annex E.
     */
    inline AacSettings& WithCodingMode(AacCodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


    /**
     * Set to "broadcasterMixedAd" when input contains pre-mixed main audio + AD
     * (narration) as a stereo pair.  The Audio Type field (audioType) will be set to
     * 3, which signals to downstream systems that this stream contains "broadcaster
     * mixed AD". Note that the input received by the encoder must contain pre-mixed
     * audio; the encoder does not perform the mixing. The values in audioTypeControl
     * and audioType (in AudioDescription) are ignored when set to
     * broadcasterMixedAd.

Leave set to "normal" when input does not contain pre-mixed
     * audio + AD.
     */
    inline const AacInputType& GetInputType() const{ return m_inputType; }

    /**
     * Set to "broadcasterMixedAd" when input contains pre-mixed main audio + AD
     * (narration) as a stereo pair.  The Audio Type field (audioType) will be set to
     * 3, which signals to downstream systems that this stream contains "broadcaster
     * mixed AD". Note that the input received by the encoder must contain pre-mixed
     * audio; the encoder does not perform the mixing. The values in audioTypeControl
     * and audioType (in AudioDescription) are ignored when set to
     * broadcasterMixedAd.

Leave set to "normal" when input does not contain pre-mixed
     * audio + AD.
     */
    inline bool InputTypeHasBeenSet() const { return m_inputTypeHasBeenSet; }

    /**
     * Set to "broadcasterMixedAd" when input contains pre-mixed main audio + AD
     * (narration) as a stereo pair.  The Audio Type field (audioType) will be set to
     * 3, which signals to downstream systems that this stream contains "broadcaster
     * mixed AD". Note that the input received by the encoder must contain pre-mixed
     * audio; the encoder does not perform the mixing. The values in audioTypeControl
     * and audioType (in AudioDescription) are ignored when set to
     * broadcasterMixedAd.

Leave set to "normal" when input does not contain pre-mixed
     * audio + AD.
     */
    inline void SetInputType(const AacInputType& value) { m_inputTypeHasBeenSet = true; m_inputType = value; }

    /**
     * Set to "broadcasterMixedAd" when input contains pre-mixed main audio + AD
     * (narration) as a stereo pair.  The Audio Type field (audioType) will be set to
     * 3, which signals to downstream systems that this stream contains "broadcaster
     * mixed AD". Note that the input received by the encoder must contain pre-mixed
     * audio; the encoder does not perform the mixing. The values in audioTypeControl
     * and audioType (in AudioDescription) are ignored when set to
     * broadcasterMixedAd.

Leave set to "normal" when input does not contain pre-mixed
     * audio + AD.
     */
    inline void SetInputType(AacInputType&& value) { m_inputTypeHasBeenSet = true; m_inputType = std::move(value); }

    /**
     * Set to "broadcasterMixedAd" when input contains pre-mixed main audio + AD
     * (narration) as a stereo pair.  The Audio Type field (audioType) will be set to
     * 3, which signals to downstream systems that this stream contains "broadcaster
     * mixed AD". Note that the input received by the encoder must contain pre-mixed
     * audio; the encoder does not perform the mixing. The values in audioTypeControl
     * and audioType (in AudioDescription) are ignored when set to
     * broadcasterMixedAd.

Leave set to "normal" when input does not contain pre-mixed
     * audio + AD.
     */
    inline AacSettings& WithInputType(const AacInputType& value) { SetInputType(value); return *this;}

    /**
     * Set to "broadcasterMixedAd" when input contains pre-mixed main audio + AD
     * (narration) as a stereo pair.  The Audio Type field (audioType) will be set to
     * 3, which signals to downstream systems that this stream contains "broadcaster
     * mixed AD". Note that the input received by the encoder must contain pre-mixed
     * audio; the encoder does not perform the mixing. The values in audioTypeControl
     * and audioType (in AudioDescription) are ignored when set to
     * broadcasterMixedAd.

Leave set to "normal" when input does not contain pre-mixed
     * audio + AD.
     */
    inline AacSettings& WithInputType(AacInputType&& value) { SetInputType(std::move(value)); return *this;}


    /**
     * AAC Profile.
     */
    inline const AacProfile& GetProfile() const{ return m_profile; }

    /**
     * AAC Profile.
     */
    inline bool ProfileHasBeenSet() const { return m_profileHasBeenSet; }

    /**
     * AAC Profile.
     */
    inline void SetProfile(const AacProfile& value) { m_profileHasBeenSet = true; m_profile = value; }

    /**
     * AAC Profile.
     */
    inline void SetProfile(AacProfile&& value) { m_profileHasBeenSet = true; m_profile = std::move(value); }

    /**
     * AAC Profile.
     */
    inline AacSettings& WithProfile(const AacProfile& value) { SetProfile(value); return *this;}

    /**
     * AAC Profile.
     */
    inline AacSettings& WithProfile(AacProfile&& value) { SetProfile(std::move(value)); return *this;}


    /**
     * Rate Control Mode.
     */
    inline const AacRateControlMode& GetRateControlMode() const{ return m_rateControlMode; }

    /**
     * Rate Control Mode.
     */
    inline bool RateControlModeHasBeenSet() const { return m_rateControlModeHasBeenSet; }

    /**
     * Rate Control Mode.
     */
    inline void SetRateControlMode(const AacRateControlMode& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = value; }

    /**
     * Rate Control Mode.
     */
    inline void SetRateControlMode(AacRateControlMode&& value) { m_rateControlModeHasBeenSet = true; m_rateControlMode = std::move(value); }

    /**
     * Rate Control Mode.
     */
    inline AacSettings& WithRateControlMode(const AacRateControlMode& value) { SetRateControlMode(value); return *this;}

    /**
     * Rate Control Mode.
     */
    inline AacSettings& WithRateControlMode(AacRateControlMode&& value) { SetRateControlMode(std::move(value)); return *this;}


    /**
     * Sets LATM / LOAS AAC output for raw containers.
     */
    inline const AacRawFormat& GetRawFormat() const{ return m_rawFormat; }

    /**
     * Sets LATM / LOAS AAC output for raw containers.
     */
    inline bool RawFormatHasBeenSet() const { return m_rawFormatHasBeenSet; }

    /**
     * Sets LATM / LOAS AAC output for raw containers.
     */
    inline void SetRawFormat(const AacRawFormat& value) { m_rawFormatHasBeenSet = true; m_rawFormat = value; }

    /**
     * Sets LATM / LOAS AAC output for raw containers.
     */
    inline void SetRawFormat(AacRawFormat&& value) { m_rawFormatHasBeenSet = true; m_rawFormat = std::move(value); }

    /**
     * Sets LATM / LOAS AAC output for raw containers.
     */
    inline AacSettings& WithRawFormat(const AacRawFormat& value) { SetRawFormat(value); return *this;}

    /**
     * Sets LATM / LOAS AAC output for raw containers.
     */
    inline AacSettings& WithRawFormat(AacRawFormat&& value) { SetRawFormat(std::move(value)); return *this;}


    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline double GetSampleRate() const{ return m_sampleRate; }

    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline void SetSampleRate(double value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline AacSettings& WithSampleRate(double value) { SetSampleRate(value); return *this;}


    /**
     * Use MPEG-2 AAC audio instead of MPEG-4 AAC audio for raw or MPEG-2 Transport
     * Stream containers.
     */
    inline const AacSpec& GetSpec() const{ return m_spec; }

    /**
     * Use MPEG-2 AAC audio instead of MPEG-4 AAC audio for raw or MPEG-2 Transport
     * Stream containers.
     */
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }

    /**
     * Use MPEG-2 AAC audio instead of MPEG-4 AAC audio for raw or MPEG-2 Transport
     * Stream containers.
     */
    inline void SetSpec(const AacSpec& value) { m_specHasBeenSet = true; m_spec = value; }

    /**
     * Use MPEG-2 AAC audio instead of MPEG-4 AAC audio for raw or MPEG-2 Transport
     * Stream containers.
     */
    inline void SetSpec(AacSpec&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }

    /**
     * Use MPEG-2 AAC audio instead of MPEG-4 AAC audio for raw or MPEG-2 Transport
     * Stream containers.
     */
    inline AacSettings& WithSpec(const AacSpec& value) { SetSpec(value); return *this;}

    /**
     * Use MPEG-2 AAC audio instead of MPEG-4 AAC audio for raw or MPEG-2 Transport
     * Stream containers.
     */
    inline AacSettings& WithSpec(AacSpec&& value) { SetSpec(std::move(value)); return *this;}


    /**
     * VBR Quality Level - Only used if rateControlMode is VBR.
     */
    inline const AacVbrQuality& GetVbrQuality() const{ return m_vbrQuality; }

    /**
     * VBR Quality Level - Only used if rateControlMode is VBR.
     */
    inline bool VbrQualityHasBeenSet() const { return m_vbrQualityHasBeenSet; }

    /**
     * VBR Quality Level - Only used if rateControlMode is VBR.
     */
    inline void SetVbrQuality(const AacVbrQuality& value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = value; }

    /**
     * VBR Quality Level - Only used if rateControlMode is VBR.
     */
    inline void SetVbrQuality(AacVbrQuality&& value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = std::move(value); }

    /**
     * VBR Quality Level - Only used if rateControlMode is VBR.
     */
    inline AacSettings& WithVbrQuality(const AacVbrQuality& value) { SetVbrQuality(value); return *this;}

    /**
     * VBR Quality Level - Only used if rateControlMode is VBR.
     */
    inline AacSettings& WithVbrQuality(AacVbrQuality&& value) { SetVbrQuality(std::move(value)); return *this;}

  private:

    double m_bitrate;
    bool m_bitrateHasBeenSet;

    AacCodingMode m_codingMode;
    bool m_codingModeHasBeenSet;

    AacInputType m_inputType;
    bool m_inputTypeHasBeenSet;

    AacProfile m_profile;
    bool m_profileHasBeenSet;

    AacRateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet;

    AacRawFormat m_rawFormat;
    bool m_rawFormatHasBeenSet;

    double m_sampleRate;
    bool m_sampleRateHasBeenSet;

    AacSpec m_spec;
    bool m_specHasBeenSet;

    AacVbrQuality m_vbrQuality;
    bool m_vbrQualityHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
