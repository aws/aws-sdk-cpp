/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/Meeting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

Meeting::Meeting() : 
    m_meetingIdHasBeenSet(false),
    m_meetingHostIdHasBeenSet(false),
    m_externalMeetingIdHasBeenSet(false),
    m_mediaRegionHasBeenSet(false),
    m_mediaPlacementHasBeenSet(false),
    m_meetingFeaturesHasBeenSet(false),
    m_primaryMeetingIdHasBeenSet(false),
    m_tenantIdsHasBeenSet(false),
    m_meetingArnHasBeenSet(false)
{
}

Meeting::Meeting(JsonView jsonValue) : 
    m_meetingIdHasBeenSet(false),
    m_meetingHostIdHasBeenSet(false),
    m_externalMeetingIdHasBeenSet(false),
    m_mediaRegionHasBeenSet(false),
    m_mediaPlacementHasBeenSet(false),
    m_meetingFeaturesHasBeenSet(false),
    m_primaryMeetingIdHasBeenSet(false),
    m_tenantIdsHasBeenSet(false),
    m_meetingArnHasBeenSet(false)
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

  if(jsonValue.ValueExists("MeetingHostId"))
  {
    m_meetingHostId = jsonValue.GetString("MeetingHostId");

    m_meetingHostIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalMeetingId"))
  {
    m_externalMeetingId = jsonValue.GetString("ExternalMeetingId");

    m_externalMeetingIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("PrimaryMeetingId"))
  {
    m_primaryMeetingId = jsonValue.GetString("PrimaryMeetingId");

    m_primaryMeetingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TenantIds"))
  {
    Aws::Utils::Array<JsonView> tenantIdsJsonList = jsonValue.GetArray("TenantIds");
    for(unsigned tenantIdsIndex = 0; tenantIdsIndex < tenantIdsJsonList.GetLength(); ++tenantIdsIndex)
    {
      m_tenantIds.push_back(tenantIdsJsonList[tenantIdsIndex].AsString());
    }
    m_tenantIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeetingArn"))
  {
    m_meetingArn = jsonValue.GetString("MeetingArn");

    m_meetingArnHasBeenSet = true;
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

  if(m_meetingHostIdHasBeenSet)
  {
   payload.WithString("MeetingHostId", m_meetingHostId);

  }

  if(m_externalMeetingIdHasBeenSet)
  {
   payload.WithString("ExternalMeetingId", m_externalMeetingId);

  }

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

  if(m_primaryMeetingIdHasBeenSet)
  {
   payload.WithString("PrimaryMeetingId", m_primaryMeetingId);

  }

  if(m_tenantIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tenantIdsJsonList(m_tenantIds.size());
   for(unsigned tenantIdsIndex = 0; tenantIdsIndex < tenantIdsJsonList.GetLength(); ++tenantIdsIndex)
   {
     tenantIdsJsonList[tenantIdsIndex].AsString(m_tenantIds[tenantIdsIndex]);
   }
   payload.WithArray("TenantIds", std::move(tenantIdsJsonList));

  }

  if(m_meetingArnHasBeenSet)
  {
   payload.WithString("MeetingArn", m_meetingArn);

  }

  return payload;
}

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
