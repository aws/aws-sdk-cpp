/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ce/model/CostCategoryRuleVersion.h>
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
      namespace CostCategoryRuleVersionMapper
      {

        static const int CostCategoryExpression_v1_HASH = HashingUtils::HashString("CostCategoryExpression.v1");


        CostCategoryRuleVersion GetCostCategoryRuleVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CostCategoryExpression_v1_HASH)
          {
            return CostCategoryRuleVersion::CostCategoryExpression_v1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostCategoryRuleVersion>(hashCode);
          }

          return CostCategoryRuleVersion::NOT_SET;
        }

        Aws::String GetNameForCostCategoryRuleVersion(CostCategoryRuleVersion enumValue)
        {
          switch(enumValue)
          {
          case CostCategoryRuleVersion::CostCategoryExpression_v1:
            return "CostCategoryExpression.v1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostCategoryRuleVersionMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
