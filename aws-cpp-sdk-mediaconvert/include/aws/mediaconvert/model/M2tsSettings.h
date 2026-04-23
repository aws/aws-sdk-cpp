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
#include <aws/mediaconvert/model/M2tsForceTsVideoEbpOrder.h>
#include <aws/mediaconvert/model/M2tsNielsenId3.h>
#include <aws/mediaconvert/model/M2tsPcrControl.h>
#include <aws/mediaconvert/model/M2tsRateMode.h>
#include <aws/mediaconvert/model/M2tsScte35Esam.h>
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaConvert
{
namespace Model
{

  /**
   * MPEG-2 TS container settings. These apply to outputs in a File output group when
   * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
   * these assets, data is organized by the program map table (PMT). Each transport
   * stream program contains subsets of data, including audio, video, and metadata.
   * Each of these subsets of data has a numerical label called a packet identifier
   * (PID). Each transport stream program corresponds to one MediaConvert output. The
   * PMT lists the types of data in a program along with their PID. Downstream
   * systems and players use the program map table to look up the PID for each type
   * of data it accesses and then uses the PIDs to locate specific data within the
   * asset.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/M2tsSettings">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API M2tsSettings
  {
  public:
    M2tsSettings();
    M2tsSettings(Aws::Utils::Json::JsonView jsonValue);
    M2tsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Selects between the DVB and ATSC buffer models for Dolby Digital audio.
     */
    inline const M2tsAudioBufferModel& GetAudioBufferModel() const{ return m_audioBufferModel; }

    /**
     * Selects between the DVB and ATSC buffer models for Dolby Digital audio.
     */
    inline bool AudioBufferModelHasBeenSet() const { return m_audioBufferModelHasBeenSet; }

    /**
     * Selects between the DVB and ATSC buffer models for Dolby Digital audio.
     */
    inline void SetAudioBufferModel(const M2tsAudioBufferModel& value) { m_audioBufferModelHasBeenSet = true; m_audioBufferModel = value; }

    /**
     * Selects between the DVB and ATSC buffer models for Dolby Digital audio.
     */
    inline void SetAudioBufferModel(M2tsAudioBufferModel&& value) { m_audioBufferModelHasBeenSet = true; m_audioBufferModel = std::move(value); }

    /**
     * Selects between the DVB and ATSC buffer models for Dolby Digital audio.
     */
    inline M2tsSettings& WithAudioBufferModel(const M2tsAudioBufferModel& value) { SetAudioBufferModel(value); return *this;}

    /**
     * Selects between the DVB and ATSC buffer models for Dolby Digital audio.
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
     * Specify the packet identifiers (PIDs) for any elementary audio streams you
     * include in this output. Specify multiple PIDs as a JSON array. Default is the
     * range 482-492.
     */
    inline const Aws::Vector<int>& GetAudioPids() const{ return m_audioPids; }

    /**
     * Specify the packet identifiers (PIDs) for any elementary audio streams you
     * include in this output. Specify multiple PIDs as a JSON array. Default is the
     * range 482-492.
     */
    inline bool AudioPidsHasBeenSet() const { return m_audioPidsHasBeenSet; }

    /**
     * Specify the packet identifiers (PIDs) for any elementary audio streams you
     * include in this output. Specify multiple PIDs as a JSON array. Default is the
     * range 482-492.
     */
    inline void SetAudioPids(const Aws::Vector<int>& value) { m_audioPidsHasBeenSet = true; m_audioPids = value; }

    /**
     * Specify the packet identifiers (PIDs) for any elementary audio streams you
     * include in this output. Specify multiple PIDs as a JSON array. Default is the
     * range 482-492.
     */
    inline void SetAudioPids(Aws::Vector<int>&& value) { m_audioPidsHasBeenSet = true; m_audioPids = std::move(value); }

    /**
     * Specify the packet identifiers (PIDs) for any elementary audio streams you
     * include in this output. Specify multiple PIDs as a JSON array. Default is the
     * range 482-492.
     */
    inline M2tsSettings& WithAudioPids(const Aws::Vector<int>& value) { SetAudioPids(value); return *this;}

    /**
     * Specify the packet identifiers (PIDs) for any elementary audio streams you
     * include in this output. Specify multiple PIDs as a JSON array. Default is the
     * range 482-492.
     */
    inline M2tsSettings& WithAudioPids(Aws::Vector<int>&& value) { SetAudioPids(std::move(value)); return *this;}

    /**
     * Specify the packet identifiers (PIDs) for any elementary audio streams you
     * include in this output. Specify multiple PIDs as a JSON array. Default is the
     * range 482-492.
     */
    inline M2tsSettings& AddAudioPids(int value) { m_audioPidsHasBeenSet = true; m_audioPids.push_back(value); return *this; }


    /**
     * Specify the output bitrate of the transport stream in bits per second. Setting
     * to 0 lets the muxer automatically determine the appropriate bitrate. Other
     * common values are 3750000, 7500000, and 15000000.
     */
    inline int GetBitrate() const{ return m_bitrate; }

    /**
     * Specify the output bitrate of the transport stream in bits per second. Setting
     * to 0 lets the muxer automatically determine the appropriate bitrate. Other
     * common values are 3750000, 7500000, and 15000000.
     */
    inline bool BitrateHasBeenSet() const { return m_bitrateHasBeenSet; }

    /**
     * Specify the output bitrate of the transport stream in bits per second. Setting
     * to 0 lets the muxer automatically determine the appropriate bitrate. Other
     * common values are 3750000, 7500000, and 15000000.
     */
    inline void SetBitrate(int value) { m_bitrateHasBeenSet = true; m_bitrate = value; }

    /**
     * Specify the output bitrate of the transport stream in bits per second. Setting
     * to 0 lets the muxer automatically determine the appropriate bitrate. Other
     * common values are 3750000, 7500000, and 15000000.
     */
    inline M2tsSettings& WithBitrate(int value) { SetBitrate(value); return *this;}


    /**
     * Controls what buffer model to use for accurate interleaving. If set to
     * MULTIPLEX, use multiplex  buffer model. If set to NONE, this can lead to lower
     * latency, but low-memory devices may not be able to play back the stream without
     * interruptions.
     */
    inline const M2tsBufferModel& GetBufferModel() const{ return m_bufferModel; }

    /**
     * Controls what buffer model to use for accurate interleaving. If set to
     * MULTIPLEX, use multiplex  buffer model. If set to NONE, this can lead to lower
     * latency, but low-memory devices may not be able to play back the stream without
     * interruptions.
     */
    inline bool BufferModelHasBeenSet() const { return m_bufferModelHasBeenSet; }

    /**
     * Controls what buffer model to use for accurate interleaving. If set to
     * MULTIPLEX, use multiplex  buffer model. If set to NONE, this can lead to lower
     * latency, but low-memory devices may not be able to play back the stream without
     * interruptions.
     */
    inline void SetBufferModel(const M2tsBufferModel& value) { m_bufferModelHasBeenSet = true; m_bufferModel = value; }

    /**
     * Controls what buffer model to use for accurate interleaving. If set to
     * MULTIPLEX, use multiplex  buffer model. If set to NONE, this can lead to lower
     * latency, but low-memory devices may not be able to play back the stream without
     * interruptions.
     */
    inline void SetBufferModel(M2tsBufferModel&& value) { m_bufferModelHasBeenSet = true; m_bufferModel = std::move(value); }

    /**
     * Controls what buffer model to use for accurate interleaving. If set to
     * MULTIPLEX, use multiplex  buffer model. If set to NONE, this can lead to lower
     * latency, but low-memory devices may not be able to play back the stream without
     * interruptions.
     */
    inline M2tsSettings& WithBufferModel(const M2tsBufferModel& value) { SetBufferModel(value); return *this;}

    /**
     * Controls what buffer model to use for accurate interleaving. If set to
     * MULTIPLEX, use multiplex  buffer model. If set to NONE, this can lead to lower
     * latency, but low-memory devices may not be able to play back the stream without
     * interruptions.
     */
    inline M2tsSettings& WithBufferModel(M2tsBufferModel&& value) { SetBufferModel(std::move(value)); return *this;}


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
     * Inserts DVB Service Description Table (NIT) at the specified table repetition
     * interval.
     */
    inline const DvbSdtSettings& GetDvbSdtSettings() const{ return m_dvbSdtSettings; }

    /**
     * Inserts DVB Service Description Table (NIT) at the specified table repetition
     * interval.
     */
    inline bool DvbSdtSettingsHasBeenSet() const { return m_dvbSdtSettingsHasBeenSet; }

    /**
     * Inserts DVB Service Description Table (NIT) at the specified table repetition
     * interval.
     */
    inline void SetDvbSdtSettings(const DvbSdtSettings& value) { m_dvbSdtSettingsHasBeenSet = true; m_dvbSdtSettings = value; }

    /**
     * Inserts DVB Service Description Table (NIT) at the specified table repetition
     * interval.
     */
    inline void SetDvbSdtSettings(DvbSdtSettings&& value) { m_dvbSdtSettingsHasBeenSet = true; m_dvbSdtSettings = std::move(value); }

    /**
     * Inserts DVB Service Description Table (NIT) at the specified table repetition
     * interval.
     */
    inline M2tsSettings& WithDvbSdtSettings(const DvbSdtSettings& value) { SetDvbSdtSettings(value); return *this;}

    /**
     * Inserts DVB Service Description Table (NIT) at the specified table repetition
     * interval.
     */
    inline M2tsSettings& WithDvbSdtSettings(DvbSdtSettings&& value) { SetDvbSdtSettings(std::move(value)); return *this;}


    /**
     * Specify the packet identifiers (PIDs) for DVB subtitle data included in this
     * output. Specify multiple PIDs as a JSON array. Default is the range 460-479.
     */
    inline const Aws::Vector<int>& GetDvbSubPids() const{ return m_dvbSubPids; }

    /**
     * Specify the packet identifiers (PIDs) for DVB subtitle data included in this
     * output. Specify multiple PIDs as a JSON array. Default is the range 460-479.
     */
    inline bool DvbSubPidsHasBeenSet() const { return m_dvbSubPidsHasBeenSet; }

    /**
     * Specify the packet identifiers (PIDs) for DVB subtitle data included in this
     * output. Specify multiple PIDs as a JSON array. Default is the range 460-479.
     */
    inline void SetDvbSubPids(const Aws::Vector<int>& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = value; }

    /**
     * Specify the packet identifiers (PIDs) for DVB subtitle data included in this
     * output. Specify multiple PIDs as a JSON array. Default is the range 460-479.
     */
    inline void SetDvbSubPids(Aws::Vector<int>&& value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids = std::move(value); }

    /**
     * Specify the packet identifiers (PIDs) for DVB subtitle data included in this
     * output. Specify multiple PIDs as a JSON array. Default is the range 460-479.
     */
    inline M2tsSettings& WithDvbSubPids(const Aws::Vector<int>& value) { SetDvbSubPids(value); return *this;}

    /**
     * Specify the packet identifiers (PIDs) for DVB subtitle data included in this
     * output. Specify multiple PIDs as a JSON array. Default is the range 460-479.
     */
    inline M2tsSettings& WithDvbSubPids(Aws::Vector<int>&& value) { SetDvbSubPids(std::move(value)); return *this;}

    /**
     * Specify the packet identifiers (PIDs) for DVB subtitle data included in this
     * output. Specify multiple PIDs as a JSON array. Default is the range 460-479.
     */
    inline M2tsSettings& AddDvbSubPids(int value) { m_dvbSubPidsHasBeenSet = true; m_dvbSubPids.push_back(value); return *this; }


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
     * Specify the packet identifier (PID) for DVB teletext data you include in this
     * output. Default is 499.
     */
    inline int GetDvbTeletextPid() const{ return m_dvbTeletextPid; }

    /**
     * Specify the packet identifier (PID) for DVB teletext data you include in this
     * output. Default is 499.
     */
    inline bool DvbTeletextPidHasBeenSet() const { return m_dvbTeletextPidHasBeenSet; }

    /**
     * Specify the packet identifier (PID) for DVB teletext data you include in this
     * output. Default is 499.
     */
    inline void SetDvbTeletextPid(int value) { m_dvbTeletextPidHasBeenSet = true; m_dvbTeletextPid = value; }

    /**
     * Specify the packet identifier (PID) for DVB teletext data you include in this
     * output. Default is 499.
     */
    inline M2tsSettings& WithDvbTeletextPid(int value) { SetDvbTeletextPid(value); return *this;}


    /**
     * When set to VIDEO_AND_FIXED_INTERVALS, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. When set to
     * VIDEO_INTERVAL, these additional markers will not be inserted. Only applicable
     * when EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline const M2tsEbpAudioInterval& GetEbpAudioInterval() const{ return m_ebpAudioInterval; }

    /**
     * When set to VIDEO_AND_FIXED_INTERVALS, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. When set to
     * VIDEO_INTERVAL, these additional markers will not be inserted. Only applicable
     * when EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline bool EbpAudioIntervalHasBeenSet() const { return m_ebpAudioIntervalHasBeenSet; }

    /**
     * When set to VIDEO_AND_FIXED_INTERVALS, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. When set to
     * VIDEO_INTERVAL, these additional markers will not be inserted. Only applicable
     * when EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline void SetEbpAudioInterval(const M2tsEbpAudioInterval& value) { m_ebpAudioIntervalHasBeenSet = true; m_ebpAudioInterval = value; }

    /**
     * When set to VIDEO_AND_FIXED_INTERVALS, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. When set to
     * VIDEO_INTERVAL, these additional markers will not be inserted. Only applicable
     * when EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline void SetEbpAudioInterval(M2tsEbpAudioInterval&& value) { m_ebpAudioIntervalHasBeenSet = true; m_ebpAudioInterval = std::move(value); }

    /**
     * When set to VIDEO_AND_FIXED_INTERVALS, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. When set to
     * VIDEO_INTERVAL, these additional markers will not be inserted. Only applicable
     * when EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline M2tsSettings& WithEbpAudioInterval(const M2tsEbpAudioInterval& value) { SetEbpAudioInterval(value); return *this;}

    /**
     * When set to VIDEO_AND_FIXED_INTERVALS, audio EBP markers will be added to
     * partitions 3 and 4. The interval between these additional markers will be fixed,
     * and will be slightly shorter than the video EBP marker interval. When set to
     * VIDEO_INTERVAL, these additional markers will not be inserted. Only applicable
     * when EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline M2tsSettings& WithEbpAudioInterval(M2tsEbpAudioInterval&& value) { SetEbpAudioInterval(std::move(value)); return *this;}


    /**
     * Selects which PIDs to place EBP markers on. They can either be placed only on
     * the video PID, or on both the video PID and all audio PIDs. Only applicable when
     * EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline const M2tsEbpPlacement& GetEbpPlacement() const{ return m_ebpPlacement; }

    /**
     * Selects which PIDs to place EBP markers on. They can either be placed only on
     * the video PID, or on both the video PID and all audio PIDs. Only applicable when
     * EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline bool EbpPlacementHasBeenSet() const { return m_ebpPlacementHasBeenSet; }

    /**
     * Selects which PIDs to place EBP markers on. They can either be placed only on
     * the video PID, or on both the video PID and all audio PIDs. Only applicable when
     * EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline void SetEbpPlacement(const M2tsEbpPlacement& value) { m_ebpPlacementHasBeenSet = true; m_ebpPlacement = value; }

    /**
     * Selects which PIDs to place EBP markers on. They can either be placed only on
     * the video PID, or on both the video PID and all audio PIDs. Only applicable when
     * EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline void SetEbpPlacement(M2tsEbpPlacement&& value) { m_ebpPlacementHasBeenSet = true; m_ebpPlacement = std::move(value); }

    /**
     * Selects which PIDs to place EBP markers on. They can either be placed only on
     * the video PID, or on both the video PID and all audio PIDs. Only applicable when
     * EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline M2tsSettings& WithEbpPlacement(const M2tsEbpPlacement& value) { SetEbpPlacement(value); return *this;}

    /**
     * Selects which PIDs to place EBP markers on. They can either be placed only on
     * the video PID, or on both the video PID and all audio PIDs. Only applicable when
     * EBP segmentation markers are is selected (segmentationMarkers is EBP or
     * EBP_LEGACY).
     */
    inline M2tsSettings& WithEbpPlacement(M2tsEbpPlacement&& value) { SetEbpPlacement(std::move(value)); return *this;}


    /**
     * Controls whether to include the ES Rate field in the PES header.
     */
    inline const M2tsEsRateInPes& GetEsRateInPes() const{ return m_esRateInPes; }

    /**
     * Controls whether to include the ES Rate field in the PES header.
     */
    inline bool EsRateInPesHasBeenSet() const { return m_esRateInPesHasBeenSet; }

    /**
     * Controls whether to include the ES Rate field in the PES header.
     */
    inline void SetEsRateInPes(const M2tsEsRateInPes& value) { m_esRateInPesHasBeenSet = true; m_esRateInPes = value; }

    /**
     * Controls whether to include the ES Rate field in the PES header.
     */
    inline void SetEsRateInPes(M2tsEsRateInPes&& value) { m_esRateInPesHasBeenSet = true; m_esRateInPes = std::move(value); }

    /**
     * Controls whether to include the ES Rate field in the PES header.
     */
    inline M2tsSettings& WithEsRateInPes(const M2tsEsRateInPes& value) { SetEsRateInPes(value); return *this;}

    /**
     * Controls whether to include the ES Rate field in the PES header.
     */
    inline M2tsSettings& WithEsRateInPes(M2tsEsRateInPes&& value) { SetEsRateInPes(std::move(value)); return *this;}


    /**
     * Keep the default value (DEFAULT) unless you know that your audio EBP markers are
     * incorrectly appearing before your video EBP markers. To correct this problem,
     * set this value to Force (FORCE).
     */
    inline const M2tsForceTsVideoEbpOrder& GetForceTsVideoEbpOrder() const{ return m_forceTsVideoEbpOrder; }

    /**
     * Keep the default value (DEFAULT) unless you know that your audio EBP markers are
     * incorrectly appearing before your video EBP markers. To correct this problem,
     * set this value to Force (FORCE).
     */
    inline bool ForceTsVideoEbpOrderHasBeenSet() const { return m_forceTsVideoEbpOrderHasBeenSet; }

    /**
     * Keep the default value (DEFAULT) unless you know that your audio EBP markers are
     * incorrectly appearing before your video EBP markers. To correct this problem,
     * set this value to Force (FORCE).
     */
    inline void SetForceTsVideoEbpOrder(const M2tsForceTsVideoEbpOrder& value) { m_forceTsVideoEbpOrderHasBeenSet = true; m_forceTsVideoEbpOrder = value; }

    /**
     * Keep the default value (DEFAULT) unless you know that your audio EBP markers are
     * incorrectly appearing before your video EBP markers. To correct this problem,
     * set this value to Force (FORCE).
     */
    inline void SetForceTsVideoEbpOrder(M2tsForceTsVideoEbpOrder&& value) { m_forceTsVideoEbpOrderHasBeenSet = true; m_forceTsVideoEbpOrder = std::move(value); }

    /**
     * Keep the default value (DEFAULT) unless you know that your audio EBP markers are
     * incorrectly appearing before your video EBP markers. To correct this problem,
     * set this value to Force (FORCE).
     */
    inline M2tsSettings& WithForceTsVideoEbpOrder(const M2tsForceTsVideoEbpOrder& value) { SetForceTsVideoEbpOrder(value); return *this;}

    /**
     * Keep the default value (DEFAULT) unless you know that your audio EBP markers are
     * incorrectly appearing before your video EBP markers. To correct this problem,
     * set this value to Force (FORCE).
     */
    inline M2tsSettings& WithForceTsVideoEbpOrder(M2tsForceTsVideoEbpOrder&& value) { SetForceTsVideoEbpOrder(std::move(value)); return *this;}


    /**
     * The length, in seconds, of each fragment. Only used with EBP markers.
     */
    inline double GetFragmentTime() const{ return m_fragmentTime; }

    /**
     * The length, in seconds, of each fragment. Only used with EBP markers.
     */
    inline bool FragmentTimeHasBeenSet() const { return m_fragmentTimeHasBeenSet; }

    /**
     * The length, in seconds, of each fragment. Only used with EBP markers.
     */
    inline void SetFragmentTime(double value) { m_fragmentTimeHasBeenSet = true; m_fragmentTime = value; }

    /**
     * The length, in seconds, of each fragment. Only used with EBP markers.
     */
    inline M2tsSettings& WithFragmentTime(double value) { SetFragmentTime(value); return *this;}


    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
     */
    inline int GetMaxPcrInterval() const{ return m_maxPcrInterval; }

    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
     */
    inline bool MaxPcrIntervalHasBeenSet() const { return m_maxPcrIntervalHasBeenSet; }

    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
     */
    inline void SetMaxPcrInterval(int value) { m_maxPcrIntervalHasBeenSet = true; m_maxPcrInterval = value; }

    /**
     * Specify the maximum time, in milliseconds, between Program Clock References
     * (PCRs) inserted into the transport stream.
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
    inline bool MinEbpIntervalHasBeenSet() const { return m_minEbpIntervalHasBeenSet; }

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


    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline const M2tsNielsenId3& GetNielsenId3() const{ return m_nielsenId3; }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline bool NielsenId3HasBeenSet() const { return m_nielsenId3HasBeenSet; }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline void SetNielsenId3(const M2tsNielsenId3& value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = value; }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline void SetNielsenId3(M2tsNielsenId3&& value) { m_nielsenId3HasBeenSet = true; m_nielsenId3 = std::move(value); }

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
    inline M2tsSettings& WithNielsenId3(const M2tsNielsenId3& value) { SetNielsenId3(value); return *this;}

    /**
     * If INSERT, Nielsen inaudible tones for media tracking will be detected in the
     * input audio and an equivalent ID3 tag will be inserted in the output.
     */
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
    inline M2tsSettings& WithPatInterval(int value) { SetPatInterval(value); return *this;}


    /**
     * When set to PCR_EVERY_PES_PACKET, a Program Clock Reference value is inserted
     * for every Packetized Elementary Stream (PES) header. This is effective only when
     * the PCR PID is the same as the video or audio elementary stream.
     */
    inline const M2tsPcrControl& GetPcrControl() const{ return m_pcrControl; }

    /**
     * When set to PCR_EVERY_PES_PACKET, a Program Clock Reference value is inserted
     * for every Packetized Elementary Stream (PES) header. This is effective only when
     * the PCR PID is the same as the video or audio elementary stream.
     */
    inline bool PcrControlHasBeenSet() const { return m_pcrControlHasBeenSet; }

    /**
     * When set to PCR_EVERY_PES_PACKET, a Program Clock Reference value is inserted
     * for every Packetized Elementary Stream (PES) header. This is effective only when
     * the PCR PID is the same as the video or audio elementary stream.
     */
    inline void SetPcrControl(const M2tsPcrControl& value) { m_pcrControlHasBeenSet = true; m_pcrControl = value; }

    /**
     * When set to PCR_EVERY_PES_PACKET, a Program Clock Reference value is inserted
     * for every Packetized Elementary Stream (PES) header. This is effective only when
     * the PCR PID is the same as the video or audio elementary stream.
     */
    inline void SetPcrControl(M2tsPcrControl&& value) { m_pcrControlHasBeenSet = true; m_pcrControl = std::move(value); }

    /**
     * When set to PCR_EVERY_PES_PACKET, a Program Clock Reference value is inserted
     * for every Packetized Elementary Stream (PES) header. This is effective only when
     * the PCR PID is the same as the video or audio elementary stream.
     */
    inline M2tsSettings& WithPcrControl(const M2tsPcrControl& value) { SetPcrControl(value); return *this;}

    /**
     * When set to PCR_EVERY_PES_PACKET, a Program Clock Reference value is inserted
     * for every Packetized Elementary Stream (PES) header. This is effective only when
     * the PCR PID is the same as the video or audio elementary stream.
     */
    inline M2tsSettings& WithPcrControl(M2tsPcrControl&& value) { SetPcrControl(std::move(value)); return *this;}


    /**
     * Specify the packet identifier (PID) for the program clock reference (PCR) in
     * this output. If you do not specify a value, the service will use the value for
     * Video PID (VideoPid).
     */
    inline int GetPcrPid() const{ return m_pcrPid; }

    /**
     * Specify the packet identifier (PID) for the program clock reference (PCR) in
     * this output. If you do not specify a value, the service will use the value for
     * Video PID (VideoPid).
     */
    inline bool PcrPidHasBeenSet() const { return m_pcrPidHasBeenSet; }

    /**
     * Specify the packet identifier (PID) for the program clock reference (PCR) in
     * this output. If you do not specify a value, the service will use the value for
     * Video PID (VideoPid).
     */
    inline void SetPcrPid(int value) { m_pcrPidHasBeenSet = true; m_pcrPid = value; }

    /**
     * Specify the packet identifier (PID) for the program clock reference (PCR) in
     * this output. If you do not specify a value, the service will use the value for
     * Video PID (VideoPid).
     */
    inline M2tsSettings& WithPcrPid(int value) { SetPcrPid(value); return *this;}


    /**
     * Specify the number of milliseconds between instances of the program map table
     * (PMT) in the output transport stream.
     */
    inline int GetPmtInterval() const{ return m_pmtInterval; }

    /**
     * Specify the number of milliseconds between instances of the program map table
     * (PMT) in the output transport stream.
     */
    inline bool PmtIntervalHasBeenSet() const { return m_pmtIntervalHasBeenSet; }

    /**
     * Specify the number of milliseconds between instances of the program map table
     * (PMT) in the output transport stream.
     */
    inline void SetPmtInterval(int value) { m_pmtIntervalHasBeenSet = true; m_pmtInterval = value; }

    /**
     * Specify the number of milliseconds between instances of the program map table
     * (PMT) in the output transport stream.
     */
    inline M2tsSettings& WithPmtInterval(int value) { SetPmtInterval(value); return *this;}


    /**
     * Specify the packet identifier (PID) for the program map table (PMT) itself.
     * Default is 480.
     */
    inline int GetPmtPid() const{ return m_pmtPid; }

    /**
     * Specify the packet identifier (PID) for the program map table (PMT) itself.
     * Default is 480.
     */
    inline bool PmtPidHasBeenSet() const { return m_pmtPidHasBeenSet; }

    /**
     * Specify the packet identifier (PID) for the program map table (PMT) itself.
     * Default is 480.
     */
    inline void SetPmtPid(int value) { m_pmtPidHasBeenSet = true; m_pmtPid = value; }

    /**
     * Specify the packet identifier (PID) for the program map table (PMT) itself.
     * Default is 480.
     */
    inline M2tsSettings& WithPmtPid(int value) { SetPmtPid(value); return *this;}


    /**
     * Specify the packet identifier (PID) of the private metadata stream. Default is
     * 503.
     */
    inline int GetPrivateMetadataPid() const{ return m_privateMetadataPid; }

    /**
     * Specify the packet identifier (PID) of the private metadata stream. Default is
     * 503.
     */
    inline bool PrivateMetadataPidHasBeenSet() const { return m_privateMetadataPidHasBeenSet; }

    /**
     * Specify the packet identifier (PID) of the private metadata stream. Default is
     * 503.
     */
    inline void SetPrivateMetadataPid(int value) { m_privateMetadataPidHasBeenSet = true; m_privateMetadataPid = value; }

    /**
     * Specify the packet identifier (PID) of the private metadata stream. Default is
     * 503.
     */
    inline M2tsSettings& WithPrivateMetadataPid(int value) { SetPrivateMetadataPid(value); return *this;}


    /**
     * Use Program number (programNumber) to specify the program number used in the
     * program map table (PMT) for this output. Default is 1. Program numbers and
     * program map tables are parts of MPEG-2 transport stream containers, used for
     * organizing data.
     */
    inline int GetProgramNumber() const{ return m_programNumber; }

    /**
     * Use Program number (programNumber) to specify the program number used in the
     * program map table (PMT) for this output. Default is 1. Program numbers and
     * program map tables are parts of MPEG-2 transport stream containers, used for
     * organizing data.
     */
    inline bool ProgramNumberHasBeenSet() const { return m_programNumberHasBeenSet; }

    /**
     * Use Program number (programNumber) to specify the program number used in the
     * program map table (PMT) for this output. Default is 1. Program numbers and
     * program map tables are parts of MPEG-2 transport stream containers, used for
     * organizing data.
     */
    inline void SetProgramNumber(int value) { m_programNumberHasBeenSet = true; m_programNumber = value; }

    /**
     * Use Program number (programNumber) to specify the program number used in the
     * program map table (PMT) for this output. Default is 1. Program numbers and
     * program map tables are parts of MPEG-2 transport stream containers, used for
     * organizing data.
     */
    inline M2tsSettings& WithProgramNumber(int value) { SetProgramNumber(value); return *this;}


    /**
     * When set to CBR, inserts null packets into transport stream to fill specified
     * bitrate. When set to VBR, the bitrate setting acts as the maximum bitrate, but
     * the output will not be padded up to that bitrate.
     */
    inline const M2tsRateMode& GetRateMode() const{ return m_rateMode; }

    /**
     * When set to CBR, inserts null packets into transport stream to fill specified
     * bitrate. When set to VBR, the bitrate setting acts as the maximum bitrate, but
     * the output will not be padded up to that bitrate.
     */
    inline bool RateModeHasBeenSet() const { return m_rateModeHasBeenSet; }

    /**
     * When set to CBR, inserts null packets into transport stream to fill specified
     * bitrate. When set to VBR, the bitrate setting acts as the maximum bitrate, but
     * the output will not be padded up to that bitrate.
     */
    inline void SetRateMode(const M2tsRateMode& value) { m_rateModeHasBeenSet = true; m_rateMode = value; }

    /**
     * When set to CBR, inserts null packets into transport stream to fill specified
     * bitrate. When set to VBR, the bitrate setting acts as the maximum bitrate, but
     * the output will not be padded up to that bitrate.
     */
    inline void SetRateMode(M2tsRateMode&& value) { m_rateModeHasBeenSet = true; m_rateMode = std::move(value); }

    /**
     * When set to CBR, inserts null packets into transport stream to fill specified
     * bitrate. When set to VBR, the bitrate setting acts as the maximum bitrate, but
     * the output will not be padded up to that bitrate.
     */
    inline M2tsSettings& WithRateMode(const M2tsRateMode& value) { SetRateMode(value); return *this;}

    /**
     * When set to CBR, inserts null packets into transport stream to fill specified
     * bitrate. When set to VBR, the bitrate setting acts as the maximum bitrate, but
     * the output will not be padded up to that bitrate.
     */
    inline M2tsSettings& WithRateMode(M2tsRateMode&& value) { SetRateMode(std::move(value)); return *this;}


    /**
     * Include this in your job settings to put SCTE-35 markers in your HLS and
     * transport stream outputs at the insertion points that you specify in an ESAM XML
     * document. Provide the document in the setting SCC XML (sccXml).
     */
    inline const M2tsScte35Esam& GetScte35Esam() const{ return m_scte35Esam; }

    /**
     * Include this in your job settings to put SCTE-35 markers in your HLS and
     * transport stream outputs at the insertion points that you specify in an ESAM XML
     * document. Provide the document in the setting SCC XML (sccXml).
     */
    inline bool Scte35EsamHasBeenSet() const { return m_scte35EsamHasBeenSet; }

    /**
     * Include this in your job settings to put SCTE-35 markers in your HLS and
     * transport stream outputs at the insertion points that you specify in an ESAM XML
     * document. Provide the document in the setting SCC XML (sccXml).
     */
    inline void SetScte35Esam(const M2tsScte35Esam& value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = value; }

    /**
     * Include this in your job settings to put SCTE-35 markers in your HLS and
     * transport stream outputs at the insertion points that you specify in an ESAM XML
     * document. Provide the document in the setting SCC XML (sccXml).
     */
    inline void SetScte35Esam(M2tsScte35Esam&& value) { m_scte35EsamHasBeenSet = true; m_scte35Esam = std::move(value); }

    /**
     * Include this in your job settings to put SCTE-35 markers in your HLS and
     * transport stream outputs at the insertion points that you specify in an ESAM XML
     * document. Provide the document in the setting SCC XML (sccXml).
     */
    inline M2tsSettings& WithScte35Esam(const M2tsScte35Esam& value) { SetScte35Esam(value); return *this;}

    /**
     * Include this in your job settings to put SCTE-35 markers in your HLS and
     * transport stream outputs at the insertion points that you specify in an ESAM XML
     * document. Provide the document in the setting SCC XML (sccXml).
     */
    inline M2tsSettings& WithScte35Esam(M2tsScte35Esam&& value) { SetScte35Esam(std::move(value)); return *this;}


    /**
     * Specify the packet identifier (PID) of the SCTE-35 stream in the transport
     * stream.
     */
    inline int GetScte35Pid() const{ return m_scte35Pid; }

    /**
     * Specify the packet identifier (PID) of the SCTE-35 stream in the transport
     * stream.
     */
    inline bool Scte35PidHasBeenSet() const { return m_scte35PidHasBeenSet; }

    /**
     * Specify the packet identifier (PID) of the SCTE-35 stream in the transport
     * stream.
     */
    inline void SetScte35Pid(int value) { m_scte35PidHasBeenSet = true; m_scte35Pid = value; }

    /**
     * Specify the packet identifier (PID) of the SCTE-35 stream in the transport
     * stream.
     */
    inline M2tsSettings& WithScte35Pid(int value) { SetScte35Pid(value); return *this;}


    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline const M2tsScte35Source& GetScte35Source() const{ return m_scte35Source; }

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline bool Scte35SourceHasBeenSet() const { return m_scte35SourceHasBeenSet; }

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline void SetScte35Source(const M2tsScte35Source& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = value; }

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline void SetScte35Source(M2tsScte35Source&& value) { m_scte35SourceHasBeenSet = true; m_scte35Source = std::move(value); }

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline M2tsSettings& WithScte35Source(const M2tsScte35Source& value) { SetScte35Source(value); return *this;}

    /**
     * Enables SCTE-35 passthrough (scte35Source) to pass any SCTE-35 signals from
     * input to output.
     */
    inline M2tsSettings& WithScte35Source(M2tsScte35Source&& value) { SetScte35Source(std::move(value)); return *this;}


    /**
     * Inserts segmentation markers at each segmentation_time period. rai_segstart sets
     * the Random Access Indicator bit in the adaptation field. rai_adapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psi_segstart
     * inserts PAT and PMT tables at the start of segments. ebp adds Encoder Boundary
     * Point information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebp_legacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline const M2tsSegmentationMarkers& GetSegmentationMarkers() const{ return m_segmentationMarkers; }

    /**
     * Inserts segmentation markers at each segmentation_time period. rai_segstart sets
     * the Random Access Indicator bit in the adaptation field. rai_adapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psi_segstart
     * inserts PAT and PMT tables at the start of segments. ebp adds Encoder Boundary
     * Point information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebp_legacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline bool SegmentationMarkersHasBeenSet() const { return m_segmentationMarkersHasBeenSet; }

    /**
     * Inserts segmentation markers at each segmentation_time period. rai_segstart sets
     * the Random Access Indicator bit in the adaptation field. rai_adapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psi_segstart
     * inserts PAT and PMT tables at the start of segments. ebp adds Encoder Boundary
     * Point information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebp_legacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline void SetSegmentationMarkers(const M2tsSegmentationMarkers& value) { m_segmentationMarkersHasBeenSet = true; m_segmentationMarkers = value; }

    /**
     * Inserts segmentation markers at each segmentation_time period. rai_segstart sets
     * the Random Access Indicator bit in the adaptation field. rai_adapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psi_segstart
     * inserts PAT and PMT tables at the start of segments. ebp adds Encoder Boundary
     * Point information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebp_legacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline void SetSegmentationMarkers(M2tsSegmentationMarkers&& value) { m_segmentationMarkersHasBeenSet = true; m_segmentationMarkers = std::move(value); }

    /**
     * Inserts segmentation markers at each segmentation_time period. rai_segstart sets
     * the Random Access Indicator bit in the adaptation field. rai_adapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psi_segstart
     * inserts PAT and PMT tables at the start of segments. ebp adds Encoder Boundary
     * Point information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebp_legacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline M2tsSettings& WithSegmentationMarkers(const M2tsSegmentationMarkers& value) { SetSegmentationMarkers(value); return *this;}

    /**
     * Inserts segmentation markers at each segmentation_time period. rai_segstart sets
     * the Random Access Indicator bit in the adaptation field. rai_adapt sets the RAI
     * bit and adds the current timecode in the private data bytes. psi_segstart
     * inserts PAT and PMT tables at the start of segments. ebp adds Encoder Boundary
     * Point information to the adaptation field as per OpenCable specification
     * OC-SP-EBP-I01-130118. ebp_legacy adds Encoder Boundary Point information to the
     * adaptation field using a legacy proprietary format.
     */
    inline M2tsSettings& WithSegmentationMarkers(M2tsSegmentationMarkers&& value) { SetSegmentationMarkers(std::move(value)); return *this;}


    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are inserted.
     * When a segmentation style of "reset_cadence" is selected and a segment is
     * truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of of $segmentation_time seconds.
     * When a segmentation style of "maintain_cadence" is selected and a segment is
     * truncated due to an avail, we will not reset the segmentation cadence. This
     * means the subsequent segment will likely be truncated as well. However, all
     * segments after that will have a duration of $segmentation_time seconds. Note
     * that EBP lookahead is a slight exception to this rule.
     */
    inline const M2tsSegmentationStyle& GetSegmentationStyle() const{ return m_segmentationStyle; }

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are inserted.
     * When a segmentation style of "reset_cadence" is selected and a segment is
     * truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of of $segmentation_time seconds.
     * When a segmentation style of "maintain_cadence" is selected and a segment is
     * truncated due to an avail, we will not reset the segmentation cadence. This
     * means the subsequent segment will likely be truncated as well. However, all
     * segments after that will have a duration of $segmentation_time seconds. Note
     * that EBP lookahead is a slight exception to this rule.
     */
    inline bool SegmentationStyleHasBeenSet() const { return m_segmentationStyleHasBeenSet; }

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are inserted.
     * When a segmentation style of "reset_cadence" is selected and a segment is
     * truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of of $segmentation_time seconds.
     * When a segmentation style of "maintain_cadence" is selected and a segment is
     * truncated due to an avail, we will not reset the segmentation cadence. This
     * means the subsequent segment will likely be truncated as well. However, all
     * segments after that will have a duration of $segmentation_time seconds. Note
     * that EBP lookahead is a slight exception to this rule.
     */
    inline void SetSegmentationStyle(const M2tsSegmentationStyle& value) { m_segmentationStyleHasBeenSet = true; m_segmentationStyle = value; }

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are inserted.
     * When a segmentation style of "reset_cadence" is selected and a segment is
     * truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of of $segmentation_time seconds.
     * When a segmentation style of "maintain_cadence" is selected and a segment is
     * truncated due to an avail, we will not reset the segmentation cadence. This
     * means the subsequent segment will likely be truncated as well. However, all
     * segments after that will have a duration of $segmentation_time seconds. Note
     * that EBP lookahead is a slight exception to this rule.
     */
    inline void SetSegmentationStyle(M2tsSegmentationStyle&& value) { m_segmentationStyleHasBeenSet = true; m_segmentationStyle = std::move(value); }

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are inserted.
     * When a segmentation style of "reset_cadence" is selected and a segment is
     * truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of of $segmentation_time seconds.
     * When a segmentation style of "maintain_cadence" is selected and a segment is
     * truncated due to an avail, we will not reset the segmentation cadence. This
     * means the subsequent segment will likely be truncated as well. However, all
     * segments after that will have a duration of $segmentation_time seconds. Note
     * that EBP lookahead is a slight exception to this rule.
     */
    inline M2tsSettings& WithSegmentationStyle(const M2tsSegmentationStyle& value) { SetSegmentationStyle(value); return *this;}

    /**
     * The segmentation style parameter controls how segmentation markers are inserted
     * into the transport stream. With avails, it is possible that segments may be
     * truncated, which can influence where future segmentation markers are inserted.
     * When a segmentation style of "reset_cadence" is selected and a segment is
     * truncated due to an avail, we will reset the segmentation cadence. This means
     * the subsequent segment will have a duration of of $segmentation_time seconds.
     * When a segmentation style of "maintain_cadence" is selected and a segment is
     * truncated due to an avail, we will not reset the segmentation cadence. This
     * means the subsequent segment will likely be truncated as well. However, all
     * segments after that will have a duration of $segmentation_time seconds. Note
     * that EBP lookahead is a slight exception to this rule.
     */
    inline M2tsSettings& WithSegmentationStyle(M2tsSegmentationStyle&& value) { SetSegmentationStyle(std::move(value)); return *this;}


    /**
     * Specify the length, in seconds, of each segment. Required unless markers is set
     * to _none_.
     */
    inline double GetSegmentationTime() const{ return m_segmentationTime; }

    /**
     * Specify the length, in seconds, of each segment. Required unless markers is set
     * to _none_.
     */
    inline bool SegmentationTimeHasBeenSet() const { return m_segmentationTimeHasBeenSet; }

    /**
     * Specify the length, in seconds, of each segment. Required unless markers is set
     * to _none_.
     */
    inline void SetSegmentationTime(double value) { m_segmentationTimeHasBeenSet = true; m_segmentationTime = value; }

    /**
     * Specify the length, in seconds, of each segment. Required unless markers is set
     * to _none_.
     */
    inline M2tsSettings& WithSegmentationTime(double value) { SetSegmentationTime(value); return *this;}


    /**
     * Specify the packet identifier (PID) for timed metadata in this output. Default
     * is 502.
     */
    inline int GetTimedMetadataPid() const{ return m_timedMetadataPid; }

    /**
     * Specify the packet identifier (PID) for timed metadata in this output. Default
     * is 502.
     */
    inline bool TimedMetadataPidHasBeenSet() const { return m_timedMetadataPidHasBeenSet; }

    /**
     * Specify the packet identifier (PID) for timed metadata in this output. Default
     * is 502.
     */
    inline void SetTimedMetadataPid(int value) { m_timedMetadataPidHasBeenSet = true; m_timedMetadataPid = value; }

    /**
     * Specify the packet identifier (PID) for timed metadata in this output. Default
     * is 502.
     */
    inline M2tsSettings& WithTimedMetadataPid(int value) { SetTimedMetadataPid(value); return *this;}


    /**
     * Specify the ID for the transport stream itself in the program map table for this
     * output. Transport stream IDs and program map tables are parts of MPEG-2
     * transport stream containers, used for organizing data.
     */
    inline int GetTransportStreamId() const{ return m_transportStreamId; }

    /**
     * Specify the ID for the transport stream itself in the program map table for this
     * output. Transport stream IDs and program map tables are parts of MPEG-2
     * transport stream containers, used for organizing data.
     */
    inline bool TransportStreamIdHasBeenSet() const { return m_transportStreamIdHasBeenSet; }

    /**
     * Specify the ID for the transport stream itself in the program map table for this
     * output. Transport stream IDs and program map tables are parts of MPEG-2
     * transport stream containers, used for organizing data.
     */
    inline void SetTransportStreamId(int value) { m_transportStreamIdHasBeenSet = true; m_transportStreamId = value; }

    /**
     * Specify the ID for the transport stream itself in the program map table for this
     * output. Transport stream IDs and program map tables are parts of MPEG-2
     * transport stream containers, used for organizing data.
     */
    inline M2tsSettings& WithTransportStreamId(int value) { SetTransportStreamId(value); return *this;}


    /**
     * Specify the packet identifier (PID) of the elementary video stream in the
     * transport stream.
     */
    inline int GetVideoPid() const{ return m_videoPid; }

    /**
     * Specify the packet identifier (PID) of the elementary video stream in the
     * transport stream.
     */
    inline bool VideoPidHasBeenSet() const { return m_videoPidHasBeenSet; }

    /**
     * Specify the packet identifier (PID) of the elementary video stream in the
     * transport stream.
     */
    inline void SetVideoPid(int value) { m_videoPidHasBeenSet = true; m_videoPid = value; }

    /**
     * Specify the packet identifier (PID) of the elementary video stream in the
     * transport stream.
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

    M2tsForceTsVideoEbpOrder m_forceTsVideoEbpOrder;
    bool m_forceTsVideoEbpOrderHasBeenSet;

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

    M2tsScte35Esam m_scte35Esam;
    bool m_scte35EsamHasBeenSet;

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
