/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostAllocationTagBackfillStatus.h>
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
      namespace CostAllocationTagBackfillStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        CostAllocationTagBackfillStatus GetCostAllocationTagBackfillStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return CostAllocationTagBackfillStatus::SUCCEEDED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return CostAllocationTagBackfillStatus::PROCESSING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CostAllocationTagBackfillStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostAllocationTagBackfillStatus>(hashCode);
          }

          return CostAllocationTagBackfillStatus::NOT_SET;
        }

        Aws::String GetNameForCostAllocationTagBackfillStatus(CostAllocationTagBackfillStatus enumValue)
        {
          switch(enumValue)
          {
          case CostAllocationTagBackfillStatus::NOT_SET:
            return {};
          case CostAllocationTagBackfillStatus::SUCCEEDED:
            return "SUCCEEDED";
          case CostAllocationTagBackfillStatus::PROCESSING:
            return "PROCESSING";
          case CostAllocationTagBackfillStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostAllocationTagBackfillStatusMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
