/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergTargetCompressionType.h>
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
      namespace IcebergTargetCompressionTypeMapper
      {

        static const int gzip_HASH = HashingUtils::HashString("gzip");
        static const int lzo_HASH = HashingUtils::HashString("lzo");
        static const int uncompressed_HASH = HashingUtils::HashString("uncompressed");
        static const int snappy_HASH = HashingUtils::HashString("snappy");


        IcebergTargetCompressionType GetIcebergTargetCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == gzip_HASH)
          {
            return IcebergTargetCompressionType::gzip;
          }
          else if (hashCode == lzo_HASH)
          {
            return IcebergTargetCompressionType::lzo;
          }
          else if (hashCode == uncompressed_HASH)
          {
            return IcebergTargetCompressionType::uncompressed;
          }
          else if (hashCode == snappy_HASH)
          {
            return IcebergTargetCompressionType::snappy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IcebergTargetCompressionType>(hashCode);
          }

          return IcebergTargetCompressionType::NOT_SET;
        }

        Aws::String GetNameForIcebergTargetCompressionType(IcebergTargetCompressionType enumValue)
        {
          switch(enumValue)
          {
          case IcebergTargetCompressionType::NOT_SET:
            return {};
          case IcebergTargetCompressionType::gzip:
            return "gzip";
          case IcebergTargetCompressionType::lzo:
            return "lzo";
          case IcebergTargetCompressionType::uncompressed:
            return "uncompressed";
          case IcebergTargetCompressionType::snappy:
            return "snappy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IcebergTargetCompressionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
