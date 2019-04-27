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
#include <aws/medialive/model/M2tsAbsentInputAudioBehavior.h>
#include <aws/medialive/model/M2tsArib.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/M2tsAribCaptionsPidControl.h>
#include <aws/medialive/model/M2tsAudioBufferModel.h>
#include <aws/medialive/model/M2tsAudioStreamType.h>
#include <aws/medialive/model/M2tsBufferModel.h>
#include <aws/medialive/model/M2tsCcDescriptor.h>
#include <aws/medialive/model/DvbNitSettings.h>
#include <aws/medialive/model/DvbSdtSettings.h>
#include <aws/medialive/model/DvbTdtSettings.h>
#include <aws/medialive/model/M2tsEbifControl.h>
#include <aws/medialive/model/M2tsAudioInterval.h>
#include <aws/medialive/model/M2tsEbpPlacement.h>
#include <aws/medialive/model/M2tsEsRateInPes.h>
#include <aws/medialive/model/M2tsKlv.h>
#include <aws/medialive/model/M2tsPcrControl.h>
#include <aws/medialive/model/M2tsRateMode.h>
#include <aws/medialive/model/M2tsScte35Control.h>
#include <aws/medialive/model/M2tsSegmentationMarkers.h>
#include <aws/medialive/model/M2tsSegmentationStyle.h>
#include <aws/medialive/model/M2tsTimedMetadataBehavior.h>
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
   * M2ts Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/M2tsSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API M2tsSettings
  {
  public:
    M2tsSettings();
    M2tsSettings(Aws::Utils::Json::JsonView jsonValue);
    M2tsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * When set to drop, output audio streams will be removed from the program if the
     * selected input audio stream is removed from the input. This allows the output
     * audio configuration to dynamically change based on input configuration. If this
     * is set to encodeSilence, all output audio streams will output encoded silence
     * when not connected to an active input stream.
     */
    inline const M2tsAbsentInputAudioBehavior& GetAbsentInputAudioBehavior() const{ return m_absentInputAudioBehavior; }

    /**
     * When set to drop, output audio streams will be removed from the program if the
     * selected input audio stream is removed from the input. This allows the output
     * audio configuration to dynamically change based on input configuration. If this
     * is set to encodeSilence, all output audio streams will output encoded silence
     * when not connected to an active input stream.
     */
    inline bool AbsentInputAudioBehaviorHasBeenSet() const { return m_absentInputAudioBehaviorHasBeenSet; }

    /**
     * When set to drop, output audio streams will be removed from the program if the
     * selected input audio stream is removed from the input. This allows the output
     * audio configuration to dynamically change based on input configuration. If this
     * is set to encodeSilence, all output audio streams will output encoded silence
     * when not connected to an active input stream.
     */
    inline void SetAbsentInputAudioBehavior(const M2tsAbsentInputAudioBehavior& value) { m_absentInputAudioBehaviorHasBeenSet = true; m_absentInputAudioBehavior = value; }

    /**
     * When set to drop, output audio streams will be removed from the program if the
     * selected input audio stream is removed from the input. This allows the output
     * audio configuration to dynamically change based on input configuration. If this
     * is set to encodeSilence, all output audio streams will output encoded silence
     * when not connected to an active input stream.
     */
    inline void SetAbsentInputAudioBehavior(M2tsAbsentInputAudioBehavior&& value) { m_absentInputAudioBehaviorHasBeenSet = true; m_absentInputAudioBehavior = std::move(value); }

    /**
     * When set to drop, output audio streams will be removed from the program if the
     * selected input audio stream is removed from the input. This allows the output
     * audio configuration to dynamically change based on input configuration. If this
     * is set to encodeSilence, all output audio streams will output encoded silence
     * when not connected to an active input stream.
     */
    inline M2tsSettings& WithAbsentInputAudioBehavior(const M2tsAbsentInputAudioBehavior& value) { SetAbsentInputAudioBehavior(value); return *this;}

    /**
     * When set to drop, output audio streams will be removed from the program if the
     * selected input audio stream is removed from the input. This allows the output
     * audio configuration to dynamically change based on input configuration. If this
     * is set to encodeSilence, all output audio streams will output encoded silence
     * when not connected to an active input stream.
     */
    inline M2tsSettings& WithAbsentInputAudioBehavior(M2tsAbsentInputAudioBehavior&& value) { SetAbsentInputAudioBehavior(std::move(value)); return *this;}


    /**
     * When set to enabled, uses ARIB-compliant field muxing and removes video
     * descriptor.
     */
    inline const M2tsArib& GetArib() const{ return m_arib; }

    /**
     * When set to enabled, uses ARIB-compliant field muxing and removes video
     * descriptor.
     */
    inline bool AribHasBeenSet() const { return m_aribHasBeenSet; }

    /**
     * When set to enabled, uses ARIB-compliant field muxing and removes video
     * descriptor.
     */
    inline void SetArib(const M2tsArib& value) { m_aribHasBeenSet = true; m_arib = value; }

    /**
     * When set to enabled, uses ARIB-compliant field muxing and removes video
     * descriptor.
     */
    inline void SetArib(M2tsArib&& value) { m_aribHasBeenSet = true; m_arib = std::move(value); }

    /**
     * When set to enabled, uses ARIB-compliant field muxing and removes video
     * descriptor.
     */
    inline M2tsSettings& WithArib(const M2tsArib& value) { SetArib(value); return *this;}

    /**
     * When set to enabled, uses ARIB-compliant field muxing and removes video
     * descriptor.
     */
    inline M2tsSettings& WithArib(M2tsArib&& value) { SetArib(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) for ARIB Captions in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline const Aws::String& GetAribCaptionsPid() const{ return m_aribCaptionsPid; }

    /**
     * Packet Identifier (PID) for ARIB Captions in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline bool AribCaptionsPidHasBeenSet() const { return m_aribCaptionsPidHasBeenSet; }

    /**
     * Packet Identifier (PID) for ARIB Captions in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline void SetAribCaptionsPid(const Aws::String& value) { m_aribCaptionsPidHasBeenSet = true; m_aribCaptionsPid = value; }

    /**
     * Packet Identifier (PID) for ARIB Captions in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline void SetAribCaptionsPid(Aws::String&& value) { m_aribCaptionsPidHasBeenSet = true; m_aribCaptionsPid = std::move(value); }

    /**
     * Packet Identifier (PID) for ARIB Captions in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline void SetAribCaptionsPid(const char* value) { m_aribCaptionsPidHasBeenSet = true; m_aribCaptionsPid.assign(value); }

    /**
     * Packet Identifier (PID) for ARIB Captions in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline M2tsSettings& WithAribCaptionsPid(const Aws::String& value) { SetAribCaptionsPid(value); return *this;}

    /**
     * Packet Identifier (PID) for ARIB Captions in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline M2tsSettings& WithAribCaptionsPid(Aws::String&& value) { SetAribCaptionsPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for ARIB Captions in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline M2tsSettings& WithAribCaptionsPid(const char* value) { SetAribCaptionsPid(value); return *this;}


    /**
     * If set to auto, pid number used for ARIB Captions will be auto-selected from
     * unused pids.  If set to useConfigured, ARIB Captions will be on the configured
     * pid number.
     */
    inline const M2tsAribCaptionsPidControl& GetAribCaptionsPidControl() const{ return m_aribCaptionsPidControl; }

    /**
     * If set to auto, pid number used for ARIB Captions will be auto-selected from
     * unused pids.  If set to useConfigured, ARIB Captions will be on the configured
     * pid number.
     */
    inline bool AribCaptionsPidControlHasBeenSet() const { return m_aribCaptionsPidControlHasBeenSet; }

    /**
     * If set to auto, pid number used for ARIB Captions will be auto-selected from
     * unused pids.  If set to useConfigured, ARIB Captions will be on the configured
     * pid number.
     */
    inline void SetAribCaptionsPidControl(const M2tsAribCaptionsPidControl& value) { m_aribCaptionsPidControlHasBeenSet = true; m_aribCaptionsPidControl = value; }

    /**
     * If set to auto, pid number used for ARIB Captions will be auto-selected from
     * unused pids.  If set to useConfigured, ARIB Captions will be on the configured
     * pid number.
     */
    inline void SetAribCaptionsPidControl(M2tsAribCaptionsPidControl&& value) { m_aribCaptionsPidControlHasBeenSet = true; m_aribCaptionsPidControl = std::move(value); }

    /**
     * If set to auto, pid number used for ARIB Captions will be auto-selected from
     * unused pids.  If set to useConfigured, ARIB Captions will be on the configured
     * pid number.
     */
    inline M2tsSettings& WithAribCaptionsPidControl(const M2tsAribCaptionsPidControl& value) { SetAribCaptionsPidControl(value); return *this;}

    /**
     * If set to auto, pid number used for ARIB Captions will be auto-selected from
     * unused pids.  If set to useConfigured, ARIB Captions will be on the configured
     * pid number.
     */
    inline M2tsSettings& WithAribCaptionsPidControl(M2tsAribCaptionsPidControl&& value) { SetAribCaptionsPidControl(std::move(value)); return *this;}


    /**
     * When set to dvb, uses DVB buffer model for Dolby Digital audio.  When set to
     * atsc, the ATSC model is used.
     */
    inline const M2tsAudioBufferModel& GetAudioBufferModel() const{ return m_audioBufferModel; }

    /**
     * When set to dvb, uses DVB buffer model for Dolby Digital audio.  When set to
     * atsc, the ATSC model is used.
     */
    inline bool AudioBufferModelHasBeenSet() const { return m_audioBufferModelHasBeenSet; }

    /**
     * When set to dvb, uses DVB buffer model for Dolby Digital audio.  When set to
     * atsc, the ATSC model is used.
     */
    inline void SetAudioBufferModel(const M2tsAudioBufferModel& value) { m_audioBufferModelHasBeenSet = true; m_audioBufferModel = value; }

    /**
     * When set to dvb, uses DVB buffer model for Dolby Digital audio.  When set to
     * atsc, the ATSC model is used.
     */
    inline void SetAudioBufferModel(M2tsAudioBufferModel&& value) { m_audioBufferModelHasBeenSet = true; m_audioBufferModel = std::move(value); }

    /**
     * When set to dvb, uses DVB buffer model for Dolby Digital audio.  When set to
     * atsc, the ATSC model is used.
     */
    inline M2tsSettings& WithAudioBufferModel(const M2tsAudioBufferModel& value) { SetAudioBufferModel(value); return *this;}

    /**
     * When set to dvb, uses DVB buffer model for Dolby Digital audio.  When set to
     * atsc, the ATSC model is used.
     */
    inline M2tsSettings& WithAudioBufferModel(M2tsAudioBufferModel&& value) { SetAudioBufferModel(std::move(value)); return *this;}


    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline int GetAudioFramesPerPes() const{ return m_audioFramesPerPes; }

    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline bool AudioFramesPerPesHasBeenSet() const { return m_audioFramesPerPesHasBeenSet; }

    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline void SetAudioFramesPerPes(int value) { m_audioFramesPerPesHasBeenSet = true; m_audioFramesPerPes = value; }

    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline M2tsSettings& WithAudioFramesPerPes(int value) { SetAudioFramesPerPes(value); return *this;}


    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values. Each PID
     * specified must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetAudioPids() const{ return m_audioPids; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values. Each PID
     * specified must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values. Each PID
     * specified must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetAudioPids(const Aws::String& value) { m_audioPidsHasBeenSet = true; m_audioPids = value; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values. Each PID
     * specified must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetAudioPids(Aws::String&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::move(value); }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values. Each PID
     * specified must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetAudioPids(const char* value) { m_audioPidsHasBeenSet = true; m_audioPids.assign(value); }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values. Each PID
     * specified must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithAudioPids(const Aws::String& value) { SetAudioPids(value); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values. Each PID
     * specified must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithAudioPids(Aws::String&& value) { SetAudioPids(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values. Each PID
     * specified must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithAudioPids(const char* value) { SetAudioPids(value); return *this;}


    /**
     * When set to atsc, uses stream type = 0x81 for AC3 and stream type = 0x87 for
     * EAC3. When set to dvb, uses stream type = 0x06.
     */
    inline const M2tsAudioStreamType& GetAudioStreamType() const{ return m_audioStreamType; }

    /**
     * When set to atsc, uses stream type = 0x81 for AC3 and stream type = 0x87 for
     * EAC3. When set to dvb, uses stream type = 0x06.
     */
    inline bool AudioStreamTypeHasBeenSet() const { return m_audioStreamTypeHasBeenSet; }

    /**
     * When set to atsc, uses stream type = 0x81 for AC3 and stream type = 0x87 for
     * EAC3. When set to dvb, uses stream type = 0x06.
     */
    inline void SetAudioStreamType(const M2tsAudioStreamType& value) { m_audioStreamTypeHasBeenSet = true; m_audioStreamType = value; }

    /**
     * When set to atsc, uses stream type = 0x81 for AC3 and stream type = 0x87 for
     * EAC3. When set to dvb, uses stream type = 0x06.
     */
    inline void SetAudioStreamType(M2tsAudioStreamType&& value) { m_audioStreamTypeHasBeenSet = true; m_audioStreamType = std::move(value); }

    /**
     * When set to atsc, uses stream type = 0x81 for AC3 and stream type = 0x87 for
     * EAC3. When set to dvb, uses stream type = 0x06.
     */
    inline M2tsSettings& WithAudioStreamType(const M2tsAudioStreamType& value) { SetAudioStreamType(value); return *this;}

    /**
     * When set to atsc, uses stream type = 0x81 for AC3 and stream type = 0x87 for
     * EAC3. When set to dvb, uses stream type = 0x06.
     */
    inline M2tsSettings& WithAudioStreamType(M2tsAudioStreamType&& value) { SetAudioStreamType(std::move(value)); return *this;}


    /**
     * The output bitrate of the transport stream in bits per second. Setting to 0 lets
     * the muxer automatically determine the appropriate bitrate.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * The output bitrate of the transport stream in bits per second. Setting to 0 lets
     * the muxer automatically determine the appropriate bitrate.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * The output bitrate of the transport stream in bits per second. Setting to 0 lets
     * the muxer automatically determine the appropriate bitrate.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * The output bitrate of the transport stream in bits per second. Setting to 0 lets
     * the muxer automatically determine the appropriate bitrate.
     */
    inline M2tsSettings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * If set to multiplex, use multiplex buffer model for accurate interleaving. 
     * Setting to bufferModel to none can lead to lower latency, but low-memory devices
     * may not be able to play back the stream without interruptions.
     */
    inline const M2tsBufferModel& GetBufferModel() const{ return m_bufferModel; }

    /**
     * If set to multiplex, use multiplex buffer model for accurate interleaving. 
     * Setting to bufferModel to none can lead to lower latency, but low-memory devices
     * may not be able to play back the stream without interruptions.
     */
    inline bool BufferModelHasBeenSet() const { return m_bufferModelHasBeenSet; }

    /**
     * If set to multiplex, use multiplex buffer model for accurate interleaving. 
     * Setting to bufferModel to none can lead to lower latency, but low-memory devices
     * may not be able to play back the stream without interruptions.
     */
    inline void SetBufferModel(const M2tsBufferModel& value) { m_bufferModelHasBeenSet = true; m_bufferModel = value; }

    /**
     * If set to multiplex, use multiplex buffer model for accurate interleaving. 
     * Setting to bufferModel to none can lead to lower latency, but low-memory devices
     * may not be able to play back the stream without interruptions.
     */
    inline void SetBufferModel(M2tsBufferModel&& value) { m_bufferModelHasBeenSet = true; m_bufferModel = std::move(value); }

    /**
     * If set to multiplex, use multiplex buffer model for accurate interleaving. 
     * Setting to bufferModel to none can lead to lower latency, but low-memory devices
     * may not be able to play back the stream without interruptions.
     */
    inline M2tsSettings& WithBufferModel(const M2tsBufferModel& value) { SetBufferModel(value); return *this;}

    /**
     * If set to multiplex, use multiplex buffer model for accurate interleaving. 
     * Setting to bufferModel to none can lead to lower latency, but low-memory devices
     * may not be able to play back the stream without interruptions.
     */
    inline M2tsSettings& WithBufferModel(M2tsBufferModel&& value) { SetBufferModel(std::move(value)); return *this;}


    /**
     * When set to enabled, generates captionServiceDescriptor in PMT.
     */
    inline const M2tsCcDescriptor& GetCcDescriptor() const{ return m_ccDescriptor; }

    /**
     * When set to enabled, generates captionServiceDescriptor in PMT.
     */
    inline bool CcDescriptorHasBeenSet() const { return m_ccDescriptorHasBeenSet; }

    /**
     * When set to enabled, generates captionServiceDescriptor in PMT.
     */
    inline void SetCcDescriptor(const M2tsCcDescriptor& value) { m_ccDescriptorHasBeenSet = true; m_ccDescriptor = value; }

    /**
     * When set to enabled, generates captionServiceDescriptor in PMT.
     */
    inline void SetCcDescriptor(M2tsCcDescriptor&& value) { m_ccDescriptorHasBeenSet = true; m_ccDescriptor = std::move(value); }

    /**
     * When set to enabled, generates captionServiceDescriptor in PMT.
     */
    inline M2tsSettings& WithCcDescriptor(const M2tsCcDescriptor& value) { SetCcDescriptor(value); return *this;}

    /**
     * When set to enabled, generates captionServiceDescriptor in PMT.
     */
    inline M2tsSettings& WithCcDescriptor(M2tsCcDescriptor&& value) { SetCcDescriptor(std::move(value)); return *this;}


    /**
     * Inserts DVB Network Information Table (NIT) at the specified table repetition
     * interval.
     */
    inline const DvbNitSettings& GetDvbNitSettings() const{ return m_dvbNitSettings; }

    /**
     * Inserts DVB Network Information Table (NIT) at the specified table repetition
     * interval.
     */
    inline bool DvbNitSettingsHasBeenSet() const { return m_dvbNitSettingsHasBeenSet; }

    /**
     * Inserts DVB Network Information Table (NIT) at the specified table repetition
     * interval.
     */
    inline void SetDvbNitSettings(const DvbNitSettings& value) { m_dvbNitSettingsHasBeenSet = true; m_dvbNitSettings = value; }

    /**
     * Inserts DVB Network Information Table (NIT) at the specified table repetition
     * interval.
     */
    inline void SetDvbNitSettings(DvbNitSettings&& value) { m_dvbNitSettingsHasBeenSet = true; m_dvbNitSettings = std::move(value); }

    /**
     * Inserts DVB Network Information Table (NIT) at the specified table repetition
     * interval.
     */
    inline M2tsSettings& WithDvbNitSettings(const DvbNitSettings& value) { SetDvbNitSettings(value); return *this;}

    /**
     * Inserts DVB Network Information Table (NIT) at the specified table repetition
     * interval.
     */
    inline M2tsSettings& WithDvbNitSettings(DvbNitSettings&& value) { SetDvbNitSettings(std::move(value)); return *this;}


    /**
     * Inserts DVB Service Description Table (SDT) at the specified table repetition
     * interval.
     */
    inline const DvbSdtSettings& GetDvbSdtSettings() const{ return m_dvbSdtSettings; }

    /**
     * Inserts DVB Service Description Table (SDT) at the specified table repetition
     * interval.
     */
    inline bool DvbSdtSettingsHasBeenSet() const { return m_dvbSdtSettingsHasBeenSet; }

    /**
     * Inserts DVB Service Description Table (SDT) at the specified table repetition
     * interval.
     */
    inline void SetDvbSdtSettings(const DvbSdtSettings& value) { m_dvbSdtSettingsHasBeenSet = true; m_dvbSdtSettings = value; }

    /**
     * Inserts DVB Service Description Table (SDT) at the specified table repetition
     * interval.
     */
    inline void SetDvbSdtSettings(DvbSdtSettings&& value) { m_dvbSdtSettingsHasBeenSet = true; m_dvbSdtSettings = std::move(value); }

    /**
     * Inserts DVB Service Description Table (SDT) at the specified table repetition
     * interval.
     */
    inline M2tsSettings& WithDvbSdtSettings(const DvbSdtSettings& value) { SetDvbSdtSettings(value); return *this;}

    /**
     * Inserts DVB Service Description Table (SDT) at the specified table repetition
     * interval.
     */
    inline M2tsSettings& WithDvbSdtSettings(DvbSdtSettings&& value) { SetDvbSdtSettings(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation. Can be entered as decimal or hexadecimal values.  Each PID specified
     * must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetDvbSubPids() const{ return m_dvbSubPids; }

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation. Can be entered as decimal or hexadecimal values.  Each PID specified
     * must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline bool DvbSubPidsHasBeenSet() const { return m_dvbSubPidsHasBeenSet; }

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation. Can be entered as decimal or hexadecimal values.  Each PID specified
     * must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetDvbSubPids(const Aws::String& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = value; }

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation. Can be entered as decimal or hexadecimal values.  Each PID specified
     * must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetDvbSubPids(Aws::String&& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = std::move(value); }

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation. Can be entered as decimal or hexadecimal values.  Each PID specified
     * must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetDvbSubPids(const char* value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids.assign(value); }

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation. Can be entered as decimal or hexadecimal values.  Each PID specified
     * must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithDvbSubPids(const Aws::String& value) { SetDvbSubPids(value); return *this;}

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation. Can be entered as decimal or hexadecimal values.  Each PID specified
     * must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithDvbSubPids(Aws::String&& value) { SetDvbSubPids(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation. Can be entered as decimal or hexadecimal values.  Each PID specified
     * must be in the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithDvbSubPids(const char* value) { SetDvbSubPids(value); return *this;}


    /**
     * Inserts DVB Time and Date Table (TDT) at the specified table repetition
     * interval.
     */
    inline const DvbTdtSettings& GetDvbTdtSettings() const{ return m_dvbTdtSettings; }

    /**
     * Inserts DVB Time and Date Table (TDT) at the specified table repetition
     * interval.
     */
    inline bool DvbTdtSettingsHasBeenSet() const { return m_dvbTdtSettingsHasBeenSet; }

    /**
     * Inserts DVB Time and Date Table (TDT) at the specified table repetition
     * interval.
     */
    inline void SetDvbTdtSettings(const DvbTdtSettings& value) { m_dvbTdtSettingsHasBeenSet = true; m_dvbTdtSettings = value; }

    /**
     * Inserts DVB Time and Date Table (TDT) at the specified table repetition
     * interval.
     */
    inline void SetDvbTdtSettings(DvbTdtSettings&& value) { m_dvbTdtSettingsHasBeenSet = true; m_dvbTdtSettings = std::move(value); }

    /**
     * Inserts DVB Time and Date Table (TDT) at the specified table repetition
     * interval.
     */
    inline M2tsSettings& WithDvbTdtSettings(const DvbTdtSettings& value) { SetDvbTdtSettings(value); return *this;}

    /**
     * Inserts DVB Time and Date Table (TDT) at the specified table repetition
     * interval.
     */
    inline M2tsSettings& WithDvbTdtSettings(DvbTdtSettings&& value) { SetDvbTdtSettings(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetDvbTeletextPid() const{ return m_dvbTeletextPid; }

    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline bool DvbTeletextPidHasBeenSet() const { return m_dvbTeletextPidHasBeenSet; }

    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetDvbTeletextPid(const Aws::String& value) { m_dvbTeletextPidHasBeenSet = true; m_dvbTeletextPid = value; }

    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetDvbTeletextPid(Aws::String&& value) { m_dvbTeletextPidHasBeenSet = true; m_dvbTeletextPid = std::move(value); }

    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetDvbTeletextPid(const char* value) { m_dvbTeletextPidHasBeenSet = true; m_dvbTeletextPid.assign(value); }

    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithDvbTeletextPid(const Aws::String& value) { SetDvbTeletextPid(value); return *this;}

    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithDvbTeletextPid(Aws::String&& value) { SetDvbTeletextPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithDvbTeletextPid(const char* value) { SetDvbTeletextPid(value); return *this;}


    /**
     * If set to passthrough, passes any EBIF data from the input source to this
     * output.
     */
    inline const M2tsEbifControl& GetEbif() const{ return m_ebif; }

    /**
     * If set to passthrough, passes any EBIF data from the input source to this
     * output.
     */
    inline bool EbifHasBeenSet() const { return m_ebifHasBeenSet; }

    /**
     * If set to passthrough, passes any EBIF data from the input source to this
     * output.
     */
    inline void SetEbif(const M2tsEbifControl& value) { m_ebifHasBeenSet = true; m_ebif = value; }

    /**
     * If set to passthrough, passes any EBIF data from the input source to this
     * output.
     */
    inline void SetEbif(M2tsEbifControl&& value) { m_ebifHasBeenSet = true; m_ebif = std::move(value); }

    /**
     * If set to passthrough, passes any EBIF data from the input source to this
     * output.
     */
    inline M2tsSettings& WithEbif(const M2tsEbifControl& value) { SetEbif(value); return *this;}

    /**
     * If set to passthrough, passes any EBIF data from the input source to this
     * output.
     */
    inline M2tsSettings& WithEbif(M2tsEbifControl&& value) { SetEbif(std::move(value)); return *this;}


    /**
     * When videoAndFixedIntervals is selected, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. Only available
     * when EBP Cablelabs segmentation markers are selected.  Partitions 1 and 2 will
     * always follow the video interval.
     */
    inline const M2tsAudioInterval& GetEbpAudioInterval() const{ return m_ebpAudioInterval; }

    /**
     * When videoAndFixedIntervals is selected, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. Only available
     * when EBP Cablelabs segmentation markers are selected.  Partitions 1 and 2 will
     * always follow the video interval.
     */
    inline bool EbpAudioIntervalHasBeenSet() const { return m_ebpAudioIntervalHasBeenSet; }

    /**
     * When videoAndFixedIntervals is selected, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. Only available
     * when EBP Cablelabs segmentation markers are selected.  Partitions 1 and 2 will
     * always follow the video interval.
     */
    inline void SetEbpAudioInterval(const M2tsAudioInterval& value) { m_ebpAudioIntervalHasBeenSet = true; m_ebpAudioInterval = value; }

    /**
     * When videoAndFixedIntervals is selected, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. Only available
     * when EBP Cablelabs segmentation markers are selected.  Partitions 1 and 2 will
     * always follow the video interval.
     */
    inline void SetEbpAudioInterval(M2tsAudioInterval&& value) { m_ebpAudioIntervalHasBeenSet = true; m_ebpAudioInterval = std::move(value); }

    /**
     * When videoAndFixedIntervals is selected, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. Only available
     * when EBP Cablelabs segmentation markers are selected.  Partitions 1 and 2 will
     * always follow the video interval.
     */
    inline M2tsSettings& WithEbpAudioInterval(const M2tsAudioInterval& value) { SetEbpAudioInterval(value); return *this;}

    /**
     * When videoAndFixedIntervals is selected, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. Only available
     * when EBP Cablelabs segmentation markers are selected.  Partitions 1 and 2 will
     * always follow the video interval.
     */
    inline M2tsSettings& WithEbpAudioInterval(M2tsAudioInterval&& value) { SetEbpAudioInterval(std::move(value)); return *this;}


    /**
     * When set, enforces that Encoder Boundary Points do not come within the specified
     * time interval of each other by looking ahead at input video. If another EBP is
     * going to come in within the specified time interval, the current EBP is not
     * emitted, and the segment is "stretched" to the next marker.  The lookahead value
     * does not add latency to the system. The Live Event must be configured elsewhere
     * to create sufficient latency to make the lookahead accurate.
     */
    inline int GetEbpLookaheadMs() const{ return m_ebpLookaheadMs; }

    /**
     * When set, enforces that Encoder Boundary Points do not come within the specified
     * time interval of each other by looking ahead at input video. If another EBP is
     * going to come in within the specified time interval, the current EBP is not
     * emitted, and the segment is "stretched" to the next marker.  The lookahead value
     * does not add latency to the system. The Live Event must be configured elsewhere
     * to create sufficient latency to make the lookahead accurate.
     */
    inline bool EbpLookaheadMsHasBeenSet() const { return m_ebpLookaheadMsHasBeenSet; }

    /**
     * When set, enforces that Encoder Boundary Points do not come within the specified
     * time interval of each other by looking ahead at input video. If another EBP is
     * going to come in within the specified time interval, the current EBP is not
     * emitted, and the segment is "stretched" to the next marker.  The lookahead value
     * does not add latency to the system. The Live Event must be configured elsewhere
     * to create sufficient latency to make the lookahead accurate.
     */
    inline void SetEbpLookaheadMs(int value) { m_ebpLookaheadMsHasBeenSet = true; m_ebpLookaheadMs = value; }

    /**
     * When set, enforces that Encoder Boundary Points do not come within the specified
     * time interval of each other by looking ahead at input video. If another EBP is
     * going to come in within the specified time interval, the current EBP is not
     * emitted, and the segment is "stretched" to the next marker.  The lookahead value
     * does not add latency to the system. The Live Event must be configured elsewhere
     * to create sufficient latency to make the lookahead accurate.
     */
    inline M2tsSettings& WithEbpLookaheadMs(int value) { SetEbpLookaheadMs(value); return *this;}


    /**
     * Controls placement of EBP on Audio PIDs. If set to videoAndAudioPids, EBP
     * markers will be placed on the video PID and all audio PIDs.  If set to videoPid,
     * EBP markers will be placed on only the video PID.
     */
    inline const M2tsEbpPlacement& GetEbpPlacement() const{ return m_ebpPlacement; }

    /**
     * Controls placement of EBP on Audio PIDs. If set to videoAndAudioPids, EBP
     * markers will be placed on the video PID and all audio PIDs.  If set to videoPid,
     * EBP markers will be placed on only the video PID.
     */
    inline bool EbpPlacementHasBeenSet() const { return m_ebpPlacementHasBeenSet; }

    /**
     * Controls placement of EBP on Audio PIDs. If set to videoAndAudioPids, EBP
     * markers will be placed on the video PID and all audio PIDs.  If set to videoPid,
     * EBP markers will be placed on only the video PID.
     */
    inline void SetEbpPlacement(const M2tsEbpPlacement& value) { m_ebpPlacementHasBeenSet = true; m_ebpPlacement = value; }

    /**
     * Controls placement of EBP on Audio PIDs. If set to videoAndAudioPids, EBP
     * markers will be placed on the video PID and all audio PIDs.  If set to videoPid,
     * EBP markers will be placed on only the video PID.
     */
    inline void SetEbpPlacement(M2tsEbpPlacement&& value) { m_ebpPlacementHasBeenSet = true; m_ebpPlacement = std::move(value); }

    /**
     * Controls placement of EBP on Audio PIDs. If set to videoAndAudioPids, EBP
     * markers will be placed on the video PID and all audio PIDs.  If set to videoPid,
     * EBP markers will be placed on only the video PID.
     */
    inline M2tsSettings& WithEbpPlacement(const M2tsEbpPlacement& value) { SetEbpPlacement(value); return *this;}

    /**
     * Controls placement of EBP on Audio PIDs. If set to videoAndAudioPids, EBP
     * markers will be placed on the video PID and all audio PIDs.  If set to videoPid,
     * EBP markers will be placed on only the video PID.
     */
    inline M2tsSettings& WithEbpPlacement(M2tsEbpPlacement&& value) { SetEbpPlacement(std::move(value)); return *this;}


    /**
     * This field is unused and deprecated.
     */
    inline const Aws::String& GetEcmPid() const{ return m_ecmPid; }

    /**
     * This field is unused and deprecated.
     */
    inline bool EcmPidHasBeenSet() const { return m_ecmPidHasBeenSet; }

    /**
     * This field is unused and deprecated.
     */
    inline void SetEcmPid(const Aws::String& value) { m_ecmPidHasBeenSet = true; m_ecmPid = value; }

    /**
     * This field is unused and deprecated.
     */
    inline void SetEcmPid(Aws::String&& value) { m_ecmPidHasBeenSet = true; m_ecmPid = std::move(value); }

    /**
     * This field is unused and deprecated.
     */
    inline void SetEcmPid(const char* value) { m_ecmPidHasBeenSet = true; m_ecmPid.assign(value); }

    /**
     * This field is unused and deprecated.
     */
    inline M2tsSettings& WithEcmPid(const Aws::String& value) { SetEcmPid(value); return *this;}

    /**
     * This field is unused and deprecated.
     */
    inline M2tsSettings& WithEcmPid(Aws::String&& value) { SetEcmPid(std::move(value)); return *this;}

    /**
     * This field is unused and deprecated.
     */
    inline M2tsSettings& WithEcmPid(const char* value) { SetEcmPid(value); return *this;}


    /**
     * Include or exclude the ES Rate field in the PES header.
     */
    inline const M2tsEsRateInPes& GetEsRateInPes() const{ return m_esRateInPes; }

    /**
     * Include or exclude the ES Rate field in the PES header.
     */
    inline bool EsRateInPesHasBeenSet() const { return m_esRateInPesHasBeenSet; }

    /**
     * Include or exclude the ES Rate field in the PES header.
     */
    inline void SetEsRateInPes(const M2tsEsRateInPes& value) { m_esRateInPesHasBeenSet = true; m_esRateInPes = value; }

    /**
     * Include or exclude the ES Rate field in the PES header.
     */
    inline void SetEsRateInPes(M2tsEsRateInPes&& value) { m_esRateInPesHasBeenSet = true; m_esRateInPes = std::move(value); }

    /**
     * Include or exclude the ES Rate field in the PES header.
     */
    inline M2tsSettings& WithEsRateInPes(const M2tsEsRateInPes& value) { SetEsRateInPes(value); return *this;}

    /**
     * Include or exclude the ES Rate field in the PES header.
     */
    inline M2tsSettings& WithEsRateInPes(M2tsEsRateInPes&& value) { SetEsRateInPes(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) for input source ETV Platform data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetEtvPlatformPid() const{ return m_etvPlatformPid; }

    /**
     * Packet Identifier (PID) for input source ETV Platform data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline bool EtvPlatformPidHasBeenSet() const { return m_etvPlatformPidHasBeenSet; }

    /**
     * Packet Identifier (PID) for input source ETV Platform data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetEtvPlatformPid(const Aws::String& value) { m_etvPlatformPidHasBeenSet = true; m_etvPlatformPid = value; }

    /**
     * Packet Identifier (PID) for input source ETV Platform data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetEtvPlatformPid(Aws::String&& value) { m_etvPlatformPidHasBeenSet = true; m_etvPlatformPid = std::move(value); }

    /**
     * Packet Identifier (PID) for input source ETV Platform data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetEtvPlatformPid(const char* value) { m_etvPlatformPidHasBeenSet = true; m_etvPlatformPid.assign(value); }

    /**
     * Packet Identifier (PID) for input source ETV Platform data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithEtvPlatformPid(const Aws::String& value) { SetEtvPlatformPid(value); return *this;}

    /**
     * Packet Identifier (PID) for input source ETV Platform data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithEtvPlatformPid(Aws::String&& value) { SetEtvPlatformPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for input source ETV Platform data to this output. Can
     * be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithEtvPlatformPid(const char* value) { SetEtvPlatformPid(value); return *this;}


    /**
     * Packet Identifier (PID) for input source ETV Signal data to this output. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline const Aws::String& GetEtvSignalPid() const{ return m_etvSignalPid; }

    /**
     * Packet Identifier (PID) for input source ETV Signal data to this output. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline bool EtvSignalPidHasBeenSet() const { return m_etvSignalPidHasBeenSet; }

    /**
     * Packet Identifier (PID) for input source ETV Signal data to this output. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline void SetEtvSignalPid(const Aws::String& value) { m_etvSignalPidHasBeenSet = true; m_etvSignalPid = value; }

    /**
     * Packet Identifier (PID) for input source ETV Signal data to this output. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline void SetEtvSignalPid(Aws::String&& value) { m_etvSignalPidHasBeenSet = true; m_etvSignalPid = std::move(value); }

    /**
     * Packet Identifier (PID) for input source ETV Signal data to this output. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline void SetEtvSignalPid(const char* value) { m_etvSignalPidHasBeenSet = true; m_etvSignalPid.assign(value); }

    /**
     * Packet Identifier (PID) for input source ETV Signal data to this output. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline M2tsSettings& WithEtvSignalPid(const Aws::String& value) { SetEtvSignalPid(value); return *this;}

    /**
     * Packet Identifier (PID) for input source ETV Signal data to this output. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline M2tsSettings& WithEtvSignalPid(Aws::String&& value) { SetEtvSignalPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for input source ETV Signal data to this output. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline M2tsSettings& WithEtvSignalPid(const char* value) { SetEtvSignalPid(value); return *this;}


    /**
     * The length in seconds of each fragment. Only used with EBP markers.
     */
    inline double GetFragmentTime() const{ return m_fragmentTime; }

    /**
     * The length in seconds of each fragment. Only used with EBP markers.
     */
    inline bool FragmentTimeHasBeenSet() const { return m_fragmentTimeHasBeenSet; }

    /**
     * The length in seconds of each fragment. Only used with EBP markers.
     */
    inline void SetFragmentTime(double value) { m_fragmentTimeHasBeenSet = true; m_fragmentTime = value; }

    /**
     * The length in seconds of each fragment. Only used with EBP markers.
     */
    inline M2tsSettings& WithFragmentTime(double value) { SetFragmentTime(value); return *this;}


    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline const M2tsKlv& GetKlv() const{ return m_klv; }

    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline bool KlvHasBeenSet() const { return m_klvHasBeenSet; }

    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline void SetKlv(const M2tsKlv& value) { m_klvHasBeenSet = true; m_klv = value; }

    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline void SetKlv(M2tsKlv&& value) { m_klvHasBeenSet = true; m_klv = std::move(value); }

    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline M2tsSettings& WithKlv(const M2tsKlv& value) { SetKlv(value); return *this;}

    /**
     * If set to passthrough, passes any KLV data from the input source to this output.
     */
    inline M2tsSettings& WithKlv(M2tsKlv&& value) { SetKlv(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetKlvDataPids() const{ return m_klvDataPids; }

    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline bool KlvDataPidsHasBeenSet() const { return m_klvDataPidsHasBeenSet; }

    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetKlvDataPids(const Aws::String& value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids = value; }

    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetKlvDataPids(Aws::String&& value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids = std::move(value); }

    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetKlvDataPids(const char* value) { m_klvDataPidsHasBeenSet = true; m_klvDataPids.assign(value); }

    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithKlvDataPids(const Aws::String& value) { SetKlvDataPids(value); return *this;}

    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithKlvDataPids(Aws::String&& value) { SetKlvDataPids(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for input source KLV data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithKlvDataPids(const char* value) { SetKlvDataPids(value); return *this;}


    /**
     * Value in bits per second of extra null packets to insert into the transport
     * stream. This can be used if a downstream encryption system requires periodic
     * null packets.
     */
    inline double GetNullPacketBitrate() const{ return m_nullPacketBitrate; }

    /**
     * Value in bits per second of extra null packets to insert into the transport
     * stream. This can be used if a downstream encryption system requires periodic
     * null packets.
     */
    inline bool NullPacketBitrateHasBeenSet() const { return m_nullPacketBitrateHasBeenSet; }

    /**
     * Value in bits per second of extra null packets to insert into the transport
     * stream. This can be used if a downstream encryption system requires periodic
     * null packets.
     */
    inline void SetNullPacketBitrate(double value) { m_nullPacketBitrateHasBeenSet = true; m_nullPacketBitrate = value; }

    /**
     * Value in bits per second of extra null packets to insert into the transport
     * stream. This can be used if a downstream encryption system requires periodic
     * null packets.
     */
    inline M2tsSettings& WithNullPacketBitrate(double value) { SetNullPacketBitrate(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.  Valid values are 0, 10..1000.
     */
    inline int GetPatInterval() const{ return m_patInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.  Valid values are 0, 10..1000.
     */
    inline bool PatIntervalHasBeenSet() const { return m_patIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.  Valid values are 0, 10..1000.
     */
    inline void SetPatInterval(int value) { m_patIntervalHasBeenSet = true; m_patInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.  Valid values are 0, 10..1000.
     */
    inline M2tsSettings& WithPatInterval(int value) { SetPatInterval(value); return *this;}


    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline const M2tsPcrControl& GetPcrControl() const{ return m_pcrControl; }

    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline bool PcrControlHasBeenSet() const { return m_pcrControlHasBeenSet; }

    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline void SetPcrControl(const M2tsPcrControl& value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }

    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline void SetPcrControl(M2tsPcrControl&& value) { m_pcrControlHasBeenSet = true; m_pcrControl = std::move(value); }

    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline M2tsSettings& WithPcrControl(const M2tsPcrControl& value) { SetPcrControl(value); return *this;}

    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline M2tsSettings& WithPcrControl(M2tsPcrControl&& value) { SetPcrControl(std::move(value)); return *this;}


    /**
     * Maximum time in milliseconds between Program Clock Reference (PCRs) inserted
     * into the transport stream.
     */
    inline int GetPcrPeriod() const{ return m_pcrPeriod; }

    /**
     * Maximum time in milliseconds between Program Clock Reference (PCRs) inserted
     * into the transport stream.
     */
    inline bool PcrPeriodHasBeenSet() const { return m_pcrPeriodHasBeenSet; }

    /**
     * Maximum time in milliseconds between Program Clock Reference (PCRs) inserted
     * into the transport stream.
     */
    inline void SetPcrPeriod(int value) { m_pcrPeriodHasBeenSet = true; m_pcrPeriod = value; }

    /**
     * Maximum time in milliseconds between Program Clock Reference (PCRs) inserted
     * into the transport stream.
     */
    inline M2tsSettings& WithPcrPeriod(int value) { SetPcrPeriod(value); return *this;}


    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.  Valid values are
     * 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetPcrPid() const{ return m_pcrPid; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.  Valid values are
     * 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.  Valid values are
     * 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetPcrPid(const Aws::String& value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.  Valid values are
     * 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetPcrPid(Aws::String&& value) { m_pcrPidHasBeenSet = true; m_pcrPid = std::move(value); }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.  Valid values are
     * 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetPcrPid(const char* value) { m_pcrPidHasBeenSet = true; m_pcrPid.assign(value); }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.  Valid values are
     * 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithPcrPid(const Aws::String& value) { SetPcrPid(value); return *this;}

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.  Valid values are
     * 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithPcrPid(Aws::String&& value) { SetPcrPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.  Valid values are
     * 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithPcrPid(const char* value) { SetPcrPid(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. Valid values are 0, 10..1000.
     */
    inline int GetPmtInterval() const{ return m_pmtInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. Valid values are 0, 10..1000.
     */
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. Valid values are 0, 10..1000.
     */
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. Valid values are 0, 10..1000.
     */
    inline M2tsSettings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}


    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value. Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetPmtPid() const{ return m_pmtPid; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value. Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value. Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetPmtPid(const Aws::String& value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value. Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetPmtPid(Aws::String&& value) { m_pmtPidHasBeenSet = true; m_pmtPid = std::move(value); }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value. Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetPmtPid(const char* value) { m_pmtPidHasBeenSet = true; m_pmtPid.assign(value); }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value. Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithPmtPid(const Aws::String& value) { SetPmtPid(value); return *this;}

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value. Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithPmtPid(Aws::String&& value) { SetPmtPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value. Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithPmtPid(const char* value) { SetPmtPid(value); return *this;}


    /**
     * The value of the program number field in the Program Map Table.
     */
    inline int GetProgramNum() const{ return m_programNum; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline bool ProgramNumHasBeenSet() const { return m_programNumHasBeenSet; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline void SetProgramNum(int value) { m_programNumHasBeenSet = true; m_programNum = value; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline M2tsSettings& WithProgramNum(int value) { SetProgramNum(value); return *this;}


    /**
     * When vbr, does not insert null packets into transport stream to fill specified
     * bitrate. The bitrate setting acts as the maximum bitrate when vbr is set.
     */
    inline const M2tsRateMode& GetRateMode() const{ return m_rateMode; }

    /**
     * When vbr, does not insert null packets into transport stream to fill specified
     * bitrate. The bitrate setting acts as the maximum bitrate when vbr is set.
     */
    inline bool RateModeHasBeenSet() const { return m_rateModeHasBeenSet; }

    /**
     * When vbr, does not insert null packets into transport stream to fill specified
     * bitrate. The bitrate setting acts as the maximum bitrate when vbr is set.
     */
    inline void SetRateMode(const M2tsRateMode& value) { m_rateModeHasBeenSet = true; m_rateMode = value; }

    /**
     * When vbr, does not insert null packets into transport stream to fill specified
     * bitrate. The bitrate setting acts as the maximum bitrate when vbr is set.
     */
    inline void SetRateMode(M2tsRateMode&& value) { m_rateModeHasBeenSet = true; m_rateMode = std::move(value); }

    /**
     * When vbr, does not insert null packets into transport stream to fill specified
     * bitrate. The bitrate setting acts as the maximum bitrate when vbr is set.
     */
    inline M2tsSettings& WithRateMode(const M2tsRateMode& value) { SetRateMode(value); return *this;}

    /**
     * When vbr, does not insert null packets into transport stream to fill specified
     * bitrate. The bitrate setting acts as the maximum bitrate when vbr is set.
     */
    inline M2tsSettings& WithRateMode(M2tsRateMode&& value) { SetRateMode(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) for input source SCTE-27 data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetScte27Pids() const{ return m_scte27Pids; }

    /**
     * Packet Identifier (PID) for input source SCTE-27 data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline bool Scte27PidsHasBeenSet() const { return m_scte27PidsHasBeenSet; }

    /**
     * Packet Identifier (PID) for input source SCTE-27 data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetScte27Pids(const Aws::String& value) { m_scte27PidsHasBeenSet = true; m_scte27Pids = value; }

    /**
     * Packet Identifier (PID) for input source SCTE-27 data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetScte27Pids(Aws::String&& value) { m_scte27PidsHasBeenSet = true; m_scte27Pids = std::move(value); }

    /**
     * Packet Identifier (PID) for input source SCTE-27 data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline void SetScte27Pids(const char* value) { m_scte27PidsHasBeenSet = true; m_scte27Pids.assign(value); }

    /**
     * Packet Identifier (PID) for input source SCTE-27 data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithScte27Pids(const Aws::String& value) { SetScte27Pids(value); return *this;}

    /**
     * Packet Identifier (PID) for input source SCTE-27 data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithScte27Pids(Aws::String&& value) { SetScte27Pids(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for input source SCTE-27 data to this output. Multiple
     * values are accepted, and can be entered in ranges and/or by comma separation.
     * Can be entered as decimal or hexadecimal values.  Each PID specified must be in
     * the range of 32 (or 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithScte27Pids(const char* value) { SetScte27Pids(value); return *this;}


    /**
     * Optionally pass SCTE-35 signals from the input source to this output.
     */
    inline const M2tsScte35Control& GetScte35Control() const{ return m_scte35Control; }

    /**
     * Optionally pass SCTE-35 signals from the input source to this output.
     */
    inline bool Scte35ControlHasBeenSet() const { return m_scte35ControlHasBeenSet; }

    /**
     * Optionally pass SCTE-35 signals from the input source to this output.
     */
    inline void SetScte35Control(const M2tsScte35Control& value) { m_scte35ControlHasBeenSet = true; m_scte35Control = value; }

    /**
     * Optionally pass SCTE-35 signals from the input source to this output.
     */
    inline void SetScte35Control(M2tsScte35Control&& value) { m_scte35ControlHasBeenSet = true; m_scte35Control = std::move(value); }

    /**
     * Optionally pass SCTE-35 signals from the input source to this output.
     */
    inline M2tsSettings& WithScte35Control(const M2tsScte35Control& value) { SetScte35Control(value); return *this;}

    /**
     * Optionally pass SCTE-35 signals from the input source to this output.
     */
    inline M2tsSettings& WithScte35Control(M2tsScte35Control&& value) { SetScte35Control(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline const Aws::String& GetScte35Pid() const{ return m_scte35Pid; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline void SetScte35Pid(const Aws::String& value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline void SetScte35Pid(Aws::String&& value) { m_scte35PidHasBeenSet = true; m_scte35Pid = std::move(value); }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline void SetScte35Pid(const char* value) { m_scte35PidHasBeenSet = true; m_scte35Pid.assign(value); }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline M2tsSettings& WithScte35Pid(const Aws::String& value) { SetScte35Pid(value); return *this;}

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline M2tsSettings& WithScte35Pid(Aws::String&& value) { SetScte35Pid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.  Valid values are 32 (or 0x20)..8182
     * (or 0x1ff6).
     */
    inline M2tsSettings& WithScte35Pid(const char* value) { SetScte35Pid(value); return *this;}


    /**
     * Inserts segmentation markers at each segmentationTime period. raiSegstart sets
     * the Random Access Indicator bit in the adaptation field. raiAdapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psiSegstart inserts
     * PAT and PMT tables at the start of segments. ebp adds Encoder Boundary Point
     * information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebpLegacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline const M2tsSegmentationMarkers& GetSegmentationMarkers() const{ return m_segmentationMarkers; }

    /**
     * Inserts segmentation markers at each segmentationTime period. raiSegstart sets
     * the Random Access Indicator bit in the adaptation field. raiAdapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psiSegstart inserts
     * PAT and PMT tables at the start of segments. ebp adds Encoder Boundary Point
     * information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebpLegacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline bool SegmentationMarkersHasBeenSet() const { return m_segmentationMarkersHasBeenSet; }

    /**
     * Inserts segmentation markers at each segmentationTime period. raiSegstart sets
     * the Random Access Indicator bit in the adaptation field. raiAdapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psiSegstart inserts
     * PAT and PMT tables at the start of segments. ebp adds Encoder Boundary Point
     * information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebpLegacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline void SetSegmentationMarkers(const M2tsSegmentationMarkers& value) { m_segmentationMarkersHasBeenSet = true; m_segmentationMarkers = value; }

    /**
     * Inserts segmentation markers at each segmentationTime period. raiSegstart sets
     * the Random Access Indicator bit in the adaptation field. raiAdapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psiSegstart inserts
     * PAT and PMT tables at the start of segments. ebp adds Encoder Boundary Point
     * information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebpLegacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline void SetSegmentationMarkers(M2tsSegmentationMarkers&& value) { m_segmentationMarkersHasBeenSet = true; m_segmentationMarkers = std::move(value); }

    /**
     * Inserts segmentation markers at each segmentationTime period. raiSegstart sets
     * the Random Access Indicator bit in the adaptation field. raiAdapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psiSegstart inserts
     * PAT and PMT tables at the start of segments. ebp adds Encoder Boundary Point
     * information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebpLegacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline M2tsSettings& WithSegmentationMarkers(const M2tsSegmentationMarkers& value) { SetSegmentationMarkers(value); return *this;}

    /**
     * Inserts segmentation markers at each segmentationTime period. raiSegstart sets
     * the Random Access Indicator bit in the adaptation field. raiAdapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psiSegstart inserts
     * PAT and PMT tables at the start of segments. ebp adds Encoder Boundary Point
     * information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebpLegacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline M2tsSettings& WithSegmentationMarkers(M2tsSegmentationMarkers&& value) { SetSegmentationMarkers(std::move(value)); return *this;}


    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are
     * inserted.

When a segmentation style of "resetCadence" is selected and a segment
     * is truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of $segmentationTime seconds.

When
     * a segmentation style of "maintainCadence" is selected and a segment is truncated
     * due to an avail, we will not reset the segmentation cadence. This means the
     * subsequent segment will likely be truncated as well. However, all segments after
     * that will have a duration of $segmentationTime seconds. Note that EBP lookahead
     * is a slight exception to this rule.
     */
    inline const M2tsSegmentationStyle& GetSegmentationStyle() const{ return m_segmentationStyle; }

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are
     * inserted.

When a segmentation style of "resetCadence" is selected and a segment
     * is truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of $segmentationTime seconds.

When
     * a segmentation style of "maintainCadence" is selected and a segment is truncated
     * due to an avail, we will not reset the segmentation cadence. This means the
     * subsequent segment will likely be truncated as well. However, all segments after
     * that will have a duration of $segmentationTime seconds. Note that EBP lookahead
     * is a slight exception to this rule.
     */
    inline bool SegmentationStyleHasBeenSet() const { return m_segmentationStyleHasBeenSet; }

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are
     * inserted.

When a segmentation style of "resetCadence" is selected and a segment
     * is truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of $segmentationTime seconds.

When
     * a segmentation style of "maintainCadence" is selected and a segment is truncated
     * due to an avail, we will not reset the segmentation cadence. This means the
     * subsequent segment will likely be truncated as well. However, all segments after
     * that will have a duration of $segmentationTime seconds. Note that EBP lookahead
     * is a slight exception to this rule.
     */
    inline void SetSegmentationStyle(const M2tsSegmentationStyle& value) { m_segmentationStyleHasBeenSet = true; m_segmentationStyle = value; }

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are
     * inserted.

When a segmentation style of "resetCadence" is selected and a segment
     * is truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of $segmentationTime seconds.

When
     * a segmentation style of "maintainCadence" is selected and a segment is truncated
     * due to an avail, we will not reset the segmentation cadence. This means the
     * subsequent segment will likely be truncated as well. However, all segments after
     * that will have a duration of $segmentationTime seconds. Note that EBP lookahead
     * is a slight exception to this rule.
     */
    inline void SetSegmentationStyle(M2tsSegmentationStyle&& value) { m_segmentationStyleHasBeenSet = true; m_segmentationStyle = std::move(value); }

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are
     * inserted.

When a segmentation style of "resetCadence" is selected and a segment
     * is truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of $segmentationTime seconds.

When
     * a segmentation style of "maintainCadence" is selected and a segment is truncated
     * due to an avail, we will not reset the segmentation cadence. This means the
     * subsequent segment will likely be truncated as well. However, all segments after
     * that will have a duration of $segmentationTime seconds. Note that EBP lookahead
     * is a slight exception to this rule.
     */
    inline M2tsSettings& WithSegmentationStyle(const M2tsSegmentationStyle& value) { SetSegmentationStyle(value); return *this;}

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are
     * inserted.

When a segmentation style of "resetCadence" is selected and a segment
     * is truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of $segmentationTime seconds.

When
     * a segmentation style of "maintainCadence" is selected and a segment is truncated
     * due to an avail, we will not reset the segmentation cadence. This means the
     * subsequent segment will likely be truncated as well. However, all segments after
     * that will have a duration of $segmentationTime seconds. Note that EBP lookahead
     * is a slight exception to this rule.
     */
    inline M2tsSettings& WithSegmentationStyle(M2tsSegmentationStyle&& value) { SetSegmentationStyle(std::move(value)); return *this;}


    /**
     * The length in seconds of each segment. Required unless markers is set to None_.
     */
    inline double GetSegmentationTime() const{ return m_segmentationTime; }

    /**
     * The length in seconds of each segment. Required unless markers is set to None_.
     */
    inline bool SegmentationTimeHasBeenSet() const { return m_segmentationTimeHasBeenSet; }

    /**
     * The length in seconds of each segment. Required unless markers is set to None_.
     */
    inline void SetSegmentationTime(double value) { m_segmentationTimeHasBeenSet = true; m_segmentationTime = value; }

    /**
     * The length in seconds of each segment. Required unless markers is set to None_.
     */
    inline M2tsSettings& WithSegmentationTime(double value) { SetSegmentationTime(value); return *this;}


    /**
     * When set to passthrough, timed metadata will be passed through from input to
     * output.
     */
    inline const M2tsTimedMetadataBehavior& GetTimedMetadataBehavior() const{ return m_timedMetadataBehavior; }

    /**
     * When set to passthrough, timed metadata will be passed through from input to
     * output.
     */
    inline bool TimedMetadataBehaviorHasBeenSet() const { return m_timedMetadataBehaviorHasBeenSet; }

    /**
     * When set to passthrough, timed metadata will be passed through from input to
     * output.
     */
    inline void SetTimedMetadataBehavior(const M2tsTimedMetadataBehavior& value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = value; }

    /**
     * When set to passthrough, timed metadata will be passed through from input to
     * output.
     */
    inline void SetTimedMetadataBehavior(M2tsTimedMetadataBehavior&& value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = std::move(value); }

    /**
     * When set to passthrough, timed metadata will be passed through from input to
     * output.
     */
    inline M2tsSettings& WithTimedMetadataBehavior(const M2tsTimedMetadataBehavior& value) { SetTimedMetadataBehavior(value); return *this;}

    /**
     * When set to passthrough, timed metadata will be passed through from input to
     * output.
     */
    inline M2tsSettings& WithTimedMetadataBehavior(M2tsTimedMetadataBehavior&& value) { SetTimedMetadataBehavior(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetTimedMetadataPid() const{ return m_timedMetadataPid; }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetTimedMetadataPid(const Aws::String& value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetTimedMetadataPid(Aws::String&& value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = std::move(value); }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetTimedMetadataPid(const char* value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid.assign(value); }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithTimedMetadataPid(const Aws::String& value) { SetTimedMetadataPid(value); return *this;}

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithTimedMetadataPid(Aws::String&& value) { SetTimedMetadataPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithTimedMetadataPid(const char* value) { SetTimedMetadataPid(value); return *this;}


    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline int GetTransportStreamId() const{ return m_transportStreamId; }

    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline bool TransportStreamIdHasBeenSet() const { return m_transportStreamIdHasBeenSet; }

    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline void SetTransportStreamId(int value) { m_transportStreamIdHasBeenSet = true; m_transportStreamId = value; }

    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline M2tsSettings& WithTransportStreamId(int value) { SetTransportStreamId(value); return *this;}


    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline const Aws::String& GetVideoPid() const{ return m_videoPid; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetVideoPid(const Aws::String& value) { m_videoPidHasBeenSet = true; m_videoPid = value; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetVideoPid(Aws::String&& value) { m_videoPidHasBeenSet = true; m_videoPid = std::move(value); }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline void SetVideoPid(const char* value) { m_videoPidHasBeenSet = true; m_videoPid.assign(value); }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithVideoPid(const Aws::String& value) { SetVideoPid(value); return *this;}

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithVideoPid(Aws::String&& value) { SetVideoPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M2tsSettings& WithVideoPid(const char* value) { SetVideoPid(value); return *this;}

  private:

    M2tsAbsentInputAudioBehavior m_absentInputAudioBehavior;
    bool m_absentInputAudioBehaviorHasBeenSet;

    M2tsArib m_arib;
    bool m_aribHasBeenSet;

    Aws::String m_aribCaptionsPid;
    bool m_aribCaptionsPidHasBeenSet;

    M2tsAribCaptionsPidControl m_aribCaptionsPidControl;
    bool m_aribCaptionsPidControlHasBeenSet;

    M2tsAudioBufferModel m_audioBufferModel;
    bool m_audioBufferModelHasBeenSet;

    int m_audioFramesPerPes;
    bool m_audioFramesPerPesHasBeenSet;

    Aws::String m_audioPids;
    bool m_audioPidsHasBeenSet;

    M2tsAudioStreamType m_audioStreamType;
    bool m_audioStreamTypeHasBeenSet;

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    M2tsBufferModel m_bufferModel;
    bool m_bufferModelHasBeenSet;

    M2tsCcDescriptor m_ccDescriptor;
    bool m_ccDescriptorHasBeenSet;

    DvbNitSettings m_dvbNitSettings;
    bool m_dvbNitSettingsHasBeenSet;

    DvbSdtSettings m_dvbSdtSettings;
    bool m_dvbSdtSettingsHasBeenSet;

    Aws::String m_dvbSubPids;
    bool m_dvbSubPidsHasBeenSet;

    DvbTdtSettings m_dvbTdtSettings;
    bool m_dvbTdtSettingsHasBeenSet;

    Aws::String m_dvbTeletextPid;
    bool m_dvbTeletextPidHasBeenSet;

    M2tsEbifControl m_ebif;
    bool m_ebifHasBeenSet;

    M2tsAudioInterval m_ebpAudioInterval;
    bool m_ebpAudioIntervalHasBeenSet;

    int m_ebpLookaheadMs;
    bool m_ebpLookaheadMsHasBeenSet;

    M2tsEbpPlacement m_ebpPlacement;
    bool m_ebpPlacementHasBeenSet;

    Aws::String m_ecmPid;
    bool m_ecmPidHasBeenSet;

    M2tsEsRateInPes m_esRateInPes;
    bool m_esRateInPesHasBeenSet;

    Aws::String m_etvPlatformPid;
    bool m_etvPlatformPidHasBeenSet;

    Aws::String m_etvSignalPid;
    bool m_etvSignalPidHasBeenSet;

    double m_fragmentTime;
    bool m_fragmentTimeHasBeenSet;

    M2tsKlv m_klv;
    bool m_klvHasBeenSet;

    Aws::String m_klvDataPids;
    bool m_klvDataPidsHasBeenSet;

    double m_nullPacketBitrate;
    bool m_nullPacketBitrateHasBeenSet;

    int m_patInterval;
    bool m_patIntervalHasBeenSet;

    M2tsPcrControl m_pcrControl;
    bool m_pcrControlHasBeenSet;

    int m_pcrPeriod;
    bool m_pcrPeriodHasBeenSet;

    Aws::String m_pcrPid;
    bool m_pcrPidHasBeenSet;

    int m_pmtInterval;
    bool m_pmtIntervalHasBeenSet;

    Aws::String m_pmtPid;
    bool m_pmtPidHasBeenSet;

    int m_programNum;
    bool m_programNumHasBeenSet;

    M2tsRateMode m_rateMode;
    bool m_rateModeHasBeenSet;

    Aws::String m_scte27Pids;
    bool m_scte27PidsHasBeenSet;

    M2tsScte35Control m_scte35Control;
    bool m_scte35ControlHasBeenSet;

    Aws::String m_scte35Pid;
    bool m_scte35PidHasBeenSet;

    M2tsSegmentationMarkers m_segmentationMarkers;
    bool m_segmentationMarkersHasBeenSet;

    M2tsSegmentationStyle m_segmentationStyle;
    bool m_segmentationStyleHasBeenSet;

    double m_segmentationTime;
    bool m_segmentationTimeHasBeenSet;

    M2tsTimedMetadataBehavior m_timedMetadataBehavior;
    bool m_timedMetadataBehaviorHasBeenSet;

    Aws::String m_timedMetadataPid;
    bool m_timedMetadataPidHasBeenSet;

    int m_transportStreamId;
    bool m_transportStreamIdHasBeenSet;

    Aws::String m_videoPid;
    bool m_videoPidHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
