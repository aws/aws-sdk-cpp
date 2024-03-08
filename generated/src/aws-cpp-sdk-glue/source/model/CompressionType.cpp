/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/CompressionType.h>
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
      namespace CompressionTypeMapper
      {

        static const int gzip_HASH = HashingUtils::HashString("gzip");
        static const int bzip2_HASH = HashingUtils::HashString("bzip2");


        CompressionType GetCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == gzip_HASH)
          {
            return CompressionType::gzip;
          }
          else if (hashCode == bzip2_HASH)
          {
            return CompressionType::bzip2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompressionType>(hashCode);
          }

          return CompressionType::NOT_SET;
        }

        Aws::String GetNameForCompressionType(CompressionType enumValue)
        {
          switch(enumValue)
          {
          case CompressionType::NOT_SET:
            return {};
          case CompressionType::gzip:
            return "gzip";
          case CompressionType::bzip2:
            return "bzip2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompressionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
