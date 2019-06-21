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

#include <aws/mediapackage/model/HlsPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaPackage
{
namespace Model
{

HlsPackage::HlsPackage() : 
    m_adMarkers(AdMarkers::NOT_SET),
    m_adMarkersHasBeenSet(false),
    m_adTriggersHasBeenSet(false),
    m_adsOnDeliveryRestrictions(AdsOnDeliveryRestrictions::NOT_SET),
    m_adsOnDeliveryRestrictionsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_includeIframeOnlyStream(false),
    m_includeIframeOnlyStreamHasBeenSet(false),
    m_playlistType(PlaylistType::NOT_SET),
    m_playlistTypeHasBeenSet(false),
    m_playlistWindowSeconds(0),
    m_playlistWindowSecondsHasBeenSet(false),
    m_programDateTimeIntervalSeconds(0),
    m_programDateTimeIntervalSecondsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_streamSelectionHasBeenSet(false),
    m_useAudioRenditionGroup(false),
    m_useAudioRenditionGroupHasBeenSet(false)
{
}

HlsPackage::HlsPackage(JsonView jsonValue) : 
    m_adMarkers(AdMarkers::NOT_SET),
    m_adMarkersHasBeenSet(false),
    m_adTriggersHasBeenSet(false),
    m_adsOnDeliveryRestrictions(AdsOnDeliveryRestrictions::NOT_SET),
    m_adsOnDeliveryRestrictionsHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_includeIframeOnlyStream(false),
    m_includeIframeOnlyStreamHasBeenSet(false),
    m_playlistType(PlaylistType::NOT_SET),
    m_playlistTypeHasBeenSet(false),
    m_playlistWindowSeconds(0),
    m_playlistWindowSecondsHasBeenSet(false),
    m_programDateTimeIntervalSeconds(0),
    m_programDateTimeIntervalSecondsHasBeenSet(false),
    m_segmentDurationSeconds(0),
    m_segmentDurationSecondsHasBeenSet(false),
    m_streamSelectionHasBeenSet(false),
    m_useAudioRenditionGroup(false),
    m_useAudioRenditionGroupHasBeenSet(false)
{
  *this = jsonValue;
}

HlsPackage& HlsPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adMarkers"))
  {
    m_adMarkers = AdMarkersMapper::GetAdMarkersForName(jsonValue.GetString("adMarkers"));

    m_adMarkersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adTriggers"))
  {
    Array<JsonView> adTriggersJsonList = jsonValue.GetArray("adTriggers");
    for(unsigned adTriggersIndex = 0; adTriggersIndex < adTriggersJsonList.GetLength(); ++adTriggersIndex)
    {
      m_adTriggers.push_back(__AdTriggersElementMapper::Get__AdTriggersElementForName(adTriggersJsonList[adTriggersIndex].AsString()));
    }
    m_adTriggersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adsOnDeliveryRestrictions"))
  {
    m_adsOnDeliveryRestrictions = AdsOnDeliveryRestrictionsMapper::GetAdsOnDeliveryRestrictionsForName(jsonValue.GetString("adsOnDeliveryRestrictions"));

    m_adsOnDeliveryRestrictionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryption"))
  {
    m_encryption = jsonValue.GetObject("encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeIframeOnlyStream"))
  {
    m_includeIframeOnlyStream = jsonValue.GetBool("includeIframeOnlyStream");

    m_includeIframeOnlyStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("playlistType"))
  {
    m_playlistType = PlaylistTypeMapper::GetPlaylistTypeForName(jsonValue.GetString("playlistType"));

    m_playlistTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("playlistWindowSeconds"))
  {
    m_playlistWindowSeconds = jsonValue.GetInteger("playlistWindowSeconds");

    m_playlistWindowSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("programDateTimeIntervalSeconds"))
  {
    m_programDateTimeIntervalSeconds = jsonValue.GetInteger("programDateTimeIntervalSeconds");

    m_programDateTimeIntervalSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("segmentDurationSeconds"))
  {
    m_segmentDurationSeconds = jsonValue.GetInteger("segmentDurationSeconds");

    m_segmentDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamSelection"))
  {
    m_streamSelection = jsonValue.GetObject("streamSelection");

    m_streamSelectionHasBeenSet = true;
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

  if(m_adMarkersHasBeenSet)
  {
   payload.WithString("adMarkers", AdMarkersMapper::GetNameForAdMarkers(m_adMarkers));
  }

  if(m_adTriggersHasBeenSet)
  {
   Array<JsonValue> adTriggersJsonList(m_adTriggers.size());
   for(unsigned adTriggersIndex = 0; adTriggersIndex < adTriggersJsonList.GetLength(); ++adTriggersIndex)
   {
     adTriggersJsonList[adTriggersIndex].AsString(__AdTriggersElementMapper::GetNameFor__AdTriggersElement(m_adTriggers[adTriggersIndex]));
   }
   payload.WithArray("adTriggers", std::move(adTriggersJsonList));

  }

  if(m_adsOnDeliveryRestrictionsHasBeenSet)
  {
   payload.WithString("adsOnDeliveryRestrictions", AdsOnDeliveryRestrictionsMapper::GetNameForAdsOnDeliveryRestrictions(m_adsOnDeliveryRestrictions));
  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("encryption", m_encryption.Jsonize());

  }

  if(m_includeIframeOnlyStreamHasBeenSet)
  {
   payload.WithBool("includeIframeOnlyStream", m_includeIframeOnlyStream);

  }

  if(m_playlistTypeHasBeenSet)
  {
   payload.WithString("playlistType", PlaylistTypeMapper::GetNameForPlaylistType(m_playlistType));
  }

  if(m_playlistWindowSecondsHasBeenSet)
  {
   payload.WithInteger("playlistWindowSeconds", m_playlistWindowSeconds);

  }

  if(m_programDateTimeIntervalSecondsHasBeenSet)
  {
   payload.WithInteger("programDateTimeIntervalSeconds", m_programDateTimeIntervalSeconds);

  }

  if(m_segmentDurationSecondsHasBeenSet)
  {
   payload.WithInteger("segmentDurationSeconds", m_segmentDurationSeconds);

  }

  if(m_streamSelectionHasBeenSet)
  {
   payload.WithObject("streamSelection", m_streamSelection.Jsonize());

  }

  if(m_useAudioRenditionGroupHasBeenSet)
  {
   payload.WithBool("useAudioRenditionGroup", m_useAudioRenditionGroup);

  }

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
