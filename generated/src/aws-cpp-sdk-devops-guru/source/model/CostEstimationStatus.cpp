/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/CostEstimationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace CostEstimationStatusMapper
      {

        static const int ONGOING_HASH = HashingUtils::HashString("ONGOING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");


        CostEstimationStatus GetCostEstimationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONGOING_HASH)
          {
            return CostEstimationStatus::ONGOING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return CostEstimationStatus::COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostEstimationStatus>(hashCode);
          }

          return CostEstimationStatus::NOT_SET;
        }

        Aws::String GetNameForCostEstimationStatus(CostEstimationStatus enumValue)
        {
          switch(enumValue)
          {
          case CostEstimationStatus::NOT_SET:
            return {};
          case CostEstimationStatus::ONGOING:
            return "ONGOING";
          case CostEstimationStatus::COMPLETED:
            return "COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostEstimationStatusMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
