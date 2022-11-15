/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage-vod/model/HlsPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackageVod
{
namespace Model
{

HlsPackage::HlsPackage() : 
    m_encryptionHasBeenSet(false),
    m_hlsManifestsHasBeenSet(false),
    m_includeDvbSubtitles(false),
    m_includeDvbSubtitlesHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_useAudioRenditionGroup(false),
    m_useAudioRenditionGroupHasBeenSet(false)
{
}

HlsPackage::HlsPackage(JsonView jsonValue) : 
    m_encryptionHasBeenSet(false),
    m_hlsManifestsHasBeenSet(false),
    m_includeDvbSubtitles(false),
    m_includeDvbSubtitlesHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_useAudioRenditionGroup(false),
    m_useAudioRenditionGroupHasBeenSet(false)
{
  *this = jsonValue;
}

HlsPackage& HlsPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hlsManifests"))
  {
    Aws::Utils::Array<JsonView> hlsManifestsJsonList = jsonValue.GetArray("hlsManifests");
    for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
    {
      m_hlsManifests.push_back(hlsManifestsJsonList[hlsManifestsIndex].AsObject());
    }
    m_hlsManifestsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeDvbSubtitles"))
  {
    m_includeDvbSubtitles = jsonValue.GetBool("includeDvbSubtitles");

    m_includeDvbSubtitlesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("segmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useAudioRenditionGroup"))
  {
    m_useAudioRenditionGroup = jsonValue.GetBool("useAudioRenditionGroup");

    m_useAudioRenditionGroupHasBeenSet = true;
  }

  return *this;
}

JsonValue HlsPackage::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_hlsManifestsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hlsManifestsJsonList(m_hlsManifests.size());
   for(unsigned hlsManifestsIndex = 0; hlsManifestsIndex < hlsManifestsJsonList.GetLength(); ++hlsManifestsIndex)
   {
     hlsManifestsJsonList[hlsManifestsIndex].AsObject(m_hlsManifests[hlsManifestsIndex].Jsonize());
   }
   payload.WithArray("hlsManifests", std::move(hlsManifestsJsonList));

  }

  if(m_includeDvbSubtitlesHasBeenSet)
  {
   payload.WithBool("includeDvbSubtitles", m_includeDvbSubtitles);

  }

  if(m_segmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("segmentDurationSeconds", m_segmentDurationSeconds);

  }

  if(m_useAudioRenditionGroupHasBeenSet)
  {
   payload.WithBool("useAudioRenditionGroup", m_useAudioRenditionGroup);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
