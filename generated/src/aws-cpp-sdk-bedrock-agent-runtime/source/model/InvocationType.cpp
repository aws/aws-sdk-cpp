/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvocationType.h>
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
      namespace InvocationTypeMapper
      {

        static const int ACTION_GROUP_HASH = HashingUtils::HashString("ACTION_GROUP");
        static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");
        static const int FINISH_HASH = HashingUtils::HashString("FINISH");
        static const int ACTION_GROUP_CODE_INTERPRETER_HASH = HashingUtils::HashString("ACTION_GROUP_CODE_INTERPRETER");
        static const int AGENT_COLLABORATOR_HASH = HashingUtils::HashString("AGENT_COLLABORATOR");


        InvocationType GetInvocationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTION_GROUP_HASH)
          {
            return InvocationType::ACTION_GROUP;
          }
          else if (hashCode == KNOWLEDGE_BASE_HASH)
          {
            return InvocationType::KNOWLEDGE_BASE;
          }
          else if (hashCode == FINISH_HASH)
          {
            return InvocationType::FINISH;
          }
          else if (hashCode == ACTION_GROUP_CODE_INTERPRETER_HASH)
          {
            return InvocationType::ACTION_GROUP_CODE_INTERPRETER;
          }
          else if (hashCode == AGENT_COLLABORATOR_HASH)
          {
            return InvocationType::AGENT_COLLABORATOR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InvocationType>(hashCode);
          }

          return InvocationType::NOT_SET;
        }

        Aws::String GetNameForInvocationType(InvocationType enumValue)
        {
          switch(enumValue)
          {
          case InvocationType::NOT_SET:
            return {};
          case InvocationType::ACTION_GROUP:
            return "ACTION_GROUP";
          case InvocationType::KNOWLEDGE_BASE:
            return "KNOWLEDGE_BASE";
          case InvocationType::FINISH:
            return "FINISH";
          case InvocationType::ACTION_GROUP_CODE_INTERPRETER:
            return "ACTION_GROUP_CODE_INTERPRETER";
          case InvocationType::AGENT_COLLABORATOR:
            return "AGENT_COLLABORATOR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InvocationTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
