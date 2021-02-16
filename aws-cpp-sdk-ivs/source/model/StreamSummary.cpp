﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs/model/StreamSummary.h>
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

StreamSummary::StreamSummary() : 
    m_channelArnHasBeenSet(false),
    m_state(StreamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_health(StreamHealth::NOT_SET),
    m_healthHasBeenSet(false),
    m_viewerCount(0),
    m_viewerCountHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
}

StreamSummary::StreamSummary(JsonView jsonValue) : 
    m_channelArnHasBeenSet(false),
    m_state(StreamState::NOT_SET),
    m_stateHasBeenSet(false),
    m_health(StreamHealth::NOT_SET),
    m_healthHasBeenSet(false),
    m_viewerCount(0),
    m_viewerCountHasBeenSet(false),
    m_startTimeHasBeenSet(false)
{
  *this = jsonValue;
}

StreamSummary& StreamSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("channelArn"))
  {
    m_channelArn = jsonValue.GetString("channelArn");

    m_channelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StreamStateMapper::GetStreamStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("health"))
  {
    m_health = StreamHealthMapper::GetStreamHealthForName(jsonValue.GetString("health"));

    m_healthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("viewerCount"))
  {
    m_viewerCount = jsonValue.GetInt64("viewerCount");

    m_viewerCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamSummary::Jsonize() const
{
  JsonValue payload;

  if(m_channelArnHasBeenSet)
  {
   payload.WithString("channelArn", m_channelArn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", StreamStateMapper::GetNameForStreamState(m_state));
  }

  if(m_healthHasBeenSet)
  {
   payload.WithString("health", StreamHealthMapper::GetNameForStreamHealth(m_health));
  }

  if(m_viewerCountHasBeenSet)
  {
   payload.WithInt64("viewerCount", m_viewerCount);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace IVS
} // namespace Aws
