/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ParquetCompressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ParquetCompressionTypeMapper
      {

        static const int snappy_HASH = HashingUtils::HashString("snappy");
        static const int lzo_HASH = HashingUtils::HashString("lzo");
        static const int gzip_HASH = HashingUtils::HashString("gzip");
        static const int uncompressed_HASH = HashingUtils::HashString("uncompressed");
        static const int none_HASH = HashingUtils::HashString("none");


        ParquetCompressionType GetParquetCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == snappy_HASH)
          {
            return ParquetCompressionType::snappy;
          }
          else if (hashCode == lzo_HASH)
          {
            return ParquetCompressionType::lzo;
          }
          else if (hashCode == gzip_HASH)
          {
            return ParquetCompressionType::gzip;
          }
          else if (hashCode == uncompressed_HASH)
          {
            return ParquetCompressionType::uncompressed;
          }
          else if (hashCode == none_HASH)
          {
            return ParquetCompressionType::none;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParquetCompressionType>(hashCode);
          }

          return ParquetCompressionType::NOT_SET;
        }

        Aws::String GetNameForParquetCompressionType(ParquetCompressionType enumValue)
        {
          switch(enumValue)
          {
          case ParquetCompressionType::NOT_SET:
            return {};
          case ParquetCompressionType::snappy:
            return "snappy";
          case ParquetCompressionType::lzo:
            return "lzo";
          case ParquetCompressionType::gzip:
            return "gzip";
          case ParquetCompressionType::uncompressed:
            return "uncompressed";
          case ParquetCompressionType::none:
            return "none";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParquetCompressionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
