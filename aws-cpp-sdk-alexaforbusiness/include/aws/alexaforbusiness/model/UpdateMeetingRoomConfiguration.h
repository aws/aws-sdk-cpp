/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/UpdateEndOfMeetingReminder.h>
#include <aws/alexaforbusiness/model/UpdateInstantBooking.h>
#include <aws/alexaforbusiness/model/UpdateRequireCheckIn.h>
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
   * <p>Updates meeting room settings of a room profile.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/UpdateMeetingRoomConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateMeetingRoomConfiguration
  {
  public:
    AWS_ALEXAFORBUSINESS_API UpdateMeetingRoomConfiguration();
    AWS_ALEXAFORBUSINESS_API UpdateMeetingRoomConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API UpdateMeetingRoomConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline UpdateMeetingRoomConfiguration& WithRoomUtilizationMetricsEnabled(bool value) { SetRoomUtilizationMetricsEnabled(value); return *this;}


    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline const UpdateEndOfMeetingReminder& GetEndOfMeetingReminder() const{ return m_endOfMeetingReminder; }

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
    inline void SetEndOfMeetingReminder(const UpdateEndOfMeetingReminder& value) { m_endOfMeetingReminderHasBeenSet = true; m_endOfMeetingReminder = value; }

    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline void SetEndOfMeetingReminder(UpdateEndOfMeetingReminder&& value) { m_endOfMeetingReminderHasBeenSet = true; m_endOfMeetingReminder = std::move(value); }

    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline UpdateMeetingRoomConfiguration& WithEndOfMeetingReminder(const UpdateEndOfMeetingReminder& value) { SetEndOfMeetingReminder(value); return *this;}

    /**
     * <p>Settings for the end of meeting reminder feature that are applied to a room
     * profile. The end of meeting reminder enables Alexa to remind users when a
     * meeting is ending. </p>
     */
    inline UpdateMeetingRoomConfiguration& WithEndOfMeetingReminder(UpdateEndOfMeetingReminder&& value) { SetEndOfMeetingReminder(std::move(value)); return *this;}


    /**
     * <p>Settings to automatically book an available room available for a configured
     * duration when joining a meeting with Alexa.</p>
     */
    inline const UpdateInstantBooking& GetInstantBooking() const{ return m_instantBooking; }

    /**
     * <p>Settings to automatically book an available room available for a configured
     * duration when joining a meeting with Alexa.</p>
     */
    inline bool InstantBookingHasBeenSet() const { return m_instantBookingHasBeenSet; }

    /**
     * <p>Settings to automatically book an available room available for a configured
     * duration when joining a meeting with Alexa.</p>
     */
    inline void SetInstantBooking(const UpdateInstantBooking& value) { m_instantBookingHasBeenSet = true; m_instantBooking = value; }

    /**
     * <p>Settings to automatically book an available room available for a configured
     * duration when joining a meeting with Alexa.</p>
     */
    inline void SetInstantBooking(UpdateInstantBooking&& value) { m_instantBookingHasBeenSet = true; m_instantBooking = std::move(value); }

    /**
     * <p>Settings to automatically book an available room available for a configured
     * duration when joining a meeting with Alexa.</p>
     */
    inline UpdateMeetingRoomConfiguration& WithInstantBooking(const UpdateInstantBooking& value) { SetInstantBooking(value); return *this;}

    /**
     * <p>Settings to automatically book an available room available for a configured
     * duration when joining a meeting with Alexa.</p>
     */
    inline UpdateMeetingRoomConfiguration& WithInstantBooking(UpdateInstantBooking&& value) { SetInstantBooking(std::move(value)); return *this;}


    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.” </p>
     */
    inline const UpdateRequireCheckIn& GetRequireCheckIn() const{ return m_requireCheckIn; }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.” </p>
     */
    inline bool RequireCheckInHasBeenSet() const { return m_requireCheckInHasBeenSet; }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.” </p>
     */
    inline void SetRequireCheckIn(const UpdateRequireCheckIn& value) { m_requireCheckInHasBeenSet = true; m_requireCheckIn = value; }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.” </p>
     */
    inline void SetRequireCheckIn(UpdateRequireCheckIn&& value) { m_requireCheckInHasBeenSet = true; m_requireCheckIn = std::move(value); }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.” </p>
     */
    inline UpdateMeetingRoomConfiguration& WithRequireCheckIn(const UpdateRequireCheckIn& value) { SetRequireCheckIn(value); return *this;}

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.” </p>
     */
    inline UpdateMeetingRoomConfiguration& WithRequireCheckIn(UpdateRequireCheckIn&& value) { SetRequireCheckIn(std::move(value)); return *this;}

  private:

    bool m_roomUtilizationMetricsEnabled;
    bool m_roomUtilizationMetricsEnabledHasBeenSet = false;

    UpdateEndOfMeetingReminder m_endOfMeetingReminder;
    bool m_endOfMeetingReminderHasBeenSet = false;

    UpdateInstantBooking m_instantBooking;
    bool m_instantBookingHasBeenSet = false;

    UpdateRequireCheckIn m_requireCheckIn;
    bool m_requireCheckInHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
