/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/alexaforbusiness/model/CreateEndOfMeetingReminder.h>
#include <aws/alexaforbusiness/model/CreateInstantBooking.h>
#include <aws/alexaforbusiness/model/CreateRequireCheckIn.h>
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
   * <p>Creates meeting room settings of a room profile.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/alexaforbusiness-2017-11-09/CreateMeetingRoomConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateMeetingRoomConfiguration
  {
  public:
    AWS_ALEXAFORBUSINESS_API CreateMeetingRoomConfiguration();
    AWS_ALEXAFORBUSINESS_API CreateMeetingRoomConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ALEXAFORBUSINESS_API CreateMeetingRoomConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline CreateMeetingRoomConfiguration& WithRoomUtilizationMetricsEnabled(bool value) { SetRoomUtilizationMetricsEnabled(value); return *this;}


    
    inline const CreateEndOfMeetingReminder& GetEndOfMeetingReminder() const{ return m_endOfMeetingReminder; }

    
    inline bool EndOfMeetingReminderHasBeenSet() const { return m_endOfMeetingReminderHasBeenSet; }

    
    inline void SetEndOfMeetingReminder(const CreateEndOfMeetingReminder& value) { m_endOfMeetingReminderHasBeenSet = true; m_endOfMeetingReminder = value; }

    
    inline void SetEndOfMeetingReminder(CreateEndOfMeetingReminder&& value) { m_endOfMeetingReminderHasBeenSet = true; m_endOfMeetingReminder = std::move(value); }

    
    inline CreateMeetingRoomConfiguration& WithEndOfMeetingReminder(const CreateEndOfMeetingReminder& value) { SetEndOfMeetingReminder(value); return *this;}

    
    inline CreateMeetingRoomConfiguration& WithEndOfMeetingReminder(CreateEndOfMeetingReminder&& value) { SetEndOfMeetingReminder(std::move(value)); return *this;}


    /**
     * <p>Settings to automatically book a room for a configured duration if it's free
     * when joining a meeting with Alexa.</p>
     */
    inline const CreateInstantBooking& GetInstantBooking() const{ return m_instantBooking; }

    /**
     * <p>Settings to automatically book a room for a configured duration if it's free
     * when joining a meeting with Alexa.</p>
     */
    inline bool InstantBookingHasBeenSet() const { return m_instantBookingHasBeenSet; }

    /**
     * <p>Settings to automatically book a room for a configured duration if it's free
     * when joining a meeting with Alexa.</p>
     */
    inline void SetInstantBooking(const CreateInstantBooking& value) { m_instantBookingHasBeenSet = true; m_instantBooking = value; }

    /**
     * <p>Settings to automatically book a room for a configured duration if it's free
     * when joining a meeting with Alexa.</p>
     */
    inline void SetInstantBooking(CreateInstantBooking&& value) { m_instantBookingHasBeenSet = true; m_instantBooking = std::move(value); }

    /**
     * <p>Settings to automatically book a room for a configured duration if it's free
     * when joining a meeting with Alexa.</p>
     */
    inline CreateMeetingRoomConfiguration& WithInstantBooking(const CreateInstantBooking& value) { SetInstantBooking(value); return *this;}

    /**
     * <p>Settings to automatically book a room for a configured duration if it's free
     * when joining a meeting with Alexa.</p>
     */
    inline CreateMeetingRoomConfiguration& WithInstantBooking(CreateInstantBooking&& value) { SetInstantBooking(std::move(value)); return *this;}


    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.”</p>
     */
    inline const CreateRequireCheckIn& GetRequireCheckIn() const{ return m_requireCheckIn; }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.”</p>
     */
    inline bool RequireCheckInHasBeenSet() const { return m_requireCheckInHasBeenSet; }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.”</p>
     */
    inline void SetRequireCheckIn(const CreateRequireCheckIn& value) { m_requireCheckInHasBeenSet = true; m_requireCheckIn = value; }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.”</p>
     */
    inline void SetRequireCheckIn(CreateRequireCheckIn&& value) { m_requireCheckInHasBeenSet = true; m_requireCheckIn = std::move(value); }

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.”</p>
     */
    inline CreateMeetingRoomConfiguration& WithRequireCheckIn(const CreateRequireCheckIn& value) { SetRequireCheckIn(value); return *this;}

    /**
     * <p>Settings for requiring a check in when a room is reserved. Alexa can cancel a
     * room reservation if it's not checked into to make the room available for others.
     * Users can check in by joining the meeting with Alexa or an AVS device, or by
     * saying “Alexa, check in.”</p>
     */
    inline CreateMeetingRoomConfiguration& WithRequireCheckIn(CreateRequireCheckIn&& value) { SetRequireCheckIn(std::move(value)); return *this;}

  private:

    bool m_roomUtilizationMetricsEnabled;
    bool m_roomUtilizationMetricsEnabledHasBeenSet = false;

    CreateEndOfMeetingReminder m_endOfMeetingReminder;
    bool m_endOfMeetingReminderHasBeenSet = false;

    CreateInstantBooking m_instantBooking;
    bool m_instantBookingHasBeenSet = false;

    CreateRequireCheckIn m_requireCheckIn;
    bool m_requireCheckInHasBeenSet = false;
  };

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
