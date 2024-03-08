/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgent
  {
    namespace Model
    {
      namespace AgentStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int PREPARING_HASH = HashingUtils::HashString("PREPARING");
        static const int PREPARED_HASH = HashingUtils::HashString("PREPARED");
        static const int NOT_PREPARED_HASH = HashingUtils::HashString("NOT_PREPARED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int VERSIONING_HASH = HashingUtils::HashString("VERSIONING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        AgentStatus GetAgentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AgentStatus::CREATING;
          }
          else if (hashCode == PREPARING_HASH)
          {
            return AgentStatus::PREPARING;
          }
          else if (hashCode == PREPARED_HASH)
          {
            return AgentStatus::PREPARED;
          }
          else if (hashCode == NOT_PREPARED_HASH)
          {
            return AgentStatus::NOT_PREPARED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AgentStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AgentStatus::FAILED;
          }
          else if (hashCode == VERSIONING_HASH)
          {
            return AgentStatus::VERSIONING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AgentStatus::UPDATING;
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
          case AgentStatus::PREPARING:
            return "PREPARING";
          case AgentStatus::PREPARED:
            return "PREPARED";
          case AgentStatus::NOT_PREPARED:
            return "NOT_PREPARED";
          case AgentStatus::DELETING:
            return "DELETING";
          case AgentStatus::FAILED:
            return "FAILED";
          case AgentStatus::VERSIONING:
            return "VERSIONING";
          case AgentStatus::UPDATING:
            return "UPDATING";
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
  } // namespace BedrockAgent
} // namespace Aws
