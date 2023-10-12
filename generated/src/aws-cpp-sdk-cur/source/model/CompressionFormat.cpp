/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/CompressionFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostandUsageReportService
  {
    namespace Model
    {
      namespace CompressionFormatMapper
      {

        static constexpr uint32_t ZIP_HASH = ConstExprHashingUtils::HashString("ZIP");
        static constexpr uint32_t GZIP_HASH = ConstExprHashingUtils::HashString("GZIP");
        static constexpr uint32_t Parquet_HASH = ConstExprHashingUtils::HashString("Parquet");


        CompressionFormat GetCompressionFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZIP_HASH)
          {
            return CompressionFormat::ZIP;
          }
          else if (hashCode == GZIP_HASH)
          {
            return CompressionFormat::GZIP;
          }
          else if (hashCode == Parquet_HASH)
          {
            return CompressionFormat::Parquet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompressionFormat>(hashCode);
          }

          return CompressionFormat::NOT_SET;
        }

        Aws::String GetNameForCompressionFormat(CompressionFormat enumValue)
        {
          switch(enumValue)
          {
          case CompressionFormat::NOT_SET:
            return {};
          case CompressionFormat::ZIP:
            return "ZIP";
          case CompressionFormat::GZIP:
            return "GZIP";
          case CompressionFormat::Parquet:
            return "Parquet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompressionFormatMapper
    } // namespace Model
  } // namespace CostandUsageReportService
} // namespace Aws
