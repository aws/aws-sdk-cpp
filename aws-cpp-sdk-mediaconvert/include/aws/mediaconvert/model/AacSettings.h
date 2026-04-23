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


    /**
     * Choose BROADCASTER_MIXED_AD when the input contains pre-mixed main audio + audio
     * description (AD) as a stereo pair. The value for AudioType will be set to 3,
     * which signals to downstream systems that this stream contains "broadcaster mixed
     * AD". Note that the input received by the encoder must contain pre-mixed audio;
     * the encoder does not perform the mixing. When you choose BROADCASTER_MIXED_AD,
     * the encoder ignores any values you provide in AudioType and 
     * FollowInputAudioType. Choose NORMAL when the input does not contain pre-mixed
     * audio + audio description (AD). In this case, the encoder will use any values
     * you provide for AudioType and FollowInputAudioType.
     */
    inline const AacAudioDescriptionBroadcasterMix& GetAudioDescriptionBroadcasterMix() const{ return m_audioDescriptionBroadcasterMix; }

    /**
     * Choose BROADCASTER_MIXED_AD when the input contains pre-mixed main audio + audio
     * description (AD) as a stereo pair. The value for AudioType will be set to 3,
     * which signals to downstream systems that this stream contains "broadcaster mixed
     * AD". Note that the input received by the encoder must contain pre-mixed audio;
     * the encoder does not perform the mixing. When you choose BROADCASTER_MIXED_AD,
     * the encoder ignores any values you provide in AudioType and 
     * FollowInputAudioType. Choose NORMAL when the input does not contain pre-mixed
     * audio + audio description (AD). In this case, the encoder will use any values
     * you provide for AudioType and FollowInputAudioType.
     */
    inline bool AudioDescriptionBroadcasterMixHasBeenSet() const { return m_audioDescriptionBroadcasterMixHasBeenSet; }

    /**
     * Choose BROADCASTER_MIXED_AD when the input contains pre-mixed main audio + audio
     * description (AD) as a stereo pair. The value for AudioType will be set to 3,
     * which signals to downstream systems that this stream contains "broadcaster mixed
     * AD". Note that the input received by the encoder must contain pre-mixed audio;
     * the encoder does not perform the mixing. When you choose BROADCASTER_MIXED_AD,
     * the encoder ignores any values you provide in AudioType and 
     * FollowInputAudioType. Choose NORMAL when the input does not contain pre-mixed
     * audio + audio description (AD). In this case, the encoder will use any values
     * you provide for AudioType and FollowInputAudioType.
     */
    inline void SetAudioDescriptionBroadcasterMix(const AacAudioDescriptionBroadcasterMix& value) { m_audioDescriptionBroadcasterMixHasBeenSet = true; m_audioDescriptionBroadcasterMix = value; }

    /**
     * Choose BROADCASTER_MIXED_AD when the input contains pre-mixed main audio + audio
     * description (AD) as a stereo pair. The value for AudioType will be set to 3,
     * which signals to downstream systems that this stream contains "broadcaster mixed
     * AD". Note that the input received by the encoder must contain pre-mixed audio;
     * the encoder does not perform the mixing. When you choose BROADCASTER_MIXED_AD,
     * the encoder ignores any values you provide in AudioType and 
     * FollowInputAudioType. Choose NORMAL when the input does not contain pre-mixed
     * audio + audio description (AD). In this case, the encoder will use any values
     * you provide for AudioType and FollowInputAudioType.
     */
    inline void SetAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix&& value) { m_audioDescriptionBroadcasterMixHasBeenSet = true; m_audioDescriptionBroadcasterMix = std::move(value); }

    /**
     * Choose BROADCASTER_MIXED_AD when the input contains pre-mixed main audio + audio
     * description (AD) as a stereo pair. The value for AudioType will be set to 3,
     * which signals to downstream systems that this stream contains "broadcaster mixed
     * AD". Note that the input received by the encoder must contain pre-mixed audio;
     * the encoder does not perform the mixing. When you choose BROADCASTER_MIXED_AD,
     * the encoder ignores any values you provide in AudioType and 
     * FollowInputAudioType. Choose NORMAL when the input does not contain pre-mixed
     * audio + audio description (AD). In this case, the encoder will use any values
     * you provide for AudioType and FollowInputAudioType.
     */
    inline AacSettings& WithAudioDescriptionBroadcasterMix(const AacAudioDescriptionBroadcasterMix& value) { SetAudioDescriptionBroadcasterMix(value); return *this;}

    /**
     * Choose BROADCASTER_MIXED_AD when the input contains pre-mixed main audio + audio
     * description (AD) as a stereo pair. The value for AudioType will be set to 3,
     * which signals to downstream systems that this stream contains "broadcaster mixed
     * AD". Note that the input received by the encoder must contain pre-mixed audio;
     * the encoder does not perform the mixing. When you choose BROADCASTER_MIXED_AD,
     * the encoder ignores any values you provide in AudioType and 
     * FollowInputAudioType. Choose NORMAL when the input does not contain pre-mixed
     * audio + audio description (AD). In this case, the encoder will use any values
     * you provide for AudioType and FollowInputAudioType.
     */
    inline AacSettings& WithAudioDescriptionBroadcasterMix(AacAudioDescriptionBroadcasterMix&& value) { SetAudioDescriptionBroadcasterMix(std::move(value)); return *this;}


    /**
     * Average bitrate in bits/second. The set of valid values for this setting is:
     * 6000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000, 40000,
     * 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000,
     * 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000, 896000,
     * 1024000. The value you set is also constrained by the values you choose for
     * Profile (codecProfile), Bitrate control mode (codingMode), and Sample rate
     * (sampleRate). Default values depend on Bitrate control mode and Profile.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. The set of valid values for this setting is:
     * 6000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000, 40000,
     * 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000,
     * 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000, 896000,
     * 1024000. The value you set is also constrained by the values you choose for
     * Profile (codecProfile), Bitrate control mode (codingMode), and Sample rate
     * (sampleRate). Default values depend on Bitrate control mode and Profile.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Average bitrate in bits/second. The set of valid values for this setting is:
     * 6000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000, 40000,
     * 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000,
     * 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000, 896000,
     * 1024000. The value you set is also constrained by the values you choose for
     * Profile (codecProfile), Bitrate control mode (codingMode), and Sample rate
     * (sampleRate). Default values depend on Bitrate control mode and Profile.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. The set of valid values for this setting is:
     * 6000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000, 40000,
     * 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000, 224000,
     * 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000, 896000,
     * 1024000. The value you set is also constrained by the values you choose for
     * Profile (codecProfile), Bitrate control mode (codingMode), and Sample rate
     * (sampleRate). Default values depend on Bitrate control mode and Profile.
     */
    inline AacSettings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * AAC Profile.
     */
    inline const AacCodecProfile& GetCodecProfile() const{ return m_codecProfile; }

    /**
     * AAC Profile.
     */
    inline bool CodecProfileHasBeenSet() const { return m_codecProfileHasBeenSet; }

    /**
     * AAC Profile.
     */
    inline void SetCodecProfile(const AacCodecProfile& value) { m_codecProfileHasBeenSet = true; m_codecProfile = value; }

    /**
     * AAC Profile.
     */
    inline void SetCodecProfile(AacCodecProfile&& value) { m_codecProfileHasBeenSet = true; m_codecProfile = std::move(value); }

    /**
     * AAC Profile.
     */
    inline AacSettings& WithCodecProfile(const AacCodecProfile& value) { SetCodecProfile(value); return *this;}

    /**
     * AAC Profile.
     */
    inline AacSettings& WithCodecProfile(AacCodecProfile&& value) { SetCodecProfile(std::move(value)); return *this;}


    /**
     * Mono (Audio Description), Mono, Stereo, or 5.1 channel layout. Valid values
     * depend on rate control mode and profile. "1.0 - Audio Description (Receiver
     * Mix)" setting receives a stereo description plus control track and emits a mono
     * AAC encode of the description track, with control data emitted in the PES header
     * as per ETSI TS 101 154 Annex E.
     */
    inline const AacCodingMode& GetCodingMode() const{ return m_codingMode; }

    /**
     * Mono (Audio Description), Mono, Stereo, or 5.1 channel layout. Valid values
     * depend on rate control mode and profile. "1.0 - Audio Description (Receiver
     * Mix)" setting receives a stereo description plus control track and emits a mono
     * AAC encode of the description track, with control data emitted in the PES header
     * as per ETSI TS 101 154 Annex E.
     */
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }

    /**
     * Mono (Audio Description), Mono, Stereo, or 5.1 channel layout. Valid values
     * depend on rate control mode and profile. "1.0 - Audio Description (Receiver
     * Mix)" setting receives a stereo description plus control track and emits a mono
     * AAC encode of the description track, with control data emitted in the PES header
     * as per ETSI TS 101 154 Annex E.
     */
    inline void SetCodingMode(const AacCodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    /**
     * Mono (Audio Description), Mono, Stereo, or 5.1 channel layout. Valid values
     * depend on rate control mode and profile. "1.0 - Audio Description (Receiver
     * Mix)" setting receives a stereo description plus control track and emits a mono
     * AAC encode of the description track, with control data emitted in the PES header
     * as per ETSI TS 101 154 Annex E.
     */
    inline void SetCodingMode(AacCodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    /**
     * Mono (Audio Description), Mono, Stereo, or 5.1 channel layout. Valid values
     * depend on rate control mode and profile. "1.0 - Audio Description (Receiver
     * Mix)" setting receives a stereo description plus control track and emits a mono
     * AAC encode of the description track, with control data emitted in the PES header
     * as per ETSI TS 101 154 Annex E.
     */
    inline AacSettings& WithCodingMode(const AacCodingMode& value) { SetCodingMode(value); return *this;}

    /**
     * Mono (Audio Description), Mono, Stereo, or 5.1 channel layout. Valid values
     * depend on rate control mode and profile. "1.0 - Audio Description (Receiver
     * Mix)" setting receives a stereo description plus control track and emits a mono
     * AAC encode of the description track, with control data emitted in the PES header
     * as per ETSI TS 101 154 Annex E.
     */
    inline AacSettings& WithCodingMode(AacCodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


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
     * Enables LATM/LOAS AAC output. Note that if you use LATM/LOAS AAC in an output,
     * you must choose "No container" for the output container.
     */
    inline const AacRawFormat& GetRawFormat() const{ return m_rawFormat; }

    /**
     * Enables LATM/LOAS AAC output. Note that if you use LATM/LOAS AAC in an output,
     * you must choose "No container" for the output container.
     */
    inline bool RawFormatHasBeenSet() const { return m_rawFormatHasBeenSet; }

    /**
     * Enables LATM/LOAS AAC output. Note that if you use LATM/LOAS AAC in an output,
     * you must choose "No container" for the output container.
     */
    inline void SetRawFormat(const AacRawFormat& value) { m_rawFormatHasBeenSet = true; m_rawFormat = value; }

    /**
     * Enables LATM/LOAS AAC output. Note that if you use LATM/LOAS AAC in an output,
     * you must choose "No container" for the output container.
     */
    inline void SetRawFormat(AacRawFormat&& value) { m_rawFormatHasBeenSet = true; m_rawFormat = std::move(value); }

    /**
     * Enables LATM/LOAS AAC output. Note that if you use LATM/LOAS AAC in an output,
     * you must choose "No container" for the output container.
     */
    inline AacSettings& WithRawFormat(const AacRawFormat& value) { SetRawFormat(value); return *this;}

    /**
     * Enables LATM/LOAS AAC output. Note that if you use LATM/LOAS AAC in an output,
     * you must choose "No container" for the output container.
     */
    inline AacSettings& WithRawFormat(AacRawFormat&& value) { SetRawFormat(std::move(value)); return *this;}


    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Sample rate in Hz. Valid values depend on rate control mode and profile.
     */
    inline AacSettings& WithSampleRate(int value) { SetSampleRate(value); return *this;}


    /**
     * Use MPEG-2 AAC instead of MPEG-4 AAC audio for raw or MPEG-2 Transport Stream
     * containers.
     */
    inline const AacSpecification& GetSpecification() const{ return m_specification; }

    /**
     * Use MPEG-2 AAC instead of MPEG-4 AAC audio for raw or MPEG-2 Transport Stream
     * containers.
     */
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }

    /**
     * Use MPEG-2 AAC instead of MPEG-4 AAC audio for raw or MPEG-2 Transport Stream
     * containers.
     */
    inline void SetSpecification(const AacSpecification& value) { m_specificationHasBeenSet = true; m_specification = value; }

    /**
     * Use MPEG-2 AAC instead of MPEG-4 AAC audio for raw or MPEG-2 Transport Stream
     * containers.
     */
    inline void SetSpecification(AacSpecification&& value) { m_specificationHasBeenSet = true; m_specification = std::move(value); }

    /**
     * Use MPEG-2 AAC instead of MPEG-4 AAC audio for raw or MPEG-2 Transport Stream
     * containers.
     */
    inline AacSettings& WithSpecification(const AacSpecification& value) { SetSpecification(value); return *this;}

    /**
     * Use MPEG-2 AAC instead of MPEG-4 AAC audio for raw or MPEG-2 Transport Stream
     * containers.
     */
    inline AacSettings& WithSpecification(AacSpecification&& value) { SetSpecification(std::move(value)); return *this;}


    /**
     * VBR Quality Level - Only used if rate_control_mode is VBR.
     */
    inline const AacVbrQuality& GetVbrQuality() const{ return m_vbrQuality; }

    /**
     * VBR Quality Level - Only used if rate_control_mode is VBR.
     */
    inline bool VbrQualityHasBeenSet() const { return m_vbrQualityHasBeenSet; }

    /**
     * VBR Quality Level - Only used if rate_control_mode is VBR.
     */
    inline void SetVbrQuality(const AacVbrQuality& value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = value; }

    /**
     * VBR Quality Level - Only used if rate_control_mode is VBR.
     */
    inline void SetVbrQuality(AacVbrQuality&& value) { m_vbrQualityHasBeenSet = true; m_vbrQuality = std::move(value); }

    /**
     * VBR Quality Level - Only used if rate_control_mode is VBR.
     */
    inline AacSettings& WithVbrQuality(const AacVbrQuality& value) { SetVbrQuality(value); return *this;}

    /**
     * VBR Quality Level - Only used if rate_control_mode is VBR.
     */
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
