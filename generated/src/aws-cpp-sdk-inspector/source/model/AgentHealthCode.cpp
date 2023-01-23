/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AgentHealthCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector
  {
    namespace Model
    {
      namespace AgentHealthCodeMapper
      {

        static const int IDLE_HASH = HashingUtils::HashString("IDLE");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int SHUTDOWN_HASH = HashingUtils::HashString("SHUTDOWN");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
        static const int THROTTLED_HASH = HashingUtils::HashString("THROTTLED");
        static const int UNKNOWN_HASH = HashingUtils::HashString("UNKNOWN");


        AgentHealthCode GetAgentHealthCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IDLE_HASH)
          {
            return AgentHealthCode::IDLE;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return AgentHealthCode::RUNNING;
          }
          else if (hashCode == SHUTDOWN_HASH)
          {
            return AgentHealthCode::SHUTDOWN;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return AgentHealthCode::UNHEALTHY;
          }
          else if (hashCode == THROTTLED_HASH)
          {
            return AgentHealthCode::THROTTLED;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return AgentHealthCode::UNKNOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentHealthCode>(hashCode);
          }

          return AgentHealthCode::NOT_SET;
        }

        Aws::String GetNameForAgentHealthCode(AgentHealthCode enumValue)
        {
          switch(enumValue)
          {
          case AgentHealthCode::IDLE:
            return "IDLE";
          case AgentHealthCode::RUNNING:
            return "RUNNING";
          case AgentHealthCode::SHUTDOWN:
            return "SHUTDOWN";
          case AgentHealthCode::UNHEALTHY:
            return "UNHEALTHY";
          case AgentHealthCode::THROTTLED:
            return "THROTTLED";
          case AgentHealthCode::UNKNOWN:
            return "UNKNOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentHealthCodeMapper
    } // namespace Model
  } // namespace Inspector
} // namespace Aws
