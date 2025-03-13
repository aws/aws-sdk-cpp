/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantCapabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ParticipantCapabilities::ParticipantCapabilities(JsonView jsonValue)
{
  *this = jsonValue;
}

ParticipantCapabilities& ParticipantCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Video"))
  {
    m_video = VideoCapabilityMapper::GetVideoCapabilityForName(jsonValue.GetString("Video"));
    m_videoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScreenShare"))
  {
    m_screenShare = ScreenShareCapabilityMapper::GetScreenShareCapabilityForName(jsonValue.GetString("ScreenShare"));
    m_screenShareHasBeenSet = true;
  }
  return *this;
}

JsonValue ParticipantCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_videoHasBeenSet)
  {
   payload.WithString("Video", VideoCapabilityMapper::GetNameForVideoCapability(m_video));
  }

  if(m_screenShareHasBeenSet)
  {
   payload.WithString("ScreenShare", ScreenShareCapabilityMapper::GetNameForScreenShareCapability(m_screenShare));
  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
