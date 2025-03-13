/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/Meeting.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime-sdk-meetings/model/Attendee.h>
#include <aws/chime-sdk-meetings/model/CreateAttendeeError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ChimeSDKMeetings
{
namespace Model
{
  class CreateMeetingWithAttendeesResult
  {
  public:
    AWS_CHIMESDKMEETINGS_API CreateMeetingWithAttendeesResult() = default;
    AWS_CHIMESDKMEETINGS_API CreateMeetingWithAttendeesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEETINGS_API CreateMeetingWithAttendeesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline const Meeting& GetMeeting() const { return m_meeting; }
    template<typename MeetingT = Meeting>
    void SetMeeting(MeetingT&& value) { m_meetingHasBeenSet = true; m_meeting = std::forward<MeetingT>(value); }
    template<typename MeetingT = Meeting>
    CreateMeetingWithAttendeesResult& WithMeeting(MeetingT&& value) { SetMeeting(std::forward<MeetingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline const Aws::Vector<Attendee>& GetAttendees() const { return m_attendees; }
    template<typename AttendeesT = Aws::Vector<Attendee>>
    void SetAttendees(AttendeesT&& value) { m_attendeesHasBeenSet = true; m_attendees = std::forward<AttendeesT>(value); }
    template<typename AttendeesT = Aws::Vector<Attendee>>
    CreateMeetingWithAttendeesResult& WithAttendees(AttendeesT&& value) { SetAttendees(std::forward<AttendeesT>(value)); return *this;}
    template<typename AttendeesT = Attendee>
    CreateMeetingWithAttendeesResult& AddAttendees(AttendeesT&& value) { m_attendeesHasBeenSet = true; m_attendees.emplace_back(std::forward<AttendeesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline const Aws::Vector<CreateAttendeeError>& GetErrors() const { return m_errors; }
    template<typename ErrorsT = Aws::Vector<CreateAttendeeError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<CreateAttendeeError>>
    CreateMeetingWithAttendeesResult& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = CreateAttendeeError>
    CreateMeetingWithAttendeesResult& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateMeetingWithAttendeesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Meeting m_meeting;
    bool m_meetingHasBeenSet = false;

    Aws::Vector<Attendee> m_attendees;
    bool m_attendeesHasBeenSet = false;

    Aws::Vector<CreateAttendeeError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
