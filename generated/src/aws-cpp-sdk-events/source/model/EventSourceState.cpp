﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/EventSourceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvents
  {
    namespace Model
    {
      namespace EventSourceStateMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        EventSourceState GetEventSourceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return EventSourceState::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return EventSourceState::ACTIVE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EventSourceState::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventSourceState>(hashCode);
          }

          return EventSourceState::NOT_SET;
        }

        Aws::String GetNameForEventSourceState(EventSourceState enumValue)
        {
          switch(enumValue)
          {
          case EventSourceState::PENDING:
            return "PENDING";
          case EventSourceState::ACTIVE:
            return "ACTIVE";
          case EventSourceState::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventSourceStateMapper
    } // namespace Model
  } // namespace CloudWatchEvents
} // namespace Aws
