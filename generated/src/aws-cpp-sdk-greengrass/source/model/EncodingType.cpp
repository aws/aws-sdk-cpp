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

        static constexpr uint32_t binary_HASH = ConstExprHashingUtils::HashString("binary");
        static constexpr uint32_t json_HASH = ConstExprHashingUtils::HashString("json");


        EncodingType GetEncodingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case EncodingType::NOT_SET:
            return {};
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
