/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ContentBlockType.h>
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
      namespace ContentBlockTypeMapper
      {

        static const int text_HASH = HashingUtils::HashString("text");
        static const int image_HASH = HashingUtils::HashString("image");
        static const int resource_HASH = HashingUtils::HashString("resource");
        static const int resource_link_HASH = HashingUtils::HashString("resource_link");


        ContentBlockType GetContentBlockTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == text_HASH)
          {
            return ContentBlockType::text;
          }
          else if (hashCode == image_HASH)
          {
            return ContentBlockType::image;
          }
          else if (hashCode == resource_HASH)
          {
            return ContentBlockType::resource;
          }
          else if (hashCode == resource_link_HASH)
          {
            return ContentBlockType::resource_link;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentBlockType>(hashCode);
          }

          return ContentBlockType::NOT_SET;
        }

        Aws::String GetNameForContentBlockType(ContentBlockType enumValue)
        {
          switch(enumValue)
          {
          case ContentBlockType::NOT_SET:
            return {};
          case ContentBlockType::text:
            return "text";
          case ContentBlockType::image:
            return "image";
          case ContentBlockType::resource:
            return "resource";
          case ContentBlockType::resource_link:
            return "resource_link";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentBlockTypeMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
