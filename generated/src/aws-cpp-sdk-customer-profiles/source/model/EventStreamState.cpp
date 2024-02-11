/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EventStreamState.h>
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
      namespace EventStreamStateMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        EventStreamState GetEventStreamStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return EventStreamState::RUNNING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return EventStreamState::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventStreamState>(hashCode);
          }

          return EventStreamState::NOT_SET;
        }

        Aws::String GetNameForEventStreamState(EventStreamState enumValue)
        {
          switch(enumValue)
          {
          case EventStreamState::NOT_SET:
            return {};
          case EventStreamState::RUNNING:
            return "RUNNING";
          case EventStreamState::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventStreamStateMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
