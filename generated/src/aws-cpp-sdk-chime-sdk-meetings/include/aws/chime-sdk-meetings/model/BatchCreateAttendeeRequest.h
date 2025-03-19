/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/ChimeSDKMeetingsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeRequestItem.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKMeetings
{
namespace Model
{

  /**
   */
  class BatchCreateAttendeeRequest : public ChimeSDKMeetingsRequest
  {
  public:
    AWS_CHIMESDKMEETINGS_API BatchCreateAttendeeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateAttendee"; }

    AWS_CHIMESDKMEETINGS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime SDK ID of the meeting to which you're adding attendees.</p>
     */
    inline const Aws::String& GetMeetingId() const { return m_meetingId; }
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }
    template<typename MeetingIdT = Aws::String>
    void SetMeetingId(MeetingIdT&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::forward<MeetingIdT>(value); }
    template<typename MeetingIdT = Aws::String>
    BatchCreateAttendeeRequest& WithMeetingId(MeetingIdT&& value) { SetMeetingId(std::forward<MeetingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline const Aws::Vector<CreateAttendeeRequestItem>& GetAttendees() const { return m_attendees; }
    inline bool AttendeesHasBeenSet() const { return m_attendeesHasBeenSet; }
    template<typename AttendeesT = Aws::Vector<CreateAttendeeRequestItem>>
    void SetAttendees(AttendeesT&& value) { m_attendeesHasBeenSet = true; m_attendees = std::forward<AttendeesT>(value); }
    template<typename AttendeesT = Aws::Vector<CreateAttendeeRequestItem>>
    BatchCreateAttendeeRequest& WithAttendees(AttendeesT&& value) { SetAttendees(std::forward<AttendeesT>(value)); return *this;}
    template<typename AttendeesT = CreateAttendeeRequestItem>
    BatchCreateAttendeeRequest& AddAttendees(AttendeesT&& value) { m_attendeesHasBeenSet = true; m_attendees.emplace_back(std::forward<AttendeesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_meetingId;
    bool m_meetingIdHasBeenSet = false;

    Aws::Vector<CreateAttendeeRequestItem> m_attendees;
    bool m_attendeesHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
