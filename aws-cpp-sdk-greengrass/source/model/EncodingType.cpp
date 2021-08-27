/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/EncodingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace EncodingTypeMapper
      {

        static const int binary_HASH = HashingUtils::HashString("binary");
        static const int json_HASH = HashingUtils::HashString("json");


        EncodingType GetEncodingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == binary_HASH)
          {
            return EncodingType::binary;
          }
          else if (hashCode == json_HASH)
          {
            return EncodingType::json;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EncodingType>(hashCode);
          }

          return EncodingType::NOT_SET;
        }

        Aws::String GetNameForEncodingType(EncodingType enumValue)
        {
          switch(enumValue)
          {
          case EncodingType::binary:
            return "binary";
          case EncodingType::json:
            return "json";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EncodingTypeMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
