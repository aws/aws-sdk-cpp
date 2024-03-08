/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/RegionConcurrencyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace RegionConcurrencyTypeMapper
      {

        static const int SEQUENTIAL_HASH = HashingUtils::HashString("SEQUENTIAL");
        static const int PARALLEL_HASH = HashingUtils::HashString("PARALLEL");


        RegionConcurrencyType GetRegionConcurrencyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEQUENTIAL_HASH)
          {
            return RegionConcurrencyType::SEQUENTIAL;
          }
          else if (hashCode == PARALLEL_HASH)
          {
            return RegionConcurrencyType::PARALLEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegionConcurrencyType>(hashCode);
          }

          return RegionConcurrencyType::NOT_SET;
        }

        Aws::String GetNameForRegionConcurrencyType(RegionConcurrencyType enumValue)
        {
          switch(enumValue)
          {
          case RegionConcurrencyType::NOT_SET:
            return {};
          case RegionConcurrencyType::SEQUENTIAL:
            return "SEQUENTIAL";
          case RegionConcurrencyType::PARALLEL:
            return "PARALLEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegionConcurrencyTypeMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
