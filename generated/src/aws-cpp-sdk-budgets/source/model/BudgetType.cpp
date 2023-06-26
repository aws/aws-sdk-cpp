/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/BudgetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace BudgetTypeMapper
      {

        static const int USAGE_HASH = HashingUtils::HashString("USAGE");
        static const int COST_HASH = HashingUtils::HashString("COST");
        static const int RI_UTILIZATION_HASH = HashingUtils::HashString("RI_UTILIZATION");
        static const int RI_COVERAGE_HASH = HashingUtils::HashString("RI_COVERAGE");
        static const int SAVINGS_PLANS_UTILIZATION_HASH = HashingUtils::HashString("SAVINGS_PLANS_UTILIZATION");
        static const int SAVINGS_PLANS_COVERAGE_HASH = HashingUtils::HashString("SAVINGS_PLANS_COVERAGE");


        BudgetType GetBudgetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USAGE_HASH)
          {
            return BudgetType::USAGE;
          }
          else if (hashCode == COST_HASH)
          {
            return BudgetType::COST;
          }
          else if (hashCode == RI_UTILIZATION_HASH)
          {
            return BudgetType::RI_UTILIZATION;
          }
          else if (hashCode == RI_COVERAGE_HASH)
          {
            return BudgetType::RI_COVERAGE;
          }
          else if (hashCode == SAVINGS_PLANS_UTILIZATION_HASH)
          {
            return BudgetType::SAVINGS_PLANS_UTILIZATION;
          }
          else if (hashCode == SAVINGS_PLANS_COVERAGE_HASH)
          {
            return BudgetType::SAVINGS_PLANS_COVERAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BudgetType>(hashCode);
          }

          return BudgetType::NOT_SET;
        }

        Aws::String GetNameForBudgetType(BudgetType enumValue)
        {
          switch(enumValue)
          {
          case BudgetType::USAGE:
            return "USAGE";
          case BudgetType::COST:
            return "COST";
          case BudgetType::RI_UTILIZATION:
            return "RI_UTILIZATION";
          case BudgetType::RI_COVERAGE:
            return "RI_COVERAGE";
          case BudgetType::SAVINGS_PLANS_UTILIZATION:
            return "SAVINGS_PLANS_UTILIZATION";
          case BudgetType::SAVINGS_PLANS_COVERAGE:
            return "SAVINGS_PLANS_COVERAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BudgetTypeMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
