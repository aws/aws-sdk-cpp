/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/WebRTCMeeting.h>
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

WebRTCMeeting::WebRTCMeeting(JsonView jsonValue)
{
  *this = jsonValue;
}

WebRTCMeeting& WebRTCMeeting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaPlacement"))
  {
    m_mediaPlacement = jsonValue.GetObject("MediaPlacement");
    m_mediaPlacementHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MeetingFeatures"))
  {
    m_meetingFeatures = jsonValue.GetObject("MeetingFeatures");
    m_meetingFeaturesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MeetingId"))
  {
    m_meetingId = jsonValue.GetString("MeetingId");
    m_meetingIdHasBeenSet = true;
  }
  return *this;
}

JsonValue WebRTCMeeting::Jsonize() const
{
  JsonValue payload;

  if(m_mediaPlacementHasBeenSet)
  {
   payload.WithObject("MediaPlacement", m_mediaPlacement.Jsonize());

  }

  if(m_meetingFeaturesHasBeenSet)
  {
   payload.WithObject("MeetingFeatures", m_meetingFeatures.Jsonize());

  }

  if(m_meetingIdHasBeenSet)
  {
   payload.WithString("MeetingId", m_meetingId);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
