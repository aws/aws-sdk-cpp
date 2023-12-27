/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Type.h>
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
      namespace TypeMapper
      {

        static const int ACTION_GROUP_HASH = HashingUtils::HashString("ACTION_GROUP");
        static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");
        static const int FINISH_HASH = HashingUtils::HashString("FINISH");
        static const int ASK_USER_HASH = HashingUtils::HashString("ASK_USER");
        static const int REPROMPT_HASH = HashingUtils::HashString("REPROMPT");


        Type GetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTION_GROUP_HASH)
          {
            return Type::ACTION_GROUP;
          }
          else if (hashCode == KNOWLEDGE_BASE_HASH)
          {
            return Type::KNOWLEDGE_BASE;
          }
          else if (hashCode == FINISH_HASH)
          {
            return Type::FINISH;
          }
          else if (hashCode == ASK_USER_HASH)
          {
            return Type::ASK_USER;
          }
          else if (hashCode == REPROMPT_HASH)
          {
            return Type::REPROMPT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::NOT_SET:
            return {};
          case Type::ACTION_GROUP:
            return "ACTION_GROUP";
          case Type::KNOWLEDGE_BASE:
            return "KNOWLEDGE_BASE";
          case Type::FINISH:
            return "FINISH";
          case Type::ASK_USER:
            return "ASK_USER";
          case Type::REPROMPT:
            return "REPROMPT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
