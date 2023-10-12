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

        static constexpr uint32_t snappy_HASH = ConstExprHashingUtils::HashString("snappy");
        static constexpr uint32_t lzo_HASH = ConstExprHashingUtils::HashString("lzo");
        static constexpr uint32_t gzip_HASH = ConstExprHashingUtils::HashString("gzip");
        static constexpr uint32_t uncompressed_HASH = ConstExprHashingUtils::HashString("uncompressed");
        static constexpr uint32_t none_HASH = ConstExprHashingUtils::HashString("none");


        ParquetCompressionType GetParquetCompressionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
