/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/launch-wizard/model/EventStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LaunchWizard
  {
    namespace Model
    {
      namespace EventStatusMapper
      {

        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");
        static const int CANCELING_HASH = HashingUtils::HashString("CANCELING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int TIMED_OUT_HASH = HashingUtils::HashString("TIMED_OUT");


        EventStatus GetEventStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCELED_HASH)
          {
            return EventStatus::CANCELED;
          }
          else if (hashCode == CANCELING_HASH)
          {
            return EventStatus::CANCELING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return EventStatus::COMPLETED;
          }
          else if (hashCode == CREATED_HASH)
          {
            return EventStatus::CREATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return EventStatus::FAILED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return EventStatus::IN_PROGRESS;
          }
          else if (hashCode == PENDING_HASH)
          {
            return EventStatus::PENDING;
          }
          else if (hashCode == TIMED_OUT_HASH)
          {
            return EventStatus::TIMED_OUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventStatus>(hashCode);
          }

          return EventStatus::NOT_SET;
        }

        Aws::String GetNameForEventStatus(EventStatus enumValue)
        {
          switch(enumValue)
          {
          case EventStatus::NOT_SET:
            return {};
          case EventStatus::CANCELED:
            return "CANCELED";
          case EventStatus::CANCELING:
            return "CANCELING";
          case EventStatus::COMPLETED:
            return "COMPLETED";
          case EventStatus::CREATED:
            return "CREATED";
          case EventStatus::FAILED:
            return "FAILED";
          case EventStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case EventStatus::PENDING:
            return "PENDING";
          case EventStatus::TIMED_OUT:
            return "TIMED_OUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventStatusMapper
    } // namespace Model
  } // namespace LaunchWizard
} // namespace Aws
