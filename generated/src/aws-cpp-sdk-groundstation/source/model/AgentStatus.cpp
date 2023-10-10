/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/AgentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GroundStation
  {
    namespace Model
    {
      namespace AgentStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        AgentStatus GetAgentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return AgentStatus::SUCCESS;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AgentStatus::FAILED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AgentStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return AgentStatus::INACTIVE;
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
          case AgentStatus::SUCCESS:
            return "SUCCESS";
          case AgentStatus::FAILED:
            return "FAILED";
          case AgentStatus::ACTIVE:
            return "ACTIVE";
          case AgentStatus::INACTIVE:
            return "INACTIVE";
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
  } // namespace GroundStation
} // namespace Aws
