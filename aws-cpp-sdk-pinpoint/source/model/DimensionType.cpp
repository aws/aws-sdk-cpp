/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/DimensionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Pinpoint
  {
    namespace Model
    {
      namespace DimensionTypeMapper
      {

        static const int INCLUSIVE_HASH = HashingUtils::HashString("INCLUSIVE");
        static const int EXCLUSIVE_HASH = HashingUtils::HashString("EXCLUSIVE");


        DimensionType GetDimensionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUSIVE_HASH)
          {
            return DimensionType::INCLUSIVE;
          }
          else if (hashCode == EXCLUSIVE_HASH)
          {
            return DimensionType::EXCLUSIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionType>(hashCode);
          }

          return DimensionType::NOT_SET;
        }

        Aws::String GetNameForDimensionType(DimensionType enumValue)
        {
          switch(enumValue)
          {
          case DimensionType::INCLUSIVE:
            return "INCLUSIVE";
          case DimensionType::EXCLUSIVE:
            return "EXCLUSIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionTypeMapper
    } // namespace Model
  } // namespace Pinpoint
} // namespace Aws
