/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/GridConfiguration.h>
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

GridConfiguration::GridConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

GridConfiguration& GridConfiguration::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("videoAspectRatio"))
  {
    m_videoAspectRatio = VideoAspectRatioMapper::GetVideoAspectRatioForName(jsonValue.GetString("videoAspectRatio"));
    m_videoAspectRatioHasBeenSet = true;
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
  if(jsonValue.ValueExists("participantOrderAttribute"))
  {
    m_participantOrderAttribute = jsonValue.GetString("participantOrderAttribute");
    m_participantOrderAttributeHasBeenSet = true;
  }
  return *this;
}

JsonValue GridConfiguration::Jsonize() const
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

  if(m_videoAspectRatioHasBeenSet)
  {
   payload.WithString("videoAspectRatio", VideoAspectRatioMapper::GetNameForVideoAspectRatio(m_videoAspectRatio));
  }

  if(m_videoFillModeHasBeenSet)
  {
   payload.WithString("videoFillMode", VideoFillModeMapper::GetNameForVideoFillMode(m_videoFillMode));
  }

  if(m_gridGapHasBeenSet)
  {
   payload.WithInteger("gridGap", m_gridGap);

  }

  if(m_participantOrderAttributeHasBeenSet)
  {
   payload.WithString("participantOrderAttribute", m_participantOrderAttribute);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
