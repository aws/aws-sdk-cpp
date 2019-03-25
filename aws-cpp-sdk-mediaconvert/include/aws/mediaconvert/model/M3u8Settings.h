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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/M3u8NielsenId3.h>
#include <aws/mediaconvert/model/M3u8PcrControl.h>
#include <aws/mediaconvert/model/M3u8Scte35Source.h>
#include <aws/mediaconvert/model/TimedMetadata.h>
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
   * Settings for TS segments in HLS<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/M3u8Settings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API M3u8Settings
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
     * comma separation.
     */
    inline const Aws::Vector<int>& GetAudioPids() const{ return m_audioPids; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline void SetAudioPids(const Aws::Vector<int>& value) { m_audioPidsHasBeenSet = true; m_audioPids = value; }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline void SetAudioPids(Aws::Vector<int>&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::move(value); }

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline M3u8Settings& WithAudioPids(const Aws::Vector<int>& value) { SetAudioPids(value); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline M3u8Settings& WithAudioPids(Aws::Vector<int>&& value) { SetAudioPids(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline M3u8Settings& AddAudioPids(int value) { m_audioPidsHasBeenSet = true; m_audioPids.push_back(value); return *this; }


    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline const M3u8NielsenId3& GetNielsenId3() const{ return m_nielsenId3; }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline bool NielsenId3HasBeenSet() const { return m_nielsenId3HasBeenSet; }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline void SetNielsenId3(const M3u8NielsenId3& value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = value; }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline void SetNielsenId3(M3u8NielsenId3&& value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = std::move(value); }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline M3u8Settings& WithNielsenId3(const M3u8NielsenId3& value) { SetNielsenId3(value); return *this;}

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline M3u8Settings& WithNielsenId3(M3u8NielsenId3&& value) { SetNielsenId3(std::move(value)); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetPatInterval() const{ return m_patInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool PatIntervalHasBeenSet() const { return m_patIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetPatInterval(int value) { m_patIntervalHasBeenSet = true; m_patInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline M3u8Settings& WithPatInterval(int value) { SetPatInterval(value); return *this;}


    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline const M3u8PcrControl& GetPcrControl() const{ return m_pcrControl; }

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline bool PcrControlHasBeenSet() const { return m_pcrControlHasBeenSet; }

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline void SetPcrControl(const M3u8PcrControl& value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline void SetPcrControl(M3u8PcrControl&& value) { m_pcrControlHasBeenSet = true; m_pcrControl = std::move(value); }

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline M3u8Settings& WithPcrControl(const M3u8PcrControl& value) { SetPcrControl(value); return *this;}

    /**
     * When set to PCR_EVERY_PES_PACKET a Program Clock Reference value is inserted for
     * every Packetized Elementary Stream (PES) header. This parameter is effective
     * only when the PCR PID is the same as the video or audio elementary stream.
     */
    inline M3u8Settings& WithPcrControl(M3u8PcrControl&& value) { SetPcrControl(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline int GetPcrPid() const{ return m_pcrPid; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline M3u8Settings& WithPcrPid(int value) { SetPcrPid(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetPmtInterval() const{ return m_pmtInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline M3u8Settings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}


    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline int GetPmtPid() const{ return m_pmtPid; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline void SetPmtPid(int value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline M3u8Settings& WithPmtPid(int value) { SetPmtPid(value); return *this;}


    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline int GetPrivateMetadataPid() const{ return m_privateMetadataPid; }

    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline bool PrivateMetadataPidHasBeenSet() const { return m_privateMetadataPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline void SetPrivateMetadataPid(int value) { m_privateMetadataPidHasBeenSet = true; m_privateMetadataPid = value; }

    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline M3u8Settings& WithPrivateMetadataPid(int value) { SetPrivateMetadataPid(value); return *this;}


    /**
     * The value of the program number field in the Program Map Table.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline M3u8Settings& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline int GetScte35Pid() const{ return m_scte35Pid; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline M3u8Settings& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}


    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline const M3u8Scte35Source& GetScte35Source() const{ return m_scte35Source; }

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline void SetScte35Source(const M3u8Scte35Source& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline void SetScte35Source(M3u8Scte35Source&& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = std::move(value); }

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline M3u8Settings& WithScte35Source(const M3u8Scte35Source& value) { SetScte35Source(value); return *this;}

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline M3u8Settings& WithScte35Source(M3u8Scte35Source&& value) { SetScte35Source(std::move(value)); return *this;}


    /**
     * Applies only to HLS outputs. Use this setting to specify whether the service
     * inserts the ID3 timed metadata from the input in this output.
     */
    inline const TimedMetadata& GetTimedMetadata() const{ return m_timedMetadata; }

    /**
     * Applies only to HLS outputs. Use this setting to specify whether the service
     * inserts the ID3 timed metadata from the input in this output.
     */
    inline bool TimedMetadataHasBeenSet() const { return m_timedMetadataHasBeenSet; }

    /**
     * Applies only to HLS outputs. Use this setting to specify whether the service
     * inserts the ID3 timed metadata from the input in this output.
     */
    inline void SetTimedMetadata(const TimedMetadata& value) { m_timedMetadataHasBeenSet = true; m_timedMetadata = value; }

    /**
     * Applies only to HLS outputs. Use this setting to specify whether the service
     * inserts the ID3 timed metadata from the input in this output.
     */
    inline void SetTimedMetadata(TimedMetadata&& value) { m_timedMetadataHasBeenSet = true; m_timedMetadata = std::move(value); }

    /**
     * Applies only to HLS outputs. Use this setting to specify whether the service
     * inserts the ID3 timed metadata from the input in this output.
     */
    inline M3u8Settings& WithTimedMetadata(const TimedMetadata& value) { SetTimedMetadata(value); return *this;}

    /**
     * Applies only to HLS outputs. Use this setting to specify whether the service
     * inserts the ID3 timed metadata from the input in this output.
     */
    inline M3u8Settings& WithTimedMetadata(TimedMetadata&& value) { SetTimedMetadata(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     */
    inline int GetTimedMetadataPid() const{ return m_timedMetadataPid; }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     */
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     */
    inline void SetTimedMetadataPid(int value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     */
    inline M3u8Settings& WithTimedMetadataPid(int value) { SetTimedMetadataPid(value); return *this;}


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
     */
    inline int GetVideoPid() const{ return m_videoPid; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     */
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     */
    inline void SetVideoPid(int value) { m_videoPidHasBeenSet = true; m_videoPid = value; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     */
    inline M3u8Settings& WithVideoPid(int value) { SetVideoPid(value); return *this;}

  private:

    int m_audioFramesPerPes;
    bool m_audioFramesPerPesHasBeenSet;

    Aws::Vector<int> m_audioPids;
    bool m_audioPidsHasBeenSet;

    M3u8NielsenId3 m_nielsenId3;
    bool m_nielsenId3HasBeenSet;

    int m_patInterval;
    bool m_patIntervalHasBeenSet;

    M3u8PcrControl m_pcrControl;
    bool m_pcrControlHasBeenSet;

    int m_pcrPid;
    bool m_pcrPidHasBeenSet;

    int m_pmtInterval;
    bool m_pmtIntervalHasBeenSet;

    int m_pmtPid;
    bool m_pmtPidHasBeenSet;

    int m_privateMetadataPid;
    bool m_privateMetadataPidHasBeenSet;

    int m_programNumber;
    bool m_programNumberHasBeenSet;

    int m_scte35Pid;
    bool m_scte35PidHasBeenSet;

    M3u8Scte35Source m_scte35Source;
    bool m_scte35SourceHasBeenSet;

    TimedMetadata m_timedMetadata;
    bool m_timedMetadataHasBeenSet;

    int m_timedMetadataPid;
    bool m_timedMetadataPidHasBeenSet;

    int m_transportStreamId;
    bool m_transportStreamIdHasBeenSet;

    int m_videoPid;
    bool m_videoPidHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
