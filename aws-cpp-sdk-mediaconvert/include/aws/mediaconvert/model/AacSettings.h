/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AacSettings
  {
  public:
    AWS_MEDIACONVERT_API AacSettings();
    AWS_MEDIACONVERT_API AacSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API AacSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * Specify the average bitrate in bits per second. The set of valid values for this
     * setting is: 6000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000,
     * 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000,
     * 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000,
     * 896000, 1024000. The value you set is also constrained by the values that you
     * choose for Profile (codecProfile), Bitrate control mode (codingMode), and Sample
     * rate (sampleRate). Default values depend on Bitrate control mode and Profile.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Specify the average bitrate in bits per second. The set of valid values for this
     * setting is: 6000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000,
     * 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000,
     * 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000,
     * 896000, 1024000. The value you set is also constrained by the values that you
     * choose for Profile (codecProfile), Bitrate control mode (codingMode), and Sample
     * rate (sampleRate). Default values depend on Bitrate control mode and Profile.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Specify the average bitrate in bits per second. The set of valid values for this
     * setting is: 6000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000,
     * 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000,
     * 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000,
     * 896000, 1024000. The value you set is also constrained by the values that you
     * choose for Profile (codecProfile), Bitrate control mode (codingMode), and Sample
     * rate (sampleRate). Default values depend on Bitrate control mode and Profile.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Specify the average bitrate in bits per second. The set of valid values for this
     * setting is: 6000, 8000, 10000, 12000, 14000, 16000, 20000, 24000, 28000, 32000,
     * 40000, 48000, 56000, 64000, 80000, 96000, 112000, 128000, 160000, 192000,
     * 224000, 256000, 288000, 320000, 384000, 448000, 512000, 576000, 640000, 768000,
     * 896000, 1024000. The value you set is also constrained by the values that you
     * choose for Profile (codecProfile), Bitrate control mode (codingMode), and Sample
     * rate (sampleRate). Default values depend on Bitrate control mode and Profile.
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
     * The Coding mode that you specify determines the number of audio channels and the
     * audio channel layout metadata in your AAC output. Valid coding modes depend on
     * the Rate control mode and Profile that you select. The following list shows the
     * number of audio channels and channel layout for each coding mode. * 1.0 Audio
     * Description (Receiver Mix): One channel, C. Includes audio description data from
     * your stereo input. For more information see ETSI TS 101 154 Annex E. * 1.0 Mono:
     * One channel, C. * 2.0 Stereo: Two channels, L, R. * 5.1 Surround: Five channels,
     * C, L, R, Ls, Rs, LFE.
     */
    inline const AacCodingMode& GetCodingMode() const{ return m_codingMode; }

    /**
     * The Coding mode that you specify determines the number of audio channels and the
     * audio channel layout metadata in your AAC output. Valid coding modes depend on
     * the Rate control mode and Profile that you select. The following list shows the
     * number of audio channels and channel layout for each coding mode. * 1.0 Audio
     * Description (Receiver Mix): One channel, C. Includes audio description data from
     * your stereo input. For more information see ETSI TS 101 154 Annex E. * 1.0 Mono:
     * One channel, C. * 2.0 Stereo: Two channels, L, R. * 5.1 Surround: Five channels,
     * C, L, R, Ls, Rs, LFE.
     */
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }

    /**
     * The Coding mode that you specify determines the number of audio channels and the
     * audio channel layout metadata in your AAC output. Valid coding modes depend on
     * the Rate control mode and Profile that you select. The following list shows the
     * number of audio channels and channel layout for each coding mode. * 1.0 Audio
     * Description (Receiver Mix): One channel, C. Includes audio description data from
     * your stereo input. For more information see ETSI TS 101 154 Annex E. * 1.0 Mono:
     * One channel, C. * 2.0 Stereo: Two channels, L, R. * 5.1 Surround: Five channels,
     * C, L, R, Ls, Rs, LFE.
     */
    inline void SetCodingMode(const AacCodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    /**
     * The Coding mode that you specify determines the number of audio channels and the
     * audio channel layout metadata in your AAC output. Valid coding modes depend on
     * the Rate control mode and Profile that you select. The following list shows the
     * number of audio channels and channel layout for each coding mode. * 1.0 Audio
     * Description (Receiver Mix): One channel, C. Includes audio description data from
     * your stereo input. For more information see ETSI TS 101 154 Annex E. * 1.0 Mono:
     * One channel, C. * 2.0 Stereo: Two channels, L, R. * 5.1 Surround: Five channels,
     * C, L, R, Ls, Rs, LFE.
     */
    inline void SetCodingMode(AacCodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    /**
     * The Coding mode that you specify determines the number of audio channels and the
     * audio channel layout metadata in your AAC output. Valid coding modes depend on
     * the Rate control mode and Profile that you select. The following list shows the
     * number of audio channels and channel layout for each coding mode. * 1.0 Audio
     * Description (Receiver Mix): One channel, C. Includes audio description data from
     * your stereo input. For more information see ETSI TS 101 154 Annex E. * 1.0 Mono:
     * One channel, C. * 2.0 Stereo: Two channels, L, R. * 5.1 Surround: Five channels,
     * C, L, R, Ls, Rs, LFE.
     */
    inline AacSettings& WithCodingMode(const AacCodingMode& value) { SetCodingMode(value); return *this;}

    /**
     * The Coding mode that you specify determines the number of audio channels and the
     * audio channel layout metadata in your AAC output. Valid coding modes depend on
     * the Rate control mode and Profile that you select. The following list shows the
     * number of audio channels and channel layout for each coding mode. * 1.0 Audio
     * Description (Receiver Mix): One channel, C. Includes audio description data from
     * your stereo input. For more information see ETSI TS 101 154 Annex E. * 1.0 Mono:
     * One channel, C. * 2.0 Stereo: Two channels, L, R. * 5.1 Surround: Five channels,
     * C, L, R, Ls, Rs, LFE.
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
     * Specify the Sample rate in Hz. Valid sample rates depend on the Profile and
     * Coding mode that you select. The following list shows valid sample rates for
     * each Profile and Coding mode. * LC Profile, Coding mode 1.0, 2.0, and Receiver
     * Mix: 8000, 12000, 16000, 22050, 24000, 32000, 44100, 48000, 88200, 96000. * LC
     * Profile, Coding mode 5.1: 32000, 44100, 48000, 96000. * HEV1 Profile, Coding
     * mode 1.0 and Receiver Mix: 22050, 24000, 32000, 44100, 48000. * HEV1 Profile,
     * Coding mode 2.0 and 5.1: 32000, 44100, 48000, 96000. * HEV2 Profile, Coding mode
     * 2.0: 22050, 24000, 32000, 44100, 48000.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * Specify the Sample rate in Hz. Valid sample rates depend on the Profile and
     * Coding mode that you select. The following list shows valid sample rates for
     * each Profile and Coding mode. * LC Profile, Coding mode 1.0, 2.0, and Receiver
     * Mix: 8000, 12000, 16000, 22050, 24000, 32000, 44100, 48000, 88200, 96000. * LC
     * Profile, Coding mode 5.1: 32000, 44100, 48000, 96000. * HEV1 Profile, Coding
     * mode 1.0 and Receiver Mix: 22050, 24000, 32000, 44100, 48000. * HEV1 Profile,
     * Coding mode 2.0 and 5.1: 32000, 44100, 48000, 96000. * HEV2 Profile, Coding mode
     * 2.0: 22050, 24000, 32000, 44100, 48000.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * Specify the Sample rate in Hz. Valid sample rates depend on the Profile and
     * Coding mode that you select. The following list shows valid sample rates for
     * each Profile and Coding mode. * LC Profile, Coding mode 1.0, 2.0, and Receiver
     * Mix: 8000, 12000, 16000, 22050, 24000, 32000, 44100, 48000, 88200, 96000. * LC
     * Profile, Coding mode 5.1: 32000, 44100, 48000, 96000. * HEV1 Profile, Coding
     * mode 1.0 and Receiver Mix: 22050, 24000, 32000, 44100, 48000. * HEV1 Profile,
     * Coding mode 2.0 and 5.1: 32000, 44100, 48000, 96000. * HEV2 Profile, Coding mode
     * 2.0: 22050, 24000, 32000, 44100, 48000.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * Specify the Sample rate in Hz. Valid sample rates depend on the Profile and
     * Coding mode that you select. The following list shows valid sample rates for
     * each Profile and Coding mode. * LC Profile, Coding mode 1.0, 2.0, and Receiver
     * Mix: 8000, 12000, 16000, 22050, 24000, 32000, 44100, 48000, 88200, 96000. * LC
     * Profile, Coding mode 5.1: 32000, 44100, 48000, 96000. * HEV1 Profile, Coding
     * mode 1.0 and Receiver Mix: 22050, 24000, 32000, 44100, 48000. * HEV1 Profile,
     * Coding mode 2.0 and 5.1: 32000, 44100, 48000, 96000. * HEV2 Profile, Coding mode
     * 2.0: 22050, 24000, 32000, 44100, 48000.
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
    bool m_audioDescriptionBroadcasterMixHasBeenSet = false;

    int m_bitrate;
    bool m_bitrateHasBeenSet = false;

    AacCodecProfile m_codecProfile;
    bool m_codecProfileHasBeenSet = false;

    AacCodingMode m_codingMode;
    bool m_codingModeHasBeenSet = false;

    AacRateControlMode m_rateControlMode;
    bool m_rateControlModeHasBeenSet = false;

    AacRawFormat m_rawFormat;
    bool m_rawFormatHasBeenSet = false;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet = false;

    AacSpecification m_specification;
    bool m_specificationHasBeenSet = false;

    AacVbrQuality m_vbrQuality;
    bool m_vbrQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
