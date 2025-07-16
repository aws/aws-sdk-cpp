/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MemoryStatus.h>
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
      namespace MemoryStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        MemoryStatus GetMemoryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return MemoryStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return MemoryStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return MemoryStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MemoryStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemoryStatus>(hashCode);
          }

          return MemoryStatus::NOT_SET;
        }

        Aws::String GetNameForMemoryStatus(MemoryStatus enumValue)
        {
          switch(enumValue)
          {
          case MemoryStatus::NOT_SET:
            return {};
          case MemoryStatus::CREATING:
            return "CREATING";
          case MemoryStatus::ACTIVE:
            return "ACTIVE";
          case MemoryStatus::FAILED:
            return "FAILED";
          case MemoryStatus::DELETING:
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

      } // namespace MemoryStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
