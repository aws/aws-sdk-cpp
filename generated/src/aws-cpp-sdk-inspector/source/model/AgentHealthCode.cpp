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

        static constexpr uint32_t IDLE_HASH = ConstExprHashingUtils::HashString("IDLE");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t SHUTDOWN_HASH = ConstExprHashingUtils::HashString("SHUTDOWN");
        static constexpr uint32_t UNHEALTHY_HASH = ConstExprHashingUtils::HashString("UNHEALTHY");
        static constexpr uint32_t THROTTLED_HASH = ConstExprHashingUtils::HashString("THROTTLED");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");


        AgentHealthCode GetAgentHealthCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case AgentHealthCode::NOT_SET:
            return {};
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
