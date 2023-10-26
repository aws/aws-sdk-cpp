/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EventStreamDestinationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace EventStreamDestinationStatusMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");


        EventStreamDestinationStatus GetEventStreamDestinationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return EventStreamDestinationStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return EventStreamDestinationStatus::UNHEALTHY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventStreamDestinationStatus>(hashCode);
          }

          return EventStreamDestinationStatus::NOT_SET;
        }

        Aws::String GetNameForEventStreamDestinationStatus(EventStreamDestinationStatus enumValue)
        {
          switch(enumValue)
          {
          case EventStreamDestinationStatus::NOT_SET:
            return {};
          case EventStreamDestinationStatus::HEALTHY:
            return "HEALTHY";
          case EventStreamDestinationStatus::UNHEALTHY:
            return "UNHEALTHY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventStreamDestinationStatusMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
