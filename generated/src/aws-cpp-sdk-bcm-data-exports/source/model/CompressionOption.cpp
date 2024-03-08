/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/CompressionOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDataExports
  {
    namespace Model
    {
      namespace CompressionOptionMapper
      {

        static const int GZIP_HASH = HashingUtils::HashString("GZIP");
        static const int PARQUET_HASH = HashingUtils::HashString("PARQUET");


        CompressionOption GetCompressionOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GZIP_HASH)
          {
            return CompressionOption::GZIP;
          }
          else if (hashCode == PARQUET_HASH)
          {
            return CompressionOption::PARQUET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompressionOption>(hashCode);
          }

          return CompressionOption::NOT_SET;
        }

        Aws::String GetNameForCompressionOption(CompressionOption enumValue)
        {
          switch(enumValue)
          {
          case CompressionOption::NOT_SET:
            return {};
          case CompressionOption::GZIP:
            return "GZIP";
          case CompressionOption::PARQUET:
            return "PARQUET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompressionOptionMapper
    } // namespace Model
  } // namespace BCMDataExports
} // namespace Aws
