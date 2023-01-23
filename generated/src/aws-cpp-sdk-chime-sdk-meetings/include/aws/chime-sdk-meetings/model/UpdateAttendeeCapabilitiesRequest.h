/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/AttendeeCapabilities.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   */
  class UpdateAttendeeCapabilitiesRequest : public ChimeSDKMeetingsRequest
  {
  public:
    AWS_CHIMESDKMEETINGS_API UpdateAttendeeCapabilitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAttendeeCapabilities"; }

    AWS_CHIMESDKMEETINGS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline UpdateAttendeeCapabilitiesRequest& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline UpdateAttendeeCapabilitiesRequest& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline UpdateAttendeeCapabilitiesRequest& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}


    /**
     * <p>The ID of the attendee associated with the update request.</p>
     */
    inline const Aws::String& GetAttendeeId() const{ return m_attendeeId; }

    /**
     * <p>The ID of the attendee associated with the update request.</p>
     */
    inline bool AttendeeIdHasBeenSet() const { return m_attendeeIdHasBeenSet; }

    /**
     * <p>The ID of the attendee associated with the update request.</p>
     */
    inline void SetAttendeeId(const Aws::String& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = value; }

    /**
     * <p>The ID of the attendee associated with the update request.</p>
     */
    inline void SetAttendeeId(Aws::String&& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = std::move(value); }

    /**
     * <p>The ID of the attendee associated with the update request.</p>
     */
    inline void SetAttendeeId(const char* value) { m_attendeeIdHasBeenSet = true; m_attendeeId.assign(value); }

    /**
     * <p>The ID of the attendee associated with the update request.</p>
     */
    inline UpdateAttendeeCapabilitiesRequest& WithAttendeeId(const Aws::String& value) { SetAttendeeId(value); return *this;}

    /**
     * <p>The ID of the attendee associated with the update request.</p>
     */
    inline UpdateAttendeeCapabilitiesRequest& WithAttendeeId(Aws::String&& value) { SetAttendeeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the attendee associated with the update request.</p>
     */
    inline UpdateAttendeeCapabilitiesRequest& WithAttendeeId(const char* value) { SetAttendeeId(value); return *this;}


    /**
     * <p>The capabilties that you want to update.</p>
     */
    inline const AttendeeCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The capabilties that you want to update.</p>
     */
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }

    /**
     * <p>The capabilties that you want to update.</p>
     */
    inline void SetCapabilities(const AttendeeCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The capabilties that you want to update.</p>
     */
    inline void SetCapabilities(AttendeeCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The capabilties that you want to update.</p>
     */
    inline UpdateAttendeeCapabilitiesRequest& WithCapabilities(const AttendeeCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The capabilties that you want to update.</p>
     */
    inline UpdateAttendeeCapabilitiesRequest& WithCapabilities(AttendeeCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}

  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;

    Aws::String m_attendeeId;
    bool m_attendeeIdHasBeenSet = false;

    AttendeeCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
