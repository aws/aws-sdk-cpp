/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/CompressionEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace CompressionEnumMapper
      {

        static const int ZLIB_HASH = HashingUtils::HashString("ZLIB");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        CompressionEnum GetCompressionEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZLIB_HASH)
          {
            return CompressionEnum::ZLIB;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return CompressionEnum::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompressionEnum>(hashCode);
          }

          return CompressionEnum::NOT_SET;
        }

        Aws::String GetNameForCompressionEnum(CompressionEnum enumValue)
        {
          switch(enumValue)
          {
          case CompressionEnum::NOT_SET:
            return {};
          case CompressionEnum::ZLIB:
            return "ZLIB";
          case CompressionEnum::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompressionEnumMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
