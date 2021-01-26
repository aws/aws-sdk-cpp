/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsSettings.h>
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

HlsSettings::HlsSettings() : 
    m_audioGroupIdHasBeenSet(false),
    m_audioOnlyContainer(HlsAudioOnlyContainer::NOT_SET),
    m_audioOnlyContainerHasBeenSet(false),
    m_audioRenditionSetsHasBeenSet(false),
    m_audioTrackType(HlsAudioTrackType::NOT_SET),
    m_audioTrackTypeHasBeenSet(false),
    m_iFrameOnlyManifest(HlsIFrameOnlyManifest::NOT_SET),
    m_iFrameOnlyManifestHasBeenSet(false),
    m_segmentModifierHasBeenSet(false)
{
}

HlsSettings::HlsSettings(JsonView jsonValue) : 
    m_audioGroupIdHasBeenSet(false),
    m_audioOnlyContainer(HlsAudioOnlyContainer::NOT_SET),
    m_audioOnlyContainerHasBeenSet(false),
    m_audioRenditionSetsHasBeenSet(false),
    m_audioTrackType(HlsAudioTrackType::NOT_SET),
    m_audioTrackTypeHasBeenSet(false),
    m_iFrameOnlyManifest(HlsIFrameOnlyManifest::NOT_SET),
    m_iFrameOnlyManifestHasBeenSet(false),
    m_segmentModifierHasBeenSet(false)
{
  *this = jsonValue;
}

HlsSettings& HlsSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("audioGroupId"))
  {
    m_audioGroupId = jsonValue.GetString("audioGroupId");

    m_audioGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioOnlyContainer"))
  {
    m_audioOnlyContainer = HlsAudioOnlyContainerMapper::GetHlsAudioOnlyContainerForName(jsonValue.GetString("audioOnlyContainer"));

    m_audioOnlyContainerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioRenditionSets"))
  {
    m_audioRenditionSets = jsonValue.GetString("audioRenditionSets");

    m_audioRenditionSetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("audioTrackType"))
  {
    m_audioTrackType = HlsAudioTrackTypeMapper::GetHlsAudioTrackTypeForName(jsonValue.GetString("audioTrackType"));

    m_audioTrackTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iFrameOnlyManifest"))
  {
    m_iFrameOnlyManifest = HlsIFrameOnlyManifestMapper::GetHlsIFrameOnlyManifestForName(jsonValue.GetString("iFrameOnlyManifest"));

    m_iFrameOnlyManifestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentModifier"))
  {
    m_segmentModifier = jsonValue.GetString("segmentModifier");

    m_segmentModifierHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsSettings::Jsonize() const
{
  JsonValue payload;

  if(m_audioGroupIdHasBeenSet)
  {
   payload.WithString("audioGroupId", m_audioGroupId);

  }

  if(m_audioOnlyContainerHasBeenSet)
  {
   payload.WithString("audioOnlyContainer", HlsAudioOnlyContainerMapper::GetNameForHlsAudioOnlyContainer(m_audioOnlyContainer));
  }

  if(m_audioRenditionSetsHasBeenSet)
  {
   payload.WithString("audioRenditionSets", m_audioRenditionSets);

  }

  if(m_audioTrackTypeHasBeenSet)
  {
   payload.WithString("audioTrackType", HlsAudioTrackTypeMapper::GetNameForHlsAudioTrackType(m_audioTrackType));
  }

  if(m_iFrameOnlyManifestHasBeenSet)
  {
   payload.WithString("iFrameOnlyManifest", HlsIFrameOnlyManifestMapper::GetNameForHlsIFrameOnlyManifest(m_iFrameOnlyManifest));
  }

  if(m_segmentModifierHasBeenSet)
  {
   payload.WithString("segmentModifier", m_segmentModifier);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
