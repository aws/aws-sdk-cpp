/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategoryInheritedValueDimensionName.h>
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
      namespace CostCategoryInheritedValueDimensionNameMapper
      {

        static const int LINKED_ACCOUNT_NAME_HASH = HashingUtils::HashString("LINKED_ACCOUNT_NAME");
        static const int TAG_HASH = HashingUtils::HashString("TAG");


        CostCategoryInheritedValueDimensionName GetCostCategoryInheritedValueDimensionNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINKED_ACCOUNT_NAME_HASH)
          {
            return CostCategoryInheritedValueDimensionName::LINKED_ACCOUNT_NAME;
          }
          else if (hashCode == TAG_HASH)
          {
            return CostCategoryInheritedValueDimensionName::TAG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostCategoryInheritedValueDimensionName>(hashCode);
          }

          return CostCategoryInheritedValueDimensionName::NOT_SET;
        }

        Aws::String GetNameForCostCategoryInheritedValueDimensionName(CostCategoryInheritedValueDimensionName enumValue)
        {
          switch(enumValue)
          {
          case CostCategoryInheritedValueDimensionName::NOT_SET:
            return {};
          case CostCategoryInheritedValueDimensionName::LINKED_ACCOUNT_NAME:
            return "LINKED_ACCOUNT_NAME";
          case CostCategoryInheritedValueDimensionName::TAG:
            return "TAG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostCategoryInheritedValueDimensionNameMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
