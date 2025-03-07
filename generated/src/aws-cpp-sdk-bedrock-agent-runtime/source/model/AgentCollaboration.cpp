/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgentCollaboration.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentRuntime
  {
    namespace Model
    {
      namespace AgentCollaborationMapper
      {

        static const int SUPERVISOR_HASH = HashingUtils::HashString("SUPERVISOR");
        static const int SUPERVISOR_ROUTER_HASH = HashingUtils::HashString("SUPERVISOR_ROUTER");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AgentCollaboration GetAgentCollaborationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUPERVISOR_HASH)
          {
            return AgentCollaboration::SUPERVISOR;
          }
          else if (hashCode == SUPERVISOR_ROUTER_HASH)
          {
            return AgentCollaboration::SUPERVISOR_ROUTER;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AgentCollaboration::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentCollaboration>(hashCode);
          }

          return AgentCollaboration::NOT_SET;
        }

        Aws::String GetNameForAgentCollaboration(AgentCollaboration enumValue)
        {
          switch(enumValue)
          {
          case AgentCollaboration::NOT_SET:
            return {};
          case AgentCollaboration::SUPERVISOR:
            return "SUPERVISOR";
          case AgentCollaboration::SUPERVISOR_ROUTER:
            return "SUPERVISOR_ROUTER";
          case AgentCollaboration::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgentCollaborationMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
