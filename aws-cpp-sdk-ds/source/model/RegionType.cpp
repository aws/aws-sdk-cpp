/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/RegionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace RegionTypeMapper
      {

        static const int Primary_HASH = HashingUtils::HashString("Primary");
        static const int Additional_HASH = HashingUtils::HashString("Additional");


        RegionType GetRegionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Primary_HASH)
          {
            return RegionType::Primary;
          }
          else if (hashCode == Additional_HASH)
          {
            return RegionType::Additional;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegionType>(hashCode);
          }

          return RegionType::NOT_SET;
        }

        Aws::String GetNameForRegionType(RegionType enumValue)
        {
          switch(enumValue)
          {
          case RegionType::Primary:
            return "Primary";
          case RegionType::Additional:
            return "Additional";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegionTypeMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
