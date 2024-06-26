﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/PipConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

PipConfiguration::PipConfiguration() : 
    m_featuredParticipantAttributeHasBeenSet(false),
    m_omitStoppedVideo(false),
    m_omitStoppedVideoHasBeenSet(false),
    m_videoFillMode(VideoFillMode::NOT_SET),
    m_videoFillModeHasBeenSet(false),
    m_gridGap(0),
    m_gridGapHasBeenSet(false),
    m_pipParticipantAttributeHasBeenSet(false),
    m_pipBehavior(PipBehavior::NOT_SET),
    m_pipBehaviorHasBeenSet(false),
    m_pipOffset(0),
    m_pipOffsetHasBeenSet(false),
    m_pipPosition(PipPosition::NOT_SET),
    m_pipPositionHasBeenSet(false),
    m_pipWidth(0),
    m_pipWidthHasBeenSet(false),
    m_pipHeight(0),
    m_pipHeightHasBeenSet(false)
{
}

PipConfiguration::PipConfiguration(JsonView jsonValue)
  : PipConfiguration()
{
  *this = jsonValue;
}

PipConfiguration& PipConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("featuredParticipantAttribute"))
  {
    m_featuredParticipantAttribute = jsonValue.GetString("featuredParticipantAttribute");

    m_featuredParticipantAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("omitStoppedVideo"))
  {
    m_omitStoppedVideo = jsonValue.GetBool("omitStoppedVideo");

    m_omitStoppedVideoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoFillMode"))
  {
    m_videoFillMode = VideoFillModeMapper::GetVideoFillModeForName(jsonValue.GetString("videoFillMode"));

    m_videoFillModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gridGap"))
  {
    m_gridGap = jsonValue.GetInteger("gridGap");

    m_gridGapHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipParticipantAttribute"))
  {
    m_pipParticipantAttribute = jsonValue.GetString("pipParticipantAttribute");

    m_pipParticipantAttributeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipBehavior"))
  {
    m_pipBehavior = PipBehaviorMapper::GetPipBehaviorForName(jsonValue.GetString("pipBehavior"));

    m_pipBehaviorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipOffset"))
  {
    m_pipOffset = jsonValue.GetInteger("pipOffset");

    m_pipOffsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipPosition"))
  {
    m_pipPosition = PipPositionMapper::GetPipPositionForName(jsonValue.GetString("pipPosition"));

    m_pipPositionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipWidth"))
  {
    m_pipWidth = jsonValue.GetInteger("pipWidth");

    m_pipWidthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pipHeight"))
  {
    m_pipHeight = jsonValue.GetInteger("pipHeight");

    m_pipHeightHasBeenSet = true;
  }

  return *this;
}

JsonValue PipConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_featuredParticipantAttributeHasBeenSet)
  {
   payload.WithString("featuredParticipantAttribute", m_featuredParticipantAttribute);

  }

  if(m_omitStoppedVideoHasBeenSet)
  {
   payload.WithBool("omitStoppedVideo", m_omitStoppedVideo);

  }

  if(m_videoFillModeHasBeenSet)
  {
   payload.WithString("videoFillMode", VideoFillModeMapper::GetNameForVideoFillMode(m_videoFillMode));
  }

  if(m_gridGapHasBeenSet)
  {
   payload.WithInteger("gridGap", m_gridGap);

  }

  if(m_pipParticipantAttributeHasBeenSet)
  {
   payload.WithString("pipParticipantAttribute", m_pipParticipantAttribute);

  }

  if(m_pipBehaviorHasBeenSet)
  {
   payload.WithString("pipBehavior", PipBehaviorMapper::GetNameForPipBehavior(m_pipBehavior));
  }

  if(m_pipOffsetHasBeenSet)
  {
   payload.WithInteger("pipOffset", m_pipOffset);

  }

  if(m_pipPositionHasBeenSet)
  {
   payload.WithString("pipPosition", PipPositionMapper::GetNameForPipPosition(m_pipPosition));
  }

  if(m_pipWidthHasBeenSet)
  {
   payload.WithInteger("pipWidth", m_pipWidth);

  }

  if(m_pipHeightHasBeenSet)
  {
   payload.WithInteger("pipHeight", m_pipHeight);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
