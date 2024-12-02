/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ContentDataSourceType.h>
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
      namespace ContentDataSourceTypeMapper
      {

        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int S3_HASH = HashingUtils::HashString("S3");


        ContentDataSourceType GetContentDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_HASH)
          {
            return ContentDataSourceType::CUSTOM;
          }
          else if (hashCode == S3_HASH)
          {
            return ContentDataSourceType::S3;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentDataSourceType>(hashCode);
          }

          return ContentDataSourceType::NOT_SET;
        }

        Aws::String GetNameForContentDataSourceType(ContentDataSourceType enumValue)
        {
          switch(enumValue)
          {
          case ContentDataSourceType::NOT_SET:
            return {};
          case ContentDataSourceType::CUSTOM:
            return "CUSTOM";
          case ContentDataSourceType::S3:
            return "S3";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentDataSourceTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
