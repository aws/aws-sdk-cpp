/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/Ac3BitstreamMode.h>
#include <aws/mediaconvert/model/Ac3CodingMode.h>
#include <aws/mediaconvert/model/Ac3DynamicRangeCompressionLine.h>
#include <aws/mediaconvert/model/Ac3DynamicRangeCompressionProfile.h>
#include <aws/mediaconvert/model/Ac3DynamicRangeCompressionRf.h>
#include <aws/mediaconvert/model/Ac3LfeFilter.h>
#include <aws/mediaconvert/model/Ac3MetadataControl.h>
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
   * value AC3.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Ac3Settings">AWS
   * API Reference</a></p>
   */
  class Ac3Settings
  {
  public:
    AWS_MEDIACONVERT_API Ac3Settings();
    AWS_MEDIACONVERT_API Ac3Settings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Ac3Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specify the average bitrate in bits per second. The bitrate that you specify
     * must be a multiple of 8000 within the allowed minimum and maximum values.  Leave
     * blank to use the default bitrate for the coding mode you select according ETSI
     * TS 102 366. Valid bitrates for coding mode 1/0: Default: 96000. Minimum: 64000.
     * Maximum: 128000. Valid bitrates for coding mode 1/1: Default: 192000. Minimum:
     * 128000. Maximum: 384000. Valid bitrates for coding mode 2/0: Default: 192000.
     * Minimum: 128000. Maximum: 384000. Valid bitrates for coding mode 3/2 with FLE:
     * Default: 384000. Minimum: 384000. Maximum: 640000.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Specify the average bitrate in bits per second. The bitrate that you specify
     * must be a multiple of 8000 within the allowed minimum and maximum values.  Leave
     * blank to use the default bitrate for the coding mode you select according ETSI
     * TS 102 366. Valid bitrates for coding mode 1/0: Default: 96000. Minimum: 64000.
     * Maximum: 128000. Valid bitrates for coding mode 1/1: Default: 192000. Minimum:
     * 128000. Maximum: 384000. Valid bitrates for coding mode 2/0: Default: 192000.
     * Minimum: 128000. Maximum: 384000. Valid bitrates for coding mode 3/2 with FLE:
     * Default: 384000. Minimum: 384000. Maximum: 640000.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Specify the average bitrate in bits per second. The bitrate that you specify
     * must be a multiple of 8000 within the allowed minimum and maximum values.  Leave
     * blank to use the default bitrate for the coding mode you select according ETSI
     * TS 102 366. Valid bitrates for coding mode 1/0: Default: 96000. Minimum: 64000.
     * Maximum: 128000. Valid bitrates for coding mode 1/1: Default: 192000. Minimum:
     * 128000. Maximum: 384000. Valid bitrates for coding mode 2/0: Default: 192000.
     * Minimum: 128000. Maximum: 384000. Valid bitrates for coding mode 3/2 with FLE:
     * Default: 384000. Minimum: 384000. Maximum: 640000.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Specify the average bitrate in bits per second. The bitrate that you specify
     * must be a multiple of 8000 within the allowed minimum and maximum values.  Leave
     * blank to use the default bitrate for the coding mode you select according ETSI
     * TS 102 366. Valid bitrates for coding mode 1/0: Default: 96000. Minimum: 64000.
     * Maximum: 128000. Valid bitrates for coding mode 1/1: Default: 192000. Minimum:
     * 128000. Maximum: 384000. Valid bitrates for coding mode 2/0: Default: 192000.
     * Minimum: 128000. Maximum: 384000. Valid bitrates for coding mode 3/2 with FLE:
     * Default: 384000. Minimum: 384000. Maximum: 640000.
     */
    inline Ac3Settings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Specify the bitstream mode for the AC-3 stream that the encoder emits. For more
     * information about the AC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline const Ac3BitstreamMode& GetBitstreamMode() const{ return m_bitstreamMode; }

    /**
     * Specify the bitstream mode for the AC-3 stream that the encoder emits. For more
     * information about the AC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline bool BitstreamModeHasBeenSet() const { return m_bitstreamModeHasBeenSet; }

    /**
     * Specify the bitstream mode for the AC-3 stream that the encoder emits. For more
     * information about the AC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline void SetBitstreamMode(const Ac3BitstreamMode& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = value; }

    /**
     * Specify the bitstream mode for the AC-3 stream that the encoder emits. For more
     * information about the AC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline void SetBitstreamMode(Ac3BitstreamMode&& value) { m_bitstreamModeHasBeenSet = true; m_bitstreamMode = std::move(value); }

    /**
     * Specify the bitstream mode for the AC-3 stream that the encoder emits. For more
     * information about the AC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline Ac3Settings& WithBitstreamMode(const Ac3BitstreamMode& value) { SetBitstreamMode(value); return *this;}

    /**
     * Specify the bitstream mode for the AC-3 stream that the encoder emits. For more
     * information about the AC3 bitstream mode, see ATSC A/52-2012 (Annex E).
     */
    inline Ac3Settings& WithBitstreamMode(Ac3BitstreamMode&& value) { SetBitstreamMode(std::move(value)); return *this;}


    /**
     * Dolby Digital coding mode. Determines number of channels.
     */
    inline const Ac3CodingMode& GetCodingMode() const{ return m_codingMode; }

    /**
     * Dolby Digital coding mode. Determines number of channels.
     */
    inline bool CodingModeHasBeenSet() const { return m_codingModeHasBeenSet; }

    /**
     * Dolby Digital coding mode. Determines number of channels.
     */
    inline void SetCodingMode(const Ac3CodingMode& value) { m_codingModeHasBeenSet = true; m_codingMode = value; }

    /**
     * Dolby Digital coding mode. Determines number of channels.
     */
    inline void SetCodingMode(Ac3CodingMode&& value) { m_codingModeHasBeenSet = true; m_codingMode = std::move(value); }

    /**
     * Dolby Digital coding mode. Determines number of channels.
     */
    inline Ac3Settings& WithCodingMode(const Ac3CodingMode& value) { SetCodingMode(value); return *this;}

    /**
     * Dolby Digital coding mode. Determines number of channels.
     */
    inline Ac3Settings& WithCodingMode(Ac3CodingMode&& value) { SetCodingMode(std::move(value)); return *this;}


    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital,
     * dialnorm will be passed through.
     */
    inline int GetDialnorm() const{ return m_dialnorm; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital,
     * dialnorm will be passed through.
     */
    inline bool DialnormHasBeenSet() const { return m_dialnormHasBeenSet; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital,
     * dialnorm will be passed through.
     */
    inline void SetDialnorm(int value) { m_dialnormHasBeenSet = true; m_dialnorm = value; }

    /**
     * Sets the dialnorm for the output. If blank and input audio is Dolby Digital,
     * dialnorm will be passed through.
     */
    inline Ac3Settings& WithDialnorm(int value) { SetDialnorm(value); return *this;}


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
    inline const Ac3DynamicRangeCompressionLine& GetDynamicRangeCompressionLine() const{ return m_dynamicRangeCompressionLine; }

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
    inline void SetDynamicRangeCompressionLine(const Ac3DynamicRangeCompressionLine& value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = value; }

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
    inline void SetDynamicRangeCompressionLine(Ac3DynamicRangeCompressionLine&& value) { m_dynamicRangeCompressionLineHasBeenSet = true; m_dynamicRangeCompressionLine = std::move(value); }

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
    inline Ac3Settings& WithDynamicRangeCompressionLine(const Ac3DynamicRangeCompressionLine& value) { SetDynamicRangeCompressionLine(value); return *this;}

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
    inline Ac3Settings& WithDynamicRangeCompressionLine(Ac3DynamicRangeCompressionLine&& value) { SetDynamicRangeCompressionLine(std::move(value)); return *this;}


    /**
     * When you want to add Dolby dynamic range compression (DRC) signaling to your
     * output stream, we recommend that you use the mode-specific settings instead of
     * Dynamic range compression profile (DynamicRangeCompressionProfile). The
     * mode-specific settings are Dynamic range compression profile, line mode
     * (dynamicRangeCompressionLine) and Dynamic range compression profile, RF mode
     * (dynamicRangeCompressionRf). Note that when you specify values for all three
     * settings, MediaConvert ignores the value of this setting in favor of the
     * mode-specific settings. If you do use this setting instead of the mode-specific
     * settings, choose None (NONE) to leave out DRC signaling. Keep the default Film
     * standard (FILM_STANDARD) to set the profile to Dolby's film standard profile for
     * all operating modes.
     */
    inline const Ac3DynamicRangeCompressionProfile& GetDynamicRangeCompressionProfile() const{ return m_dynamicRangeCompressionProfile; }

    /**
     * When you want to add Dolby dynamic range compression (DRC) signaling to your
     * output stream, we recommend that you use the mode-specific settings instead of
     * Dynamic range compression profile (DynamicRangeCompressionProfile). The
     * mode-specific settings are Dynamic range compression profile, line mode
     * (dynamicRangeCompressionLine) and Dynamic range compression profile, RF mode
     * (dynamicRangeCompressionRf). Note that when you specify values for all three
     * settings, MediaConvert ignores the value of this setting in favor of the
     * mode-specific settings. If you do use this setting instead of the mode-specific
     * settings, choose None (NONE) to leave out DRC signaling. Keep the default Film
     * standard (FILM_STANDARD) to set the profile to Dolby's film standard profile for
     * all operating modes.
     */
    inline bool DynamicRangeCompressionProfileHasBeenSet() const { return m_dynamicRangeCompressionProfileHasBeenSet; }

    /**
     * When you want to add Dolby dynamic range compression (DRC) signaling to your
     * output stream, we recommend that you use the mode-specific settings instead of
     * Dynamic range compression profile (DynamicRangeCompressionProfile). The
     * mode-specific settings are Dynamic range compression profile, line mode
     * (dynamicRangeCompressionLine) and Dynamic range compression profile, RF mode
     * (dynamicRangeCompressionRf). Note that when you specify values for all three
     * settings, MediaConvert ignores the value of this setting in favor of the
     * mode-specific settings. If you do use this setting instead of the mode-specific
     * settings, choose None (NONE) to leave out DRC signaling. Keep the default Film
     * standard (FILM_STANDARD) to set the profile to Dolby's film standard profile for
     * all operating modes.
     */
    inline void SetDynamicRangeCompressionProfile(const Ac3DynamicRangeCompressionProfile& value) { m_dynamicRangeCompressionProfileHasBeenSet = true; m_dynamicRangeCompressionProfile = value; }

    /**
     * When you want to add Dolby dynamic range compression (DRC) signaling to your
     * output stream, we recommend that you use the mode-specific settings instead of
     * Dynamic range compression profile (DynamicRangeCompressionProfile). The
     * mode-specific settings are Dynamic range compression profile, line mode
     * (dynamicRangeCompressionLine) and Dynamic range compression profile, RF mode
     * (dynamicRangeCompressionRf). Note that when you specify values for all three
     * settings, MediaConvert ignores the value of this setting in favor of the
     * mode-specific settings. If you do use this setting instead of the mode-specific
     * settings, choose None (NONE) to leave out DRC signaling. Keep the default Film
     * standard (FILM_STANDARD) to set the profile to Dolby's film standard profile for
     * all operating modes.
     */
    inline void SetDynamicRangeCompressionProfile(Ac3DynamicRangeCompressionProfile&& value) { m_dynamicRangeCompressionProfileHasBeenSet = true; m_dynamicRangeCompressionProfile = std::move(value); }

    /**
     * When you want to add Dolby dynamic range compression (DRC) signaling to your
     * output stream, we recommend that you use the mode-specific settings instead of
     * Dynamic range compression profile (DynamicRangeCompressionProfile). The
     * mode-specific settings are Dynamic range compression profile, line mode
     * (dynamicRangeCompressionLine) and Dynamic range compression profile, RF mode
     * (dynamicRangeCompressionRf). Note that when you specify values for all three
     * settings, MediaConvert ignores the value of this setting in favor of the
     * mode-specific settings. If you do use this setting instead of the mode-specific
     * settings, choose None (NONE) to leave out DRC signaling. Keep the default Film
     * standard (FILM_STANDARD) to set the profile to Dolby's film standard profile for
     * all operating modes.
     */
    inline Ac3Settings& WithDynamicRangeCompressionProfile(const Ac3DynamicRangeCompressionProfile& value) { SetDynamicRangeCompressionProfile(value); return *this;}

    /**
     * When you want to add Dolby dynamic range compression (DRC) signaling to your
     * output stream, we recommend that you use the mode-specific settings instead of
     * Dynamic range compression profile (DynamicRangeCompressionProfile). The
     * mode-specific settings are Dynamic range compression profile, line mode
     * (dynamicRangeCompressionLine) and Dynamic range compression profile, RF mode
     * (dynamicRangeCompressionRf). Note that when you specify values for all three
     * settings, MediaConvert ignores the value of this setting in favor of the
     * mode-specific settings. If you do use this setting instead of the mode-specific
     * settings, choose None (NONE) to leave out DRC signaling. Keep the default Film
     * standard (FILM_STANDARD) to set the profile to Dolby's film standard profile for
     * all operating modes.
     */
    inline Ac3Settings& WithDynamicRangeCompressionProfile(Ac3DynamicRangeCompressionProfile&& value) { SetDynamicRangeCompressionProfile(std::move(value)); return *this;}


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
    inline const Ac3DynamicRangeCompressionRf& GetDynamicRangeCompressionRf() const{ return m_dynamicRangeCompressionRf; }

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
    inline void SetDynamicRangeCompressionRf(const Ac3DynamicRangeCompressionRf& value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = value; }

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
    inline void SetDynamicRangeCompressionRf(Ac3DynamicRangeCompressionRf&& value) { m_dynamicRangeCompressionRfHasBeenSet = true; m_dynamicRangeCompressionRf = std::move(value); }

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
    inline Ac3Settings& WithDynamicRangeCompressionRf(const Ac3DynamicRangeCompressionRf& value) { SetDynamicRangeCompressionRf(value); return *this;}

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
    inline Ac3Settings& WithDynamicRangeCompressionRf(Ac3DynamicRangeCompressionRf&& value) { SetDynamicRangeCompressionRf(std::move(value)); return *this;}


    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline const Ac3LfeFilter& GetLfeFilter() const{ return m_lfeFilter; }

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline bool LfeFilterHasBeenSet() const { return m_lfeFilterHasBeenSet; }

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline void SetLfeFilter(const Ac3LfeFilter& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = value; }

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline void SetLfeFilter(Ac3LfeFilter&& value) { m_lfeFilterHasBeenSet = true; m_lfeFilter = std::move(value); }

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline Ac3Settings& WithLfeFilter(const Ac3LfeFilter& value) { SetLfeFilter(value); return *this;}

    /**
     * Applies a 120Hz lowpass filter to the LFE channel prior to encoding. Only valid
     * with 3_2_LFE coding mode.
     */
    inline Ac3Settings& WithLfeFilter(Ac3LfeFilter&& value) { SetLfeFilter(std::move(value)); return *this;}


    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline const Ac3MetadataControl& GetMetadataControl() const{ return m_metadataControl; }

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
    inline void SetMetadataControl(const Ac3MetadataControl& value) { m_metadataControlHasBeenSet = true; m_metadataControl = value; }

    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline void SetMetadataControl(Ac3MetadataControl&& value) { m_metadataControlHasBeenSet = true; m_metadataControl = std::move(value); }

    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline Ac3Settings& WithMetadataControl(const Ac3MetadataControl& value) { SetMetadataControl(value); return *this;}

    /**
     * When set to FOLLOW_INPUT, encoder metadata will be sourced from the DD, DD+, or
     * DolbyE decoder that supplied this audio data. If audio was not supplied from one
     * of these streams, then the static metadata settings will be used.
     */
    inline Ac3Settings& WithMetadataControl(Ac3MetadataControl&& value) { SetMetadataControl(std::move(value)); return *this;}


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
    inline Ac3Settings& WithSampleRate(int value) { SetSampleRate(value); return *this;}

  private:

    int m_bitrate;
    bool m_bitrateHasBeenSet = false;

    Ac3BitstreamMode m_bitstreamMode;
    bool m_bitstreamModeHasBeenSet = false;

    Ac3CodingMode m_codingMode;
    bool m_codingModeHasBeenSet = false;

    int m_dialnorm;
    bool m_dialnormHasBeenSet = false;

    Ac3DynamicRangeCompressionLine m_dynamicRangeCompressionLine;
    bool m_dynamicRangeCompressionLineHasBeenSet = false;

    Ac3DynamicRangeCompressionProfile m_dynamicRangeCompressionProfile;
    bool m_dynamicRangeCompressionProfileHasBeenSet = false;

    Ac3DynamicRangeCompressionRf m_dynamicRangeCompressionRf;
    bool m_dynamicRangeCompressionRfHasBeenSet = false;

    Ac3LfeFilter m_lfeFilter;
    bool m_lfeFilterHasBeenSet = false;

    Ac3MetadataControl m_metadataControl;
    bool m_metadataControlHasBeenSet = false;

    int m_sampleRate;
    bool m_sampleRateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
