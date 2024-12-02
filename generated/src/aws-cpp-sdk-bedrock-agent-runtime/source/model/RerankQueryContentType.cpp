/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankQueryContentType.h>
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
      namespace RerankQueryContentTypeMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");


        RerankQueryContentType GetRerankQueryContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return RerankQueryContentType::TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RerankQueryContentType>(hashCode);
          }

          return RerankQueryContentType::NOT_SET;
        }

        Aws::String GetNameForRerankQueryContentType(RerankQueryContentType enumValue)
        {
          switch(enumValue)
          {
          case RerankQueryContentType::NOT_SET:
            return {};
          case RerankQueryContentType::TEXT:
            return "TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RerankQueryContentTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
