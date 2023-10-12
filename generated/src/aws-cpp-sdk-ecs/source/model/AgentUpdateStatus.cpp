/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/AgentUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace AgentUpdateStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t STAGING_HASH = ConstExprHashingUtils::HashString("STAGING");
        static constexpr uint32_t STAGED_HASH = ConstExprHashingUtils::HashString("STAGED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t UPDATED_HASH = ConstExprHashingUtils::HashString("UPDATED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        AgentUpdateStatus GetAgentUpdateStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return AgentUpdateStatus::PENDING;
          }
          else if (hashCode == STAGING_HASH)
          {
            return AgentUpdateStatus::STAGING;
          }
          else if (hashCode == STAGED_HASH)
          {
            return AgentUpdateStatus::STAGED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AgentUpdateStatus::UPDATING;
          }
          else if (hashCode == UPDATED_HASH)
          {
            return AgentUpdateStatus::UPDATED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AgentUpdateStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentUpdateStatus>(hashCode);
          }

          return AgentUpdateStatus::NOT_SET;
        }

        Aws::String GetNameForAgentUpdateStatus(AgentUpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case AgentUpdateStatus::NOT_SET:
            return {};
          case AgentUpdateStatus::PENDING:
            return "PENDING";
          case AgentUpdateStatus::STAGING:
            return "STAGING";
          case AgentUpdateStatus::STAGED:
            return "STAGED";
          case AgentUpdateStatus::UPDATING:
            return "UPDATING";
          case AgentUpdateStatus::UPDATED:
            return "UPDATED";
          case AgentUpdateStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentUpdateStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
