/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ResourceContentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCore
  {
    namespace Model
    {
      namespace ResourceContentTypeMapper
      {

        static const int text_HASH = HashingUtils::HashString("text");
        static const int blob_HASH = HashingUtils::HashString("blob");


        ResourceContentType GetResourceContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == text_HASH)
          {
            return ResourceContentType::text;
          }
          else if (hashCode == blob_HASH)
          {
            return ResourceContentType::blob;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceContentType>(hashCode);
          }

          return ResourceContentType::NOT_SET;
        }

        Aws::String GetNameForResourceContentType(ResourceContentType enumValue)
        {
          switch(enumValue)
          {
          case ResourceContentType::NOT_SET:
            return {};
          case ResourceContentType::text:
            return "text";
          case ResourceContentType::blob:
            return "blob";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceContentTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
