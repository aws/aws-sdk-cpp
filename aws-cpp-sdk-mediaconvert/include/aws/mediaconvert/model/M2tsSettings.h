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
#include <aws/mediaconvert/model/M2tsAudioBufferModel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/M2tsBufferModel.h>
#include <aws/mediaconvert/model/DvbNitSettings.h>
#include <aws/mediaconvert/model/DvbSdtSettings.h>
#include <aws/mediaconvert/model/DvbTdtSettings.h>
#include <aws/mediaconvert/model/M2tsEbpAudioInterval.h>
#include <aws/mediaconvert/model/M2tsEbpPlacement.h>
#include <aws/mediaconvert/model/M2tsEsRateInPes.h>
#include <aws/mediaconvert/model/M2tsNielsenId3.h>
#include <aws/mediaconvert/model/M2tsPcrControl.h>
#include <aws/mediaconvert/model/M2tsRateMode.h>
#include <aws/mediaconvert/model/M2tsScte35Source.h>
#include <aws/mediaconvert/model/M2tsSegmentationMarkers.h>
#include <aws/mediaconvert/model/M2tsSegmentationStyle.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for M2TS Container.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/M2tsSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API M2tsSettings
  {
  public:
    M2tsSettings();
    M2tsSettings(const Aws::Utils::Json::JsonValue& jsonValue);
    M2tsSettings& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const M2tsAudioBufferModel& GetAudioBufferModel() const{ return m_audioBufferModel; }

    
    inline void SetAudioBufferModel(const M2tsAudioBufferModel& value) { m_audioBufferModelHasBeenSet = true; m_audioBufferModel = value; }

    
    inline void SetAudioBufferModel(M2tsAudioBufferModel&& value) { m_audioBufferModelHasBeenSet = true; m_audioBufferModel = std::move(value); }

    
    inline M2tsSettings& WithAudioBufferModel(const M2tsAudioBufferModel& value) { SetAudioBufferModel(value); return *this;}

    
    inline M2tsSettings& WithAudioBufferModel(M2tsAudioBufferModel&& value) { SetAudioBufferModel(std::move(value)); return *this;}


    /**
     * The number of audio frames to insert for each PES packet.
     */
    inline int GetAudioFramesPerPes() const{ return m_audioFramesPerPes; }

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
     * comma separation.
     */
    inline const Aws::Vector<int>& GetAudioPids() const{ return m_audioPids; }

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
    inline M2tsSettings& WithAudioPids(const Aws::Vector<int>& value) { SetAudioPids(value); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline M2tsSettings& WithAudioPids(Aws::Vector<int>&& value) { SetAudioPids(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) of the elementary audio stream(s) in the transport
     * stream. Multiple values are accepted, and can be entered in ranges and/or by
     * comma separation.
     */
    inline M2tsSettings& AddAudioPids(int value) { m_audioPidsHasBeenSet = true; m_audioPids.push_back(value); return *this; }


    /**
     * The output bitrate of the transport stream in bits per second. Setting to 0 lets
     * the muxer automatically determine the appropriate bitrate. Other common values
     * are 3750000, 7500000, and 15000000.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * The output bitrate of the transport stream in bits per second. Setting to 0 lets
     * the muxer automatically determine the appropriate bitrate. Other common values
     * are 3750000, 7500000, and 15000000.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * The output bitrate of the transport stream in bits per second. Setting to 0 lets
     * the muxer automatically determine the appropriate bitrate. Other common values
     * are 3750000, 7500000, and 15000000.
     */
    inline M2tsSettings& WithBitrate(int value) { SetBitrate(value); return *this;}


    
    inline const M2tsBufferModel& GetBufferModel() const{ return m_bufferModel; }

    
    inline void SetBufferModel(const M2tsBufferModel& value) { m_bufferModelHasBeenSet = true; m_bufferModel = value; }

    
    inline void SetBufferModel(M2tsBufferModel&& value) { m_bufferModelHasBeenSet = true; m_bufferModel = std::move(value); }

    
    inline M2tsSettings& WithBufferModel(const M2tsBufferModel& value) { SetBufferModel(value); return *this;}

    
    inline M2tsSettings& WithBufferModel(M2tsBufferModel&& value) { SetBufferModel(std::move(value)); return *this;}


    
    inline const DvbNitSettings& GetDvbNitSettings() const{ return m_dvbNitSettings; }

    
    inline void SetDvbNitSettings(const DvbNitSettings& value) { m_dvbNitSettingsHasBeenSet = true; m_dvbNitSettings = value; }

    
    inline void SetDvbNitSettings(DvbNitSettings&& value) { m_dvbNitSettingsHasBeenSet = true; m_dvbNitSettings = std::move(value); }

    
    inline M2tsSettings& WithDvbNitSettings(const DvbNitSettings& value) { SetDvbNitSettings(value); return *this;}

    
    inline M2tsSettings& WithDvbNitSettings(DvbNitSettings&& value) { SetDvbNitSettings(std::move(value)); return *this;}


    
    inline const DvbSdtSettings& GetDvbSdtSettings() const{ return m_dvbSdtSettings; }

    
    inline void SetDvbSdtSettings(const DvbSdtSettings& value) { m_dvbSdtSettingsHasBeenSet = true; m_dvbSdtSettings = value; }

    
    inline void SetDvbSdtSettings(DvbSdtSettings&& value) { m_dvbSdtSettingsHasBeenSet = true; m_dvbSdtSettings = std::move(value); }

    
    inline M2tsSettings& WithDvbSdtSettings(const DvbSdtSettings& value) { SetDvbSdtSettings(value); return *this;}

    
    inline M2tsSettings& WithDvbSdtSettings(DvbSdtSettings&& value) { SetDvbSdtSettings(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation.
     */
    inline const Aws::Vector<int>& GetDvbSubPids() const{ return m_dvbSubPids; }

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation.
     */
    inline void SetDvbSubPids(const Aws::Vector<int>& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = value; }

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation.
     */
    inline void SetDvbSubPids(Aws::Vector<int>&& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = std::move(value); }

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation.
     */
    inline M2tsSettings& WithDvbSubPids(const Aws::Vector<int>& value) { SetDvbSubPids(value); return *this;}

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation.
     */
    inline M2tsSettings& WithDvbSubPids(Aws::Vector<int>&& value) { SetDvbSubPids(std::move(value)); return *this;}

    /**
     * Packet Identifier (PID) for input source DVB Subtitle data to this output.
     * Multiple values are accepted, and can be entered in ranges and/or by comma
     * separation.
     */
    inline M2tsSettings& AddDvbSubPids(int value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids.push_back(value); return *this; }


    
    inline const DvbTdtSettings& GetDvbTdtSettings() const{ return m_dvbTdtSettings; }

    
    inline void SetDvbTdtSettings(const DvbTdtSettings& value) { m_dvbTdtSettingsHasBeenSet = true; m_dvbTdtSettings = value; }

    
    inline void SetDvbTdtSettings(DvbTdtSettings&& value) { m_dvbTdtSettingsHasBeenSet = true; m_dvbTdtSettings = std::move(value); }

    
    inline M2tsSettings& WithDvbTdtSettings(const DvbTdtSettings& value) { SetDvbTdtSettings(value); return *this;}

    
    inline M2tsSettings& WithDvbTdtSettings(DvbTdtSettings&& value) { SetDvbTdtSettings(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output.
     */
    inline int GetDvbTeletextPid() const{ return m_dvbTeletextPid; }

    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output.
     */
    inline void SetDvbTeletextPid(int value) { m_dvbTeletextPidHasBeenSet = true; m_dvbTeletextPid = value; }

    /**
     * Packet Identifier (PID) for input source DVB Teletext data to this output.
     */
    inline M2tsSettings& WithDvbTeletextPid(int value) { SetDvbTeletextPid(value); return *this;}


    
    inline const M2tsEbpAudioInterval& GetEbpAudioInterval() const{ return m_ebpAudioInterval; }

    
    inline void SetEbpAudioInterval(const M2tsEbpAudioInterval& value) { m_ebpAudioIntervalHasBeenSet = true; m_ebpAudioInterval = value; }

    
    inline void SetEbpAudioInterval(M2tsEbpAudioInterval&& value) { m_ebpAudioIntervalHasBeenSet = true; m_ebpAudioInterval = std::move(value); }

    
    inline M2tsSettings& WithEbpAudioInterval(const M2tsEbpAudioInterval& value) { SetEbpAudioInterval(value); return *this;}

    
    inline M2tsSettings& WithEbpAudioInterval(M2tsEbpAudioInterval&& value) { SetEbpAudioInterval(std::move(value)); return *this;}


    
    inline const M2tsEbpPlacement& GetEbpPlacement() const{ return m_ebpPlacement; }

    
    inline void SetEbpPlacement(const M2tsEbpPlacement& value) { m_ebpPlacementHasBeenSet = true; m_ebpPlacement = value; }

    
    inline void SetEbpPlacement(M2tsEbpPlacement&& value) { m_ebpPlacementHasBeenSet = true; m_ebpPlacement = std::move(value); }

    
    inline M2tsSettings& WithEbpPlacement(const M2tsEbpPlacement& value) { SetEbpPlacement(value); return *this;}

    
    inline M2tsSettings& WithEbpPlacement(M2tsEbpPlacement&& value) { SetEbpPlacement(std::move(value)); return *this;}


    
    inline const M2tsEsRateInPes& GetEsRateInPes() const{ return m_esRateInPes; }

    
    inline void SetEsRateInPes(const M2tsEsRateInPes& value) { m_esRateInPesHasBeenSet = true; m_esRateInPes = value; }

    
    inline void SetEsRateInPes(M2tsEsRateInPes&& value) { m_esRateInPesHasBeenSet = true; m_esRateInPes = std::move(value); }

    
    inline M2tsSettings& WithEsRateInPes(const M2tsEsRateInPes& value) { SetEsRateInPes(value); return *this;}

    
    inline M2tsSettings& WithEsRateInPes(M2tsEsRateInPes&& value) { SetEsRateInPes(std::move(value)); return *this;}


    /**
     * The length in seconds of each fragment. Only used with EBP markers.
     */
    inline double GetFragmentTime() const{ return m_fragmentTime; }

    /**
     * The length in seconds of each fragment. Only used with EBP markers.
     */
    inline void SetFragmentTime(double value) { m_fragmentTimeHasBeenSet = true; m_fragmentTime = value; }

    /**
     * The length in seconds of each fragment. Only used with EBP markers.
     */
    inline M2tsSettings& WithFragmentTime(double value) { SetFragmentTime(value); return *this;}


    /**
     * Maximum time in milliseconds between Program Clock References (PCRs) inserted
     * into the transport stream.
     */
    inline int GetMaxPcrInterval() const{ return m_maxPcrInterval; }

    /**
     * Maximum time in milliseconds between Program Clock References (PCRs) inserted
     * into the transport stream.
     */
    inline void SetMaxPcrInterval(int value) { m_maxPcrIntervalHasBeenSet = true; m_maxPcrInterval = value; }

    /**
     * Maximum time in milliseconds between Program Clock References (PCRs) inserted
     * into the transport stream.
     */
    inline M2tsSettings& WithMaxPcrInterval(int value) { SetMaxPcrInterval(value); return *this;}


    /**
     * When set, enforces that Encoder Boundary Points do not come within the specified
     * time interval of each other by looking ahead at input video. If another EBP is
     * going to come in within the specified time interval, the current EBP is not
     * emitted, and the segment is "stretched" to the next marker. The lookahead value
     * does not add latency to the system. The Live Event must be configured elsewhere
     * to create sufficient latency to make the lookahead accurate.
     */
    inline int GetMinEbpInterval() const{ return m_minEbpInterval; }

    /**
     * When set, enforces that Encoder Boundary Points do not come within the specified
     * time interval of each other by looking ahead at input video. If another EBP is
     * going to come in within the specified time interval, the current EBP is not
     * emitted, and the segment is "stretched" to the next marker. The lookahead value
     * does not add latency to the system. The Live Event must be configured elsewhere
     * to create sufficient latency to make the lookahead accurate.
     */
    inline void SetMinEbpInterval(int value) { m_minEbpIntervalHasBeenSet = true; m_minEbpInterval = value; }

    /**
     * When set, enforces that Encoder Boundary Points do not come within the specified
     * time interval of each other by looking ahead at input video. If another EBP is
     * going to come in within the specified time interval, the current EBP is not
     * emitted, and the segment is "stretched" to the next marker. The lookahead value
     * does not add latency to the system. The Live Event must be configured elsewhere
     * to create sufficient latency to make the lookahead accurate.
     */
    inline M2tsSettings& WithMinEbpInterval(int value) { SetMinEbpInterval(value); return *this;}


    
    inline const M2tsNielsenId3& GetNielsenId3() const{ return m_nielsenId3; }

    
    inline void SetNielsenId3(const M2tsNielsenId3& value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = value; }

    
    inline void SetNielsenId3(M2tsNielsenId3&& value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = std::move(value); }

    
    inline M2tsSettings& WithNielsenId3(const M2tsNielsenId3& value) { SetNielsenId3(value); return *this;}

    
    inline M2tsSettings& WithNielsenId3(M2tsNielsenId3&& value) { SetNielsenId3(std::move(value)); return *this;}


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
    inline void SetNullPacketBitrate(double value) { m_nullPacketBitrateHasBeenSet = true; m_nullPacketBitrate = value; }

    /**
     * Value in bits per second of extra null packets to insert into the transport
     * stream. This can be used if a downstream encryption system requires periodic
     * null packets.
     */
    inline M2tsSettings& WithNullPacketBitrate(double value) { SetNullPacketBitrate(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetPatInterval() const{ return m_patInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetPatInterval(int value) { m_patIntervalHasBeenSet = true; m_patInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline M2tsSettings& WithPatInterval(int value) { SetPatInterval(value); return *this;}


    
    inline const M2tsPcrControl& GetPcrControl() const{ return m_pcrControl; }

    
    inline void SetPcrControl(const M2tsPcrControl& value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }

    
    inline void SetPcrControl(M2tsPcrControl&& value) { m_pcrControlHasBeenSet = true; m_pcrControl = std::move(value); }

    
    inline M2tsSettings& WithPcrControl(const M2tsPcrControl& value) { SetPcrControl(value); return *this;}

    
    inline M2tsSettings& WithPcrControl(M2tsPcrControl&& value) { SetPcrControl(std::move(value)); return *this;}


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
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }

    /**
     * Packet Identifier (PID) of the Program Clock Reference (PCR) in the transport
     * stream. When no value is given, the encoder will assign the same value as the
     * Video PID.
     */
    inline M2tsSettings& WithPcrPid(int value) { SetPcrPid(value); return *this;}


    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline int GetPmtInterval() const{ return m_pmtInterval; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }

    /**
     * The number of milliseconds between instances of this table in the output
     * transport stream.
     */
    inline M2tsSettings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}


    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline int GetPmtPid() const{ return m_pmtPid; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline void SetPmtPid(int value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }

    /**
     * Packet Identifier (PID) for the Program Map Table (PMT) in the transport stream.
     */
    inline M2tsSettings& WithPmtPid(int value) { SetPmtPid(value); return *this;}


    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline int GetPrivateMetadataPid() const{ return m_privateMetadataPid; }

    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline void SetPrivateMetadataPid(int value) { m_privateMetadataPidHasBeenSet = true; m_privateMetadataPid = value; }

    /**
     * Packet Identifier (PID) of the private metadata stream in the transport stream.
     */
    inline M2tsSettings& WithPrivateMetadataPid(int value) { SetPrivateMetadataPid(value); return *this;}


    /**
     * The value of the program number field in the Program Map Table.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * The value of the program number field in the Program Map Table.
     */
    inline M2tsSettings& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    
    inline const M2tsRateMode& GetRateMode() const{ return m_rateMode; }

    
    inline void SetRateMode(const M2tsRateMode& value) { m_rateModeHasBeenSet = true; m_rateMode = value; }

    
    inline void SetRateMode(M2tsRateMode&& value) { m_rateModeHasBeenSet = true; m_rateMode = std::move(value); }

    
    inline M2tsSettings& WithRateMode(const M2tsRateMode& value) { SetRateMode(value); return *this;}

    
    inline M2tsSettings& WithRateMode(M2tsRateMode&& value) { SetRateMode(std::move(value)); return *this;}


    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline int GetScte35Pid() const{ return m_scte35Pid; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }

    /**
     * Packet Identifier (PID) of the SCTE-35 stream in the transport stream.
     */
    inline M2tsSettings& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}


    
    inline const M2tsScte35Source& GetScte35Source() const{ return m_scte35Source; }

    
    inline void SetScte35Source(const M2tsScte35Source& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }

    
    inline void SetScte35Source(M2tsScte35Source&& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = std::move(value); }

    
    inline M2tsSettings& WithScte35Source(const M2tsScte35Source& value) { SetScte35Source(value); return *this;}

    
    inline M2tsSettings& WithScte35Source(M2tsScte35Source&& value) { SetScte35Source(std::move(value)); return *this;}


    
    inline const M2tsSegmentationMarkers& GetSegmentationMarkers() const{ return m_segmentationMarkers; }

    
    inline void SetSegmentationMarkers(const M2tsSegmentationMarkers& value) { m_segmentationMarkersHasBeenSet = true; m_segmentationMarkers = value; }

    
    inline void SetSegmentationMarkers(M2tsSegmentationMarkers&& value) { m_segmentationMarkersHasBeenSet = true; m_segmentationMarkers = std::move(value); }

    
    inline M2tsSettings& WithSegmentationMarkers(const M2tsSegmentationMarkers& value) { SetSegmentationMarkers(value); return *this;}

    
    inline M2tsSettings& WithSegmentationMarkers(M2tsSegmentationMarkers&& value) { SetSegmentationMarkers(std::move(value)); return *this;}


    
    inline const M2tsSegmentationStyle& GetSegmentationStyle() const{ return m_segmentationStyle; }

    
    inline void SetSegmentationStyle(const M2tsSegmentationStyle& value) { m_segmentationStyleHasBeenSet = true; m_segmentationStyle = value; }

    
    inline void SetSegmentationStyle(M2tsSegmentationStyle&& value) { m_segmentationStyleHasBeenSet = true; m_segmentationStyle = std::move(value); }

    
    inline M2tsSettings& WithSegmentationStyle(const M2tsSegmentationStyle& value) { SetSegmentationStyle(value); return *this;}

    
    inline M2tsSettings& WithSegmentationStyle(M2tsSegmentationStyle&& value) { SetSegmentationStyle(std::move(value)); return *this;}


    /**
     * The length in seconds of each segment. Required unless markers is set to _none_.
     */
    inline double GetSegmentationTime() const{ return m_segmentationTime; }

    /**
     * The length in seconds of each segment. Required unless markers is set to _none_.
     */
    inline void SetSegmentationTime(double value) { m_segmentationTimeHasBeenSet = true; m_segmentationTime = value; }

    /**
     * The length in seconds of each segment. Required unless markers is set to _none_.
     */
    inline M2tsSettings& WithSegmentationTime(double value) { SetSegmentationTime(value); return *this;}


    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     */
    inline int GetTimedMetadataPid() const{ return m_timedMetadataPid; }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     */
    inline void SetTimedMetadataPid(int value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }

    /**
     * Packet Identifier (PID) of the timed metadata stream in the transport stream.
     */
    inline M2tsSettings& WithTimedMetadataPid(int value) { SetTimedMetadataPid(value); return *this;}


    /**
     * The value of the transport stream ID field in the Program Map Table.
     */
    inline int GetTransportStreamId() const{ return m_transportStreamId; }

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
     */
    inline int GetVideoPid() const{ return m_videoPid; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     */
    inline void SetVideoPid(int value) { m_videoPidHasBeenSet = true; m_videoPid = value; }

    /**
     * Packet Identifier (PID) of the elementary video stream in the transport stream.
     */
    inline M2tsSettings& WithVideoPid(int value) { SetVideoPid(value); return *this;}

  private:

    M2tsAudioBufferModel m_audioBufferModel;
    bool m_audioBufferModelHasBeenSet;

    int m_audioFramesPerPes;
    bool m_audioFramesPerPesHasBeenSet;

    Aws::Vector<int> m_audioPids;
    bool m_audioPidsHasBeenSet;

    int m_bitrate;
    bool m_bitrateHasBeenSet;

    M2tsBufferModel m_bufferModel;
    bool m_bufferModelHasBeenSet;

    DvbNitSettings m_dvbNitSettings;
    bool m_dvbNitSettingsHasBeenSet;

    DvbSdtSettings m_dvbSdtSettings;
    bool m_dvbSdtSettingsHasBeenSet;

    Aws::Vector<int> m_dvbSubPids;
    bool m_dvbSubPidsHasBeenSet;

    DvbTdtSettings m_dvbTdtSettings;
    bool m_dvbTdtSettingsHasBeenSet;

    int m_dvbTeletextPid;
    bool m_dvbTeletextPidHasBeenSet;

    M2tsEbpAudioInterval m_ebpAudioInterval;
    bool m_ebpAudioIntervalHasBeenSet;

    M2tsEbpPlacement m_ebpPlacement;
    bool m_ebpPlacementHasBeenSet;

    M2tsEsRateInPes m_esRateInPes;
    bool m_esRateInPesHasBeenSet;

    double m_fragmentTime;
    bool m_fragmentTimeHasBeenSet;

    int m_maxPcrInterval;
    bool m_maxPcrIntervalHasBeenSet;

    int m_minEbpInterval;
    bool m_minEbpIntervalHasBeenSet;

    M2tsNielsenId3 m_nielsenId3;
    bool m_nielsenId3HasBeenSet;

    double m_nullPacketBitrate;
    bool m_nullPacketBitrateHasBeenSet;

    int m_patInterval;
    bool m_patIntervalHasBeenSet;

    M2tsPcrControl m_pcrControl;
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

    M2tsRateMode m_rateMode;
    bool m_rateModeHasBeenSet;

    int m_scte35Pid;
    bool m_scte35PidHasBeenSet;

    M2tsScte35Source m_scte35Source;
    bool m_scte35SourceHasBeenSet;

    M2tsSegmentationMarkers m_segmentationMarkers;
    bool m_segmentationMarkersHasBeenSet;

    M2tsSegmentationStyle m_segmentationStyle;
    bool m_segmentationStyleHasBeenSet;

    double m_segmentationTime;
    bool m_segmentationTimeHasBeenSet;

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
