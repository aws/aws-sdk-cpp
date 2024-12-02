/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CustomSourceType.h>
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
      namespace CustomSourceTypeMapper
      {

        static const int IN_LINE_HASH = HashingUtils::HashString("IN_LINE");
        static const int S3_LOCATION_HASH = HashingUtils::HashString("S3_LOCATION");


        CustomSourceType GetCustomSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_LINE_HASH)
          {
            return CustomSourceType::IN_LINE;
          }
          else if (hashCode == S3_LOCATION_HASH)
          {
            return CustomSourceType::S3_LOCATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomSourceType>(hashCode);
          }

          return CustomSourceType::NOT_SET;
        }

        Aws::String GetNameForCustomSourceType(CustomSourceType enumValue)
        {
          switch(enumValue)
          {
          case CustomSourceType::NOT_SET:
            return {};
          case CustomSourceType::IN_LINE:
            return "IN_LINE";
          case CustomSourceType::S3_LOCATION:
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

      } // namespace CustomSourceTypeMapper
    } // namespace Model
  } // namespace BedrockAgent
} // namespace Aws
