/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/InlineContentType.h>
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
      namespace InlineContentTypeMapper
      {

        static const int BYTE_HASH = HashingUtils::HashString("BYTE");
        static const int TEXT_HASH = HashingUtils::HashString("TEXT");


        InlineContentType GetInlineContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BYTE_HASH)
          {
            return InlineContentType::BYTE;
          }
          else if (hashCode == TEXT_HASH)
          {
            return InlineContentType::TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InlineContentType>(hashCode);
          }

          return InlineContentType::NOT_SET;
        }

        Aws::String GetNameForInlineContentType(InlineContentType enumValue)
        {
          switch(enumValue)
          {
          case InlineContentType::NOT_SET:
            return {};
          case InlineContentType::BYTE:
            return "BYTE";
          case InlineContentType::TEXT:
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

      } // namespace InlineContentTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
