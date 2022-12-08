/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/EndOfMeetingReminder.h>
#include <aws/alexaforbusiness/model/InstantBooking.h>
#include <aws/alexaforbusiness/model/RequireCheckIn.h>
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
namespace AlexaForBusiness
{
namespace Model
{

  /**
   * <p>Meeting room settings of a room profile.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/MeetingRoomConfiguration">AWS
   * API Reference</a></p>
   */
  class MeetingRoomConfiguration
  {
  public:
    AWS_ALEXAFORBUSINESS_API MeetingRoomConfiguration();
    AWS_ALEXAFORBUSINESS_API MeetingRoomConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API MeetingRoomConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether room utilization metrics are enabled or not.</p>
     */
    inline bool GetRoomUtilizationMetricsEnabled() const{ return m_roomUtilizationMetricsEnabled; }

    /**
     * <p>Whether room utilization metrics are enabled or not.</p>
     */
    inline bool RoomUtilizationMetricsEnabledHasBeenSet() const { return m_roomUtilizationMetricsEnabledHasBeenSet; }

    /**
     * <p>Whether room utilization metrics are enabled or not.</p>
     */
    inline void SetRoomUtilizationMetricsEnabled(bool value) { m_roomUtilizationMetricsEnabledHasBeenSet = true; m_roomUtilizationMetricsEnabled = value; }

    /**
     * <p>Whether room utilization metrics are enabled or not.</p>
     */
    inline MeetingRoomConfiguration& WithRoomUtilizationMetricsEnabled(bool value) { SetRoomUtilizationMetricsEnabled(value); return *this;}


    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline const EndOfMeetingReminder& GetEndOfMeetingReminder() const{ return m_endOfMeetingReminder; }

    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline bool EndOfMeetingReminderHasBeenSet() const { return m_endOfMeetingReminderHasBeenSet; }

    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline void SetEndOfMeetingReminder(const EndOfMeetingReminder& value) { m_endOfMeetingReminderHasBeenSet = true; m_endOfMeetingReminder = value; }

    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline void SetEndOfMeetingReminder(EndOfMeetingReminder&& value) { m_endOfMeetingReminderHasBeenSet = true; m_endOfMeetingReminder = std::move(value); }

    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline MeetingRoomConfiguration& WithEndOfMeetingReminder(const EndOfMeetingReminder& value) { SetEndOfMeetingReminder(value); return *this;}

    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline MeetingRoomConfiguration& WithEndOfMeetingReminder(EndOfMeetingReminder&& value) { SetEndOfMeetingReminder(std::move(value)); return *this;}


    /**
     * <p>Settings to automatically book the room if available for a configured
     * duration when joining a meeting with Alexa. </p>
     */
    inline const InstantBooking& GetInstantBooking() const{ return m_instantBooking; }

    /**
     * <p>Settings to automatically book the room if available for a configured
     * duration when joining a meeting with Alexa. </p>
     */
    inline bool InstantBookingHasBeenSet() const { return m_instantBookingHasBeenSet; }

    /**
     * <p>Settings to automatically book the room if available for a configured
     * duration when joining a meeting with Alexa. </p>
     */
    inline void SetInstantBooking(const InstantBooking& value) { m_instantBookingHasBeenSet = true; m_instantBooking = value; }

    /**
     * <p>Settings to automatically book the room if available for a configured
     * duration when joining a meeting with Alexa. </p>
     */
    inline void SetInstantBooking(InstantBooking&& value) { m_instantBookingHasBeenSet = true; m_instantBooking = std::move(value); }

    /**
     * <p>Settings to automatically book the room if available for a configured
     * duration when joining a meeting with Alexa. </p>
     */
    inline MeetingRoomConfiguration& WithInstantBooking(const InstantBooking& value) { SetInstantBooking(value); return *this;}

    /**
     * <p>Settings to automatically book the room if available for a configured
     * duration when joining a meeting with Alexa. </p>
     */
    inline MeetingRoomConfiguration& WithInstantBooking(InstantBooking&& value) { SetInstantBooking(std::move(value)); return *this;}


    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into. This makes the room available for
     * others. Users can check in by joining the meeting with Alexa or an AVS device,
     * or by saying “Alexa, check in.” </p>
     */
    inline const RequireCheckIn& GetRequireCheckIn() const{ return m_requireCheckIn; }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into. This makes the room available for
     * others. Users can check in by joining the meeting with Alexa or an AVS device,
     * or by saying “Alexa, check in.” </p>
     */
    inline bool RequireCheckInHasBeenSet() const { return m_requireCheckInHasBeenSet; }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into. This makes the room available for
     * others. Users can check in by joining the meeting with Alexa or an AVS device,
     * or by saying “Alexa, check in.” </p>
     */
    inline void SetRequireCheckIn(const RequireCheckIn& value) { m_requireCheckInHasBeenSet = true; m_requireCheckIn = value; }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into. This makes the room available for
     * others. Users can check in by joining the meeting with Alexa or an AVS device,
     * or by saying “Alexa, check in.” </p>
     */
    inline void SetRequireCheckIn(RequireCheckIn&& value) { m_requireCheckInHasBeenSet = true; m_requireCheckIn = std::move(value); }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into. This makes the room available for
     * others. Users can check in by joining the meeting with Alexa or an AVS device,
     * or by saying “Alexa, check in.” </p>
     */
    inline MeetingRoomConfiguration& WithRequireCheckIn(const RequireCheckIn& value) { SetRequireCheckIn(value); return *this;}

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into. This makes the room available for
     * others. Users can check in by joining the meeting with Alexa or an AVS device,
     * or by saying “Alexa, check in.” </p>
     */
    inline MeetingRoomConfiguration& WithRequireCheckIn(RequireCheckIn&& value) { SetRequireCheckIn(std::move(value)); return *this;}

  private:

    bool m_roomUtilizationMetricsEnabled;
    bool m_roomUtilizationMetricsEnabledHasBeenSet = false;

    EndOfMeetingReminder m_endOfMeetingReminder;
    bool m_endOfMeetingReminderHasBeenSet = false;

    InstantBooking m_instantBooking;
    bool m_instantBookingHasBeenSet = false;

    RequireCheckIn m_requireCheckIn;
    bool m_requireCheckInHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
