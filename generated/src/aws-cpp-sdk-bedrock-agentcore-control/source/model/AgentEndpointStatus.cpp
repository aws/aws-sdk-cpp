/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/AgentEndpointStatus.h>
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
      namespace AgentEndpointStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        AgentEndpointStatus GetAgentEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AgentEndpointStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return AgentEndpointStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AgentEndpointStatus::UPDATING;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return AgentEndpointStatus::UPDATE_FAILED;
          }
          else if (hashCode == READY_HASH)
          {
            return AgentEndpointStatus::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AgentEndpointStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentEndpointStatus>(hashCode);
          }

          return AgentEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForAgentEndpointStatus(AgentEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case AgentEndpointStatus::NOT_SET:
            return {};
          case AgentEndpointStatus::CREATING:
            return "CREATING";
          case AgentEndpointStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case AgentEndpointStatus::UPDATING:
            return "UPDATING";
          case AgentEndpointStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case AgentEndpointStatus::READY:
            return "READY";
          case AgentEndpointStatus::DELETING:
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

      } // namespace AgentEndpointStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
