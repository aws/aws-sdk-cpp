/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsGroupSettings.h>
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

HlsGroupSettings::HlsGroupSettings() : 
    m_adMarkersHasBeenSet(false),
    m_additionalManifestsHasBeenSet(false),
    m_audioOnlyHeader(HlsAudioOnlyHeader::NOT_SET),
    m_audioOnlyHeaderHasBeenSet(false),
    m_baseUrlHasBeenSet(false),
    m_captionLanguageMappingsHasBeenSet(false),
    m_captionLanguageSetting(HlsCaptionLanguageSetting::NOT_SET),
    m_captionLanguageSettingHasBeenSet(false),
    m_captionSegmentLengthControl(HlsCaptionSegmentLengthControl::NOT_SET),
    m_captionSegmentLengthControlHasBeenSet(false),
    m_clientCache(HlsClientCache::NOT_SET),
    m_clientCacheHasBeenSet(false),
    m_codecSpecification(HlsCodecSpecification::NOT_SET),
    m_codecSpecificationHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_directoryStructure(HlsDirectoryStructure::NOT_SET),
    m_directoryStructureHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_imageBasedTrickPlay(HlsImageBasedTrickPlay::NOT_SET),
    m_imageBasedTrickPlayHasBeenSet(false),
    m_imageBasedTrickPlaySettingsHasBeenSet(false),
    m_manifestCompression(HlsManifestCompression::NOT_SET),
    m_manifestCompressionHasBeenSet(false),
    m_manifestDurationFormat(HlsManifestDurationFormat::NOT_SET),
    m_manifestDurationFormatHasBeenSet(false),
    m_minFinalSegmentLength(0.0),
    m_minFinalSegmentLengthHasBeenSet(false),
    m_minSegmentLength(0),
    m_minSegmentLengthHasBeenSet(false),
    m_outputSelection(HlsOutputSelection::NOT_SET),
    m_outputSelectionHasBeenSet(false),
    m_programDateTime(HlsProgramDateTime::NOT_SET),
    m_programDateTimeHasBeenSet(false),
    m_programDateTimePeriod(0),
    m_programDateTimePeriodHasBeenSet(false),
    m_segmentControl(HlsSegmentControl::NOT_SET),
    m_segmentControlHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_segmentLengthControl(HlsSegmentLengthControl::NOT_SET),
    m_segmentLengthControlHasBeenSet(false),
    m_segmentsPerSubdirectory(0),
    m_segmentsPerSubdirectoryHasBeenSet(false),
    m_streamInfResolution(HlsStreamInfResolution::NOT_SET),
    m_streamInfResolutionHasBeenSet(false),
    m_targetDurationCompatibilityMode(HlsTargetDurationCompatibilityMode::NOT_SET),
    m_targetDurationCompatibilityModeHasBeenSet(false),
    m_timedMetadataId3Frame(HlsTimedMetadataId3Frame::NOT_SET),
    m_timedMetadataId3FrameHasBeenSet(false),
    m_timedMetadataId3Period(0),
    m_timedMetadataId3PeriodHasBeenSet(false),
    m_timestampDeltaMilliseconds(0),
    m_timestampDeltaMillisecondsHasBeenSet(false)
{
}

HlsGroupSettings::HlsGroupSettings(JsonView jsonValue) : 
    m_adMarkersHasBeenSet(false),
    m_additionalManifestsHasBeenSet(false),
    m_audioOnlyHeader(HlsAudioOnlyHeader::NOT_SET),
    m_audioOnlyHeaderHasBeenSet(false),
    m_baseUrlHasBeenSet(false),
    m_captionLanguageMappingsHasBeenSet(false),
    m_captionLanguageSetting(HlsCaptionLanguageSetting::NOT_SET),
    m_captionLanguageSettingHasBeenSet(false),
    m_captionSegmentLengthControl(HlsCaptionSegmentLengthControl::NOT_SET),
    m_captionSegmentLengthControlHasBeenSet(false),
    m_clientCache(HlsClientCache::NOT_SET),
    m_clientCacheHasBeenSet(false),
    m_codecSpecification(HlsCodecSpecification::NOT_SET),
    m_codecSpecificationHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_directoryStructure(HlsDirectoryStructure::NOT_SET),
    m_directoryStructureHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_imageBasedTrickPlay(HlsImageBasedTrickPlay::NOT_SET),
    m_imageBasedTrickPlayHasBeenSet(false),
    m_imageBasedTrickPlaySettingsHasBeenSet(false),
    m_manifestCompression(HlsManifestCompression::NOT_SET),
    m_manifestCompressionHasBeenSet(false),
    m_manifestDurationFormat(HlsManifestDurationFormat::NOT_SET),
    m_manifestDurationFormatHasBeenSet(false),
    m_minFinalSegmentLength(0.0),
    m_minFinalSegmentLengthHasBeenSet(false),
    m_minSegmentLength(0),
    m_minSegmentLengthHasBeenSet(false),
    m_outputSelection(HlsOutputSelection::NOT_SET),
    m_outputSelectionHasBeenSet(false),
    m_programDateTime(HlsProgramDateTime::NOT_SET),
    m_programDateTimeHasBeenSet(false),
    m_programDateTimePeriod(0),
    m_programDateTimePeriodHasBeenSet(false),
    m_segmentControl(HlsSegmentControl::NOT_SET),
    m_segmentControlHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_segmentLengthControl(HlsSegmentLengthControl::NOT_SET),
    m_segmentLengthControlHasBeenSet(false),
    m_segmentsPerSubdirectory(0),
    m_segmentsPerSubdirectoryHasBeenSet(false),
    m_streamInfResolution(HlsStreamInfResolution::NOT_SET),
    m_streamInfResolutionHasBeenSet(false),
    m_targetDurationCompatibilityMode(HlsTargetDurationCompatibilityMode::NOT_SET),
    m_targetDurationCompatibilityModeHasBeenSet(false),
    m_timedMetadataId3Frame(HlsTimedMetadataId3Frame::NOT_SET),
    m_timedMetadataId3FrameHasBeenSet(false),
    m_timedMetadataId3Period(0),
    m_timedMetadataId3PeriodHasBeenSet(false),
    m_timestampDeltaMilliseconds(0),
    m_timestampDeltaMillisecondsHasBeenSet(false)
{
  *this = jsonValue;
}

HlsGroupSettings& HlsGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adMarkers"))
  {
    Aws::Utils::Array<JsonView> adMarkersJsonList = jsonValue.GetArray("adMarkers");
    for(unsigned adMarkersIndex = 0; adMarkersIndex < adMarkersJsonList.GetLength(); ++adMarkersIndex)
    {
      m_adMarkers.push_back(HlsAdMarkersMapper::GetHlsAdMarkersForName(adMarkersJsonList[adMarkersIndex].AsString()));
    }
    m_adMarkersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("additionalManifests"))
  {
    Aws::Utils::Array<JsonView> additionalManifestsJsonList = jsonValue.GetArray("additionalManifests");
    for(unsigned additionalManifestsIndex = 0; additionalManifestsIndex < additionalManifestsJsonList.GetLength(); ++additionalManifestsIndex)
    {
      m_additionalManifests.push_back(additionalManifestsJsonList[additionalManifestsIndex].AsObject());
    }
    m_additionalManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioOnlyHeader"))
  {
    m_audioOnlyHeader = HlsAudioOnlyHeaderMapper::GetHlsAudioOnlyHeaderForName(jsonValue.GetString("audioOnlyHeader"));

    m_audioOnlyHeaderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("baseUrl"))
  {
    m_baseUrl = jsonValue.GetString("baseUrl");

    m_baseUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionLanguageMappings"))
  {
    Aws::Utils::Array<JsonView> captionLanguageMappingsJsonList = jsonValue.GetArray("captionLanguageMappings");
    for(unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength(); ++captionLanguageMappingsIndex)
    {
      m_captionLanguageMappings.push_back(captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject());
    }
    m_captionLanguageMappingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionLanguageSetting"))
  {
    m_captionLanguageSetting = HlsCaptionLanguageSettingMapper::GetHlsCaptionLanguageSettingForName(jsonValue.GetString("captionLanguageSetting"));

    m_captionLanguageSettingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("captionSegmentLengthControl"))
  {
    m_captionSegmentLengthControl = HlsCaptionSegmentLengthControlMapper::GetHlsCaptionSegmentLengthControlForName(jsonValue.GetString("captionSegmentLengthControl"));

    m_captionSegmentLengthControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientCache"))
  {
    m_clientCache = HlsClientCacheMapper::GetHlsClientCacheForName(jsonValue.GetString("clientCache"));

    m_clientCacheHasBeenSet = true;
  }

  if(jsonValue.ValueExists("codecSpecification"))
  {
    m_codecSpecification = HlsCodecSpecificationMapper::GetHlsCodecSpecificationForName(jsonValue.GetString("codecSpecification"));

    m_codecSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetString("destination");

    m_destinationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("destinationSettings"))
  {
    m_destinationSettings = jsonValue.GetObject("destinationSettings");

    m_destinationSettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("directoryStructure"))
  {
    m_directoryStructure = HlsDirectoryStructureMapper::GetHlsDirectoryStructureForName(jsonValue.GetString("directoryStructure"));

    m_directoryStructureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageBasedTrickPlay"))
  {
    m_imageBasedTrickPlay = HlsImageBasedTrickPlayMapper::GetHlsImageBasedTrickPlayForName(jsonValue.GetString("imageBasedTrickPlay"));

    m_imageBasedTrickPlayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageBasedTrickPlaySettings"))
  {
    m_imageBasedTrickPlaySettings = jsonValue.GetObject("imageBasedTrickPlaySettings");

    m_imageBasedTrickPlaySettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestCompression"))
  {
    m_manifestCompression = HlsManifestCompressionMapper::GetHlsManifestCompressionForName(jsonValue.GetString("manifestCompression"));

    m_manifestCompressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestDurationFormat"))
  {
    m_manifestDurationFormat = HlsManifestDurationFormatMapper::GetHlsManifestDurationFormatForName(jsonValue.GetString("manifestDurationFormat"));

    m_manifestDurationFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minFinalSegmentLength"))
  {
    m_minFinalSegmentLength = jsonValue.GetDouble("minFinalSegmentLength");

    m_minFinalSegmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minSegmentLength"))
  {
    m_minSegmentLength = jsonValue.GetInteger("minSegmentLength");

    m_minSegmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("outputSelection"))
  {
    m_outputSelection = HlsOutputSelectionMapper::GetHlsOutputSelectionForName(jsonValue.GetString("outputSelection"));

    m_outputSelectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programDateTime"))
  {
    m_programDateTime = HlsProgramDateTimeMapper::GetHlsProgramDateTimeForName(jsonValue.GetString("programDateTime"));

    m_programDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programDateTimePeriod"))
  {
    m_programDateTimePeriod = jsonValue.GetInteger("programDateTimePeriod");

    m_programDateTimePeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentControl"))
  {
    m_segmentControl = HlsSegmentControlMapper::GetHlsSegmentControlForName(jsonValue.GetString("segmentControl"));

    m_segmentControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentLength"))
  {
    m_segmentLength = jsonValue.GetInteger("segmentLength");

    m_segmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentLengthControl"))
  {
    m_segmentLengthControl = HlsSegmentLengthControlMapper::GetHlsSegmentLengthControlForName(jsonValue.GetString("segmentLengthControl"));

    m_segmentLengthControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentsPerSubdirectory"))
  {
    m_segmentsPerSubdirectory = jsonValue.GetInteger("segmentsPerSubdirectory");

    m_segmentsPerSubdirectoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamInfResolution"))
  {
    m_streamInfResolution = HlsStreamInfResolutionMapper::GetHlsStreamInfResolutionForName(jsonValue.GetString("streamInfResolution"));

    m_streamInfResolutionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetDurationCompatibilityMode"))
  {
    m_targetDurationCompatibilityMode = HlsTargetDurationCompatibilityModeMapper::GetHlsTargetDurationCompatibilityModeForName(jsonValue.GetString("targetDurationCompatibilityMode"));

    m_targetDurationCompatibilityModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataId3Frame"))
  {
    m_timedMetadataId3Frame = HlsTimedMetadataId3FrameMapper::GetHlsTimedMetadataId3FrameForName(jsonValue.GetString("timedMetadataId3Frame"));

    m_timedMetadataId3FrameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataId3Period"))
  {
    m_timedMetadataId3Period = jsonValue.GetInteger("timedMetadataId3Period");

    m_timedMetadataId3PeriodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestampDeltaMilliseconds"))
  {
    m_timestampDeltaMilliseconds = jsonValue.GetInteger("timestampDeltaMilliseconds");

    m_timestampDeltaMillisecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_adMarkersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adMarkersJsonList(m_adMarkers.size());
   for(unsigned adMarkersIndex = 0; adMarkersIndex < adMarkersJsonList.GetLength(); ++adMarkersIndex)
   {
     adMarkersJsonList[adMarkersIndex].AsString(HlsAdMarkersMapper::GetNameForHlsAdMarkers(m_adMarkers[adMarkersIndex]));
   }
   payload.WithArray("adMarkers", std::move(adMarkersJsonList));

  }

  if(m_additionalManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalManifestsJsonList(m_additionalManifests.size());
   for(unsigned additionalManifestsIndex = 0; additionalManifestsIndex < additionalManifestsJsonList.GetLength(); ++additionalManifestsIndex)
   {
     additionalManifestsJsonList[additionalManifestsIndex].AsObject(m_additionalManifests[additionalManifestsIndex].Jsonize());
   }
   payload.WithArray("additionalManifests", std::move(additionalManifestsJsonList));

  }

  if(m_audioOnlyHeaderHasBeenSet)
  {
   payload.WithString("audioOnlyHeader", HlsAudioOnlyHeaderMapper::GetNameForHlsAudioOnlyHeader(m_audioOnlyHeader));
  }

  if(m_baseUrlHasBeenSet)
  {
   payload.WithString("baseUrl", m_baseUrl);

  }

  if(m_captionLanguageMappingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> captionLanguageMappingsJsonList(m_captionLanguageMappings.size());
   for(unsigned captionLanguageMappingsIndex = 0; captionLanguageMappingsIndex < captionLanguageMappingsJsonList.GetLength(); ++captionLanguageMappingsIndex)
   {
     captionLanguageMappingsJsonList[captionLanguageMappingsIndex].AsObject(m_captionLanguageMappings[captionLanguageMappingsIndex].Jsonize());
   }
   payload.WithArray("captionLanguageMappings", std::move(captionLanguageMappingsJsonList));

  }

  if(m_captionLanguageSettingHasBeenSet)
  {
   payload.WithString("captionLanguageSetting", HlsCaptionLanguageSettingMapper::GetNameForHlsCaptionLanguageSetting(m_captionLanguageSetting));
  }

  if(m_captionSegmentLengthControlHasBeenSet)
  {
   payload.WithString("captionSegmentLengthControl", HlsCaptionSegmentLengthControlMapper::GetNameForHlsCaptionSegmentLengthControl(m_captionSegmentLengthControl));
  }

  if(m_clientCacheHasBeenSet)
  {
   payload.WithString("clientCache", HlsClientCacheMapper::GetNameForHlsClientCache(m_clientCache));
  }

  if(m_codecSpecificationHasBeenSet)
  {
   payload.WithString("codecSpecification", HlsCodecSpecificationMapper::GetNameForHlsCodecSpecification(m_codecSpecification));
  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_destinationSettingsHasBeenSet)
  {
   payload.WithObject("destinationSettings", m_destinationSettings.Jsonize());

  }

  if(m_directoryStructureHasBeenSet)
  {
   payload.WithString("directoryStructure", HlsDirectoryStructureMapper::GetNameForHlsDirectoryStructure(m_directoryStructure));
  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_imageBasedTrickPlayHasBeenSet)
  {
   payload.WithString("imageBasedTrickPlay", HlsImageBasedTrickPlayMapper::GetNameForHlsImageBasedTrickPlay(m_imageBasedTrickPlay));
  }

  if(m_imageBasedTrickPlaySettingsHasBeenSet)
  {
   payload.WithObject("imageBasedTrickPlaySettings", m_imageBasedTrickPlaySettings.Jsonize());

  }

  if(m_manifestCompressionHasBeenSet)
  {
   payload.WithString("manifestCompression", HlsManifestCompressionMapper::GetNameForHlsManifestCompression(m_manifestCompression));
  }

  if(m_manifestDurationFormatHasBeenSet)
  {
   payload.WithString("manifestDurationFormat", HlsManifestDurationFormatMapper::GetNameForHlsManifestDurationFormat(m_manifestDurationFormat));
  }

  if(m_minFinalSegmentLengthHasBeenSet)
  {
   payload.WithDouble("minFinalSegmentLength", m_minFinalSegmentLength);

  }

  if(m_minSegmentLengthHasBeenSet)
  {
   payload.WithInteger("minSegmentLength", m_minSegmentLength);

  }

  if(m_outputSelectionHasBeenSet)
  {
   payload.WithString("outputSelection", HlsOutputSelectionMapper::GetNameForHlsOutputSelection(m_outputSelection));
  }

  if(m_programDateTimeHasBeenSet)
  {
   payload.WithString("programDateTime", HlsProgramDateTimeMapper::GetNameForHlsProgramDateTime(m_programDateTime));
  }

  if(m_programDateTimePeriodHasBeenSet)
  {
   payload.WithInteger("programDateTimePeriod", m_programDateTimePeriod);

  }

  if(m_segmentControlHasBeenSet)
  {
   payload.WithString("segmentControl", HlsSegmentControlMapper::GetNameForHlsSegmentControl(m_segmentControl));
  }

  if(m_segmentLengthHasBeenSet)
  {
   payload.WithInteger("segmentLength", m_segmentLength);

  }

  if(m_segmentLengthControlHasBeenSet)
  {
   payload.WithString("segmentLengthControl", HlsSegmentLengthControlMapper::GetNameForHlsSegmentLengthControl(m_segmentLengthControl));
  }

  if(m_segmentsPerSubdirectoryHasBeenSet)
  {
   payload.WithInteger("segmentsPerSubdirectory", m_segmentsPerSubdirectory);

  }

  if(m_streamInfResolutionHasBeenSet)
  {
   payload.WithString("streamInfResolution", HlsStreamInfResolutionMapper::GetNameForHlsStreamInfResolution(m_streamInfResolution));
  }

  if(m_targetDurationCompatibilityModeHasBeenSet)
  {
   payload.WithString("targetDurationCompatibilityMode", HlsTargetDurationCompatibilityModeMapper::GetNameForHlsTargetDurationCompatibilityMode(m_targetDurationCompatibilityMode));
  }

  if(m_timedMetadataId3FrameHasBeenSet)
  {
   payload.WithString("timedMetadataId3Frame", HlsTimedMetadataId3FrameMapper::GetNameForHlsTimedMetadataId3Frame(m_timedMetadataId3Frame));
  }

  if(m_timedMetadataId3PeriodHasBeenSet)
  {
   payload.WithInteger("timedMetadataId3Period", m_timedMetadataId3Period);

  }

  if(m_timestampDeltaMillisecondsHasBeenSet)
  {
   payload.WithInteger("timestampDeltaMilliseconds", m_timestampDeltaMilliseconds);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
