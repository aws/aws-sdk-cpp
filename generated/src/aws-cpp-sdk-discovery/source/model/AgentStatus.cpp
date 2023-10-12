/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/AgentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace AgentStatusMapper
      {

        static constexpr uint32_t HEALTHY_HASH = ConstExprHashingUtils::HashString("HEALTHY");
        static constexpr uint32_t UNHEALTHY_HASH = ConstExprHashingUtils::HashString("UNHEALTHY");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t UNKNOWN_HASH = ConstExprHashingUtils::HashString("UNKNOWN");
        static constexpr uint32_t BLACKLISTED_HASH = ConstExprHashingUtils::HashString("BLACKLISTED");
        static constexpr uint32_t SHUTDOWN_HASH = ConstExprHashingUtils::HashString("SHUTDOWN");


        AgentStatus GetAgentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return AgentStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return AgentStatus::UNHEALTHY;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return AgentStatus::RUNNING;
          }
          else if (hashCode == UNKNOWN_HASH)
          {
            return AgentStatus::UNKNOWN;
          }
          else if (hashCode == BLACKLISTED_HASH)
          {
            return AgentStatus::BLACKLISTED;
          }
          else if (hashCode == SHUTDOWN_HASH)
          {
            return AgentStatus::SHUTDOWN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentStatus>(hashCode);
          }

          return AgentStatus::NOT_SET;
        }

        Aws::String GetNameForAgentStatus(AgentStatus enumValue)
        {
          switch(enumValue)
          {
          case AgentStatus::NOT_SET:
            return {};
          case AgentStatus::HEALTHY:
            return "HEALTHY";
          case AgentStatus::UNHEALTHY:
            return "UNHEALTHY";
          case AgentStatus::RUNNING:
            return "RUNNING";
          case AgentStatus::UNKNOWN:
            return "UNKNOWN";
          case AgentStatus::BLACKLISTED:
            return "BLACKLISTED";
          case AgentStatus::SHUTDOWN:
            return "SHUTDOWN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentStatusMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
