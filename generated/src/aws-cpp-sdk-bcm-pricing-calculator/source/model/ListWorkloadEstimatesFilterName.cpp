/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMPricingCalculator
  {
    namespace Model
    {
      namespace ListWorkloadEstimatesFilterNameMapper
      {

        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int NAME_HASH = HashingUtils::HashString("NAME");


        ListWorkloadEstimatesFilterName GetListWorkloadEstimatesFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATUS_HASH)
          {
            return ListWorkloadEstimatesFilterName::STATUS;
          }
          else if (hashCode == NAME_HASH)
          {
            return ListWorkloadEstimatesFilterName::NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListWorkloadEstimatesFilterName>(hashCode);
          }

          return ListWorkloadEstimatesFilterName::NOT_SET;
        }

        Aws::String GetNameForListWorkloadEstimatesFilterName(ListWorkloadEstimatesFilterName enumValue)
        {
          switch(enumValue)
          {
          case ListWorkloadEstimatesFilterName::NOT_SET:
            return {};
          case ListWorkloadEstimatesFilterName::STATUS:
            return "STATUS";
          case ListWorkloadEstimatesFilterName::NAME:
            return "NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListWorkloadEstimatesFilterNameMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
