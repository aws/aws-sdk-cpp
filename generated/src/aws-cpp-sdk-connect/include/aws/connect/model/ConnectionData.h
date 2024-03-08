/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Attendee.h>
#include <aws/connect/model/Meeting.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information required to join the call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ConnectionData">AWS
   * API Reference</a></p>
   */
  class ConnectionData
  {
  public:
    AWS_CONNECT_API ConnectionData();
    AWS_CONNECT_API ConnectionData(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ConnectionData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline const Attendee& GetAttendee() const{ return m_attendee; }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline bool AttendeeHasBeenSet() const { return m_attendeeHasBeenSet; }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline void SetAttendee(const Attendee& value) { m_attendeeHasBeenSet = true; m_attendee = value; }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline void SetAttendee(Attendee&& value) { m_attendeeHasBeenSet = true; m_attendee = std::move(value); }

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline ConnectionData& WithAttendee(const Attendee& value) { SetAttendee(value); return *this;}

    /**
     * <p>The attendee information, including attendee ID and join token.</p>
     */
    inline ConnectionData& WithAttendee(Attendee&& value) { SetAttendee(std::move(value)); return *this;}


    /**
     * <p>A meeting created using the Amazon Chime SDK.</p>
     */
    inline const Meeting& GetMeeting() const{ return m_meeting; }

    /**
     * <p>A meeting created using the Amazon Chime SDK.</p>
     */
    inline bool MeetingHasBeenSet() const { return m_meetingHasBeenSet; }

    /**
     * <p>A meeting created using the Amazon Chime SDK.</p>
     */
    inline void SetMeeting(const Meeting& value) { m_meetingHasBeenSet = true; m_meeting = value; }

    /**
     * <p>A meeting created using the Amazon Chime SDK.</p>
     */
    inline void SetMeeting(Meeting&& value) { m_meetingHasBeenSet = true; m_meeting = std::move(value); }

    /**
     * <p>A meeting created using the Amazon Chime SDK.</p>
     */
    inline ConnectionData& WithMeeting(const Meeting& value) { SetMeeting(value); return *this;}

    /**
     * <p>A meeting created using the Amazon Chime SDK.</p>
     */
    inline ConnectionData& WithMeeting(Meeting&& value) { SetMeeting(std::move(value)); return *this;}

  private:

    Attendee m_attendee;
    bool m_attendeeHasBeenSet = false;

    Meeting m_meeting;
    bool m_meetingHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
