/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PromptType.h>
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
      namespace PromptTypeMapper
      {

        static const int PRE_PROCESSING_HASH = HashingUtils::HashString("PRE_PROCESSING");
        static const int ORCHESTRATION_HASH = HashingUtils::HashString("ORCHESTRATION");
        static const int KNOWLEDGE_BASE_RESPONSE_GENERATION_HASH = HashingUtils::HashString("KNOWLEDGE_BASE_RESPONSE_GENERATION");
        static const int POST_PROCESSING_HASH = HashingUtils::HashString("POST_PROCESSING");


        PromptType GetPromptTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRE_PROCESSING_HASH)
          {
            return PromptType::PRE_PROCESSING;
          }
          else if (hashCode == ORCHESTRATION_HASH)
          {
            return PromptType::ORCHESTRATION;
          }
          else if (hashCode == KNOWLEDGE_BASE_RESPONSE_GENERATION_HASH)
          {
            return PromptType::KNOWLEDGE_BASE_RESPONSE_GENERATION;
          }
          else if (hashCode == POST_PROCESSING_HASH)
          {
            return PromptType::POST_PROCESSING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PromptType>(hashCode);
          }

          return PromptType::NOT_SET;
        }

        Aws::String GetNameForPromptType(PromptType enumValue)
        {
          switch(enumValue)
          {
          case PromptType::NOT_SET:
            return {};
          case PromptType::PRE_PROCESSING:
            return "PRE_PROCESSING";
          case PromptType::ORCHESTRATION:
            return "ORCHESTRATION";
          case PromptType::KNOWLEDGE_BASE_RESPONSE_GENERATION:
            return "KNOWLEDGE_BASE_RESPONSE_GENERATION";
          case PromptType::POST_PROCESSING:
            return "POST_PROCESSING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PromptTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
