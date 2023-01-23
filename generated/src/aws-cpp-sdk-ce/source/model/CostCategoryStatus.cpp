/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategoryStatus.h>
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
      namespace CostCategoryStatusMapper
      {

        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int APPLIED_HASH = HashingUtils::HashString("APPLIED");


        CostCategoryStatus GetCostCategoryStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROCESSING_HASH)
          {
            return CostCategoryStatus::PROCESSING;
          }
          else if (hashCode == APPLIED_HASH)
          {
            return CostCategoryStatus::APPLIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostCategoryStatus>(hashCode);
          }

          return CostCategoryStatus::NOT_SET;
        }

        Aws::String GetNameForCostCategoryStatus(CostCategoryStatus enumValue)
        {
          switch(enumValue)
          {
          case CostCategoryStatus::PROCESSING:
            return "PROCESSING";
          case CostCategoryStatus::APPLIED:
            return "APPLIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostCategoryStatusMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
