﻿/**
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
    AWS_CHIMESDKMEETINGS_API CreateMeetingWithAttendeesResult();
    AWS_CHIMESDKMEETINGS_API CreateMeetingWithAttendeesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMEETINGS_API CreateMeetingWithAttendeesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline const Meeting& GetMeeting() const{ return m_meeting; }
    inline void SetMeeting(const Meeting& value) { m_meeting = value; }
    inline void SetMeeting(Meeting&& value) { m_meeting = std::move(value); }
    inline CreateMeetingWithAttendeesResult& WithMeeting(const Meeting& value) { SetMeeting(value); return *this;}
    inline CreateMeetingWithAttendeesResult& WithMeeting(Meeting&& value) { SetMeeting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline const Aws::Vector<Attendee>& GetAttendees() const{ return m_attendees; }
    inline void SetAttendees(const Aws::Vector<Attendee>& value) { m_attendees = value; }
    inline void SetAttendees(Aws::Vector<Attendee>&& value) { m_attendees = std::move(value); }
    inline CreateMeetingWithAttendeesResult& WithAttendees(const Aws::Vector<Attendee>& value) { SetAttendees(value); return *this;}
    inline CreateMeetingWithAttendeesResult& WithAttendees(Aws::Vector<Attendee>&& value) { SetAttendees(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesResult& AddAttendees(const Attendee& value) { m_attendees.push_back(value); return *this; }
    inline CreateMeetingWithAttendeesResult& AddAttendees(Attendee&& value) { m_attendees.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline const Aws::Vector<CreateAttendeeError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<CreateAttendeeError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<CreateAttendeeError>&& value) { m_errors = std::move(value); }
    inline CreateMeetingWithAttendeesResult& WithErrors(const Aws::Vector<CreateAttendeeError>& value) { SetErrors(value); return *this;}
    inline CreateMeetingWithAttendeesResult& WithErrors(Aws::Vector<CreateAttendeeError>&& value) { SetErrors(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesResult& AddErrors(const CreateAttendeeError& value) { m_errors.push_back(value); return *this; }
    inline CreateMeetingWithAttendeesResult& AddErrors(CreateAttendeeError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMeetingWithAttendeesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMeetingWithAttendeesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMeetingWithAttendeesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Meeting m_meeting;

    Aws::Vector<Attendee> m_attendees;

    Aws::Vector<CreateAttendeeError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
