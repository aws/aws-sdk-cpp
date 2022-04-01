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

        static const int ZIP_HASH = HashingUtils::HashString("ZIP");
        static const int GZIP_HASH = HashingUtils::HashString("GZIP");
        static const int Parquet_HASH = HashingUtils::HashString("Parquet");


        CompressionFormat GetCompressionFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
