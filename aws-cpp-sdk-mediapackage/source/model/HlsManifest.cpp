﻿/*
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
    m_urlHasBeenSet(false)
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
    m_urlHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
