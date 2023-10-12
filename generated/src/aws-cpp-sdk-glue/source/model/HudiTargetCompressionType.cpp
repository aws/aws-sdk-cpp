/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/HudiTargetCompressionType.h>
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
      namespace HudiTargetCompressionTypeMapper
      {

        static constexpr uint32_t gzip_HASH = ConstExprHashingUtils::HashString("gzip");
        static constexpr uint32_t lzo_HASH = ConstExprHashingUtils::HashString("lzo");
        static constexpr uint32_t uncompressed_HASH = ConstExprHashingUtils::HashString("uncompressed");
        static constexpr uint32_t snappy_HASH = ConstExprHashingUtils::HashString("snappy");


        HudiTargetCompressionType GetHudiTargetCompressionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == gzip_HASH)
          {
            return HudiTargetCompressionType::gzip;
          }
          else if (hashCode == lzo_HASH)
          {
            return HudiTargetCompressionType::lzo;
          }
          else if (hashCode == uncompressed_HASH)
          {
            return HudiTargetCompressionType::uncompressed;
          }
          else if (hashCode == snappy_HASH)
          {
            return HudiTargetCompressionType::snappy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HudiTargetCompressionType>(hashCode);
          }

          return HudiTargetCompressionType::NOT_SET;
        }

        Aws::String GetNameForHudiTargetCompressionType(HudiTargetCompressionType enumValue)
        {
          switch(enumValue)
          {
          case HudiTargetCompressionType::NOT_SET:
            return {};
          case HudiTargetCompressionType::gzip:
            return "gzip";
          case HudiTargetCompressionType::lzo:
            return "lzo";
          case HudiTargetCompressionType::uncompressed:
            return "uncompressed";
          case HudiTargetCompressionType::snappy:
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

      } // namespace HudiTargetCompressionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
