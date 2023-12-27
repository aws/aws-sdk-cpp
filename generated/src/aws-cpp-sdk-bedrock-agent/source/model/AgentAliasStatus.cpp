/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentAliasStatus.h>
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
      namespace AgentAliasStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int PREPARED_HASH = HashingUtils::HashString("PREPARED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        AgentAliasStatus GetAgentAliasStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AgentAliasStatus::CREATING;
          }
          else if (hashCode == PREPARED_HASH)
          {
            return AgentAliasStatus::PREPARED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AgentAliasStatus::FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AgentAliasStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AgentAliasStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgentAliasStatus>(hashCode);
          }

          return AgentAliasStatus::NOT_SET;
        }

        Aws::String GetNameForAgentAliasStatus(AgentAliasStatus enumValue)
        {
          switch(enumValue)
          {
          case AgentAliasStatus::NOT_SET:
            return {};
          case AgentAliasStatus::CREATING:
            return "CREATING";
          case AgentAliasStatus::PREPARED:
            return "PREPARED";
          case AgentAliasStatus::FAILED:
            return "FAILED";
          case AgentAliasStatus::UPDATING:
            return "UPDATING";
          case AgentAliasStatus::DELETING:
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

      } // namespace AgentAliasStatusMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
