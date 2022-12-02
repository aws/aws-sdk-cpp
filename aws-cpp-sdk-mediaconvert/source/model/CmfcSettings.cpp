/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmfcSettings.h>
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

CmfcSettings::CmfcSettings() : 
    m_audioDuration(CmfcAudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_audioGroupIdHasBeenSet(false),
    m_audioRenditionSetsHasBeenSet(false),
    m_audioTrackType(CmfcAudioTrackType::NOT_SET),
    m_audioTrackTypeHasBeenSet(false),
    m_descriptiveVideoServiceFlag(CmfcDescriptiveVideoServiceFlag::NOT_SET),
    m_descriptiveVideoServiceFlagHasBeenSet(false),
    m_iFrameOnlyManifest(CmfcIFrameOnlyManifest::NOT_SET),
    m_iFrameOnlyManifestHasBeenSet(false),
    m_klvMetadata(CmfcKlvMetadata::NOT_SET),
    m_klvMetadataHasBeenSet(false),
    m_manifestMetadataSignaling(CmfcManifestMetadataSignaling::NOT_SET),
    m_manifestMetadataSignalingHasBeenSet(false),
    m_scte35Esam(CmfcScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(CmfcScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false),
    m_timedMetadata(CmfcTimedMetadata::NOT_SET),
    m_timedMetadataHasBeenSet(false),
    m_timedMetadataBoxVersion(CmfcTimedMetadataBoxVersion::NOT_SET),
    m_timedMetadataBoxVersionHasBeenSet(false),
    m_timedMetadataSchemeIdUriHasBeenSet(false),
    m_timedMetadataValueHasBeenSet(false)
{
}

CmfcSettings::CmfcSettings(JsonView jsonValue) : 
    m_audioDuration(CmfcAudioDuration::NOT_SET),
    m_audioDurationHasBeenSet(false),
    m_audioGroupIdHasBeenSet(false),
    m_audioRenditionSetsHasBeenSet(false),
    m_audioTrackType(CmfcAudioTrackType::NOT_SET),
    m_audioTrackTypeHasBeenSet(false),
    m_descriptiveVideoServiceFlag(CmfcDescriptiveVideoServiceFlag::NOT_SET),
    m_descriptiveVideoServiceFlagHasBeenSet(false),
    m_iFrameOnlyManifest(CmfcIFrameOnlyManifest::NOT_SET),
    m_iFrameOnlyManifestHasBeenSet(false),
    m_klvMetadata(CmfcKlvMetadata::NOT_SET),
    m_klvMetadataHasBeenSet(false),
    m_manifestMetadataSignaling(CmfcManifestMetadataSignaling::NOT_SET),
    m_manifestMetadataSignalingHasBeenSet(false),
    m_scte35Esam(CmfcScte35Esam::NOT_SET),
    m_scte35EsamHasBeenSet(false),
    m_scte35Source(CmfcScte35Source::NOT_SET),
    m_scte35SourceHasBeenSet(false),
    m_timedMetadata(CmfcTimedMetadata::NOT_SET),
    m_timedMetadataHasBeenSet(false),
    m_timedMetadataBoxVersion(CmfcTimedMetadataBoxVersion::NOT_SET),
    m_timedMetadataBoxVersionHasBeenSet(false),
    m_timedMetadataSchemeIdUriHasBeenSet(false),
    m_timedMetadataValueHasBeenSet(false)
{
  *this = jsonValue;
}

CmfcSettings& CmfcSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioDuration"))
  {
    m_audioDuration = CmfcAudioDurationMapper::GetCmfcAudioDurationForName(jsonValue.GetString("audioDuration"));

    m_audioDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioGroupId"))
  {
    m_audioGroupId = jsonValue.GetString("audioGroupId");

    m_audioGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioRenditionSets"))
  {
    m_audioRenditionSets = jsonValue.GetString("audioRenditionSets");

    m_audioRenditionSetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioTrackType"))
  {
    m_audioTrackType = CmfcAudioTrackTypeMapper::GetCmfcAudioTrackTypeForName(jsonValue.GetString("audioTrackType"));

    m_audioTrackTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("descriptiveVideoServiceFlag"))
  {
    m_descriptiveVideoServiceFlag = CmfcDescriptiveVideoServiceFlagMapper::GetCmfcDescriptiveVideoServiceFlagForName(jsonValue.GetString("descriptiveVideoServiceFlag"));

    m_descriptiveVideoServiceFlagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iFrameOnlyManifest"))
  {
    m_iFrameOnlyManifest = CmfcIFrameOnlyManifestMapper::GetCmfcIFrameOnlyManifestForName(jsonValue.GetString("iFrameOnlyManifest"));

    m_iFrameOnlyManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("klvMetadata"))
  {
    m_klvMetadata = CmfcKlvMetadataMapper::GetCmfcKlvMetadataForName(jsonValue.GetString("klvMetadata"));

    m_klvMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestMetadataSignaling"))
  {
    m_manifestMetadataSignaling = CmfcManifestMetadataSignalingMapper::GetCmfcManifestMetadataSignalingForName(jsonValue.GetString("manifestMetadataSignaling"));

    m_manifestMetadataSignalingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Esam"))
  {
    m_scte35Esam = CmfcScte35EsamMapper::GetCmfcScte35EsamForName(jsonValue.GetString("scte35Esam"));

    m_scte35EsamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scte35Source"))
  {
    m_scte35Source = CmfcScte35SourceMapper::GetCmfcScte35SourceForName(jsonValue.GetString("scte35Source"));

    m_scte35SourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadata"))
  {
    m_timedMetadata = CmfcTimedMetadataMapper::GetCmfcTimedMetadataForName(jsonValue.GetString("timedMetadata"));

    m_timedMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataBoxVersion"))
  {
    m_timedMetadataBoxVersion = CmfcTimedMetadataBoxVersionMapper::GetCmfcTimedMetadataBoxVersionForName(jsonValue.GetString("timedMetadataBoxVersion"));

    m_timedMetadataBoxVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataSchemeIdUri"))
  {
    m_timedMetadataSchemeIdUri = jsonValue.GetString("timedMetadataSchemeIdUri");

    m_timedMetadataSchemeIdUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timedMetadataValue"))
  {
    m_timedMetadataValue = jsonValue.GetString("timedMetadataValue");

    m_timedMetadataValueHasBeenSet = true;
  }

  return *this;
}

JsonValue CmfcSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioDurationHasBeenSet)
  {
   payload.WithString("audioDuration", CmfcAudioDurationMapper::GetNameForCmfcAudioDuration(m_audioDuration));
  }

  if(m_audioGroupIdHasBeenSet)
  {
   payload.WithString("audioGroupId", m_audioGroupId);

  }

  if(m_audioRenditionSetsHasBeenSet)
  {
   payload.WithString("audioRenditionSets", m_audioRenditionSets);

  }

  if(m_audioTrackTypeHasBeenSet)
  {
   payload.WithString("audioTrackType", CmfcAudioTrackTypeMapper::GetNameForCmfcAudioTrackType(m_audioTrackType));
  }

  if(m_descriptiveVideoServiceFlagHasBeenSet)
  {
   payload.WithString("descriptiveVideoServiceFlag", CmfcDescriptiveVideoServiceFlagMapper::GetNameForCmfcDescriptiveVideoServiceFlag(m_descriptiveVideoServiceFlag));
  }

  if(m_iFrameOnlyManifestHasBeenSet)
  {
   payload.WithString("iFrameOnlyManifest", CmfcIFrameOnlyManifestMapper::GetNameForCmfcIFrameOnlyManifest(m_iFrameOnlyManifest));
  }

  if(m_klvMetadataHasBeenSet)
  {
   payload.WithString("klvMetadata", CmfcKlvMetadataMapper::GetNameForCmfcKlvMetadata(m_klvMetadata));
  }

  if(m_manifestMetadataSignalingHasBeenSet)
  {
   payload.WithString("manifestMetadataSignaling", CmfcManifestMetadataSignalingMapper::GetNameForCmfcManifestMetadataSignaling(m_manifestMetadataSignaling));
  }

  if(m_scte35EsamHasBeenSet)
  {
   payload.WithString("scte35Esam", CmfcScte35EsamMapper::GetNameForCmfcScte35Esam(m_scte35Esam));
  }

  if(m_scte35SourceHasBeenSet)
  {
   payload.WithString("scte35Source", CmfcScte35SourceMapper::GetNameForCmfcScte35Source(m_scte35Source));
  }

  if(m_timedMetadataHasBeenSet)
  {
   payload.WithString("timedMetadata", CmfcTimedMetadataMapper::GetNameForCmfcTimedMetadata(m_timedMetadata));
  }

  if(m_timedMetadataBoxVersionHasBeenSet)
  {
   payload.WithString("timedMetadataBoxVersion", CmfcTimedMetadataBoxVersionMapper::GetNameForCmfcTimedMetadataBoxVersion(m_timedMetadataBoxVersion));
  }

  if(m_timedMetadataSchemeIdUriHasBeenSet)
  {
   payload.WithString("timedMetadataSchemeIdUri", m_timedMetadataSchemeIdUri);

  }

  if(m_timedMetadataValueHasBeenSet)
  {
   payload.WithString("timedMetadataValue", m_timedMetadataValue);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
