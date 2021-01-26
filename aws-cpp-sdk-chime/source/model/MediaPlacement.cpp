/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/MediaPlacement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

MediaPlacement::MediaPlacement() : 
    m_audioHostUrlHasBeenSet(false),
    m_audioFallbackUrlHasBeenSet(false),
    m_screenDataUrlHasBeenSet(false),
    m_screenSharingUrlHasBeenSet(false),
    m_screenViewingUrlHasBeenSet(false),
    m_signalingUrlHasBeenSet(false),
    m_turnControlUrlHasBeenSet(false)
{
}

MediaPlacement::MediaPlacement(JsonView jsonValue) : 
    m_audioHostUrlHasBeenSet(false),
    m_audioFallbackUrlHasBeenSet(false),
    m_screenDataUrlHasBeenSet(false),
    m_screenSharingUrlHasBeenSet(false),
    m_screenViewingUrlHasBeenSet(false),
    m_signalingUrlHasBeenSet(false),
    m_turnControlUrlHasBeenSet(false)
{
  *this = jsonValue;
}

MediaPlacement& MediaPlacement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AudioHostUrl"))
  {
    m_audioHostUrl = jsonValue.GetString("AudioHostUrl");

    m_audioHostUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AudioFallbackUrl"))
  {
    m_audioFallbackUrl = jsonValue.GetString("AudioFallbackUrl");

    m_audioFallbackUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScreenDataUrl"))
  {
    m_screenDataUrl = jsonValue.GetString("ScreenDataUrl");

    m_screenDataUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScreenSharingUrl"))
  {
    m_screenSharingUrl = jsonValue.GetString("ScreenSharingUrl");

    m_screenSharingUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScreenViewingUrl"))
  {
    m_screenViewingUrl = jsonValue.GetString("ScreenViewingUrl");

    m_screenViewingUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SignalingUrl"))
  {
    m_signalingUrl = jsonValue.GetString("SignalingUrl");

    m_signalingUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TurnControlUrl"))
  {
    m_turnControlUrl = jsonValue.GetString("TurnControlUrl");

    m_turnControlUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue MediaPlacement::Jsonize() const
{
  JsonValue payload;

  if(m_audioHostUrlHasBeenSet)
  {
   payload.WithString("AudioHostUrl", m_audioHostUrl);

  }

  if(m_audioFallbackUrlHasBeenSet)
  {
   payload.WithString("AudioFallbackUrl", m_audioFallbackUrl);

  }

  if(m_screenDataUrlHasBeenSet)
  {
   payload.WithString("ScreenDataUrl", m_screenDataUrl);

  }

  if(m_screenSharingUrlHasBeenSet)
  {
   payload.WithString("ScreenSharingUrl", m_screenSharingUrl);

  }

  if(m_screenViewingUrlHasBeenSet)
  {
   payload.WithString("ScreenViewingUrl", m_screenViewingUrl);

  }

  if(m_signalingUrlHasBeenSet)
  {
   payload.WithString("SignalingUrl", m_signalingUrl);

  }

  if(m_turnControlUrlHasBeenSet)
  {
   payload.WithString("TurnControlUrl", m_turnControlUrl);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
