/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/M2tsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

M2tsSettings::M2tsSettings() : 
    m_absentInputAudioBehavior(M2tsAbsentInputAudioBehavior::NOT_SET),
    m_absentInputAudioBehaviorHasBeenSet(false),
    m_arib(M2tsArib::NOT_SET),
    m_aribHasBeenSet(false),
    m_aribCaptionsPidHasBeenSet(false),
    m_aribCaptionsPidControl(M2tsAribCaptionsPidControl::NOT_SET),
    m_aribCaptionsPidControlHasBeenSet(false),
    m_audioBufferModel(M2tsAudioBufferModel::NOT_SET),
    m_audioBufferModelHasBeenSet(false),
    m_audioFramesPerPes(0),
    m_audioFramesPerPesHasBeenSet(false),
    m_audioPidsHasBeenSet(false),
    m_audioStreamType(M2tsAudioStreamType::NOT_SET),
    m_audioStreamTypeHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bufferModel(M2tsBufferModel::NOT_SET),
    m_bufferModelHasBeenSet(false),
    m_ccDescriptor(M2tsCcDescriptor::NOT_SET),
    m_ccDescriptorHasBeenSet(false),
    m_dvbNitSettingsHasBeenSet(false),
    m_dvbSdtSettingsHasBeenSet(false),
    m_dvbSubPidsHasBeenSet(false),
    m_dvbTdtSettingsHasBeenSet(false),
    m_dvbTeletextPidHasBeenSet(false),
    m_ebif(M2tsEbifControl::NOT_SET),
    m_ebifHasBeenSet(false),
    m_ebpAudioInterval(M2tsAudioInterval::NOT_SET),
    m_ebpAudioIntervalHasBeenSet(false),
    m_ebpLookaheadMs(0),
    m_ebpLookaheadMsHasBeenSet(false),
    m_ebpPlacement(M2tsEbpPlacement::NOT_SET),
    m_ebpPlacementHasBeenSet(false),
    m_ecmPidHasBeenSet(false),
    m_esRateInPes(M2tsEsRateInPes::NOT_SET),
    m_esRateInPesHasBeenSet(false),
    m_etvPlatformPidHasBeenSet(false),
    m_etvSignalPidHasBeenSet(false),
    m_fragmentTime(0.0),
    m_fragmentTimeHasBeenSet(false),
    m_klv(M2tsKlv::NOT_SET),
    m_klvHasBeenSet(false),
    m_klvDataPidsHasBeenSet(false),
    m_nielsenId3Behavior(M2tsNielsenId3Behavior::NOT_SET),
    m_nielsenId3BehaviorHasBeenSet(false),
    m_nullPacketBitrate(0.0),
    m_nullPacketBitrateHasBeenSet(false),
    m_patInterval(0),
    m_patIntervalHasBeenSet(false),
    m_pcrControl(M2tsPcrControl::NOT_SET),
    m_pcrControlHasBeenSet(false),
    m_pcrPeriod(0),
    m_pcrPeriodHasBeenSet(false),
    m_pcrPidHasBeenSet(false),
    m_pmtInterval(0),
    m_pmtIntervalHasBeenSet(false),
    m_pmtPidHasBeenSet(false),
    m_programNum(0),
    m_programNumHasBeenSet(false),
    m_rateMode(M2tsRateMode::NOT_SET),
    m_rateModeHasBeenSet(false),
    m_scte27PidsHasBeenSet(false),
    m_scte35Control(M2tsScte35Control::NOT_SET),
    m_scte35ControlHasBeenSet(false),
    m_scte35PidHasBeenSet(false),
    m_segmentationMarkers(M2tsSegmentationMarkers::NOT_SET),
    m_segmentationMarkersHasBeenSet(false),
    m_segmentationStyle(M2tsSegmentationStyle::NOT_SET),
    m_segmentationStyleHasBeenSet(false),
    m_segmentationTime(0.0),
    m_segmentationTimeHasBeenSet(false),
    m_timedMetadataBehavior(M2tsTimedMetadataBehavior::NOT_SET),
    m_timedMetadataBehaviorHasBeenSet(false),
    m_timedMetadataPidHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_videoPidHasBeenSet(false)
{
}

M2tsSettings::M2tsSettings(JsonView jsonValue) : 
    m_absentInputAudioBehavior(M2tsAbsentInputAudioBehavior::NOT_SET),
    m_absentInputAudioBehaviorHasBeenSet(false),
    m_arib(M2tsArib::NOT_SET),
    m_aribHasBeenSet(false),
    m_aribCaptionsPidHasBeenSet(false),
    m_aribCaptionsPidControl(M2tsAribCaptionsPidControl::NOT_SET),
    m_aribCaptionsPidControlHasBeenSet(false),
    m_audioBufferModel(M2tsAudioBufferModel::NOT_SET),
    m_audioBufferModelHasBeenSet(false),
    m_audioFramesPerPes(0),
    m_audioFramesPerPesHasBeenSet(false),
    m_audioPidsHasBeenSet(false),
    m_audioStreamType(M2tsAudioStreamType::NOT_SET),
    m_audioStreamTypeHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bufferModel(M2tsBufferModel::NOT_SET),
    m_bufferModelHasBeenSet(false),
    m_ccDescriptor(M2tsCcDescriptor::NOT_SET),
    m_ccDescriptorHasBeenSet(false),
    m_dvbNitSettingsHasBeenSet(false),
    m_dvbSdtSettingsHasBeenSet(false),
    m_dvbSubPidsHasBeenSet(false),
    m_dvbTdtSettingsHasBeenSet(false),
    m_dvbTeletextPidHasBeenSet(false),
    m_ebif(M2tsEbifControl::NOT_SET),
    m_ebifHasBeenSet(false),
    m_ebpAudioInterval(M2tsAudioInterval::NOT_SET),
    m_ebpAudioIntervalHasBeenSet(false),
    m_ebpLookaheadMs(0),
    m_ebpLookaheadMsHasBeenSet(false),
    m_ebpPlacement(M2tsEbpPlacement::NOT_SET),
    m_ebpPlacementHasBeenSet(false),
    m_ecmPidHasBeenSet(false),
    m_esRateInPes(M2tsEsRateInPes::NOT_SET),
    m_esRateInPesHasBeenSet(false),
    m_etvPlatformPidHasBeenSet(false),
    m_etvSignalPidHasBeenSet(false),
    m_fragmentTime(0.0),
    m_fragmentTimeHasBeenSet(false),
    m_klv(M2tsKlv::NOT_SET),
    m_klvHasBeenSet(false),
    m_klvDataPidsHasBeenSet(false),
    m_nielsenId3Behavior(M2tsNielsenId3Behavior::NOT_SET),
    m_nielsenId3BehaviorHasBeenSet(false),
    m_nullPacketBitrate(0.0),
    m_nullPacketBitrateHasBeenSet(false),
    m_patInterval(0),
    m_patIntervalHasBeenSet(false),
    m_pcrControl(M2tsPcrControl::NOT_SET),
    m_pcrControlHasBeenSet(false),
    m_pcrPeriod(0),
    m_pcrPeriodHasBeenSet(false),
    m_pcrPidHasBeenSet(false),
    m_pmtInterval(0),
    m_pmtIntervalHasBeenSet(false),
    m_pmtPidHasBeenSet(false),
    m_programNum(0),
    m_programNumHasBeenSet(false),
    m_rateMode(M2tsRateMode::NOT_SET),
    m_rateModeHasBeenSet(false),
    m_scte27PidsHasBeenSet(false),
    m_scte35Control(M2tsScte35Control::NOT_SET),
    m_scte35ControlHasBeenSet(false),
    m_scte35PidHasBeenSet(false),
    m_segmentationMarkers(M2tsSegmentationMarkers::NOT_SET),
    m_segmentationMarkersHasBeenSet(false),
    m_segmentationStyle(M2tsSegmentationStyle::NOT_SET),
    m_segmentationStyleHasBeenSet(false),
    m_segmentationTime(0.0),
    m_segmentationTimeHasBeenSet(false),
    m_timedMetadataBehavior(M2tsTimedMetadataBehavior::NOT_SET),
    m_timedMetadataBehaviorHasBeenSet(false),
    m_timedMetadataPidHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_videoPidHasBeenSet(false)
{
  *this = jsonValue;
}

M2tsSettings& M2tsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("absentInputAudioBehavior"))
  {
    m_absentInputAudioBehavior = M2tsAbsentInputAudioBehaviorMapper::GetM2tsAbsentInputAudioBehaviorForName(jsonValue.GetString("absentInputAudioBehavior"));

    m_absentInputAudioBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arib"))
  {
    m_arib = M2tsAribMapper::GetM2tsAribForName(jsonValue.GetString("arib"));

    m_aribHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aribCaptionsPid"))
  {
    m_aribCaptionsPid = jsonValue.GetString("aribCaptionsPid");

    m_aribCaptionsPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aribCaptionsPidControl"))
  {
    m_aribCaptionsPidControl = M2tsAribCaptionsPidControlMapper::GetM2tsAribCaptionsPidControlForName(jsonValue.GetString("aribCaptionsPidControl"));

    m_aribCaptionsPidControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioBufferModel"))
  {
    m_audioBufferModel = M2tsAudioBufferModelMapper::GetM2tsAudioBufferModelForName(jsonValue.GetString("audioBufferModel"));

    m_audioBufferModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioFramesPerPes"))
  {
    m_audioFramesPerPes = jsonValue.GetInteger("audioFramesPerPes");

    m_audioFramesPerPesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioPids"))
  {
    m_audioPids = jsonValue.GetString("audioPids");

    m_audioPidsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioStreamType"))
  {
    m_audioStreamType = M2tsAudioStreamTypeMapper::GetM2tsAudioStreamTypeForName(jsonValue.GetString("audioStreamType"));

    m_audioStreamTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bitrate"))
  {
    m_bitrate = jsonValue.GetInteger("bitrate");

    m_bitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bufferModel"))
  {
    m_bufferModel = M2tsBufferModelMapper::GetM2tsBufferModelForName(jsonValue.GetString("bufferModel"));

    m_bufferModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ccDescriptor"))
  {
    m_ccDescriptor = M2tsCcDescriptorMapper::GetM2tsCcDescriptorForName(jsonValue.GetString("ccDescriptor"));

    m_ccDescriptorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbNitSettings"))
  {
    m_dvbNitSettings = jsonValue.GetObject("dvbNitSettings");

    m_dvbNitSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbSdtSettings"))
  {
    m_dvbSdtSettings = jsonValue.GetObject("dvbSdtSettings");

    m_dvbSdtSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbSubPids"))
  {
    m_dvbSubPids = jsonValue.GetString("dvbSubPids");

    m_dvbSubPidsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbTdtSettings"))
  {
    m_dvbTdtSettings = jsonValue.GetObject("dvbTdtSettings");

    m_dvbTdtSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbTeletextPid"))
  {
    m_dvbTeletextPid = jsonValue.GetString("dvbTeletextPid");

    m_dvbTeletextPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebif"))
  {
    m_ebif = M2tsEbifControlMapper::GetM2tsEbifControlForName(jsonValue.GetString("ebif"));

    m_ebifHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebpAudioInterval"))
  {
    m_ebpAudioInterval = M2tsAudioIntervalMapper::GetM2tsAudioIntervalForName(jsonValue.GetString("ebpAudioInterval"));

    m_ebpAudioIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebpLookaheadMs"))
  {
    m_ebpLookaheadMs = jsonValue.GetInteger("ebpLookaheadMs");

    m_ebpLookaheadMsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebpPlacement"))
  {
    m_ebpPlacement = M2tsEbpPlacementMapper::GetM2tsEbpPlacementForName(jsonValue.GetString("ebpPlacement"));

    m_ebpPlacementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecmPid"))
  {
    m_ecmPid = jsonValue.GetString("ecmPid");

    m_ecmPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("esRateInPes"))
  {
    m_esRateInPes = M2tsEsRateInPesMapper::GetM2tsEsRateInPesForName(jsonValue.GetString("esRateInPes"));

    m_esRateInPesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("etvPlatformPid"))
  {
    m_etvPlatformPid = jsonValue.GetString("etvPlatformPid");

    m_etvPlatformPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("etvSignalPid"))
  {
    m_etvSignalPid = jsonValue.GetString("etvSignalPid");

    m_etvSignalPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentTime"))
  {
    m_fragmentTime = jsonValue.GetDouble("fragmentTime");

    m_fragmentTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("klv"))
  {
    m_klv = M2tsKlvMapper::GetM2tsKlvForName(jsonValue.GetString("klv"));

    m_klvHasBeenSet = true;
  }

  if(jsonValue.ValueExists("klvDataPids"))
  {
    m_klvDataPids = jsonValue.GetString("klvDataPids");

    m_klvDataPidsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenId3Behavior"))
  {
    m_nielsenId3Behavior = M2tsNielsenId3BehaviorMapper::GetM2tsNielsenId3BehaviorForName(jsonValue.GetString("nielsenId3Behavior"));

    m_nielsenId3BehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nullPacketBitrate"))
  {
    m_nullPacketBitrate = jsonValue.GetDouble("nullPacketBitrate");

    m_nullPacketBitrateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("patInterval"))
  {
    m_patInterval = jsonValue.GetInteger("patInterval");

    m_patIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pcrControl"))
  {
    m_pcrControl = M2tsPcrControlMapper::GetM2tsPcrControlForName(jsonValue.GetString("pcrControl"));

    m_pcrControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pcrPeriod"))
  {
    m_pcrPeriod = jsonValue.GetInteger("pcrPeriod");

    m_pcrPeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pcrPid"))
  {
    m_pcrPid = jsonValue.GetString("pcrPid");

    m_pcrPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pmtInterval"))
  {
    m_pmtInterval = jsonValue.GetInteger("pmtInterval");

    m_pmtIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pmtPid"))
  {
    m_pmtPid = jsonValue.GetString("pmtPid");

    m_pmtPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programNum"))
  {
    m_programNum = jsonValue.GetInteger("programNum");

    m_programNumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateMode"))
  {
    m_rateMode = M2tsRateModeMapper::GetM2tsRateModeForName(jsonValue.GetString("rateMode"));

    m_rateModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte27Pids"))
  {
    m_scte27Pids = jsonValue.GetString("scte27Pids");

    m_scte27PidsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Control"))
  {
    m_scte35Control = M2tsScte35ControlMapper::GetM2tsScte35ControlForName(jsonValue.GetString("scte35Control"));

    m_scte35ControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Pid"))
  {
    m_scte35Pid = jsonValue.GetString("scte35Pid");

    m_scte35PidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationMarkers"))
  {
    m_segmentationMarkers = M2tsSegmentationMarkersMapper::GetM2tsSegmentationMarkersForName(jsonValue.GetString("segmentationMarkers"));

    m_segmentationMarkersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationStyle"))
  {
    m_segmentationStyle = M2tsSegmentationStyleMapper::GetM2tsSegmentationStyleForName(jsonValue.GetString("segmentationStyle"));

    m_segmentationStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentationTime"))
  {
    m_segmentationTime = jsonValue.GetDouble("segmentationTime");

    m_segmentationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataBehavior"))
  {
    m_timedMetadataBehavior = M2tsTimedMetadataBehaviorMapper::GetM2tsTimedMetadataBehaviorForName(jsonValue.GetString("timedMetadataBehavior"));

    m_timedMetadataBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataPid"))
  {
    m_timedMetadataPid = jsonValue.GetString("timedMetadataPid");

    m_timedMetadataPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transportStreamId"))
  {
    m_transportStreamId = jsonValue.GetInteger("transportStreamId");

    m_transportStreamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoPid"))
  {
    m_videoPid = jsonValue.GetString("videoPid");

    m_videoPidHasBeenSet = true;
  }

  return *this;
}

JsonValue M2tsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_absentInputAudioBehaviorHasBeenSet)
  {
   payload.WithString("absentInputAudioBehavior", M2tsAbsentInputAudioBehaviorMapper::GetNameForM2tsAbsentInputAudioBehavior(m_absentInputAudioBehavior));
  }

  if(m_aribHasBeenSet)
  {
   payload.WithString("arib", M2tsAribMapper::GetNameForM2tsArib(m_arib));
  }

  if(m_aribCaptionsPidHasBeenSet)
  {
   payload.WithString("aribCaptionsPid", m_aribCaptionsPid);

  }

  if(m_aribCaptionsPidControlHasBeenSet)
  {
   payload.WithString("aribCaptionsPidControl", M2tsAribCaptionsPidControlMapper::GetNameForM2tsAribCaptionsPidControl(m_aribCaptionsPidControl));
  }

  if(m_audioBufferModelHasBeenSet)
  {
   payload.WithString("audioBufferModel", M2tsAudioBufferModelMapper::GetNameForM2tsAudioBufferModel(m_audioBufferModel));
  }

  if(m_audioFramesPerPesHasBeenSet)
  {
   payload.WithInteger("audioFramesPerPes", m_audioFramesPerPes);

  }

  if(m_audioPidsHasBeenSet)
  {
   payload.WithString("audioPids", m_audioPids);

  }

  if(m_audioStreamTypeHasBeenSet)
  {
   payload.WithString("audioStreamType", M2tsAudioStreamTypeMapper::GetNameForM2tsAudioStreamType(m_audioStreamType));
  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_bufferModelHasBeenSet)
  {
   payload.WithString("bufferModel", M2tsBufferModelMapper::GetNameForM2tsBufferModel(m_bufferModel));
  }

  if(m_ccDescriptorHasBeenSet)
  {
   payload.WithString("ccDescriptor", M2tsCcDescriptorMapper::GetNameForM2tsCcDescriptor(m_ccDescriptor));
  }

  if(m_dvbNitSettingsHasBeenSet)
  {
   payload.WithObject("dvbNitSettings", m_dvbNitSettings.Jsonize());

  }

  if(m_dvbSdtSettingsHasBeenSet)
  {
   payload.WithObject("dvbSdtSettings", m_dvbSdtSettings.Jsonize());

  }

  if(m_dvbSubPidsHasBeenSet)
  {
   payload.WithString("dvbSubPids", m_dvbSubPids);

  }

  if(m_dvbTdtSettingsHasBeenSet)
  {
   payload.WithObject("dvbTdtSettings", m_dvbTdtSettings.Jsonize());

  }

  if(m_dvbTeletextPidHasBeenSet)
  {
   payload.WithString("dvbTeletextPid", m_dvbTeletextPid);

  }

  if(m_ebifHasBeenSet)
  {
   payload.WithString("ebif", M2tsEbifControlMapper::GetNameForM2tsEbifControl(m_ebif));
  }

  if(m_ebpAudioIntervalHasBeenSet)
  {
   payload.WithString("ebpAudioInterval", M2tsAudioIntervalMapper::GetNameForM2tsAudioInterval(m_ebpAudioInterval));
  }

  if(m_ebpLookaheadMsHasBeenSet)
  {
   payload.WithInteger("ebpLookaheadMs", m_ebpLookaheadMs);

  }

  if(m_ebpPlacementHasBeenSet)
  {
   payload.WithString("ebpPlacement", M2tsEbpPlacementMapper::GetNameForM2tsEbpPlacement(m_ebpPlacement));
  }

  if(m_ecmPidHasBeenSet)
  {
   payload.WithString("ecmPid", m_ecmPid);

  }

  if(m_esRateInPesHasBeenSet)
  {
   payload.WithString("esRateInPes", M2tsEsRateInPesMapper::GetNameForM2tsEsRateInPes(m_esRateInPes));
  }

  if(m_etvPlatformPidHasBeenSet)
  {
   payload.WithString("etvPlatformPid", m_etvPlatformPid);

  }

  if(m_etvSignalPidHasBeenSet)
  {
   payload.WithString("etvSignalPid", m_etvSignalPid);

  }

  if(m_fragmentTimeHasBeenSet)
  {
   payload.WithDouble("fragmentTime", m_fragmentTime);

  }

  if(m_klvHasBeenSet)
  {
   payload.WithString("klv", M2tsKlvMapper::GetNameForM2tsKlv(m_klv));
  }

  if(m_klvDataPidsHasBeenSet)
  {
   payload.WithString("klvDataPids", m_klvDataPids);

  }

  if(m_nielsenId3BehaviorHasBeenSet)
  {
   payload.WithString("nielsenId3Behavior", M2tsNielsenId3BehaviorMapper::GetNameForM2tsNielsenId3Behavior(m_nielsenId3Behavior));
  }

  if(m_nullPacketBitrateHasBeenSet)
  {
   payload.WithDouble("nullPacketBitrate", m_nullPacketBitrate);

  }

  if(m_patIntervalHasBeenSet)
  {
   payload.WithInteger("patInterval", m_patInterval);

  }

  if(m_pcrControlHasBeenSet)
  {
   payload.WithString("pcrControl", M2tsPcrControlMapper::GetNameForM2tsPcrControl(m_pcrControl));
  }

  if(m_pcrPeriodHasBeenSet)
  {
   payload.WithInteger("pcrPeriod", m_pcrPeriod);

  }

  if(m_pcrPidHasBeenSet)
  {
   payload.WithString("pcrPid", m_pcrPid);

  }

  if(m_pmtIntervalHasBeenSet)
  {
   payload.WithInteger("pmtInterval", m_pmtInterval);

  }

  if(m_pmtPidHasBeenSet)
  {
   payload.WithString("pmtPid", m_pmtPid);

  }

  if(m_programNumHasBeenSet)
  {
   payload.WithInteger("programNum", m_programNum);

  }

  if(m_rateModeHasBeenSet)
  {
   payload.WithString("rateMode", M2tsRateModeMapper::GetNameForM2tsRateMode(m_rateMode));
  }

  if(m_scte27PidsHasBeenSet)
  {
   payload.WithString("scte27Pids", m_scte27Pids);

  }

  if(m_scte35ControlHasBeenSet)
  {
   payload.WithString("scte35Control", M2tsScte35ControlMapper::GetNameForM2tsScte35Control(m_scte35Control));
  }

  if(m_scte35PidHasBeenSet)
  {
   payload.WithString("scte35Pid", m_scte35Pid);

  }

  if(m_segmentationMarkersHasBeenSet)
  {
   payload.WithString("segmentationMarkers", M2tsSegmentationMarkersMapper::GetNameForM2tsSegmentationMarkers(m_segmentationMarkers));
  }

  if(m_segmentationStyleHasBeenSet)
  {
   payload.WithString("segmentationStyle", M2tsSegmentationStyleMapper::GetNameForM2tsSegmentationStyle(m_segmentationStyle));
  }

  if(m_segmentationTimeHasBeenSet)
  {
   payload.WithDouble("segmentationTime", m_segmentationTime);

  }

  if(m_timedMetadataBehaviorHasBeenSet)
  {
   payload.WithString("timedMetadataBehavior", M2tsTimedMetadataBehaviorMapper::GetNameForM2tsTimedMetadataBehavior(m_timedMetadataBehavior));
  }

  if(m_timedMetadataPidHasBeenSet)
  {
   payload.WithString("timedMetadataPid", m_timedMetadataPid);

  }

  if(m_transportStreamIdHasBeenSet)
  {
   payload.WithInteger("transportStreamId", m_transportStreamId);

  }

  if(m_videoPidHasBeenSet)
  {
   payload.WithString("videoPid", m_videoPid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
