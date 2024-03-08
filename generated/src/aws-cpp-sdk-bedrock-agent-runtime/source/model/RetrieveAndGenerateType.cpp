/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateType.h>
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
      namespace RetrieveAndGenerateTypeMapper
      {

        static const int KNOWLEDGE_BASE_HASH = HashingUtils::HashString("KNOWLEDGE_BASE");


        RetrieveAndGenerateType GetRetrieveAndGenerateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KNOWLEDGE_BASE_HASH)
          {
            return RetrieveAndGenerateType::KNOWLEDGE_BASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrieveAndGenerateType>(hashCode);
          }

          return RetrieveAndGenerateType::NOT_SET;
        }

        Aws::String GetNameForRetrieveAndGenerateType(RetrieveAndGenerateType enumValue)
        {
          switch(enumValue)
          {
          case RetrieveAndGenerateType::NOT_SET:
            return {};
          case RetrieveAndGenerateType::KNOWLEDGE_BASE:
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

      } // namespace RetrieveAndGenerateTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
