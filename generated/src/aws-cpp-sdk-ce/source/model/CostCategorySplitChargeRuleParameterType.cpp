/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategorySplitChargeRuleParameterType.h>
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
      namespace CostCategorySplitChargeRuleParameterTypeMapper
      {

        static const int ALLOCATION_PERCENTAGES_HASH = HashingUtils::HashString("ALLOCATION_PERCENTAGES");


        CostCategorySplitChargeRuleParameterType GetCostCategorySplitChargeRuleParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOCATION_PERCENTAGES_HASH)
          {
            return CostCategorySplitChargeRuleParameterType::ALLOCATION_PERCENTAGES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostCategorySplitChargeRuleParameterType>(hashCode);
          }

          return CostCategorySplitChargeRuleParameterType::NOT_SET;
        }

        Aws::String GetNameForCostCategorySplitChargeRuleParameterType(CostCategorySplitChargeRuleParameterType enumValue)
        {
          switch(enumValue)
          {
          case CostCategorySplitChargeRuleParameterType::NOT_SET:
            return {};
          case CostCategorySplitChargeRuleParameterType::ALLOCATION_PERCENTAGES:
            return "ALLOCATION_PERCENTAGES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostCategorySplitChargeRuleParameterTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
