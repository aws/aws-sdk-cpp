/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Source.h>
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
      namespace SourceMapper
      {

        static const int ACTION_GROUP_HASH = HashingUtils::HashString("ACTION_GROUP");
        static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");
        static const int PARSER_HASH = HashingUtils::HashString("PARSER");


        Source GetSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTION_GROUP_HASH)
          {
            return Source::ACTION_GROUP;
          }
          else if (hashCode == KNOWLEDGE_BASE_HASH)
          {
            return Source::KNOWLEDGE_BASE;
          }
          else if (hashCode == PARSER_HASH)
          {
            return Source::PARSER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Source>(hashCode);
          }

          return Source::NOT_SET;
        }

        Aws::String GetNameForSource(Source enumValue)
        {
          switch(enumValue)
          {
          case Source::NOT_SET:
            return {};
          case Source::ACTION_GROUP:
            return "ACTION_GROUP";
          case Source::KNOWLEDGE_BASE:
            return "KNOWLEDGE_BASE";
          case Source::PARSER:
            return "PARSER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
