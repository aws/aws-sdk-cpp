/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ParquetCompression.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace ParquetCompressionMapper
      {

        static const int UNCOMPRESSED_HASH = HashingUtils::HashString("UNCOMPRESSED");
        static const int GZIP_HASH = HashingUtils::HashString("GZIP");
        static const int SNAPPY_HASH = HashingUtils::HashString("SNAPPY");


        ParquetCompression GetParquetCompressionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNCOMPRESSED_HASH)
          {
            return ParquetCompression::UNCOMPRESSED;
          }
          else if (hashCode == GZIP_HASH)
          {
            return ParquetCompression::GZIP;
          }
          else if (hashCode == SNAPPY_HASH)
          {
            return ParquetCompression::SNAPPY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParquetCompression>(hashCode);
          }

          return ParquetCompression::NOT_SET;
        }

        Aws::String GetNameForParquetCompression(ParquetCompression enumValue)
        {
          switch(enumValue)
          {
          case ParquetCompression::UNCOMPRESSED:
            return "UNCOMPRESSED";
          case ParquetCompression::GZIP:
            return "GZIP";
          case ParquetCompression::SNAPPY:
            return "SNAPPY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParquetCompressionMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
