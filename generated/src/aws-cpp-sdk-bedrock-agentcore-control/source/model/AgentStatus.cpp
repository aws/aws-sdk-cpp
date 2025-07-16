/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentStatus.h>
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
      namespace AgentStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        AgentStatus GetAgentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AgentStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AgentStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AgentStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return AgentStatus::UPDATE_FAILED;
          }
          else if (hashCode == READY_HASH)
          {
            return AgentStatus::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AgentStatus::DELETING;
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
          case AgentStatus::CREATING:
            return "CREATING";
          case AgentStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case AgentStatus::UPDATING:
            return "UPDATING";
          case AgentStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case AgentStatus::READY:
            return "READY";
          case AgentStatus::DELETING:
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

      } // namespace AgentStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
