/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AudioTrackSelection.h>
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

AudioTrackSelection::AudioTrackSelection() : 
    m_tracksHasBeenSet(false)
{
}

AudioTrackSelection::AudioTrackSelection(JsonView jsonValue) : 
    m_tracksHasBeenSet(false)
{
  *this = jsonValue;
}

AudioTrackSelection& AudioTrackSelection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tracks"))
  {
    Array<JsonView> tracksJsonList = jsonValue.GetArray("tracks");
    for(unsigned tracksIndex = 0; tracksIndex < tracksJsonList.GetLength(); ++tracksIndex)
    {
      m_tracks.push_back(tracksJsonList[tracksIndex].AsObject());
    }
    m_tracksHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioTrackSelection::Jsonize() const
{
  JsonValue payload;

  if(m_tracksHasBeenSet)
  {
   Array<JsonValue> tracksJsonList(m_tracks.size());
   for(unsigned tracksIndex = 0; tracksIndex < tracksJsonList.GetLength(); ++tracksIndex)
   {
     tracksJsonList[tracksIndex].AsObject(m_tracks[tracksIndex].Jsonize());
   }
   payload.WithArray("tracks", std::move(tracksJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
