/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/Meeting.h>
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

Meeting::Meeting() : 
    m_meetingIdHasBeenSet(false),
    m_externalMeetingIdHasBeenSet(false),
    m_mediaPlacementHasBeenSet(false),
    m_mediaRegionHasBeenSet(false)
{
}

Meeting::Meeting(JsonView jsonValue) : 
    m_meetingIdHasBeenSet(false),
    m_externalMeetingIdHasBeenSet(false),
    m_mediaPlacementHasBeenSet(false),
    m_mediaRegionHasBeenSet(false)
{
  *this = jsonValue;
}

Meeting& Meeting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MeetingId"))
  {
    m_meetingId = jsonValue.GetString("MeetingId");

    m_meetingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalMeetingId"))
  {
    m_externalMeetingId = jsonValue.GetString("ExternalMeetingId");

    m_externalMeetingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaPlacement"))
  {
    m_mediaPlacement = jsonValue.GetObject("MediaPlacement");

    m_mediaPlacementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediaRegion"))
  {
    m_mediaRegion = jsonValue.GetString("MediaRegion");

    m_mediaRegionHasBeenSet = true;
  }

  return *this;
}

JsonValue Meeting::Jsonize() const
{
  JsonValue payload;

  if(m_meetingIdHasBeenSet)
  {
   payload.WithString("MeetingId", m_meetingId);

  }

  if(m_externalMeetingIdHasBeenSet)
  {
   payload.WithString("ExternalMeetingId", m_externalMeetingId);

  }

  if(m_mediaPlacementHasBeenSet)
  {
   payload.WithObject("MediaPlacement", m_mediaPlacement.Jsonize());

  }

  if(m_mediaRegionHasBeenSet)
  {
   payload.WithString("MediaRegion", m_mediaRegion);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
