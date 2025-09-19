/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentRuntimeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace AgentRuntimeStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        AgentRuntimeStatus GetAgentRuntimeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AgentRuntimeStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AgentRuntimeStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AgentRuntimeStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return AgentRuntimeStatus::UPDATE_FAILED;
          }
          else if (hashCode == READY_HASH)
          {
            return AgentRuntimeStatus::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AgentRuntimeStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentRuntimeStatus>(hashCode);
          }

          return AgentRuntimeStatus::NOT_SET;
        }

        Aws::String GetNameForAgentRuntimeStatus(AgentRuntimeStatus enumValue)
        {
          switch(enumValue)
          {
          case AgentRuntimeStatus::NOT_SET:
            return {};
          case AgentRuntimeStatus::CREATING:
            return "CREATING";
          case AgentRuntimeStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case AgentRuntimeStatus::UPDATING:
            return "UPDATING";
          case AgentRuntimeStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case AgentRuntimeStatus::READY:
            return "READY";
          case AgentRuntimeStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentRuntimeStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
