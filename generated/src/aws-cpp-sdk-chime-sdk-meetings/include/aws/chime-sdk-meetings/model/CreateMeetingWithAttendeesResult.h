/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-meetings/ChimeSDKMeetings_EXPORTS.h>
#include <aws/chime-sdk-meetings/model/Meeting.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline const Meeting& GetMeeting() const{ return m_meeting; }

    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline void SetMeeting(const Meeting& value) { m_meeting = value; }

    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline void SetMeeting(Meeting&& value) { m_meeting = std::move(value); }

    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline CreateMeetingWithAttendeesResult& WithMeeting(const Meeting& value) { SetMeeting(value); return *this;}

    /**
     * <p>The meeting information, including the meeting ID and
     * <code>MediaPlacement</code>.</p>
     */
    inline CreateMeetingWithAttendeesResult& WithMeeting(Meeting&& value) { SetMeeting(std::move(value)); return *this;}


    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline const Aws::Vector<Attendee>& GetAttendees() const{ return m_attendees; }

    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline void SetAttendees(const Aws::Vector<Attendee>& value) { m_attendees = value; }

    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline void SetAttendees(Aws::Vector<Attendee>&& value) { m_attendees = std::move(value); }

    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline CreateMeetingWithAttendeesResult& WithAttendees(const Aws::Vector<Attendee>& value) { SetAttendees(value); return *this;}

    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline CreateMeetingWithAttendeesResult& WithAttendees(Aws::Vector<Attendee>&& value) { SetAttendees(std::move(value)); return *this;}

    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline CreateMeetingWithAttendeesResult& AddAttendees(const Attendee& value) { m_attendees.push_back(value); return *this; }

    /**
     * <p>The attendee information, including attendees' IDs and join tokens.</p>
     */
    inline CreateMeetingWithAttendeesResult& AddAttendees(Attendee&& value) { m_attendees.push_back(std::move(value)); return *this; }


    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline const Aws::Vector<CreateAttendeeError>& GetErrors() const{ return m_errors; }

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(const Aws::Vector<CreateAttendeeError>& value) { m_errors = value; }

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline void SetErrors(Aws::Vector<CreateAttendeeError>&& value) { m_errors = std::move(value); }

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline CreateMeetingWithAttendeesResult& WithErrors(const Aws::Vector<CreateAttendeeError>& value) { SetErrors(value); return *this;}

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline CreateMeetingWithAttendeesResult& WithErrors(Aws::Vector<CreateAttendeeError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline CreateMeetingWithAttendeesResult& AddErrors(const CreateAttendeeError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>If the action fails for one or more of the attendees in the request, a list
     * of the attendees is returned, along with error codes and error messages.</p>
     */
    inline CreateMeetingWithAttendeesResult& AddErrors(CreateAttendeeError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Meeting m_meeting;

    Aws::Vector<Attendee> m_attendees;

    Aws::Vector<CreateAttendeeError> m_errors;
  };

} // namespace Model
} // namespace ChimeSDKMeetings
} // namespace Aws
