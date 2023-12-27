/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/MediaPlacement.h>
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

MediaPlacement::MediaPlacement() : 
    m_audioHostUrlHasBeenSet(false),
    m_audioFallbackUrlHasBeenSet(false),
    m_signalingUrlHasBeenSet(false),
    m_turnControlUrlHasBeenSet(false),
    m_eventIngestionUrlHasBeenSet(false)
{
}

MediaPlacement::MediaPlacement(JsonView jsonValue) : 
    m_audioHostUrlHasBeenSet(false),
    m_audioFallbackUrlHasBeenSet(false),
    m_signalingUrlHasBeenSet(false),
    m_turnControlUrlHasBeenSet(false),
    m_eventIngestionUrlHasBeenSet(false)
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

  if(jsonValue.ValueExists("EventIngestionUrl"))
  {
    m_eventIngestionUrl = jsonValue.GetString("EventIngestionUrl");

    m_eventIngestionUrlHasBeenSet = true;
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

  if(m_signalingUrlHasBeenSet)
  {
   payload.WithString("SignalingUrl", m_signalingUrl);

  }

  if(m_turnControlUrlHasBeenSet)
  {
   payload.WithString("TurnControlUrl", m_turnControlUrl);

  }

  if(m_eventIngestionUrlHasBeenSet)
  {
   payload.WithString("EventIngestionUrl", m_eventIngestionUrl);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
