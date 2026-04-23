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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/M3u8PcrControl.h>
#include <aws/medialive/model/M3u8Scte35Behavior.h>
#include <aws/medialive/model/M3u8TimedMetadataBehavior.h>
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
   * Settings information for the .m3u8 container<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/M3u8Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API M3u8Settings
  {
  public:
    M3u8Settings();
    M3u8Settings(Aws::Utils::Json::JsonView jsonValue);
    M3u8Settings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline M3u8Settings& WithAudioFramesPerPes(int value) { SetAudioFramesPerPes(value); return *this;}


    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values.
     */
    inline const Aws::String& GetAudioPids() const{ return m_audioPids; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values.
     */
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values.
     */
    inline void SetAudioPids(const Aws::String& value) { m_audioPidsHasBeenSet = true; m_audioPids = value; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values.
     */
    inline void SetAudioPids(Aws::String&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::move(value); }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values.
     */
    inline void SetAudioPids(const char* value) { m_audioPidsHasBeenSet = true; m_audioPids.assign(value); }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values.
     */
    inline M3u8Settings& WithAudioPids(const Aws::String& value) { SetAudioPids(value); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values.
     */
    inline M3u8Settings& WithAudioPids(Aws::String&& value) { SetAudioPids(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation. Can be entered as decimal or hexadecimal values.
     */
    inline M3u8Settings& WithAudioPids(const char* value) { SetAudioPids(value); return *this;}


    /**
     * This parameter is unused and deprecated.
     */
    inline const Aws::String& GetEcmPid() const{ return m_ecmPid; }

    /**
     * This parameter is unused and deprecated.
     */
    inline bool EcmPidHasBeenSet() const { return m_ecmPidHasBeenSet; }

    /**
     * This parameter is unused and deprecated.
     */
    inline void SetEcmPid(const Aws::String& value) { m_ecmPidHasBeenSet = true; m_ecmPid = value; }

    /**
     * This parameter is unused and deprecated.
     */
    inline void SetEcmPid(Aws::String&& value) { m_ecmPidHasBeenSet = true; m_ecmPid = std::move(value); }

    /**
     * This parameter is unused and deprecated.
     */
    inline void SetEcmPid(const char* value) { m_ecmPidHasBeenSet = true; m_ecmPid.assign(value); }

    /**
     * This parameter is unused and deprecated.
     */
    inline M3u8Settings& WithEcmPid(const Aws::String& value) { SetEcmPid(value); return *this;}

    /**
     * This parameter is unused and deprecated.
     */
    inline M3u8Settings& WithEcmPid(Aws::String&& value) { SetEcmPid(std::move(value)); return *this;}

    /**
     * This parameter is unused and deprecated.
     */
    inline M3u8Settings& WithEcmPid(const char* value) { SetEcmPid(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline int GetPatInterval() const{ return m_patInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline bool PatIntervalHasBeenSet() const { return m_patIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline void SetPatInterval(int value) { m_patIntervalHasBeenSet = true; m_patInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline M3u8Settings& WithPatInterval(int value) { SetPatInterval(value); return *this;}


    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline const M3u8PcrControl& GetPcrControl() const{ return m_pcrControl; }

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
    inline void SetPcrControl(const M3u8PcrControl& value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }

    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline void SetPcrControl(M3u8PcrControl&& value) { m_pcrControlHasBeenSet = true; m_pcrControl = std::move(value); }

    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline M3u8Settings& WithPcrControl(const M3u8PcrControl& value) { SetPcrControl(value); return *this;}

    /**
     * When set to pcrEveryPesPacket, a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline M3u8Settings& WithPcrControl(M3u8PcrControl&& value) { SetPcrControl(std::move(value)); return *this;}


    /**
     * Maximum time in milliseconds between Program Clock References (PCRs) inserted
     * into the transport stream.
     */
    inline int GetPcrPeriod() const{ return m_pcrPeriod; }

    /**
     * Maximum time in milliseconds between Program Clock References (PCRs) inserted
     * into the transport stream.
     */
    inline bool PcrPeriodHasBeenSet() const { return m_pcrPeriodHasBeenSet; }

    /**
     * Maximum time in milliseconds between Program Clock References (PCRs) inserted
     * into the transport stream.
     */
    inline void SetPcrPeriod(int value) { m_pcrPeriodHasBeenSet = true; m_pcrPeriod = value; }

    /**
     * Maximum time in milliseconds between Program Clock References (PCRs) inserted
     * into the transport stream.
     */
    inline M3u8Settings& WithPcrPeriod(int value) { SetPcrPeriod(value); return *this;}


    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetPcrPid() const{ return m_pcrPid; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.
     */
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.
     */
    inline void SetPcrPid(const Aws::String& value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.
     */
    inline void SetPcrPid(Aws::String&& value) { m_pcrPidHasBeenSet = true; m_pcrPid = std::move(value); }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.
     */
    inline void SetPcrPid(const char* value) { m_pcrPidHasBeenSet = true; m_pcrPid.assign(value); }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithPcrPid(const Aws::String& value) { SetPcrPid(value); return *this;}

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithPcrPid(Aws::String&& value) { SetPcrPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID. Can be entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithPcrPid(const char* value) { SetPcrPid(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline int GetPmtInterval() const{ return m_pmtInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream. A value of \"0\" writes out the PMT once per segment file.
     */
    inline M3u8Settings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}


    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetPmtPid() const{ return m_pmtPid; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline void SetPmtPid(const Aws::String& value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline void SetPmtPid(Aws::String&& value) { m_pmtPidHasBeenSet = true; m_pmtPid = std::move(value); }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline void SetPmtPid(const char* value) { m_pmtPidHasBeenSet = true; m_pmtPid.assign(value); }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithPmtPid(const Aws::String& value) { SetPmtPid(value); return *this;}

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithPmtPid(Aws::String&& value) { SetPmtPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithPmtPid(const char* value) { SetPmtPid(value); return *this;}


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
    inline M3u8Settings& WithProgramNum(int value) { SetProgramNum(value); return *this;}


    /**
     * If set to passthrough, passes any SCTE-35 signals from the input source to this
     * output.
     */
    inline const M3u8Scte35Behavior& GetScte35Behavior() const{ return m_scte35Behavior; }

    /**
     * If set to passthrough, passes any SCTE-35 signals from the input source to this
     * output.
     */
    inline bool Scte35BehaviorHasBeenSet() const { return m_scte35BehaviorHasBeenSet; }

    /**
     * If set to passthrough, passes any SCTE-35 signals from the input source to this
     * output.
     */
    inline void SetScte35Behavior(const M3u8Scte35Behavior& value) { m_scte35BehaviorHasBeenSet = true; m_scte35Behavior = value; }

    /**
     * If set to passthrough, passes any SCTE-35 signals from the input source to this
     * output.
     */
    inline void SetScte35Behavior(M3u8Scte35Behavior&& value) { m_scte35BehaviorHasBeenSet = true; m_scte35Behavior = std::move(value); }

    /**
     * If set to passthrough, passes any SCTE-35 signals from the input source to this
     * output.
     */
    inline M3u8Settings& WithScte35Behavior(const M3u8Scte35Behavior& value) { SetScte35Behavior(value); return *this;}

    /**
     * If set to passthrough, passes any SCTE-35 signals from the input source to this
     * output.
     */
    inline M3u8Settings& WithScte35Behavior(M3u8Scte35Behavior&& value) { SetScte35Behavior(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetScte35Pid() const{ return m_scte35Pid; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline void SetScte35Pid(const Aws::String& value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline void SetScte35Pid(Aws::String&& value) { m_scte35PidHasBeenSet = true; m_scte35Pid = std::move(value); }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline void SetScte35Pid(const char* value) { m_scte35PidHasBeenSet = true; m_scte35Pid.assign(value); }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithScte35Pid(const Aws::String& value) { SetScte35Pid(value); return *this;}

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithScte35Pid(Aws::String&& value) { SetScte35Pid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream. Can be
     * entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithScte35Pid(const char* value) { SetScte35Pid(value); return *this;}


    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline const M3u8TimedMetadataBehavior& GetTimedMetadataBehavior() const{ return m_timedMetadataBehavior; }

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline bool TimedMetadataBehaviorHasBeenSet() const { return m_timedMetadataBehaviorHasBeenSet; }

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline void SetTimedMetadataBehavior(const M3u8TimedMetadataBehavior& value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = value; }

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline void SetTimedMetadataBehavior(M3u8TimedMetadataBehavior&& value) { m_timedMetadataBehaviorHasBeenSet = true; m_timedMetadataBehavior = std::move(value); }

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline M3u8Settings& WithTimedMetadataBehavior(const M3u8TimedMetadataBehavior& value) { SetTimedMetadataBehavior(value); return *this;}

    /**
     * When set to passthrough, timed metadata is passed through from input to output.
     */
    inline M3u8Settings& WithTimedMetadataBehavior(M3u8TimedMetadataBehavior&& value) { SetTimedMetadataBehavior(std::move(value)); return *this;}


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
    inline M3u8Settings& WithTimedMetadataPid(const Aws::String& value) { SetTimedMetadataPid(value); return *this;}

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M3u8Settings& WithTimedMetadataPid(Aws::String&& value) { SetTimedMetadataPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.  Valid values are 32 (or
     * 0x20)..8182 (or 0x1ff6).
     */
    inline M3u8Settings& WithTimedMetadataPid(const char* value) { SetTimedMetadataPid(value); return *this;}


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
    inline M3u8Settings& WithTransportStreamId(int value) { SetTransportStreamId(value); return *this;}


    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline const Aws::String& GetVideoPid() const{ return m_videoPid; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline void SetVideoPid(const Aws::String& value) { m_videoPidHasBeenSet = true; m_videoPid = value; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline void SetVideoPid(Aws::String&& value) { m_videoPidHasBeenSet = true; m_videoPid = std::move(value); }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline void SetVideoPid(const char* value) { m_videoPidHasBeenSet = true; m_videoPid.assign(value); }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithVideoPid(const Aws::String& value) { SetVideoPid(value); return *this;}

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithVideoPid(Aws::String&& value) { SetVideoPid(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     * Can be entered as a decimal or hexadecimal value.
     */
    inline M3u8Settings& WithVideoPid(const char* value) { SetVideoPid(value); return *this;}

  private:

    int m_audioFramesPerPes;
    bool m_audioFramesPerPesHasBeenSet;

    Aws::String m_audioPids;
    bool m_audioPidsHasBeenSet;

    Aws::String m_ecmPid;
    bool m_ecmPidHasBeenSet;

    int m_patInterval;
    bool m_patIntervalHasBeenSet;

    M3u8PcrControl m_pcrControl;
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

    M3u8Scte35Behavior m_scte35Behavior;
    bool m_scte35BehaviorHasBeenSet;

    Aws::String m_scte35Pid;
    bool m_scte35PidHasBeenSet;

    M3u8TimedMetadataBehavior m_timedMetadataBehavior;
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
