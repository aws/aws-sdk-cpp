﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Eac3AttenuationControl.h>
#include <aws/mediaconvert/model/Eac3BitstreamMode.h>
#include <aws/mediaconvert/model/Eac3CodingMode.h>
#include <aws/mediaconvert/model/Eac3DcFilter.h>
#include <aws/mediaconvert/model/Eac3DynamicRangeCompressionLine.h>
#include <aws/mediaconvert/model/Eac3DynamicRangeCompressionRf.h>
#include <aws/mediaconvert/model/Eac3LfeControl.h>
#include <aws/mediaconvert/model/Eac3LfeFilter.h>
#include <aws/mediaconvert/model/Eac3MetadataControl.h>
#include <aws/mediaconvert/model/Eac3PassthroughControl.h>
#include <aws/mediaconvert/model/Eac3PhaseControl.h>
#include <aws/mediaconvert/model/Eac3StereoDownmix.h>
#include <aws/mediaconvert/model/Eac3SurroundExMode.h>
#include <aws/mediaconvert/model/Eac3SurroundMode.h>
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
   * value EAC3.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Eac3Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API Eac3Settings
  {
  public:
    Eac3Settings();
    Eac3Settings(Aws::Utils::Json::JsonView jsonValue);
    Eac3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If set to ATTENUATE_3_DB, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline const Eac3AttenuationControl& GetAttenuationControl() const{ return m_attenuationControl; }

    /**
     * If set to ATTENUATE_3_DB, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline bool AttenuationControlHasBeenSet() const { return m_attenuationControlHasBeenSet; }

    /**
     * If set to ATTENUATE_3_DB, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline void SetAttenuationControl(const Eac3AttenuationControl& value) { m_attenuationControlHasBeenSet = true; m_attenuationControl = value; }

    /**
     * If set to ATTENUATE_3_DB, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline void SetAttenuationControl(Eac3AttenuationControl&& value) { m_attenuationControlHasBeenSet = true; m_attenuationControl = std::move(value); }

    /**
     * If set to ATTENUATE_3_DB, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithAttenuationControl(const Eac3AttenuationControl& value) { SetAttenuationControl(value); return *this;}

    /**
     * If set to ATTENUATE_3_DB, applies a 3 dB attenuation to the surround channels.
     * Only used for 3/2 coding mode.
     */
    inline Eac3Settings& WithAttenuationControl(Eac3AttenuationControl&& value) { SetAttenuationControl(std::move(value)); return *this;}


    /**
     * Specify the average bitrate in bits per second. Valid bitrates depend on the
     * coding mode.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Specify the average bitrate in bits per second. Valid bitrates depend on the
     * coding mode.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Specify the average bitrate in bits per second. Valid bitrates depend on the
     * coding mode.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Specify the average bitrate in bits per second. Valid bitrates depend on the
     * coding mode.
     */
    inline Eac3Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline const Eac3BitstreamMode& GetBitstreamMode() const{ return m_bitstreamMode; }

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline bool BitstreamModeHasBeenSet() const { return m_bitstreamModeHasBeenSet; }

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline void SetBitstreamMode(const Eac3BitstreamMode& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = value; }

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline void SetBitstreamMode(Eac3BitstreamMode&& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = std::move(value); }

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline Eac3Settings& WithBitstreamMode(const Eac3BitstreamMode& value) { SetBitstreamMode(value); return *this;}

    /**
     * Specify the bitstream mode for the E-AC-3 stream that the encoder emits. For
     * more information about the EAC3 bitstream mode, see ATSC A/52-2012 (Annex E).
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
     * Activates a DC highpass filter for all input channels.
     */
    inline const Eac3DcFilter& GetDcFilter() const{ return m_dcFilter; }

    /**
     * Activates a DC highpass filter for all input channels.
     */
    inline bool DcFilterHasBeenSet() const { return m_dcFilterHasBeenSet; }

    /**
     * Activates a DC highpass filter for all input channels.
     */
    inline void SetDcFilter(const Eac3DcFilter& value) { m_dcFilterHasBeenSet = true; m_dcFilter = value; }

    /**
     * Activates a DC highpass filter for all input channels.
     */
    inline void SetDcFilter(Eac3DcFilter&& value) { m_dcFilterHasBeenSet = true; m_dcFilter = std::move(value); }

    /**
     * Activates a DC highpass filter for all input channels.
     */
    inline Eac3Settings& WithDcFilter(const Eac3DcFilter& value) { SetDcFilter(value); return *this;}

    /**
     * Activates a DC highpass filter for all input channels.
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
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the line
     * operating mode. Related setting: When you use this setting, MediaConvert ignores
     * any value you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline const Eac3DynamicRangeCompressionLine& GetDynamicRangeCompressionLine() const{ return m_dynamicRangeCompressionLine; }

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the line
     * operating mode. Related setting: When you use this setting, MediaConvert ignores
     * any value you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline bool DynamicRangeCompressionLineHasBeenSet() const { return m_dynamicRangeCompressionLineHasBeenSet; }

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the line
     * operating mode. Related setting: When you use this setting, MediaConvert ignores
     * any value you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline void SetDynamicRangeCompressionLine(const Eac3DynamicRangeCompressionLine& value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = value; }

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the line
     * operating mode. Related setting: When you use this setting, MediaConvert ignores
     * any value you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline void SetDynamicRangeCompressionLine(Eac3DynamicRangeCompressionLine&& value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = std::move(value); }

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the line
     * operating mode. Related setting: When you use this setting, MediaConvert ignores
     * any value you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3Settings& WithDynamicRangeCompressionLine(const Eac3DynamicRangeCompressionLine& value) { SetDynamicRangeCompressionLine(value); return *this;}

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the line
     * operating mode. Related setting: When you use this setting, MediaConvert ignores
     * any value you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3Settings& WithDynamicRangeCompressionLine(Eac3DynamicRangeCompressionLine&& value) { SetDynamicRangeCompressionLine(std::move(value)); return *this;}


    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the RF operating
     * mode. Related setting: When you use this setting, MediaConvert ignores any value
     * you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline const Eac3DynamicRangeCompressionRf& GetDynamicRangeCompressionRf() const{ return m_dynamicRangeCompressionRf; }

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the RF operating
     * mode. Related setting: When you use this setting, MediaConvert ignores any value
     * you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline bool DynamicRangeCompressionRfHasBeenSet() const { return m_dynamicRangeCompressionRfHasBeenSet; }

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the RF operating
     * mode. Related setting: When you use this setting, MediaConvert ignores any value
     * you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline void SetDynamicRangeCompressionRf(const Eac3DynamicRangeCompressionRf& value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = value; }

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the RF operating
     * mode. Related setting: When you use this setting, MediaConvert ignores any value
     * you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline void SetDynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf&& value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = std::move(value); }

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the RF operating
     * mode. Related setting: When you use this setting, MediaConvert ignores any value
     * you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3Settings& WithDynamicRangeCompressionRf(const Eac3DynamicRangeCompressionRf& value) { SetDynamicRangeCompressionRf(value); return *this;}

    /**
     * Choose the Dolby Digital dynamic range control (DRC) profile that MediaConvert
     * uses when encoding the metadata in the Dolby Digital stream for the RF operating
     * mode. Related setting: When you use this setting, MediaConvert ignores any value
     * you provide for Dynamic range compression profile
     * (DynamicRangeCompressionProfile). For information about the Dolby Digital DRC
     * operating modes and profiles, see the Dynamic Range Control chapter of the Dolby
     * Metadata Guide at
     * https://developer.dolby.com/globalassets/professional/documents/dolby-metadata-guide.pdf.
     */
    inline Eac3Settings& WithDynamicRangeCompressionRf(Eac3DynamicRangeCompressionRf&& value) { SetDynamicRangeCompressionRf(std::move(value)); return *this;}


    /**
     * When encoding 3/2 audio, controls whether the LFE channel is enabled
     */
    inline const Eac3LfeControl& GetLfeControl() const{ return m_lfeControl; }

    /**
     * When encoding 3/2 audio, controls whether the LFE channel is enabled
     */
    inline bool LfeControlHasBeenSet() const { return m_lfeControlHasBeenSet; }

    /**
     * When encoding 3/2 audio, controls whether the LFE channel is enabled
     */
    inline void SetLfeControl(const Eac3LfeControl& value) { m_lfeControlHasBeenSet = true; m_lfeControl = value; }

    /**
     * When encoding 3/2 audio, controls whether the LFE channel is enabled
     */
    inline void SetLfeControl(Eac3LfeControl&& value) { m_lfeControlHasBeenSet = true; m_lfeControl = std::move(value); }

    /**
     * When encoding 3/2 audio, controls whether the LFE channel is enabled
     */
    inline Eac3Settings& WithLfeControl(const Eac3LfeControl& value) { SetLfeControl(value); return *this;}

    /**
     * When encoding 3/2 audio, controls whether the LFE channel is enabled
     */
    inline Eac3Settings& WithLfeControl(Eac3LfeControl&& value) { SetLfeControl(std::move(value)); return *this;}


    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline const Eac3LfeFilter& GetLfeFilter() const{ return m_lfeFilter; }

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline bool LfeFilterHasBeenSet() const { return m_lfeFilterHasBeenSet; }

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline void SetLfeFilter(const Eac3LfeFilter& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = value; }

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline void SetLfeFilter(Eac3LfeFilter&& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = std::move(value); }

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline Eac3Settings& WithLfeFilter(const Eac3LfeFilter& value) { SetLfeFilter(value); return *this;}

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline Eac3Settings& WithLfeFilter(Eac3LfeFilter&& value) { SetLfeFilter(std::move(value)); return *this;}


    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only center mix (Lo/Ro center). MediaConvert uses this value for downmixing. How
     * the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3StereoDownmix). Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5,
     * -6.0, and -60. The value -60 mutes the channel. This setting applies only if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Left only/Right only center (loRoCenterMixLevel).
     */
    inline double GetLoRoCenterMixLevel() const{ return m_loRoCenterMixLevel; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only center mix (Lo/Ro center). MediaConvert uses this value for downmixing. How
     * the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3StereoDownmix). Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5,
     * -6.0, and -60. The value -60 mutes the channel. This setting applies only if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Left only/Right only center (loRoCenterMixLevel).
     */
    inline bool LoRoCenterMixLevelHasBeenSet() const { return m_loRoCenterMixLevelHasBeenSet; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only center mix (Lo/Ro center). MediaConvert uses this value for downmixing. How
     * the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3StereoDownmix). Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5,
     * -6.0, and -60. The value -60 mutes the channel. This setting applies only if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Left only/Right only center (loRoCenterMixLevel).
     */
    inline void SetLoRoCenterMixLevel(double value) { m_loRoCenterMixLevelHasBeenSet = true; m_loRoCenterMixLevel = value; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only center mix (Lo/Ro center). MediaConvert uses this value for downmixing. How
     * the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3StereoDownmix). Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5,
     * -6.0, and -60. The value -60 mutes the channel. This setting applies only if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Left only/Right only center (loRoCenterMixLevel).
     */
    inline Eac3Settings& WithLoRoCenterMixLevel(double value) { SetLoRoCenterMixLevel(value); return *this;}


    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only (Lo/Ro surround). MediaConvert uses this value for downmixing. How the
     * service uses this value depends on the value that you choose for Stereo downmix
     * (Eac3StereoDownmix). Valid values: -1.5, -3.0, -4.5, -6.0, and -60. The value
     * -60 mutes the channel. This setting applies only if you keep the default value
     * of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the setting Coding mode
     * (Eac3CodingMode). If you choose a different value for Coding mode, the service
     * ignores Left only/Right only surround (loRoSurroundMixLevel).
     */
    inline double GetLoRoSurroundMixLevel() const{ return m_loRoSurroundMixLevel; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only (Lo/Ro surround). MediaConvert uses this value for downmixing. How the
     * service uses this value depends on the value that you choose for Stereo downmix
     * (Eac3StereoDownmix). Valid values: -1.5, -3.0, -4.5, -6.0, and -60. The value
     * -60 mutes the channel. This setting applies only if you keep the default value
     * of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the setting Coding mode
     * (Eac3CodingMode). If you choose a different value for Coding mode, the service
     * ignores Left only/Right only surround (loRoSurroundMixLevel).
     */
    inline bool LoRoSurroundMixLevelHasBeenSet() const { return m_loRoSurroundMixLevelHasBeenSet; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only (Lo/Ro surround). MediaConvert uses this value for downmixing. How the
     * service uses this value depends on the value that you choose for Stereo downmix
     * (Eac3StereoDownmix). Valid values: -1.5, -3.0, -4.5, -6.0, and -60. The value
     * -60 mutes the channel. This setting applies only if you keep the default value
     * of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the setting Coding mode
     * (Eac3CodingMode). If you choose a different value for Coding mode, the service
     * ignores Left only/Right only surround (loRoSurroundMixLevel).
     */
    inline void SetLoRoSurroundMixLevel(double value) { m_loRoSurroundMixLevelHasBeenSet = true; m_loRoSurroundMixLevel = value; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left only/Right
     * only (Lo/Ro surround). MediaConvert uses this value for downmixing. How the
     * service uses this value depends on the value that you choose for Stereo downmix
     * (Eac3StereoDownmix). Valid values: -1.5, -3.0, -4.5, -6.0, and -60. The value
     * -60 mutes the channel. This setting applies only if you keep the default value
     * of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the setting Coding mode
     * (Eac3CodingMode). If you choose a different value for Coding mode, the service
     * ignores Left only/Right only surround (loRoSurroundMixLevel).
     */
    inline Eac3Settings& WithLoRoSurroundMixLevel(double value) { SetLoRoSurroundMixLevel(value); return *this;}


    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total center mix (Lt/Rt center). MediaConvert uses this value for downmixing.
     * How the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3StereoDownmix). Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5,
     * -6.0, and -60. The value -60 mutes the channel. This setting applies only if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Left total/Right total center (ltRtCenterMixLevel).
     */
    inline double GetLtRtCenterMixLevel() const{ return m_ltRtCenterMixLevel; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total center mix (Lt/Rt center). MediaConvert uses this value for downmixing.
     * How the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3StereoDownmix). Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5,
     * -6.0, and -60. The value -60 mutes the channel. This setting applies only if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Left total/Right total center (ltRtCenterMixLevel).
     */
    inline bool LtRtCenterMixLevelHasBeenSet() const { return m_ltRtCenterMixLevelHasBeenSet; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total center mix (Lt/Rt center). MediaConvert uses this value for downmixing.
     * How the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3StereoDownmix). Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5,
     * -6.0, and -60. The value -60 mutes the channel. This setting applies only if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Left total/Right total center (ltRtCenterMixLevel).
     */
    inline void SetLtRtCenterMixLevel(double value) { m_ltRtCenterMixLevelHasBeenSet = true; m_ltRtCenterMixLevel = value; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total center mix (Lt/Rt center). MediaConvert uses this value for downmixing.
     * How the service uses this value depends on the value that you choose for Stereo
     * downmix (Eac3StereoDownmix). Valid values: 3.0, 1.5, 0.0, -1.5, -3.0, -4.5,
     * -6.0, and -60. The value -60 mutes the channel. This setting applies only if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Left total/Right total center (ltRtCenterMixLevel).
     */
    inline Eac3Settings& WithLtRtCenterMixLevel(double value) { SetLtRtCenterMixLevel(value); return *this;}


    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total surround mix (Lt/Rt surround). MediaConvert uses this value for
     * downmixing. How the service uses this value depends on the value that you choose
     * for Stereo downmix (Eac3StereoDownmix). Valid values: -1.5, -3.0, -4.5, -6.0,
     * and -60. The value -60 mutes the channel. This setting applies only if you keep
     * the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the setting
     * Coding mode (Eac3CodingMode). If you choose a different value for Coding mode,
     * the service ignores Left total/Right total surround (ltRtSurroundMixLevel).
     */
    inline double GetLtRtSurroundMixLevel() const{ return m_ltRtSurroundMixLevel; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total surround mix (Lt/Rt surround). MediaConvert uses this value for
     * downmixing. How the service uses this value depends on the value that you choose
     * for Stereo downmix (Eac3StereoDownmix). Valid values: -1.5, -3.0, -4.5, -6.0,
     * and -60. The value -60 mutes the channel. This setting applies only if you keep
     * the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the setting
     * Coding mode (Eac3CodingMode). If you choose a different value for Coding mode,
     * the service ignores Left total/Right total surround (ltRtSurroundMixLevel).
     */
    inline bool LtRtSurroundMixLevelHasBeenSet() const { return m_ltRtSurroundMixLevelHasBeenSet; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total surround mix (Lt/Rt surround). MediaConvert uses this value for
     * downmixing. How the service uses this value depends on the value that you choose
     * for Stereo downmix (Eac3StereoDownmix). Valid values: -1.5, -3.0, -4.5, -6.0,
     * and -60. The value -60 mutes the channel. This setting applies only if you keep
     * the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the setting
     * Coding mode (Eac3CodingMode). If you choose a different value for Coding mode,
     * the service ignores Left total/Right total surround (ltRtSurroundMixLevel).
     */
    inline void SetLtRtSurroundMixLevel(double value) { m_ltRtSurroundMixLevelHasBeenSet = true; m_ltRtSurroundMixLevel = value; }

    /**
     * Specify a value for the following Dolby Digital Plus setting: Left total/Right
     * total surround mix (Lt/Rt surround). MediaConvert uses this value for
     * downmixing. How the service uses this value depends on the value that you choose
     * for Stereo downmix (Eac3StereoDownmix). Valid values: -1.5, -3.0, -4.5, -6.0,
     * and -60. The value -60 mutes the channel. This setting applies only if you keep
     * the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the setting
     * Coding mode (Eac3CodingMode). If you choose a different value for Coding mode,
     * the service ignores Left total/Right total surround (ltRtSurroundMixLevel).
     */
    inline Eac3Settings& WithLtRtSurroundMixLevel(double value) { SetLtRtSurroundMixLevel(value); return *this;}


    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline const Eac3MetadataControl& GetMetadataControl() const{ return m_metadataControl; }

    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline bool MetadataControlHasBeenSet() const { return m_metadataControlHasBeenSet; }

    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline void SetMetadataControl(const Eac3MetadataControl& value) { m_metadataControlHasBeenSet = true; m_metadataControl = value; }

    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline void SetMetadataControl(Eac3MetadataControl&& value) { m_metadataControlHasBeenSet = true; m_metadataControl = std::move(value); }

    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline Eac3Settings& WithMetadataControl(const Eac3MetadataControl& value) { SetMetadataControl(value); return *this;}

    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline Eac3Settings& WithMetadataControl(Eac3MetadataControl&& value) { SetMetadataControl(std::move(value)); return *this;}


    /**
     * When set to WHEN_POSSIBLE, input DD+ audio will be passed through if it is
     * present on the input. this detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline const Eac3PassthroughControl& GetPassthroughControl() const{ return m_passthroughControl; }

    /**
     * When set to WHEN_POSSIBLE, input DD+ audio will be passed through if it is
     * present on the input. this detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline bool PassthroughControlHasBeenSet() const { return m_passthroughControlHasBeenSet; }

    /**
     * When set to WHEN_POSSIBLE, input DD+ audio will be passed through if it is
     * present on the input. this detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline void SetPassthroughControl(const Eac3PassthroughControl& value) { m_passthroughControlHasBeenSet = true; m_passthroughControl = value; }

    /**
     * When set to WHEN_POSSIBLE, input DD+ audio will be passed through if it is
     * present on the input. this detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline void SetPassthroughControl(Eac3PassthroughControl&& value) { m_passthroughControlHasBeenSet = true; m_passthroughControl = std::move(value); }

    /**
     * When set to WHEN_POSSIBLE, input DD+ audio will be passed through if it is
     * present on the input. this detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline Eac3Settings& WithPassthroughControl(const Eac3PassthroughControl& value) { SetPassthroughControl(value); return *this;}

    /**
     * When set to WHEN_POSSIBLE, input DD+ audio will be passed through if it is
     * present on the input. this detection is dynamic over the life of the transcode.
     * Inputs that alternate between DD+ and non-DD+ content will have a consistent DD+
     * output as the system alternates between passthrough and encoding.
     */
    inline Eac3Settings& WithPassthroughControl(Eac3PassthroughControl&& value) { SetPassthroughControl(std::move(value)); return *this;}


    /**
     * Controls the amount of phase-shift applied to the surround channels. Only used
     * for 3/2 coding mode.
     */
    inline const Eac3PhaseControl& GetPhaseControl() const{ return m_phaseControl; }

    /**
     * Controls the amount of phase-shift applied to the surround channels. Only used
     * for 3/2 coding mode.
     */
    inline bool PhaseControlHasBeenSet() const { return m_phaseControlHasBeenSet; }

    /**
     * Controls the amount of phase-shift applied to the surround channels. Only used
     * for 3/2 coding mode.
     */
    inline void SetPhaseControl(const Eac3PhaseControl& value) { m_phaseControlHasBeenSet = true; m_phaseControl = value; }

    /**
     * Controls the amount of phase-shift applied to the surround channels. Only used
     * for 3/2 coding mode.
     */
    inline void SetPhaseControl(Eac3PhaseControl&& value) { m_phaseControlHasBeenSet = true; m_phaseControl = std::move(value); }

    /**
     * Controls the amount of phase-shift applied to the surround channels. Only used
     * for 3/2 coding mode.
     */
    inline Eac3Settings& WithPhaseControl(const Eac3PhaseControl& value) { SetPhaseControl(value); return *this;}

    /**
     * Controls the amount of phase-shift applied to the surround channels. Only used
     * for 3/2 coding mode.
     */
    inline Eac3Settings& WithPhaseControl(Eac3PhaseControl&& value) { SetPhaseControl(std::move(value)); return *this;}


    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline int GetSampleRate() const{ return m_sampleRate; }

    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline bool SampleRateHasBeenSet() const { return m_sampleRateHasBeenSet; }

    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline void SetSampleRate(int value) { m_sampleRateHasBeenSet = true; m_sampleRate = value; }

    /**
     * This value is always 48000. It represents the sample rate in Hz.
     */
    inline Eac3Settings& WithSampleRate(int value) { SetSampleRate(value); return *this;}


    /**
     * Choose how the service does stereo downmixing. This setting only applies if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Stereo downmix (Eac3StereoDownmix).
     */
    inline const Eac3StereoDownmix& GetStereoDownmix() const{ return m_stereoDownmix; }

    /**
     * Choose how the service does stereo downmixing. This setting only applies if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Stereo downmix (Eac3StereoDownmix).
     */
    inline bool StereoDownmixHasBeenSet() const { return m_stereoDownmixHasBeenSet; }

    /**
     * Choose how the service does stereo downmixing. This setting only applies if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Stereo downmix (Eac3StereoDownmix).
     */
    inline void SetStereoDownmix(const Eac3StereoDownmix& value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = value; }

    /**
     * Choose how the service does stereo downmixing. This setting only applies if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Stereo downmix (Eac3StereoDownmix).
     */
    inline void SetStereoDownmix(Eac3StereoDownmix&& value) { m_stereoDownmixHasBeenSet = true; m_stereoDownmix = std::move(value); }

    /**
     * Choose how the service does stereo downmixing. This setting only applies if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Stereo downmix (Eac3StereoDownmix).
     */
    inline Eac3Settings& WithStereoDownmix(const Eac3StereoDownmix& value) { SetStereoDownmix(value); return *this;}

    /**
     * Choose how the service does stereo downmixing. This setting only applies if you
     * keep the default value of 3/2 - L, R, C, Ls, Rs (CODING_MODE_3_2) for the
     * setting Coding mode (Eac3CodingMode). If you choose a different value for Coding
     * mode, the service ignores Stereo downmix (Eac3StereoDownmix).
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

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    Eac3BitstreamMode m_bitstreamMode;
    bool m_bitstreamModeHasBeenSet;

    Eac3CodingMode m_codingMode;
    bool m_codingModeHasBeenSet;

    Eac3DcFilter m_dcFilter;
    bool m_dcFilterHasBeenSet;

    int m_dialnorm;
    bool m_dialnormHasBeenSet;

    Eac3DynamicRangeCompressionLine m_dynamicRangeCompressionLine;
    bool m_dynamicRangeCompressionLineHasBeenSet;

    Eac3DynamicRangeCompressionRf m_dynamicRangeCompressionRf;
    bool m_dynamicRangeCompressionRfHasBeenSet;

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

    int m_sampleRate;
    bool m_sampleRateHasBeenSet;

    Eac3StereoDownmix m_stereoDownmix;
    bool m_stereoDownmixHasBeenSet;

    Eac3SurroundExMode m_surroundExMode;
    bool m_surroundExModeHasBeenSet;

    Eac3SurroundMode m_surroundMode;
    bool m_surroundModeHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
