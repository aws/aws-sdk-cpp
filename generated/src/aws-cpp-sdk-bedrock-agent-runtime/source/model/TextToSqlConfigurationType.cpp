/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/TextToSqlConfigurationType.h>
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
      namespace TextToSqlConfigurationTypeMapper
      {

        static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");


        TextToSqlConfigurationType GetTextToSqlConfigurationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KNOWLEDGE_BASE_HASH)
          {
            return TextToSqlConfigurationType::KNOWLEDGE_BASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TextToSqlConfigurationType>(hashCode);
          }

          return TextToSqlConfigurationType::NOT_SET;
        }

        Aws::String GetNameForTextToSqlConfigurationType(TextToSqlConfigurationType enumValue)
        {
          switch(enumValue)
          {
          case TextToSqlConfigurationType::NOT_SET:
            return {};
          case TextToSqlConfigurationType::KNOWLEDGE_BASE:
            return "KNOWLEDGE_BASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TextToSqlConfigurationTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
