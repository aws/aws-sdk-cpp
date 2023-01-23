/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/Stream.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IVS
{
namespace Model
{

Stream::Stream() : 
    m_channelArnHasBeenSet(false),
    m_health(StreamHealth::NOT_SET),
    m_healthHasBeenSet(false),
    m_playbackUrlHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_state(StreamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_viewerCount(0),
    m_viewerCountHasBeenSet(false)
{
}

Stream::Stream(JsonView jsonValue) : 
    m_channelArnHasBeenSet(false),
    m_health(StreamHealth::NOT_SET),
    m_healthHasBeenSet(false),
    m_playbackUrlHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_state(StreamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_streamIdHasBeenSet(false),
    m_viewerCount(0),
    m_viewerCountHasBeenSet(false)
{
  *this = jsonValue;
}

Stream& Stream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelArn"))
  {
    m_channelArn = jsonValue.GetString("channelArn");

    m_channelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("health"))
  {
    m_health = StreamHealthMapper::GetStreamHealthForName(jsonValue.GetString("health"));

    m_healthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("playbackUrl"))
  {
    m_playbackUrl = jsonValue.GetString("playbackUrl");

    m_playbackUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StreamStateMapper::GetStreamStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("streamId"))
  {
    m_streamId = jsonValue.GetString("streamId");

    m_streamIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("viewerCount"))
  {
    m_viewerCount = jsonValue.GetInt64("viewerCount");

    m_viewerCountHasBeenSet = true;
  }

  return *this;
}

JsonValue Stream::Jsonize() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("channelArn", m_channelArn);

  }

  if(m_healthHasBeenSet)
  {
   payload.WithString("health", StreamHealthMapper::GetNameForStreamHealth(m_health));
  }

  if(m_playbackUrlHasBeenSet)
  {
   payload.WithString("playbackUrl", m_playbackUrl);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StreamStateMapper::GetNameForStreamState(m_state));
  }

  if(m_streamIdHasBeenSet)
  {
   payload.WithString("streamId", m_streamId);

  }

  if(m_viewerCountHasBeenSet)
  {
   payload.WithInt64("viewerCount", m_viewerCount);

  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
