/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/ListBillScenariosFilterName.h>
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
      namespace ListBillScenariosFilterNameMapper
      {

        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int NAME_HASH = HashingUtils::HashString("NAME");


        ListBillScenariosFilterName GetListBillScenariosFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATUS_HASH)
          {
            return ListBillScenariosFilterName::STATUS;
          }
          else if (hashCode == NAME_HASH)
          {
            return ListBillScenariosFilterName::NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListBillScenariosFilterName>(hashCode);
          }

          return ListBillScenariosFilterName::NOT_SET;
        }

        Aws::String GetNameForListBillScenariosFilterName(ListBillScenariosFilterName enumValue)
        {
          switch(enumValue)
          {
          case ListBillScenariosFilterName::NOT_SET:
            return {};
          case ListBillScenariosFilterName::STATUS:
            return "STATUS";
          case ListBillScenariosFilterName::NAME:
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

      } // namespace ListBillScenariosFilterNameMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
