/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrievalResultContentType.h>
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
      namespace RetrievalResultContentTypeMapper
      {

        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int IMAGE_HASH = HashingUtils::HashString("IMAGE");
        static const int ROW_HASH = HashingUtils::HashString("ROW");


        RetrievalResultContentType GetRetrievalResultContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_HASH)
          {
            return RetrievalResultContentType::TEXT;
          }
          else if (hashCode == IMAGE_HASH)
          {
            return RetrievalResultContentType::IMAGE;
          }
          else if (hashCode == ROW_HASH)
          {
            return RetrievalResultContentType::ROW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RetrievalResultContentType>(hashCode);
          }

          return RetrievalResultContentType::NOT_SET;
        }

        Aws::String GetNameForRetrievalResultContentType(RetrievalResultContentType enumValue)
        {
          switch(enumValue)
          {
          case RetrievalResultContentType::NOT_SET:
            return {};
          case RetrievalResultContentType::TEXT:
            return "TEXT";
          case RetrievalResultContentType::IMAGE:
            return "IMAGE";
          case RetrievalResultContentType::ROW:
            return "ROW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RetrievalResultContentTypeMapper
    } // namespace Model
  } // namespace BedrockAgentRuntime
} // namespace Aws
