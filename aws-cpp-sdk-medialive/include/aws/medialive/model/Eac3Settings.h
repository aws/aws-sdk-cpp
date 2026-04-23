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
#include <aws/medialive/model/Eac3AttenuationControl.h>
#include <aws/medialive/model/Eac3BitstreamMode.h>
#include <aws/medialive/model/Eac3CodingMode.h>
#include <aws/medialive/model/Eac3DcFilter.h>
#include <aws/medialive/model/Eac3DrcLine.h>
#include <aws/medialive/model/Eac3DrcRf.h>
#include <aws/medialive/model/Eac3LfeControl.h>
#include <aws/medialive/model/Eac3LfeFilter.h>
#include <aws/medialive/model/Eac3MetadataControl.h>
#include <aws/medialive/model/Eac3PassthroughControl.h>
#include <aws/medialive/model/Eac3PhaseControl.h>
#include <aws/medialive/model/Eac3StereoDownmix.h>
#include <aws/medialive/model/Eac3SurroundExMode.h>
#include <aws/medialive/model/Eac3SurroundMode.h>
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
   * Eac3 Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Eac3Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API Eac3Settings
  {
  public:
    Eac3Settings();
    Eac3Settings(Aws::Utils::Json::JsonView jsonValue);
    Eac3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When set to attenuate3Db, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline const Eac3AttenuationControl& GetAttenuationControl() const{ return m_attenuationControl; }

    /**
     * When set to attenuate3Db, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline bool AttenuationControlHasBeenSet() const { return m_attenuationControlHasBeenSet; }

    /**
     * When set to attenuate3Db, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline void SetAttenuationControl(const Eac3AttenuationControl& value) { m_attenuationControlHasBeenSet = true; m_attenuationControl = value; }

    /**
     * When set to attenuate3Db, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline void SetAttenuationControl(Eac3AttenuationControl&& value) { m_attenuationControlHasBeenSet = true; m_attenuationControl = std::move(value); }

    /**
     * When set to attenuate3Db, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithAttenuationControl(const Eac3AttenuationControl& value) { SetAttenuationControl(value); return *this;}

    /**
     * When set to attenuate3Db, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithAttenuationControl(Eac3AttenuationControl&& value) { SetAttenuationControl(std::move(value)); return *this;}


    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
     */
    inline double GetBitrate() const{ return m_bitrate; }

    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
     */
    inline void SetBitrate(double value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Average bitrate in bits/second. Valid bitrates depend on the coding mode.
     */
    inline Eac3Settings& WithBitrate(double value) { SetBitrate(value); return *this;}


    /**
     * Specifies the bitstream mode (bsmod) for the emitted E-AC-3 stream. See ATSC
     * A/52-2012 (Annex E) for background on these values.
     */
    inline const Eac3BitstreamMode& GetBitstreamMode() const{ return m_bitstreamMode; }

    /**
     * Specifies the bitstream mode (bsmod) for the emitted E-AC-3 stream. See ATSC
     * A/52-2012 (Annex E) for background on these values.
     */
    inline bool BitstreamModeHasBeenSet() const { return m_bitstreamModeHasBeenSet; }

    /**
     * Specifies the bitstream mode (bsmod) for the emitted E-AC-3 stream. See ATSC
     * A/52-2012 (Annex E) for background on these values.
     */
    inline void SetBitstreamMode(const Eac3BitstreamMode& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = value; }

    /**
     * Specifies the bitstream mode (bsmod) for the emitted E-AC-3 stream. See ATSC
     * A/52-2012 (Annex E) for background on these values.
     */
    inline void SetBitstreamMode(Eac3BitstreamMode&& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = std::move(value); }

    /**
     * Specifies the bitstream mode (bsmod) for the emitted E-AC-3 stream. See ATSC
     * A/52-2012 (Annex E) for background on these values.
     */
    inline Eac3Settings& WithBitstreamMode(const Eac3BitstreamMode& value) { SetBitstreamMode(value); return *this;}

    /**
     * Specifies the bitstream mode (bsmod) for the emitted E-AC-3 stream. See ATSC
     * A/52-2012 (Annex E) for background on these values.
     */
    inline Eac3Settings& WithBitstreamMode(Eac3BitstreamMode&& value) { SetBitstreamMode(std::move(value)); return *this;}


    /**
     * Dolby Digital Plus coding mode. Determines number of channels.
     */
    inline const Eac3CodingMode& GetCodingMode() const{ return m_codingMode; }

    /**
     * Dolby Digital Plus coding mode. Determines number of channels.
     */
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }

    /**
     * Dolby Digital Plus coding mode. Determines number of channels.
     */
    inline void SetCodingMode(const Eac3CodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    /**
     * Dolby Digital Plus coding mode. Determines number of channels.
     */
    inline void SetCodingMode(Eac3CodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    /**
     * Dolby Digital Plus coding mode. Determines number of channels.
     */
    inline Eac3Settings& WithCodingMode(const Eac3CodingMode& value) { SetCodingMode(value); return *this;}

    /**
     * Dolby Digital Plus coding mode. Determines number of channels.
     */
    inline Eac3Settings& WithCodingMode(Eac3CodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


    /**
     * When set to enabled, activates a DC highpass filter for all input channels.
     */
    inline const Eac3DcFilter& GetDcFilter() const{ return m_dcFilter; }

    /**
     * When set to enabled, activates a DC highpass filter for all input channels.
     */
    inline bool DcFilterHasBeenSet() const { return m_dcFilterHasBeenSet; }

    /**
     * When set to enabled, activates a DC highpass filter for all input channels.
     */
    inline void SetDcFilter(const Eac3DcFilter& value) { m_dcFilterHasBeenSet = true; m_dcFilter = value; }

    /**
     * When set to enabled, activates a DC highpass filter for all input channels.
     */
    inline void SetDcFilter(Eac3DcFilter&& value) { m_dcFilterHasBeenSet = true; m_dcFilter = std::move(value); }

    /**
     * When set to enabled, activates a DC highpass filter for all input channels.
     */
    inline Eac3Settings& WithDcFilter(const Eac3DcFilter& value) { SetDcFilter(value); return *this;}

    /**
     * When set to enabled, activates a DC highpass filter for all input channels.
     */
    inline Eac3Settings& WithDcFilter(Eac3DcFilter&& value) { SetDcFilter(std::move(value)); return *this;}


    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital
     * Plus, dialnorm will be passed through.
     */
    inline int GetDialnorm() const{ return m_dialnorm; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital
     * Plus, dialnorm will be passed through.
     */
    inline bool DialnormHasBeenSet() const { return m_dialnormHasBeenSet; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital
     * Plus, dialnorm will be passed through.
     */
    inline void SetDialnorm(int value) { m_dialnormHasBeenSet = true; m_dialnorm = value; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital
     * Plus, dialnorm will be passed through.
     */
    inline Eac3Settings& WithDialnorm(int value) { SetDialnorm(value); return *this;}


    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline const Eac3DrcLine& GetDrcLine() const{ return m_drcLine; }

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline bool DrcLineHasBeenSet() const { return m_drcLineHasBeenSet; }

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline void SetDrcLine(const Eac3DrcLine& value) { m_drcLineHasBeenSet = true; m_drcLine = value; }

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline void SetDrcLine(Eac3DrcLine&& value) { m_drcLineHasBeenSet = true; m_drcLine = std::move(value); }

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline Eac3Settings& WithDrcLine(const Eac3DrcLine& value) { SetDrcLine(value); return *this;}

    /**
     * Sets the Dolby dynamic range compression profile.
     */
    inline Eac3Settings& WithDrcLine(Eac3DrcLine&& value) { SetDrcLine(std::move(value)); return *this;}


    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline const Eac3DrcRf& GetDrcRf() const{ return m_drcRf; }

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline bool DrcRfHasBeenSet() const { return m_drcRfHasBeenSet; }

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline void SetDrcRf(const Eac3DrcRf& value) { m_drcRfHasBeenSet = true; m_drcRf = value; }

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline void SetDrcRf(Eac3DrcRf&& value) { m_drcRfHasBeenSet = true; m_drcRf = std::move(value); }

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline Eac3Settings& WithDrcRf(const Eac3DrcRf& value) { SetDrcRf(value); return *this;}

    /**
     * Sets the profile for heavy Dolby dynamic range compression, ensures that the
     * instantaneous signal peaks do not exceed specified levels.
     */
    inline Eac3Settings& WithDrcRf(Eac3DrcRf&& value) { SetDrcRf(std::move(value)); return *this;}


    /**
     * When encoding 3/2 audio, setting to lfe enables the LFE channel
     */
    inline const Eac3LfeControl& GetLfeControl() const{ return m_lfeControl; }

    /**
     * When encoding 3/2 audio, setting to lfe enables the LFE channel
     */
    inline bool LfeControlHasBeenSet() const { return m_lfeControlHasBeenSet; }

    /**
     * When encoding 3/2 audio, setting to lfe enables the LFE channel
     */
    inline void SetLfeControl(const Eac3LfeControl& value) { m_lfeControlHasBeenSet = true; m_lfeControl = value; }

    /**
     * When encoding 3/2 audio, setting to lfe enables the LFE channel
     */
    inline void SetLfeControl(Eac3LfeControl&& value) { m_lfeControlHasBeenSet = true; m_lfeControl = std::move(value); }

    /**
     * When encoding 3/2 audio, setting to lfe enables the LFE channel
     */
    inline Eac3Settings& WithLfeControl(const Eac3LfeControl& value) { SetLfeControl(value); return *this;}

    /**
     * When encoding 3/2 audio, setting to lfe enables the LFE channel
     */
    inline Eac3Settings& WithLfeControl(Eac3LfeControl&& value) { SetLfeControl(std::move(value)); return *this;}


    /**
     * When set to enabled, applies a 120Hz lowpass filter to the LFE channel prior to
     * encoding. Only valid with codingMode32 coding mode.
     */
    inline const Eac3LfeFilter& GetLfeFilter() const{ return m_lfeFilter; }

    /**
     * When set to enabled, applies a 120Hz lowpass filter to the LFE channel prior to
     * encoding. Only valid with codingMode32 coding mode.
     */
    inline bool LfeFilterHasBeenSet() const { return m_lfeFilterHasBeenSet; }

    /**
     * When set to enabled, applies a 120Hz lowpass filter to the LFE channel prior to
     * encoding. Only valid with codingMode32 coding mode.
     */
    inline void SetLfeFilter(const Eac3LfeFilter& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = value; }

    /**
     * When set to enabled, applies a 120Hz lowpass filter to the LFE channel prior to
     * encoding. Only valid with codingMode32 coding mode.
     */
    inline void SetLfeFilter(Eac3LfeFilter&& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = std::move(value); }

    /**
     * When set to enabled, applies a 120Hz lowpass filter to the LFE channel prior to
     * encoding. Only valid with codingMode32 coding mode.
     */
    inline Eac3Settings& WithLfeFilter(const Eac3LfeFilter& value) { SetLfeFilter(value); return *this;}

    /**
     * When set to enabled, applies a 120Hz lowpass filter to the LFE channel prior to
     * encoding. Only valid with codingMode32 coding mode.
     */
    inline Eac3Settings& WithLfeFilter(Eac3LfeFilter&& value) { SetLfeFilter(std::move(value)); return *this;}


    /**
     * Left only/Right only center mix level. Only used for 3/2 coding mode.
     */
    inline double GetLoRoCenterMixLevel() const{ return m_loRoCenterMixLevel; }

    /**
     * Left only/Right only center mix level. Only used for 3/2 coding mode.
     */
    inline bool LoRoCenterMixLevelHasBeenSet() const { return m_loRoCenterMixLevelHasBeenSet; }

    /**
     * Left only/Right only center mix level. Only used for 3/2 coding mode.
     */
    inline void SetLoRoCenterMixLevel(double value) { m_loRoCenterMixLevelHasBeenSet = true; m_loRoCenterMixLevel = value; }

    /**
     * Left only/Right only center mix level. Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithLoRoCenterMixLevel(double value) { SetLoRoCenterMixLevel(value); return *this;}


    /**
     * Left only/Right only surround mix level. Only used for 3/2 coding mode.
     */
    inline double GetLoRoSurroundMixLevel() const{ return m_loRoSurroundMixLevel; }

    /**
     * Left only/Right only surround mix level. Only used for 3/2 coding mode.
     */
    inline bool LoRoSurroundMixLevelHasBeenSet() const { return m_loRoSurroundMixLevelHasBeenSet; }

    /**
     * Left only/Right only surround mix level. Only used for 3/2 coding mode.
     */
    inline void SetLoRoSurroundMixLevel(double value) { m_loRoSurroundMixLevelHasBeenSet = true; m_loRoSurroundMixLevel = value; }

    /**
     * Left only/Right only surround mix level. Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithLoRoSurroundMixLevel(double value) { SetLoRoSurroundMixLevel(value); return *this;}


    /**
     * Left total/Right total center mix level. Only used for 3/2 coding mode.
     */
    inline double GetLtRtCenterMixLevel() const{ return m_ltRtCenterMixLevel; }

    /**
     * Left total/Right total center mix level. Only used for 3/2 coding mode.
     */
    inline bool LtRtCenterMixLevelHasBeenSet() const { return m_ltRtCenterMixLevelHasBeenSet; }

    /**
     * Left total/Right total center mix level. Only used for 3/2 coding mode.
     */
    inline void SetLtRtCenterMixLevel(double value) { m_ltRtCenterMixLevelHasBeenSet = true; m_ltRtCenterMixLevel = value; }

    /**
     * Left total/Right total center mix level. Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithLtRtCenterMixLevel(double value) { SetLtRtCenterMixLevel(value); return *this;}


    /**
     * Left total/Right total surround mix level. Only used for 3/2 coding mode.
     */
    inline double GetLtRtSurroundMixLevel() const{ return m_ltRtSurroundMixLevel; }

    /**
     * Left total/Right total surround mix level. Only used for 3/2 coding mode.
     */
    inline bool LtRtSurroundMixLevelHasBeenSet() const { return m_ltRtSurroundMixLevelHasBeenSet; }

    /**
     * Left total/Right total surround mix level. Only used for 3/2 coding mode.
     */
    inline void SetLtRtSurroundMixLevel(double value) { m_ltRtSurroundMixLevelHasBeenSet = true; m_ltRtSurroundMixLevel = value; }

    /**
     * Left total/Right total surround mix level. Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithLtRtSurroundMixLevel(double value) { SetLtRtSurroundMixLevel(value); return *this;}


    /**
     * When set to followInput, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline const Eac3MetadataControl& GetMetadataControl() const{ return m_metadataControl; }

    /**
     * When set to followInput, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline bool MetadataControlHasBeenSet() const { return m_metadataControlHasBeenSet; }

    /**
     * When set to followInput, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline void SetMetadataControl(const Eac3MetadataControl& value) { m_metadataControlHasBeenSet = true; m_metadataControl = value; }

    /**
     * When set to followInput, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline void SetMetadataControl(Eac3MetadataControl&& value) { m_metadataControlHasBeenSet = true; m_metadataControl = std::move(value); }

    /**
     * When set to followInput, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline Eac3Settings& WithMetadataControl(const Eac3MetadataControl& value) { SetMetadataControl(value); return *this;}

    /**
     * When set to followInput, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline Eac3Settings& WithMetadataControl(Eac3MetadataControl&& value) { SetMetadataControl(std::move(value)); return *this;}


    /**
     * When set to whenPossible, input DD+ audio will be passed through if it is
     * present on the input. This detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline const Eac3PassthroughControl& GetPassthroughControl() const{ return m_passthroughControl; }

    /**
     * When set to whenPossible, input DD+ audio will be passed through if it is
     * present on the input. This detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline bool PassthroughControlHasBeenSet() const { return m_passthroughControlHasBeenSet; }

    /**
     * When set to whenPossible, input DD+ audio will be passed through if it is
     * present on the input. This detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline void SetPassthroughControl(const Eac3PassthroughControl& value) { m_passthroughControlHasBeenSet = true; m_passthroughControl = value; }

    /**
     * When set to whenPossible, input DD+ audio will be passed through if it is
     * present on the input. This detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline void SetPassthroughControl(Eac3PassthroughControl&& value) { m_passthroughControlHasBeenSet = true; m_passthroughControl = std::move(value); }

    /**
     * When set to whenPossible, input DD+ audio will be passed through if it is
     * present on the input. This detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline Eac3Settings& WithPassthroughControl(const Eac3PassthroughControl& value) { SetPassthroughControl(value); return *this;}

    /**
     * When set to whenPossible, input DD+ audio will be passed through if it is
     * present on the input. This detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline Eac3Settings& WithPassthroughControl(Eac3PassthroughControl&& value) { SetPassthroughControl(std::move(value)); return *this;}


    /**
     * When set to shift90Degrees, applies a 90-degree phase shift to the surround
     * channels. Only used for 3/2 coding mode.
     */
    inline const Eac3PhaseControl& GetPhaseControl() const{ return m_phaseControl; }

    /**
     * When set to shift90Degrees, applies a 90-degree phase shift to the surround
     * channels. Only used for 3/2 coding mode.
     */
    inline bool PhaseControlHasBeenSet() const { return m_phaseControlHasBeenSet; }

    /**
     * When set to shift90Degrees, applies a 90-degree phase shift to the surround
     * channels. Only used for 3/2 coding mode.
     */
    inline void SetPhaseControl(const Eac3PhaseControl& value) { m_phaseControlHasBeenSet = true; m_phaseControl = value; }

    /**
     * When set to shift90Degrees, applies a 90-degree phase shift to the surround
     * channels. Only used for 3/2 coding mode.
     */
    inline void SetPhaseControl(Eac3PhaseControl&& value) { m_phaseControlHasBeenSet = true; m_phaseControl = std::move(value); }

    /**
     * When set to shift90Degrees, applies a 90-degree phase shift to the surround
     * channels. Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithPhaseControl(const Eac3PhaseControl& value) { SetPhaseControl(value); return *this;}

    /**
     * When set to shift90Degrees, applies a 90-degree phase shift to the surround
     * channels. Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithPhaseControl(Eac3PhaseControl&& value) { SetPhaseControl(std::move(value)); return *this;}


    /**
     * Stereo downmix preference. Only used for 3/2 coding mode.
     */
    inline const Eac3StereoDownmix& GetStereoDownmix() const{ return m_stereoDownmix; }

    /**
     * Stereo downmix preference. Only used for 3/2 coding mode.
     */
    inline bool StereoDownmixHasBeenSet() const { return m_stereoDownmixHasBeenSet; }

    /**
     * Stereo downmix preference. Only used for 3/2 coding mode.
     */
    inline void SetStereoDownmix(const Eac3StereoDownmix& value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = value; }

    /**
     * Stereo downmix preference. Only used for 3/2 coding mode.
     */
    inline void SetStereoDownmix(Eac3StereoDownmix&& value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = std::move(value); }

    /**
     * Stereo downmix preference. Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithStereoDownmix(const Eac3StereoDownmix& value) { SetStereoDownmix(value); return *this;}

    /**
     * Stereo downmix preference. Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithStereoDownmix(Eac3StereoDownmix&& value) { SetStereoDownmix(std::move(value)); return *this;}


    /**
     * When encoding 3/2 audio, sets whether an extra center back surround channel is
     * matrix encoded into the left and right surround channels.
     */
    inline const Eac3SurroundExMode& GetSurroundExMode() const{ return m_surroundExMode; }

    /**
     * When encoding 3/2 audio, sets whether an extra center back surround channel is
     * matrix encoded into the left and right surround channels.
     */
    inline bool SurroundExModeHasBeenSet() const { return m_surroundExModeHasBeenSet; }

    /**
     * When encoding 3/2 audio, sets whether an extra center back surround channel is
     * matrix encoded into the left and right surround channels.
     */
    inline void SetSurroundExMode(const Eac3SurroundExMode& value) { m_surroundExModeHasBeenSet = true; m_surroundExMode = value; }

    /**
     * When encoding 3/2 audio, sets whether an extra center back surround channel is
     * matrix encoded into the left and right surround channels.
     */
    inline void SetSurroundExMode(Eac3SurroundExMode&& value) { m_surroundExModeHasBeenSet = true; m_surroundExMode = std::move(value); }

    /**
     * When encoding 3/2 audio, sets whether an extra center back surround channel is
     * matrix encoded into the left and right surround channels.
     */
    inline Eac3Settings& WithSurroundExMode(const Eac3SurroundExMode& value) { SetSurroundExMode(value); return *this;}

    /**
     * When encoding 3/2 audio, sets whether an extra center back surround channel is
     * matrix encoded into the left and right surround channels.
     */
    inline Eac3Settings& WithSurroundExMode(Eac3SurroundExMode&& value) { SetSurroundExMode(std::move(value)); return *this;}


    /**
     * When encoding 2/0 audio, sets whether Dolby Surround is matrix encoded into the
     * two channels.
     */
    inline const Eac3SurroundMode& GetSurroundMode() const{ return m_surroundMode; }

    /**
     * When encoding 2/0 audio, sets whether Dolby Surround is matrix encoded into the
     * two channels.
     */
    inline bool SurroundModeHasBeenSet() const { return m_surroundModeHasBeenSet; }

    /**
     * When encoding 2/0 audio, sets whether Dolby Surround is matrix encoded into the
     * two channels.
     */
    inline void SetSurroundMode(const Eac3SurroundMode& value) { m_surroundModeHasBeenSet = true; m_surroundMode = value; }

    /**
     * When encoding 2/0 audio, sets whether Dolby Surround is matrix encoded into the
     * two channels.
     */
    inline void SetSurroundMode(Eac3SurroundMode&& value) { m_surroundModeHasBeenSet = true; m_surroundMode = std::move(value); }

    /**
     * When encoding 2/0 audio, sets whether Dolby Surround is matrix encoded into the
     * two channels.
     */
    inline Eac3Settings& WithSurroundMode(const Eac3SurroundMode& value) { SetSurroundMode(value); return *this;}

    /**
     * When encoding 2/0 audio, sets whether Dolby Surround is matrix encoded into the
     * two channels.
     */
    inline Eac3Settings& WithSurroundMode(Eac3SurroundMode&& value) { SetSurroundMode(std::move(value)); return *this;}

  private:

    Eac3AttenuationControl m_attenuationControl;
    bool m_attenuationControlHasBeenSet;

    double m_bitrate;
    bool m_bitrateHasBeenSet;

    Eac3BitstreamMode m_bitstreamMode;
    bool m_bitstreamModeHasBeenSet;

    Eac3CodingMode m_codingMode;
    bool m_codingModeHasBeenSet;

    Eac3DcFilter m_dcFilter;
    bool m_dcFilterHasBeenSet;

    int m_dialnorm;
    bool m_dialnormHasBeenSet;

    Eac3DrcLine m_drcLine;
    bool m_drcLineHasBeenSet;

    Eac3DrcRf m_drcRf;
    bool m_drcRfHasBeenSet;

    Eac3LfeControl m_lfeControl;
    bool m_lfeControlHasBeenSet;

    Eac3LfeFilter m_lfeFilter;
    bool m_lfeFilterHasBeenSet;

    double m_loRoCenterMixLevel;
    bool m_loRoCenterMixLevelHasBeenSet;

    double m_loRoSurroundMixLevel;
    bool m_loRoSurroundMixLevelHasBeenSet;

    double m_ltRtCenterMixLevel;
    bool m_ltRtCenterMixLevelHasBeenSet;

    double m_ltRtSurroundMixLevel;
    bool m_ltRtSurroundMixLevelHasBeenSet;

    Eac3MetadataControl m_metadataControl;
    bool m_metadataControlHasBeenSet;

    Eac3PassthroughControl m_passthroughControl;
    bool m_passthroughControlHasBeenSet;

    Eac3PhaseControl m_phaseControl;
    bool m_phaseControlHasBeenSet;

    Eac3StereoDownmix m_stereoDownmix;
    bool m_stereoDownmixHasBeenSet;

    Eac3SurroundExMode m_surroundExMode;
    bool m_surroundExModeHasBeenSet;

    Eac3SurroundMode m_surroundMode;
    bool m_surroundModeHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
