/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
#include <aws/connectparticipant/model/Attendee.h>
#include <aws/connectparticipant/model/WebRTCMeeting.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>Creates the participant’s WebRTC connection data required for the client
   * application (mobile or web) to connect to the call.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/WebRTCConnection">AWS
   * API Reference</a></p>
   */
  class WebRTCConnection
  {
  public:
    AWS_CONNECTPARTICIPANT_API WebRTCConnection() = default;
    AWS_CONNECTPARTICIPANT_API WebRTCConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API WebRTCConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Attendee& GetAttendee() const { return m_attendee; }
    inline bool AttendeeHasBeenSet() const { return m_attendeeHasBeenSet; }
    template<typename AttendeeT = Attendee>
    void SetAttendee(AttendeeT&& value) { m_attendeeHasBeenSet = true; m_attendee = std::forward<AttendeeT>(value); }
    template<typename AttendeeT = Attendee>
    WebRTCConnection& WithAttendee(AttendeeT&& value) { SetAttendee(std::forward<AttendeeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A meeting created using the Amazon Chime SDK.</p>
     */
    inline const WebRTCMeeting& GetMeeting() const { return m_meeting; }
    inline bool MeetingHasBeenSet() const { return m_meetingHasBeenSet; }
    template<typename MeetingT = WebRTCMeeting>
    void SetMeeting(MeetingT&& value) { m_meetingHasBeenSet = true; m_meeting = std::forward<MeetingT>(value); }
    template<typename MeetingT = WebRTCMeeting>
    WebRTCConnection& WithMeeting(MeetingT&& value) { SetMeeting(std::forward<MeetingT>(value)); return *this;}
    ///@}
  private:

    Attendee m_attendee;
    bool m_attendeeHasBeenSet = false;

    WebRTCMeeting m_meeting;
    bool m_meetingHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
