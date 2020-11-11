/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/CompressionFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace CompressionFormatMapper
      {

        static const int GZIP_HASH = HashingUtils::HashString("GZIP");
        static const int LZ4_HASH = HashingUtils::HashString("LZ4");
        static const int SNAPPY_HASH = HashingUtils::HashString("SNAPPY");
        static const int BZIP2_HASH = HashingUtils::HashString("BZIP2");
        static const int DEFLATE_HASH = HashingUtils::HashString("DEFLATE");
        static const int LZO_HASH = HashingUtils::HashString("LZO");
        static const int BROTLI_HASH = HashingUtils::HashString("BROTLI");
        static const int ZSTD_HASH = HashingUtils::HashString("ZSTD");
        static const int ZLIB_HASH = HashingUtils::HashString("ZLIB");


        CompressionFormat GetCompressionFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GZIP_HASH)
          {
            return CompressionFormat::GZIP;
          }
          else if (hashCode == LZ4_HASH)
          {
            return CompressionFormat::LZ4;
          }
          else if (hashCode == SNAPPY_HASH)
          {
            return CompressionFormat::SNAPPY;
          }
          else if (hashCode == BZIP2_HASH)
          {
            return CompressionFormat::BZIP2;
          }
          else if (hashCode == DEFLATE_HASH)
          {
            return CompressionFormat::DEFLATE;
          }
          else if (hashCode == LZO_HASH)
          {
            return CompressionFormat::LZO;
          }
          else if (hashCode == BROTLI_HASH)
          {
            return CompressionFormat::BROTLI;
          }
          else if (hashCode == ZSTD_HASH)
          {
            return CompressionFormat::ZSTD;
          }
          else if (hashCode == ZLIB_HASH)
          {
            return CompressionFormat::ZLIB;
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
          case CompressionFormat::GZIP:
            return "GZIP";
          case CompressionFormat::LZ4:
            return "LZ4";
          case CompressionFormat::SNAPPY:
            return "SNAPPY";
          case CompressionFormat::BZIP2:
            return "BZIP2";
          case CompressionFormat::DEFLATE:
            return "DEFLATE";
          case CompressionFormat::LZO:
            return "LZO";
          case CompressionFormat::BROTLI:
            return "BROTLI";
          case CompressionFormat::ZSTD:
            return "ZSTD";
          case CompressionFormat::ZLIB:
            return "ZLIB";
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
  } // namespace GlueDataBrew
} // namespace Aws
