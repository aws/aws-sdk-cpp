/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/EndOfMeetingReminderType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace EndOfMeetingReminderTypeMapper
      {

        static const int ANNOUNCEMENT_TIME_CHECK_HASH = HashingUtils::HashString("ANNOUNCEMENT_TIME_CHECK");
        static const int ANNOUNCEMENT_VARIABLE_TIME_LEFT_HASH = HashingUtils::HashString("ANNOUNCEMENT_VARIABLE_TIME_LEFT");
        static const int CHIME_HASH = HashingUtils::HashString("CHIME");
        static const int KNOCK_HASH = HashingUtils::HashString("KNOCK");


        EndOfMeetingReminderType GetEndOfMeetingReminderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANNOUNCEMENT_TIME_CHECK_HASH)
          {
            return EndOfMeetingReminderType::ANNOUNCEMENT_TIME_CHECK;
          }
          else if (hashCode == ANNOUNCEMENT_VARIABLE_TIME_LEFT_HASH)
          {
            return EndOfMeetingReminderType::ANNOUNCEMENT_VARIABLE_TIME_LEFT;
          }
          else if (hashCode == CHIME_HASH)
          {
            return EndOfMeetingReminderType::CHIME;
          }
          else if (hashCode == KNOCK_HASH)
          {
            return EndOfMeetingReminderType::KNOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndOfMeetingReminderType>(hashCode);
          }

          return EndOfMeetingReminderType::NOT_SET;
        }

        Aws::String GetNameForEndOfMeetingReminderType(EndOfMeetingReminderType enumValue)
        {
          switch(enumValue)
          {
          case EndOfMeetingReminderType::ANNOUNCEMENT_TIME_CHECK:
            return "ANNOUNCEMENT_TIME_CHECK";
          case EndOfMeetingReminderType::ANNOUNCEMENT_VARIABLE_TIME_LEFT:
            return "ANNOUNCEMENT_VARIABLE_TIME_LEFT";
          case EndOfMeetingReminderType::CHIME:
            return "CHIME";
          case EndOfMeetingReminderType::KNOCK:
            return "KNOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndOfMeetingReminderTypeMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
