/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategoryStatusComponent.h>
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
      namespace CostCategoryStatusComponentMapper
      {

        static const int COST_EXPLORER_HASH = HashingUtils::HashString("COST_EXPLORER");


        CostCategoryStatusComponent GetCostCategoryStatusComponentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COST_EXPLORER_HASH)
          {
            return CostCategoryStatusComponent::COST_EXPLORER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostCategoryStatusComponent>(hashCode);
          }

          return CostCategoryStatusComponent::NOT_SET;
        }

        Aws::String GetNameForCostCategoryStatusComponent(CostCategoryStatusComponent enumValue)
        {
          switch(enumValue)
          {
          case CostCategoryStatusComponent::COST_EXPLORER:
            return "COST_EXPLORER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostCategoryStatusComponentMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
