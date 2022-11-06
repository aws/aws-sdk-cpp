/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/HlsManifest.h>
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

HlsManifest::HlsManifest() : 
    m_adMarkers(AdMarkers::NOT_SET),
    m_adMarkersHasBeenSet(false),
    m_idHasBeenSet(false),
    m_includeIframeOnlyStream(false),
    m_includeIframeOnlyStreamHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_playlistType(PlaylistType::NOT_SET),
    m_playlistTypeHasBeenSet(false),
    m_playlistWindowSeconds(0),
    m_playlistWindowSecondsHasBeenSet(false),
    m_programDateTimeIntervalSeconds(0),
    m_programDateTimeIntervalSecondsHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_adTriggersHasBeenSet(false),
    m_adsOnDeliveryRestrictions(AdsOnDeliveryRestrictions::NOT_SET),
    m_adsOnDeliveryRestrictionsHasBeenSet(false)
{
}

HlsManifest::HlsManifest(JsonView jsonValue) : 
    m_adMarkers(AdMarkers::NOT_SET),
    m_adMarkersHasBeenSet(false),
    m_idHasBeenSet(false),
    m_includeIframeOnlyStream(false),
    m_includeIframeOnlyStreamHasBeenSet(false),
    m_manifestNameHasBeenSet(false),
    m_playlistType(PlaylistType::NOT_SET),
    m_playlistTypeHasBeenSet(false),
    m_playlistWindowSeconds(0),
    m_playlistWindowSecondsHasBeenSet(false),
    m_programDateTimeIntervalSeconds(0),
    m_programDateTimeIntervalSecondsHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_adTriggersHasBeenSet(false),
    m_adsOnDeliveryRestrictions(AdsOnDeliveryRestrictions::NOT_SET),
    m_adsOnDeliveryRestrictionsHasBeenSet(false)
{
  *this = jsonValue;
}

HlsManifest& HlsManifest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("adMarkers"))
  {
    m_adMarkers = AdMarkersMapper::GetAdMarkersForName(jsonValue.GetString("adMarkers"));

    m_adMarkersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("includeIframeOnlyStream"))
  {
    m_includeIframeOnlyStream = jsonValue.GetBool("includeIframeOnlyStream");

    m_includeIframeOnlyStreamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("manifestName"))
  {
    m_manifestName = jsonValue.GetString("manifestName");

    m_manifestNameHasBeenSet = true;
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

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

    m_urlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("adTriggers"))
  {
    Aws::Utils::Array<JsonView> adTriggersJsonList = jsonValue.GetArray("adTriggers");
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

  return *this;
}

JsonValue HlsManifest::Jsonize() const
{
  JsonValue payload;

  if(m_adMarkersHasBeenSet)
  {
   payload.WithString("adMarkers", AdMarkersMapper::GetNameForAdMarkers(m_adMarkers));
  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_includeIframeOnlyStreamHasBeenSet)
  {
   payload.WithBool("includeIframeOnlyStream", m_includeIframeOnlyStream);

  }

  if(m_manifestNameHasBeenSet)
  {
   payload.WithString("manifestName", m_manifestName);

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

  if(m_urlHasBeenSet)
  {
   payload.WithString("url", m_url);

  }

  if(m_adTriggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> adTriggersJsonList(m_adTriggers.size());
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

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
