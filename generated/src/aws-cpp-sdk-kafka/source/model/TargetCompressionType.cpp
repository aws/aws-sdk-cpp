/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/TargetCompressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace TargetCompressionTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int GZIP_HASH = HashingUtils::HashString("GZIP");
        static const int SNAPPY_HASH = HashingUtils::HashString("SNAPPY");
        static const int LZ4_HASH = HashingUtils::HashString("LZ4");
        static const int ZSTD_HASH = HashingUtils::HashString("ZSTD");


        TargetCompressionType GetTargetCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return TargetCompressionType::NONE;
          }
          else if (hashCode == GZIP_HASH)
          {
            return TargetCompressionType::GZIP;
          }
          else if (hashCode == SNAPPY_HASH)
          {
            return TargetCompressionType::SNAPPY;
          }
          else if (hashCode == LZ4_HASH)
          {
            return TargetCompressionType::LZ4;
          }
          else if (hashCode == ZSTD_HASH)
          {
            return TargetCompressionType::ZSTD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetCompressionType>(hashCode);
          }

          return TargetCompressionType::NOT_SET;
        }

        Aws::String GetNameForTargetCompressionType(TargetCompressionType enumValue)
        {
          switch(enumValue)
          {
          case TargetCompressionType::NOT_SET:
            return {};
          case TargetCompressionType::NONE:
            return "NONE";
          case TargetCompressionType::GZIP:
            return "GZIP";
          case TargetCompressionType::SNAPPY:
            return "SNAPPY";
          case TargetCompressionType::LZ4:
            return "LZ4";
          case TargetCompressionType::ZSTD:
            return "ZSTD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetCompressionTypeMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
