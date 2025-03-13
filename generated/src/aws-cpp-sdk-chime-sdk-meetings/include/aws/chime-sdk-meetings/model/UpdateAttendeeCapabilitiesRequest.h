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
    AWS_CHIMESDKMEETINGS_API UpdateAttendeeCapabilitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAttendeeCapabilities"; }

    AWS_CHIMESDKMEETINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the meeting associated with the update request.</p>
     */
    inline const Aws::String& GetMeetingId() const { return m_meetingId; }
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }
    template<typename MeetingIdT = Aws::String>
    void SetMeetingId(MeetingIdT&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::forward<MeetingIdT>(value); }
    template<typename MeetingIdT = Aws::String>
    UpdateAttendeeCapabilitiesRequest& WithMeetingId(MeetingIdT&& value) { SetMeetingId(std::forward<MeetingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the attendee associated with the update request.</p>
     */
    inline const Aws::String& GetAttendeeId() const { return m_attendeeId; }
    inline bool AttendeeIdHasBeenSet() const { return m_attendeeIdHasBeenSet; }
    template<typename AttendeeIdT = Aws::String>
    void SetAttendeeId(AttendeeIdT&& value) { m_attendeeIdHasBeenSet = true; m_attendeeId = std::forward<AttendeeIdT>(value); }
    template<typename AttendeeIdT = Aws::String>
    UpdateAttendeeCapabilitiesRequest& WithAttendeeId(AttendeeIdT&& value) { SetAttendeeId(std::forward<AttendeeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities that you want to update.</p>
     */
    inline const AttendeeCapabilities& GetCapabilities() const { return m_capabilities; }
    inline bool CapabilitiesHasBeenSet() const { return m_capabilitiesHasBeenSet; }
    template<typename CapabilitiesT = AttendeeCapabilities>
    void SetCapabilities(CapabilitiesT&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::forward<CapabilitiesT>(value); }
    template<typename CapabilitiesT = AttendeeCapabilities>
    UpdateAttendeeCapabilitiesRequest& WithCapabilities(CapabilitiesT&& value) { SetCapabilities(std::forward<CapabilitiesT>(value)); return *this;}
    ///@}
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
