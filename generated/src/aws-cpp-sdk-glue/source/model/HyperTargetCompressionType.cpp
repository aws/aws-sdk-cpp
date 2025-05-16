/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/HyperTargetCompressionType.h>
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
      namespace HyperTargetCompressionTypeMapper
      {

        static const int uncompressed_HASH = HashingUtils::HashString("uncompressed");


        HyperTargetCompressionType GetHyperTargetCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == uncompressed_HASH)
          {
            return HyperTargetCompressionType::uncompressed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperTargetCompressionType>(hashCode);
          }

          return HyperTargetCompressionType::NOT_SET;
        }

        Aws::String GetNameForHyperTargetCompressionType(HyperTargetCompressionType enumValue)
        {
          switch(enumValue)
          {
          case HyperTargetCompressionType::NOT_SET:
            return {};
          case HyperTargetCompressionType::uncompressed:
            return "uncompressed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperTargetCompressionTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
