/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MetadataSourceType.h>
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
      namespace MetadataSourceTypeMapper
      {

        static const int IN_LINE_ATTRIBUTE_HASH = HashingUtils::HashString("IN_LINE_ATTRIBUTE");
        static const int S3_LOCATION_HASH = HashingUtils::HashString("S3_LOCATION");


        MetadataSourceType GetMetadataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_LINE_ATTRIBUTE_HASH)
          {
            return MetadataSourceType::IN_LINE_ATTRIBUTE;
          }
          else if (hashCode == S3_LOCATION_HASH)
          {
            return MetadataSourceType::S3_LOCATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataSourceType>(hashCode);
          }

          return MetadataSourceType::NOT_SET;
        }

        Aws::String GetNameForMetadataSourceType(MetadataSourceType enumValue)
        {
          switch(enumValue)
          {
          case MetadataSourceType::NOT_SET:
            return {};
          case MetadataSourceType::IN_LINE_ATTRIBUTE:
            return "IN_LINE_ATTRIBUTE";
          case MetadataSourceType::S3_LOCATION:
            return "S3_LOCATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetadataSourceTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
