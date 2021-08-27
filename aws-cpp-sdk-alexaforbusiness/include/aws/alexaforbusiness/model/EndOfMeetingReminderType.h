/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/alexaforbusiness/AlexaForBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{
  enum class EndOfMeetingReminderType
  {
    NOT_SET,
    ANNOUNCEMENT_TIME_CHECK,
    ANNOUNCEMENT_VARIABLE_TIME_LEFT,
    CHIME,
    KNOCK
  };

namespace EndOfMeetingReminderTypeMapper
{
AWS_ALEXAFORBUSINESS_API EndOfMeetingReminderType GetEndOfMeetingReminderTypeForName(const Aws::String& name);

AWS_ALEXAFORBUSINESS_API Aws::String GetNameForEndOfMeetingReminderType(EndOfMeetingReminderType value);
} // namespace EndOfMeetingReminderTypeMapper
} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
