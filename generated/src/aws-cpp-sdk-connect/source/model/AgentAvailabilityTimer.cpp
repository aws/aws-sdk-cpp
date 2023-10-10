/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentAvailabilityTimer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace AgentAvailabilityTimerMapper
      {

        static const int TIME_SINCE_LAST_ACTIVITY_HASH = HashingUtils::HashString("TIME_SINCE_LAST_ACTIVITY");
        static const int TIME_SINCE_LAST_INBOUND_HASH = HashingUtils::HashString("TIME_SINCE_LAST_INBOUND");


        AgentAvailabilityTimer GetAgentAvailabilityTimerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TIME_SINCE_LAST_ACTIVITY_HASH)
          {
            return AgentAvailabilityTimer::TIME_SINCE_LAST_ACTIVITY;
          }
          else if (hashCode == TIME_SINCE_LAST_INBOUND_HASH)
          {
            return AgentAvailabilityTimer::TIME_SINCE_LAST_INBOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentAvailabilityTimer>(hashCode);
          }

          return AgentAvailabilityTimer::NOT_SET;
        }

        Aws::String GetNameForAgentAvailabilityTimer(AgentAvailabilityTimer enumValue)
        {
          switch(enumValue)
          {
          case AgentAvailabilityTimer::NOT_SET:
            return {};
          case AgentAvailabilityTimer::TIME_SINCE_LAST_ACTIVITY:
            return "TIME_SINCE_LAST_ACTIVITY";
          case AgentAvailabilityTimer::TIME_SINCE_LAST_INBOUND:
            return "TIME_SINCE_LAST_INBOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentAvailabilityTimerMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
