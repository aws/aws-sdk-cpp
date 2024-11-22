/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/ListBillEstimateLineItemsFilterName.h>
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
      namespace ListBillEstimateLineItemsFilterNameMapper
      {

        static const int USAGE_ACCOUNT_ID_HASH = HashingUtils::HashString("USAGE_ACCOUNT_ID");
        static const int SERVICE_CODE_HASH = HashingUtils::HashString("SERVICE_CODE");
        static const int USAGE_TYPE_HASH = HashingUtils::HashString("USAGE_TYPE");
        static const int OPERATION_HASH = HashingUtils::HashString("OPERATION");
        static const int LOCATION_HASH = HashingUtils::HashString("LOCATION");
        static const int LINE_ITEM_TYPE_HASH = HashingUtils::HashString("LINE_ITEM_TYPE");


        ListBillEstimateLineItemsFilterName GetListBillEstimateLineItemsFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USAGE_ACCOUNT_ID_HASH)
          {
            return ListBillEstimateLineItemsFilterName::USAGE_ACCOUNT_ID;
          }
          else if (hashCode == SERVICE_CODE_HASH)
          {
            return ListBillEstimateLineItemsFilterName::SERVICE_CODE;
          }
          else if (hashCode == USAGE_TYPE_HASH)
          {
            return ListBillEstimateLineItemsFilterName::USAGE_TYPE;
          }
          else if (hashCode == OPERATION_HASH)
          {
            return ListBillEstimateLineItemsFilterName::OPERATION;
          }
          else if (hashCode == LOCATION_HASH)
          {
            return ListBillEstimateLineItemsFilterName::LOCATION;
          }
          else if (hashCode == LINE_ITEM_TYPE_HASH)
          {
            return ListBillEstimateLineItemsFilterName::LINE_ITEM_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListBillEstimateLineItemsFilterName>(hashCode);
          }

          return ListBillEstimateLineItemsFilterName::NOT_SET;
        }

        Aws::String GetNameForListBillEstimateLineItemsFilterName(ListBillEstimateLineItemsFilterName enumValue)
        {
          switch(enumValue)
          {
          case ListBillEstimateLineItemsFilterName::NOT_SET:
            return {};
          case ListBillEstimateLineItemsFilterName::USAGE_ACCOUNT_ID:
            return "USAGE_ACCOUNT_ID";
          case ListBillEstimateLineItemsFilterName::SERVICE_CODE:
            return "SERVICE_CODE";
          case ListBillEstimateLineItemsFilterName::USAGE_TYPE:
            return "USAGE_TYPE";
          case ListBillEstimateLineItemsFilterName::OPERATION:
            return "OPERATION";
          case ListBillEstimateLineItemsFilterName::LOCATION:
            return "LOCATION";
          case ListBillEstimateLineItemsFilterName::LINE_ITEM_TYPE:
            return "LINE_ITEM_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListBillEstimateLineItemsFilterNameMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
