/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategorySplitChargeMethod.h>
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
      namespace CostCategorySplitChargeMethodMapper
      {

        static const int FIXED_HASH = HashingUtils::HashString("FIXED");
        static const int PROPORTIONAL_HASH = HashingUtils::HashString("PROPORTIONAL");
        static const int EVEN_HASH = HashingUtils::HashString("EVEN");


        CostCategorySplitChargeMethod GetCostCategorySplitChargeMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_HASH)
          {
            return CostCategorySplitChargeMethod::FIXED;
          }
          else if (hashCode == PROPORTIONAL_HASH)
          {
            return CostCategorySplitChargeMethod::PROPORTIONAL;
          }
          else if (hashCode == EVEN_HASH)
          {
            return CostCategorySplitChargeMethod::EVEN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostCategorySplitChargeMethod>(hashCode);
          }

          return CostCategorySplitChargeMethod::NOT_SET;
        }

        Aws::String GetNameForCostCategorySplitChargeMethod(CostCategorySplitChargeMethod enumValue)
        {
          switch(enumValue)
          {
          case CostCategorySplitChargeMethod::NOT_SET:
            return {};
          case CostCategorySplitChargeMethod::FIXED:
            return "FIXED";
          case CostCategorySplitChargeMethod::PROPORTIONAL:
            return "PROPORTIONAL";
          case CostCategorySplitChargeMethod::EVEN:
            return "EVEN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostCategorySplitChargeMethodMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
