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
    AWS_CHIMESDKMEETINGS_API BatchCreateAttendeeRequest();

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
    inline const Aws::String& GetMeetingId() const{ return m_meetingId; }
    inline bool MeetingIdHasBeenSet() const { return m_meetingIdHasBeenSet; }
    inline void SetMeetingId(const Aws::String& value) { m_meetingIdHasBeenSet = true; m_meetingId = value; }
    inline void SetMeetingId(Aws::String&& value) { m_meetingIdHasBeenSet = true; m_meetingId = std::move(value); }
    inline void SetMeetingId(const char* value) { m_meetingIdHasBeenSet = true; m_meetingId.assign(value); }
    inline BatchCreateAttendeeRequest& WithMeetingId(const Aws::String& value) { SetMeetingId(value); return *this;}
    inline BatchCreateAttendeeRequest& WithMeetingId(Aws::String&& value) { SetMeetingId(std::move(value)); return *this;}
    inline BatchCreateAttendeeRequest& WithMeetingId(const char* value) { SetMeetingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline const Aws::Vector<CreateAttendeeRequestItem>& GetAttendees() const{ return m_attendees; }
    inline bool AttendeesHasBeenSet() const { return m_attendeesHasBeenSet; }
    inline void SetAttendees(const Aws::Vector<CreateAttendeeRequestItem>& value) { m_attendeesHasBeenSet = true; m_attendees = value; }
    inline void SetAttendees(Aws::Vector<CreateAttendeeRequestItem>&& value) { m_attendeesHasBeenSet = true; m_attendees = std::move(value); }
    inline BatchCreateAttendeeRequest& WithAttendees(const Aws::Vector<CreateAttendeeRequestItem>& value) { SetAttendees(value); return *this;}
    inline BatchCreateAttendeeRequest& WithAttendees(Aws::Vector<CreateAttendeeRequestItem>&& value) { SetAttendees(std::move(value)); return *this;}
    inline BatchCreateAttendeeRequest& AddAttendees(const CreateAttendeeRequestItem& value) { m_attendeesHasBeenSet = true; m_attendees.push_back(value); return *this; }
    inline BatchCreateAttendeeRequest& AddAttendees(CreateAttendeeRequestItem&& value) { m_attendeesHasBeenSet = true; m_attendees.push_back(std::move(value)); return *this; }
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
