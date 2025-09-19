/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentRuntimeEndpointStatus.h>
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
      namespace AgentRuntimeEndpointStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        AgentRuntimeEndpointStatus GetAgentRuntimeEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AgentRuntimeEndpointStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AgentRuntimeEndpointStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AgentRuntimeEndpointStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return AgentRuntimeEndpointStatus::UPDATE_FAILED;
          }
          else if (hashCode == READY_HASH)
          {
            return AgentRuntimeEndpointStatus::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AgentRuntimeEndpointStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentRuntimeEndpointStatus>(hashCode);
          }

          return AgentRuntimeEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForAgentRuntimeEndpointStatus(AgentRuntimeEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case AgentRuntimeEndpointStatus::NOT_SET:
            return {};
          case AgentRuntimeEndpointStatus::CREATING:
            return "CREATING";
          case AgentRuntimeEndpointStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case AgentRuntimeEndpointStatus::UPDATING:
            return "UPDATING";
          case AgentRuntimeEndpointStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case AgentRuntimeEndpointStatus::READY:
            return "READY";
          case AgentRuntimeEndpointStatus::DELETING:
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

      } // namespace AgentRuntimeEndpointStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
