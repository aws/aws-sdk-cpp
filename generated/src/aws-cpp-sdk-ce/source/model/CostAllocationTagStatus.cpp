/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostAllocationTagStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace CostAllocationTagStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");


        CostAllocationTagStatus GetCostAllocationTagStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return CostAllocationTagStatus::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return CostAllocationTagStatus::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostAllocationTagStatus>(hashCode);
          }

          return CostAllocationTagStatus::NOT_SET;
        }

        Aws::String GetNameForCostAllocationTagStatus(CostAllocationTagStatus enumValue)
        {
          switch(enumValue)
          {
          case CostAllocationTagStatus::NOT_SET:
            return {};
          case CostAllocationTagStatus::Active:
            return "Active";
          case CostAllocationTagStatus::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostAllocationTagStatusMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
