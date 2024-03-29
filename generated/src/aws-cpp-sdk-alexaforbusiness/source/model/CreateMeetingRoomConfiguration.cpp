﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/CreateMeetingRoomConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

CreateMeetingRoomConfiguration::CreateMeetingRoomConfiguration() : 
    m_roomUtilizationMetricsEnabled(false),
    m_roomUtilizationMetricsEnabledHasBeenSet(false),
    m_endOfMeetingReminderHasBeenSet(false),
    m_instantBookingHasBeenSet(false),
    m_requireCheckInHasBeenSet(false),
    m_proactiveJoinHasBeenSet(false)
{
}

CreateMeetingRoomConfiguration::CreateMeetingRoomConfiguration(JsonView jsonValue) : 
    m_roomUtilizationMetricsEnabled(false),
    m_roomUtilizationMetricsEnabledHasBeenSet(false),
    m_endOfMeetingReminderHasBeenSet(false),
    m_instantBookingHasBeenSet(false),
    m_requireCheckInHasBeenSet(false),
    m_proactiveJoinHasBeenSet(false)
{
  *this = jsonValue;
}

CreateMeetingRoomConfiguration& CreateMeetingRoomConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RoomUtilizationMetricsEnabled"))
  {
    m_roomUtilizationMetricsEnabled = jsonValue.GetBool("RoomUtilizationMetricsEnabled");

    m_roomUtilizationMetricsEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndOfMeetingReminder"))
  {
    m_endOfMeetingReminder = jsonValue.GetObject("EndOfMeetingReminder");

    m_endOfMeetingReminderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstantBooking"))
  {
    m_instantBooking = jsonValue.GetObject("InstantBooking");

    m_instantBookingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequireCheckIn"))
  {
    m_requireCheckIn = jsonValue.GetObject("RequireCheckIn");

    m_requireCheckInHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProactiveJoin"))
  {
    m_proactiveJoin = jsonValue.GetObject("ProactiveJoin");

    m_proactiveJoinHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateMeetingRoomConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_roomUtilizationMetricsEnabledHasBeenSet)
  {
   payload.WithBool("RoomUtilizationMetricsEnabled", m_roomUtilizationMetricsEnabled);

  }

  if(m_endOfMeetingReminderHasBeenSet)
  {
   payload.WithObject("EndOfMeetingReminder", m_endOfMeetingReminder.Jsonize());

  }

  if(m_instantBookingHasBeenSet)
  {
   payload.WithObject("InstantBooking", m_instantBooking.Jsonize());

  }

  if(m_requireCheckInHasBeenSet)
  {
   payload.WithObject("RequireCheckIn", m_requireCheckIn.Jsonize());

  }

  if(m_proactiveJoinHasBeenSet)
  {
   payload.WithObject("ProactiveJoin", m_proactiveJoin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
