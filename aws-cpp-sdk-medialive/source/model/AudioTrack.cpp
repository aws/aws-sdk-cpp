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

#include <aws/medialive/model/AudioTrack.h>
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

AudioTrack::AudioTrack() : 
    m_track(0),
    m_trackHasBeenSet(false)
{
}

AudioTrack::AudioTrack(JsonView jsonValue) : 
    m_track(0),
    m_trackHasBeenSet(false)
{
  *this = jsonValue;
}

AudioTrack& AudioTrack::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("track"))
  {
    m_track = jsonValue.GetInteger("track");

    m_trackHasBeenSet = true;
  }

  return *this;
}

JsonValue AudioTrack::Jsonize() const
{
  JsonValue payload;

  if(m_trackHasBeenSet)
  {
   payload.WithInteger("track", m_track);

  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
