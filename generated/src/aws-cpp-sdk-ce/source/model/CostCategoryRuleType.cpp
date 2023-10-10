/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategoryRuleType.h>
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
      namespace CostCategoryRuleTypeMapper
      {

        static const int REGULAR_HASH = HashingUtils::HashString("REGULAR");
        static const int INHERITED_VALUE_HASH = HashingUtils::HashString("INHERITED_VALUE");


        CostCategoryRuleType GetCostCategoryRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGULAR_HASH)
          {
            return CostCategoryRuleType::REGULAR;
          }
          else if (hashCode == INHERITED_VALUE_HASH)
          {
            return CostCategoryRuleType::INHERITED_VALUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostCategoryRuleType>(hashCode);
          }

          return CostCategoryRuleType::NOT_SET;
        }

        Aws::String GetNameForCostCategoryRuleType(CostCategoryRuleType enumValue)
        {
          switch(enumValue)
          {
          case CostCategoryRuleType::NOT_SET:
            return {};
          case CostCategoryRuleType::REGULAR:
            return "REGULAR";
          case CostCategoryRuleType::INHERITED_VALUE:
            return "INHERITED_VALUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostCategoryRuleTypeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
