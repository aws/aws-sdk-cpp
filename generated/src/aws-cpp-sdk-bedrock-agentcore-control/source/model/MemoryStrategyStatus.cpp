/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MemoryStrategyStatus.h>
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
      namespace MemoryStrategyStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        MemoryStrategyStatus GetMemoryStrategyStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return MemoryStrategyStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return MemoryStrategyStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MemoryStrategyStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MemoryStrategyStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemoryStrategyStatus>(hashCode);
          }

          return MemoryStrategyStatus::NOT_SET;
        }

        Aws::String GetNameForMemoryStrategyStatus(MemoryStrategyStatus enumValue)
        {
          switch(enumValue)
          {
          case MemoryStrategyStatus::NOT_SET:
            return {};
          case MemoryStrategyStatus::CREATING:
            return "CREATING";
          case MemoryStrategyStatus::ACTIVE:
            return "ACTIVE";
          case MemoryStrategyStatus::DELETING:
            return "DELETING";
          case MemoryStrategyStatus::FAILED:
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

      } // namespace MemoryStrategyStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
