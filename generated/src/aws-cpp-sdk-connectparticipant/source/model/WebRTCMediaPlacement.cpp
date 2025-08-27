/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/WebRTCMediaPlacement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectParticipant
{
namespace Model
{

WebRTCMediaPlacement::WebRTCMediaPlacement(JsonView jsonValue)
{
  *this = jsonValue;
}

WebRTCMediaPlacement& WebRTCMediaPlacement::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("EventIngestionUrl"))
  {
    m_eventIngestionUrl = jsonValue.GetString("EventIngestionUrl");
    m_eventIngestionUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue WebRTCMediaPlacement::Jsonize() const
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

  if(m_eventIngestionUrlHasBeenSet)
  {
   payload.WithString("EventIngestionUrl", m_eventIngestionUrl);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
