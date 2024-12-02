/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankDocumentType.h>
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
      namespace RerankDocumentTypeMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        RerankDocumentType GetRerankDocumentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return RerankDocumentType::TEXT;
          }
          else if (hashCode == JSON_HASH)
          {
            return RerankDocumentType::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RerankDocumentType>(hashCode);
          }

          return RerankDocumentType::NOT_SET;
        }

        Aws::String GetNameForRerankDocumentType(RerankDocumentType enumValue)
        {
          switch(enumValue)
          {
          case RerankDocumentType::NOT_SET:
            return {};
          case RerankDocumentType::TEXT:
            return "TEXT";
          case RerankDocumentType::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RerankDocumentTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
