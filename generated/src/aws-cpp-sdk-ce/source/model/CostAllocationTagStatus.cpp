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

        static constexpr uint32_t Active_HASH = ConstExprHashingUtils::HashString("Active");
        static constexpr uint32_t Inactive_HASH = ConstExprHashingUtils::HashString("Inactive");


        CostAllocationTagStatus GetCostAllocationTagStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
