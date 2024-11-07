/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PromptTemplateType.h>
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
      namespace PromptTemplateTypeMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int CHAT_HASH = HashingUtils::HashString("CHAT");


        PromptTemplateType GetPromptTemplateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return PromptTemplateType::TEXT;
          }
          else if (hashCode == CHAT_HASH)
          {
            return PromptTemplateType::CHAT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PromptTemplateType>(hashCode);
          }

          return PromptTemplateType::NOT_SET;
        }

        Aws::String GetNameForPromptTemplateType(PromptTemplateType enumValue)
        {
          switch(enumValue)
          {
          case PromptTemplateType::NOT_SET:
            return {};
          case PromptTemplateType::TEXT:
            return "TEXT";
          case PromptTemplateType::CHAT:
            return "CHAT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PromptTemplateTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
