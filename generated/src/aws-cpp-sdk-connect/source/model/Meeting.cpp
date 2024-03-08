/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/Meeting.h>
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

Meeting::Meeting() : 
    m_mediaRegionHasBeenSet(false),
    m_mediaPlacementHasBeenSet(false),
    m_meetingFeaturesHasBeenSet(false),
    m_meetingIdHasBeenSet(false)
{
}

Meeting::Meeting(JsonView jsonValue) : 
    m_mediaRegionHasBeenSet(false),
    m_mediaPlacementHasBeenSet(false),
    m_meetingFeaturesHasBeenSet(false),
    m_meetingIdHasBeenSet(false)
{
  *this = jsonValue;
}

Meeting& Meeting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MediaRegion"))
  {
    m_mediaRegion = jsonValue.GetString("MediaRegion");

    m_mediaRegionHasBeenSet = true;
  }

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

JsonValue Meeting::Jsonize() const
{
  JsonValue payload;

  if(m_mediaRegionHasBeenSet)
  {
   payload.WithString("MediaRegion", m_mediaRegion);

  }

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
} // namespace Connect
} // namespace Aws
