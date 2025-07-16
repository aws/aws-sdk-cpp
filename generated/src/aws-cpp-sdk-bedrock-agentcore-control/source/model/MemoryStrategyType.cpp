/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MemoryStrategyType.h>
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
      namespace MemoryStrategyTypeMapper
      {

        static const int SEMANTIC_HASH = HashingUtils::HashString("SEMANTIC");
        static const int SUMMARIZATION_HASH = HashingUtils::HashString("SUMMARIZATION");
        static const int USER_PREFERENCE_HASH = HashingUtils::HashString("USER_PREFERENCE");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        MemoryStrategyType GetMemoryStrategyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEMANTIC_HASH)
          {
            return MemoryStrategyType::SEMANTIC;
          }
          else if (hashCode == SUMMARIZATION_HASH)
          {
            return MemoryStrategyType::SUMMARIZATION;
          }
          else if (hashCode == USER_PREFERENCE_HASH)
          {
            return MemoryStrategyType::USER_PREFERENCE;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return MemoryStrategyType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemoryStrategyType>(hashCode);
          }

          return MemoryStrategyType::NOT_SET;
        }

        Aws::String GetNameForMemoryStrategyType(MemoryStrategyType enumValue)
        {
          switch(enumValue)
          {
          case MemoryStrategyType::NOT_SET:
            return {};
          case MemoryStrategyType::SEMANTIC:
            return "SEMANTIC";
          case MemoryStrategyType::SUMMARIZATION:
            return "SUMMARIZATION";
          case MemoryStrategyType::USER_PREFERENCE:
            return "USER_PREFERENCE";
          case MemoryStrategyType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemoryStrategyTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCoreControl
} // namespace Aws
