/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DeltaTargetCompressionType.h>
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
      namespace DeltaTargetCompressionTypeMapper
      {

        static const int uncompressed_HASH = HashingUtils::HashString("uncompressed");
        static const int snappy_HASH = HashingUtils::HashString("snappy");


        DeltaTargetCompressionType GetDeltaTargetCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == uncompressed_HASH)
          {
            return DeltaTargetCompressionType::uncompressed;
          }
          else if (hashCode == snappy_HASH)
          {
            return DeltaTargetCompressionType::snappy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeltaTargetCompressionType>(hashCode);
          }

          return DeltaTargetCompressionType::NOT_SET;
        }

        Aws::String GetNameForDeltaTargetCompressionType(DeltaTargetCompressionType enumValue)
        {
          switch(enumValue)
          {
          case DeltaTargetCompressionType::NOT_SET:
            return {};
          case DeltaTargetCompressionType::uncompressed:
            return "uncompressed";
          case DeltaTargetCompressionType::snappy:
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

      } // namespace DeltaTargetCompressionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
