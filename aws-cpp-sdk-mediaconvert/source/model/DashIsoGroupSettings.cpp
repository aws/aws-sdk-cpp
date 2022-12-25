/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoGroupSettings.h>
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

DashIsoGroupSettings::DashIsoGroupSettings() : 
    m_additionalManifestsHasBeenSet(false),
    m_audioChannelConfigSchemeIdUri(DashIsoGroupAudioChannelConfigSchemeIdUri::NOT_SET),
    m_audioChannelConfigSchemeIdUriHasBeenSet(false),
    m_baseUrlHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_hbbtvCompliance(DashIsoHbbtvCompliance::NOT_SET),
    m_hbbtvComplianceHasBeenSet(false),
    m_imageBasedTrickPlay(DashIsoImageBasedTrickPlay::NOT_SET),
    m_imageBasedTrickPlayHasBeenSet(false),
    m_imageBasedTrickPlaySettingsHasBeenSet(false),
    m_minBufferTime(0),
    m_minBufferTimeHasBeenSet(false),
    m_minFinalSegmentLength(0.0),
    m_minFinalSegmentLengthHasBeenSet(false),
    m_mpdManifestBandwidthType(DashIsoMpdManifestBandwidthType::NOT_SET),
    m_mpdManifestBandwidthTypeHasBeenSet(false),
    m_mpdProfile(DashIsoMpdProfile::NOT_SET),
    m_mpdProfileHasBeenSet(false),
    m_ptsOffsetHandlingForBFrames(DashIsoPtsOffsetHandlingForBFrames::NOT_SET),
    m_ptsOffsetHandlingForBFramesHasBeenSet(false),
    m_segmentControl(DashIsoSegmentControl::NOT_SET),
    m_segmentControlHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_segmentLengthControl(DashIsoSegmentLengthControl::NOT_SET),
    m_segmentLengthControlHasBeenSet(false),
    m_videoCompositionOffsets(DashIsoVideoCompositionOffsets::NOT_SET),
    m_videoCompositionOffsetsHasBeenSet(false),
    m_writeSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation::NOT_SET),
    m_writeSegmentTimelineInRepresentationHasBeenSet(false)
{
}

DashIsoGroupSettings::DashIsoGroupSettings(JsonView jsonValue) : 
    m_additionalManifestsHasBeenSet(false),
    m_audioChannelConfigSchemeIdUri(DashIsoGroupAudioChannelConfigSchemeIdUri::NOT_SET),
    m_audioChannelConfigSchemeIdUriHasBeenSet(false),
    m_baseUrlHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationSettingsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_fragmentLength(0),
    m_fragmentLengthHasBeenSet(false),
    m_hbbtvCompliance(DashIsoHbbtvCompliance::NOT_SET),
    m_hbbtvComplianceHasBeenSet(false),
    m_imageBasedTrickPlay(DashIsoImageBasedTrickPlay::NOT_SET),
    m_imageBasedTrickPlayHasBeenSet(false),
    m_imageBasedTrickPlaySettingsHasBeenSet(false),
    m_minBufferTime(0),
    m_minBufferTimeHasBeenSet(false),
    m_minFinalSegmentLength(0.0),
    m_minFinalSegmentLengthHasBeenSet(false),
    m_mpdManifestBandwidthType(DashIsoMpdManifestBandwidthType::NOT_SET),
    m_mpdManifestBandwidthTypeHasBeenSet(false),
    m_mpdProfile(DashIsoMpdProfile::NOT_SET),
    m_mpdProfileHasBeenSet(false),
    m_ptsOffsetHandlingForBFrames(DashIsoPtsOffsetHandlingForBFrames::NOT_SET),
    m_ptsOffsetHandlingForBFramesHasBeenSet(false),
    m_segmentControl(DashIsoSegmentControl::NOT_SET),
    m_segmentControlHasBeenSet(false),
    m_segmentLength(0),
    m_segmentLengthHasBeenSet(false),
    m_segmentLengthControl(DashIsoSegmentLengthControl::NOT_SET),
    m_segmentLengthControlHasBeenSet(false),
    m_videoCompositionOffsets(DashIsoVideoCompositionOffsets::NOT_SET),
    m_videoCompositionOffsetsHasBeenSet(false),
    m_writeSegmentTimelineInRepresentation(DashIsoWriteSegmentTimelineInRepresentation::NOT_SET),
    m_writeSegmentTimelineInRepresentationHasBeenSet(false)
{
  *this = jsonValue;
}

DashIsoGroupSettings& DashIsoGroupSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("additionalManifests"))
  {
    Aws::Utils::Array<JsonView> additionalManifestsJsonList = jsonValue.GetArray("additionalManifests");
    for(unsigned additionalManifestsIndex = 0; additionalManifestsIndex < additionalManifestsJsonList.GetLength(); ++additionalManifestsIndex)
    {
      m_additionalManifests.push_back(additionalManifestsJsonList[additionalManifestsIndex].AsObject());
    }
    m_additionalManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioChannelConfigSchemeIdUri"))
  {
    m_audioChannelConfigSchemeIdUri = DashIsoGroupAudioChannelConfigSchemeIdUriMapper::GetDashIsoGroupAudioChannelConfigSchemeIdUriForName(jsonValue.GetString("audioChannelConfigSchemeIdUri"));

    m_audioChannelConfigSchemeIdUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("baseUrl"))
  {
    m_baseUrl = jsonValue.GetString("baseUrl");

    m_baseUrlHasBeenSet = true;
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

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fragmentLength"))
  {
    m_fragmentLength = jsonValue.GetInteger("fragmentLength");

    m_fragmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hbbtvCompliance"))
  {
    m_hbbtvCompliance = DashIsoHbbtvComplianceMapper::GetDashIsoHbbtvComplianceForName(jsonValue.GetString("hbbtvCompliance"));

    m_hbbtvComplianceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageBasedTrickPlay"))
  {
    m_imageBasedTrickPlay = DashIsoImageBasedTrickPlayMapper::GetDashIsoImageBasedTrickPlayForName(jsonValue.GetString("imageBasedTrickPlay"));

    m_imageBasedTrickPlayHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageBasedTrickPlaySettings"))
  {
    m_imageBasedTrickPlaySettings = jsonValue.GetObject("imageBasedTrickPlaySettings");

    m_imageBasedTrickPlaySettingsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minBufferTime"))
  {
    m_minBufferTime = jsonValue.GetInteger("minBufferTime");

    m_minBufferTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minFinalSegmentLength"))
  {
    m_minFinalSegmentLength = jsonValue.GetDouble("minFinalSegmentLength");

    m_minFinalSegmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mpdManifestBandwidthType"))
  {
    m_mpdManifestBandwidthType = DashIsoMpdManifestBandwidthTypeMapper::GetDashIsoMpdManifestBandwidthTypeForName(jsonValue.GetString("mpdManifestBandwidthType"));

    m_mpdManifestBandwidthTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mpdProfile"))
  {
    m_mpdProfile = DashIsoMpdProfileMapper::GetDashIsoMpdProfileForName(jsonValue.GetString("mpdProfile"));

    m_mpdProfileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ptsOffsetHandlingForBFrames"))
  {
    m_ptsOffsetHandlingForBFrames = DashIsoPtsOffsetHandlingForBFramesMapper::GetDashIsoPtsOffsetHandlingForBFramesForName(jsonValue.GetString("ptsOffsetHandlingForBFrames"));

    m_ptsOffsetHandlingForBFramesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentControl"))
  {
    m_segmentControl = DashIsoSegmentControlMapper::GetDashIsoSegmentControlForName(jsonValue.GetString("segmentControl"));

    m_segmentControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentLength"))
  {
    m_segmentLength = jsonValue.GetInteger("segmentLength");

    m_segmentLengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentLengthControl"))
  {
    m_segmentLengthControl = DashIsoSegmentLengthControlMapper::GetDashIsoSegmentLengthControlForName(jsonValue.GetString("segmentLengthControl"));

    m_segmentLengthControlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoCompositionOffsets"))
  {
    m_videoCompositionOffsets = DashIsoVideoCompositionOffsetsMapper::GetDashIsoVideoCompositionOffsetsForName(jsonValue.GetString("videoCompositionOffsets"));

    m_videoCompositionOffsetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("writeSegmentTimelineInRepresentation"))
  {
    m_writeSegmentTimelineInRepresentation = DashIsoWriteSegmentTimelineInRepresentationMapper::GetDashIsoWriteSegmentTimelineInRepresentationForName(jsonValue.GetString("writeSegmentTimelineInRepresentation"));

    m_writeSegmentTimelineInRepresentationHasBeenSet = true;
  }

  return *this;
}

JsonValue DashIsoGroupSettings::Jsonize() const
{
  JsonValue payload;

  if(m_additionalManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalManifestsJsonList(m_additionalManifests.size());
   for(unsigned additionalManifestsIndex = 0; additionalManifestsIndex < additionalManifestsJsonList.GetLength(); ++additionalManifestsIndex)
   {
     additionalManifestsJsonList[additionalManifestsIndex].AsObject(m_additionalManifests[additionalManifestsIndex].Jsonize());
   }
   payload.WithArray("additionalManifests", std::move(additionalManifestsJsonList));

  }

  if(m_audioChannelConfigSchemeIdUriHasBeenSet)
  {
   payload.WithString("audioChannelConfigSchemeIdUri", DashIsoGroupAudioChannelConfigSchemeIdUriMapper::GetNameForDashIsoGroupAudioChannelConfigSchemeIdUri(m_audioChannelConfigSchemeIdUri));
  }

  if(m_baseUrlHasBeenSet)
  {
   payload.WithString("baseUrl", m_baseUrl);

  }

  if(m_destinationHasBeenSet)
  {
   payload.WithString("destination", m_destination);

  }

  if(m_destinationSettingsHasBeenSet)
  {
   payload.WithObject("destinationSettings", m_destinationSettings.Jsonize());

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_fragmentLengthHasBeenSet)
  {
   payload.WithInteger("fragmentLength", m_fragmentLength);

  }

  if(m_hbbtvComplianceHasBeenSet)
  {
   payload.WithString("hbbtvCompliance", DashIsoHbbtvComplianceMapper::GetNameForDashIsoHbbtvCompliance(m_hbbtvCompliance));
  }

  if(m_imageBasedTrickPlayHasBeenSet)
  {
   payload.WithString("imageBasedTrickPlay", DashIsoImageBasedTrickPlayMapper::GetNameForDashIsoImageBasedTrickPlay(m_imageBasedTrickPlay));
  }

  if(m_imageBasedTrickPlaySettingsHasBeenSet)
  {
   payload.WithObject("imageBasedTrickPlaySettings", m_imageBasedTrickPlaySettings.Jsonize());

  }

  if(m_minBufferTimeHasBeenSet)
  {
   payload.WithInteger("minBufferTime", m_minBufferTime);

  }

  if(m_minFinalSegmentLengthHasBeenSet)
  {
   payload.WithDouble("minFinalSegmentLength", m_minFinalSegmentLength);

  }

  if(m_mpdManifestBandwidthTypeHasBeenSet)
  {
   payload.WithString("mpdManifestBandwidthType", DashIsoMpdManifestBandwidthTypeMapper::GetNameForDashIsoMpdManifestBandwidthType(m_mpdManifestBandwidthType));
  }

  if(m_mpdProfileHasBeenSet)
  {
   payload.WithString("mpdProfile", DashIsoMpdProfileMapper::GetNameForDashIsoMpdProfile(m_mpdProfile));
  }

  if(m_ptsOffsetHandlingForBFramesHasBeenSet)
  {
   payload.WithString("ptsOffsetHandlingForBFrames", DashIsoPtsOffsetHandlingForBFramesMapper::GetNameForDashIsoPtsOffsetHandlingForBFrames(m_ptsOffsetHandlingForBFrames));
  }

  if(m_segmentControlHasBeenSet)
  {
   payload.WithString("segmentControl", DashIsoSegmentControlMapper::GetNameForDashIsoSegmentControl(m_segmentControl));
  }

  if(m_segmentLengthHasBeenSet)
  {
   payload.WithInteger("segmentLength", m_segmentLength);

  }

  if(m_segmentLengthControlHasBeenSet)
  {
   payload.WithString("segmentLengthControl", DashIsoSegmentLengthControlMapper::GetNameForDashIsoSegmentLengthControl(m_segmentLengthControl));
  }

  if(m_videoCompositionOffsetsHasBeenSet)
  {
   payload.WithString("videoCompositionOffsets", DashIsoVideoCompositionOffsetsMapper::GetNameForDashIsoVideoCompositionOffsets(m_videoCompositionOffsets));
  }

  if(m_writeSegmentTimelineInRepresentationHasBeenSet)
  {
   payload.WithString("writeSegmentTimelineInRepresentation", DashIsoWriteSegmentTimelineInRepresentationMapper::GetNameForDashIsoWriteSegmentTimelineInRepresentation(m_writeSegmentTimelineInRepresentation));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
