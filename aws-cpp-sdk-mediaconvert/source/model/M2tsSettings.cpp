/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsSettings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

M2tsSettings::M2tsSettings() : 
    m_audioBufferModel(M2tsAudioBufferModel::NOT_SET),
    m_audioBufferModelHasBeenSet(false),
    m_audioDuration(M2tsAudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_audioFramesPerPes(0),
    m_audioFramesPerPesHasBeenSet(false),
    m_audioPidsHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bufferModel(M2tsBufferModel::NOT_SET),
    m_bufferModelHasBeenSet(false),
    m_dataPTSControl(M2tsDataPtsControl::NOT_SET),
    m_dataPTSControlHasBeenSet(false),
    m_dvbNitSettingsHasBeenSet(false),
    m_dvbSdtSettingsHasBeenSet(false),
    m_dvbSubPidsHasBeenSet(false),
    m_dvbTdtSettingsHasBeenSet(false),
    m_dvbTeletextPid(0),
    m_dvbTeletextPidHasBeenSet(false),
    m_ebpAudioInterval(M2tsEbpAudioInterval::NOT_SET),
    m_ebpAudioIntervalHasBeenSet(false),
    m_ebpPlacement(M2tsEbpPlacement::NOT_SET),
    m_ebpPlacementHasBeenSet(false),
    m_esRateInPes(M2tsEsRateInPes::NOT_SET),
    m_esRateInPesHasBeenSet(false),
    m_forceTsVideoEbpOrder(M2tsForceTsVideoEbpOrder::NOT_SET),
    m_forceTsVideoEbpOrderHasBeenSet(false),
    m_fragmentTime(0.0),
    m_fragmentTimeHasBeenSet(false),
    m_klvMetadata(M2tsKlvMetadata::NOT_SET),
    m_klvMetadataHasBeenSet(false),
    m_maxPcrInterval(0),
    m_maxPcrIntervalHasBeenSet(false),
    m_minEbpInterval(0),
    m_minEbpIntervalHasBeenSet(false),
    m_nielsenId3(M2tsNielsenId3::NOT_SET),
    m_nielsenId3HasBeenSet(false),
    m_nullPacketBitrate(0.0),
    m_nullPacketBitrateHasBeenSet(false),
    m_patInterval(0),
    m_patIntervalHasBeenSet(false),
    m_pcrControl(M2tsPcrControl::NOT_SET),
    m_pcrControlHasBeenSet(false),
    m_pcrPid(0),
    m_pcrPidHasBeenSet(false),
    m_pmtInterval(0),
    m_pmtIntervalHasBeenSet(false),
    m_pmtPid(0),
    m_pmtPidHasBeenSet(false),
    m_privateMetadataPid(0),
    m_privateMetadataPidHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_rateMode(M2tsRateMode::NOT_SET),
    m_rateModeHasBeenSet(false),
    m_scte35EsamHasBeenSet(false),
    m_scte35Pid(0),
    m_scte35PidHasBeenSet(false),
    m_scte35Source(M2tsScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false),
    m_segmentationMarkers(M2tsSegmentationMarkers::NOT_SET),
    m_segmentationMarkersHasBeenSet(false),
    m_segmentationStyle(M2tsSegmentationStyle::NOT_SET),
    m_segmentationStyleHasBeenSet(false),
    m_segmentationTime(0.0),
    m_segmentationTimeHasBeenSet(false),
    m_timedMetadataPid(0),
    m_timedMetadataPidHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_videoPid(0),
    m_videoPidHasBeenSet(false)
{
}

M2tsSettings::M2tsSettings(JsonView jsonValue) : 
    m_audioBufferModel(M2tsAudioBufferModel::NOT_SET),
    m_audioBufferModelHasBeenSet(false),
    m_audioDuration(M2tsAudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_audioFramesPerPes(0),
    m_audioFramesPerPesHasBeenSet(false),
    m_audioPidsHasBeenSet(false),
    m_bitrate(0),
    m_bitrateHasBeenSet(false),
    m_bufferModel(M2tsBufferModel::NOT_SET),
    m_bufferModelHasBeenSet(false),
    m_dataPTSControl(M2tsDataPtsControl::NOT_SET),
    m_dataPTSControlHasBeenSet(false),
    m_dvbNitSettingsHasBeenSet(false),
    m_dvbSdtSettingsHasBeenSet(false),
    m_dvbSubPidsHasBeenSet(false),
    m_dvbTdtSettingsHasBeenSet(false),
    m_dvbTeletextPid(0),
    m_dvbTeletextPidHasBeenSet(false),
    m_ebpAudioInterval(M2tsEbpAudioInterval::NOT_SET),
    m_ebpAudioIntervalHasBeenSet(false),
    m_ebpPlacement(M2tsEbpPlacement::NOT_SET),
    m_ebpPlacementHasBeenSet(false),
    m_esRateInPes(M2tsEsRateInPes::NOT_SET),
    m_esRateInPesHasBeenSet(false),
    m_forceTsVideoEbpOrder(M2tsForceTsVideoEbpOrder::NOT_SET),
    m_forceTsVideoEbpOrderHasBeenSet(false),
    m_fragmentTime(0.0),
    m_fragmentTimeHasBeenSet(false),
    m_klvMetadata(M2tsKlvMetadata::NOT_SET),
    m_klvMetadataHasBeenSet(false),
    m_maxPcrInterval(0),
    m_maxPcrIntervalHasBeenSet(false),
    m_minEbpInterval(0),
    m_minEbpIntervalHasBeenSet(false),
    m_nielsenId3(M2tsNielsenId3::NOT_SET),
    m_nielsenId3HasBeenSet(false),
    m_nullPacketBitrate(0.0),
    m_nullPacketBitrateHasBeenSet(false),
    m_patInterval(0),
    m_patIntervalHasBeenSet(false),
    m_pcrControl(M2tsPcrControl::NOT_SET),
    m_pcrControlHasBeenSet(false),
    m_pcrPid(0),
    m_pcrPidHasBeenSet(false),
    m_pmtInterval(0),
    m_pmtIntervalHasBeenSet(false),
    m_pmtPid(0),
    m_pmtPidHasBeenSet(false),
    m_privateMetadataPid(0),
    m_privateMetadataPidHasBeenSet(false),
    m_programNumber(0),
    m_programNumberHasBeenSet(false),
    m_rateMode(M2tsRateMode::NOT_SET),
    m_rateModeHasBeenSet(false),
    m_scte35EsamHasBeenSet(false),
    m_scte35Pid(0),
    m_scte35PidHasBeenSet(false),
    m_scte35Source(M2tsScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false),
    m_segmentationMarkers(M2tsSegmentationMarkers::NOT_SET),
    m_segmentationMarkersHasBeenSet(false),
    m_segmentationStyle(M2tsSegmentationStyle::NOT_SET),
    m_segmentationStyleHasBeenSet(false),
    m_segmentationTime(0.0),
    m_segmentationTimeHasBeenSet(false),
    m_timedMetadataPid(0),
    m_timedMetadataPidHasBeenSet(false),
    m_transportStreamId(0),
    m_transportStreamIdHasBeenSet(false),
    m_videoPid(0),
    m_videoPidHasBeenSet(false)
{
  *this = jsonValue;
}

M2tsSettings& M2tsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioBufferModel"))
  {
    m_audioBufferModel = M2tsAudioBufferModelMapper::GetM2tsAudioBufferModelForName(jsonValue.GetString("audioBufferModel"));

    m_audioBufferModelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioDuration"))
  {
    m_audioDuration = M2tsAudioDurationMapper::GetM2tsAudioDurationForName(jsonValue.GetString("audioDuration"));

    m_audioDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioFramesPerPes"))
  {
    m_audioFramesPerPes = jsonValue.GetInteger("audioFramesPerPes");

    m_audioFramesPerPesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioPids"))
  {
    Aws::Utils::Array<JsonView> audioPidsJsonList = jsonValue.GetArray("audioPids");
    for(unsigned audioPidsIndex = 0; audioPidsIndex < audioPidsJsonList.GetLength(); ++audioPidsIndex)
    {
      m_audioPids.push_back(audioPidsJsonList[audioPidsIndex].AsInteger());
    }
    m_audioPidsHasBeenSet = true;
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

  if(jsonValue.ValueExists("dataPTSControl"))
  {
    m_dataPTSControl = M2tsDataPtsControlMapper::GetM2tsDataPtsControlForName(jsonValue.GetString("dataPTSControl"));

    m_dataPTSControlHasBeenSet = true;
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
    Aws::Utils::Array<JsonView> dvbSubPidsJsonList = jsonValue.GetArray("dvbSubPids");
    for(unsigned dvbSubPidsIndex = 0; dvbSubPidsIndex < dvbSubPidsJsonList.GetLength(); ++dvbSubPidsIndex)
    {
      m_dvbSubPids.push_back(dvbSubPidsJsonList[dvbSubPidsIndex].AsInteger());
    }
    m_dvbSubPidsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbTdtSettings"))
  {
    m_dvbTdtSettings = jsonValue.GetObject("dvbTdtSettings");

    m_dvbTdtSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dvbTeletextPid"))
  {
    m_dvbTeletextPid = jsonValue.GetInteger("dvbTeletextPid");

    m_dvbTeletextPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebpAudioInterval"))
  {
    m_ebpAudioInterval = M2tsEbpAudioIntervalMapper::GetM2tsEbpAudioIntervalForName(jsonValue.GetString("ebpAudioInterval"));

    m_ebpAudioIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebpPlacement"))
  {
    m_ebpPlacement = M2tsEbpPlacementMapper::GetM2tsEbpPlacementForName(jsonValue.GetString("ebpPlacement"));

    m_ebpPlacementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("esRateInPes"))
  {
    m_esRateInPes = M2tsEsRateInPesMapper::GetM2tsEsRateInPesForName(jsonValue.GetString("esRateInPes"));

    m_esRateInPesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("forceTsVideoEbpOrder"))
  {
    m_forceTsVideoEbpOrder = M2tsForceTsVideoEbpOrderMapper::GetM2tsForceTsVideoEbpOrderForName(jsonValue.GetString("forceTsVideoEbpOrder"));

    m_forceTsVideoEbpOrderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentTime"))
  {
    m_fragmentTime = jsonValue.GetDouble("fragmentTime");

    m_fragmentTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("klvMetadata"))
  {
    m_klvMetadata = M2tsKlvMetadataMapper::GetM2tsKlvMetadataForName(jsonValue.GetString("klvMetadata"));

    m_klvMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxPcrInterval"))
  {
    m_maxPcrInterval = jsonValue.GetInteger("maxPcrInterval");

    m_maxPcrIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minEbpInterval"))
  {
    m_minEbpInterval = jsonValue.GetInteger("minEbpInterval");

    m_minEbpIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nielsenId3"))
  {
    m_nielsenId3 = M2tsNielsenId3Mapper::GetM2tsNielsenId3ForName(jsonValue.GetString("nielsenId3"));

    m_nielsenId3HasBeenSet = true;
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

  if(jsonValue.ValueExists("pcrPid"))
  {
    m_pcrPid = jsonValue.GetInteger("pcrPid");

    m_pcrPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pmtInterval"))
  {
    m_pmtInterval = jsonValue.GetInteger("pmtInterval");

    m_pmtIntervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pmtPid"))
  {
    m_pmtPid = jsonValue.GetInteger("pmtPid");

    m_pmtPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateMetadataPid"))
  {
    m_privateMetadataPid = jsonValue.GetInteger("privateMetadataPid");

    m_privateMetadataPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programNumber"))
  {
    m_programNumber = jsonValue.GetInteger("programNumber");

    m_programNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rateMode"))
  {
    m_rateMode = M2tsRateModeMapper::GetM2tsRateModeForName(jsonValue.GetString("rateMode"));

    m_rateModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Esam"))
  {
    m_scte35Esam = jsonValue.GetObject("scte35Esam");

    m_scte35EsamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Pid"))
  {
    m_scte35Pid = jsonValue.GetInteger("scte35Pid");

    m_scte35PidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Source"))
  {
    m_scte35Source = M2tsScte35SourceMapper::GetM2tsScte35SourceForName(jsonValue.GetString("scte35Source"));

    m_scte35SourceHasBeenSet = true;
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

  if(jsonValue.ValueExists("timedMetadataPid"))
  {
    m_timedMetadataPid = jsonValue.GetInteger("timedMetadataPid");

    m_timedMetadataPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transportStreamId"))
  {
    m_transportStreamId = jsonValue.GetInteger("transportStreamId");

    m_transportStreamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoPid"))
  {
    m_videoPid = jsonValue.GetInteger("videoPid");

    m_videoPidHasBeenSet = true;
  }

  return *this;
}

JsonValue M2tsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioBufferModelHasBeenSet)
  {
   payload.WithString("audioBufferModel", M2tsAudioBufferModelMapper::GetNameForM2tsAudioBufferModel(m_audioBufferModel));
  }

  if(m_audioDurationHasBeenSet)
  {
   payload.WithString("audioDuration", M2tsAudioDurationMapper::GetNameForM2tsAudioDuration(m_audioDuration));
  }

  if(m_audioFramesPerPesHasBeenSet)
  {
   payload.WithInteger("audioFramesPerPes", m_audioFramesPerPes);

  }

  if(m_audioPidsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> audioPidsJsonList(m_audioPids.size());
   for(unsigned audioPidsIndex = 0; audioPidsIndex < audioPidsJsonList.GetLength(); ++audioPidsIndex)
   {
     audioPidsJsonList[audioPidsIndex].AsInteger(m_audioPids[audioPidsIndex]);
   }
   payload.WithArray("audioPids", std::move(audioPidsJsonList));

  }

  if(m_bitrateHasBeenSet)
  {
   payload.WithInteger("bitrate", m_bitrate);

  }

  if(m_bufferModelHasBeenSet)
  {
   payload.WithString("bufferModel", M2tsBufferModelMapper::GetNameForM2tsBufferModel(m_bufferModel));
  }

  if(m_dataPTSControlHasBeenSet)
  {
   payload.WithString("dataPTSControl", M2tsDataPtsControlMapper::GetNameForM2tsDataPtsControl(m_dataPTSControl));
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
   Aws::Utils::Array<JsonValue> dvbSubPidsJsonList(m_dvbSubPids.size());
   for(unsigned dvbSubPidsIndex = 0; dvbSubPidsIndex < dvbSubPidsJsonList.GetLength(); ++dvbSubPidsIndex)
   {
     dvbSubPidsJsonList[dvbSubPidsIndex].AsInteger(m_dvbSubPids[dvbSubPidsIndex]);
   }
   payload.WithArray("dvbSubPids", std::move(dvbSubPidsJsonList));

  }

  if(m_dvbTdtSettingsHasBeenSet)
  {
   payload.WithObject("dvbTdtSettings", m_dvbTdtSettings.Jsonize());

  }

  if(m_dvbTeletextPidHasBeenSet)
  {
   payload.WithInteger("dvbTeletextPid", m_dvbTeletextPid);

  }

  if(m_ebpAudioIntervalHasBeenSet)
  {
   payload.WithString("ebpAudioInterval", M2tsEbpAudioIntervalMapper::GetNameForM2tsEbpAudioInterval(m_ebpAudioInterval));
  }

  if(m_ebpPlacementHasBeenSet)
  {
   payload.WithString("ebpPlacement", M2tsEbpPlacementMapper::GetNameForM2tsEbpPlacement(m_ebpPlacement));
  }

  if(m_esRateInPesHasBeenSet)
  {
   payload.WithString("esRateInPes", M2tsEsRateInPesMapper::GetNameForM2tsEsRateInPes(m_esRateInPes));
  }

  if(m_forceTsVideoEbpOrderHasBeenSet)
  {
   payload.WithString("forceTsVideoEbpOrder", M2tsForceTsVideoEbpOrderMapper::GetNameForM2tsForceTsVideoEbpOrder(m_forceTsVideoEbpOrder));
  }

  if(m_fragmentTimeHasBeenSet)
  {
   payload.WithDouble("fragmentTime", m_fragmentTime);

  }

  if(m_klvMetadataHasBeenSet)
  {
   payload.WithString("klvMetadata", M2tsKlvMetadataMapper::GetNameForM2tsKlvMetadata(m_klvMetadata));
  }

  if(m_maxPcrIntervalHasBeenSet)
  {
   payload.WithInteger("maxPcrInterval", m_maxPcrInterval);

  }

  if(m_minEbpIntervalHasBeenSet)
  {
   payload.WithInteger("minEbpInterval", m_minEbpInterval);

  }

  if(m_nielsenId3HasBeenSet)
  {
   payload.WithString("nielsenId3", M2tsNielsenId3Mapper::GetNameForM2tsNielsenId3(m_nielsenId3));
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

  if(m_pcrPidHasBeenSet)
  {
   payload.WithInteger("pcrPid", m_pcrPid);

  }

  if(m_pmtIntervalHasBeenSet)
  {
   payload.WithInteger("pmtInterval", m_pmtInterval);

  }

  if(m_pmtPidHasBeenSet)
  {
   payload.WithInteger("pmtPid", m_pmtPid);

  }

  if(m_privateMetadataPidHasBeenSet)
  {
   payload.WithInteger("privateMetadataPid", m_privateMetadataPid);

  }

  if(m_programNumberHasBeenSet)
  {
   payload.WithInteger("programNumber", m_programNumber);

  }

  if(m_rateModeHasBeenSet)
  {
   payload.WithString("rateMode", M2tsRateModeMapper::GetNameForM2tsRateMode(m_rateMode));
  }

  if(m_scte35EsamHasBeenSet)
  {
   payload.WithObject("scte35Esam", m_scte35Esam.Jsonize());

  }

  if(m_scte35PidHasBeenSet)
  {
   payload.WithInteger("scte35Pid", m_scte35Pid);

  }

  if(m_scte35SourceHasBeenSet)
  {
   payload.WithString("scte35Source", M2tsScte35SourceMapper::GetNameForM2tsScte35Source(m_scte35Source));
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

  if(m_timedMetadataPidHasBeenSet)
  {
   payload.WithInteger("timedMetadataPid", m_timedMetadataPid);

  }

  if(m_transportStreamIdHasBeenSet)
  {
   payload.WithInteger("transportStreamId", m_transportStreamId);

  }

  if(m_videoPidHasBeenSet)
  {
   payload.WithInteger("videoPid", m_videoPid);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
