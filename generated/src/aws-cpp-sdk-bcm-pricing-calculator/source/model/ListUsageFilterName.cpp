/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/ListUsageFilterName.h>
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
      namespace ListUsageFilterNameMapper
      {

        static const int USAGE_ACCOUNT_ID_HASH = HashingUtils::HashString("USAGE_ACCOUNT_ID");
        static const int SERVICE_CODE_HASH = HashingUtils::HashString("SERVICE_CODE");
        static const int USAGE_TYPE_HASH = HashingUtils::HashString("USAGE_TYPE");
        static const int OPERATION_HASH = HashingUtils::HashString("OPERATION");
        static const int LOCATION_HASH = HashingUtils::HashString("LOCATION");
        static const int USAGE_GROUP_HASH = HashingUtils::HashString("USAGE_GROUP");
        static const int HISTORICAL_USAGE_ACCOUNT_ID_HASH = HashingUtils::HashString("HISTORICAL_USAGE_ACCOUNT_ID");
        static const int HISTORICAL_SERVICE_CODE_HASH = HashingUtils::HashString("HISTORICAL_SERVICE_CODE");
        static const int HISTORICAL_USAGE_TYPE_HASH = HashingUtils::HashString("HISTORICAL_USAGE_TYPE");
        static const int HISTORICAL_OPERATION_HASH = HashingUtils::HashString("HISTORICAL_OPERATION");
        static const int HISTORICAL_LOCATION_HASH = HashingUtils::HashString("HISTORICAL_LOCATION");


        ListUsageFilterName GetListUsageFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USAGE_ACCOUNT_ID_HASH)
          {
            return ListUsageFilterName::USAGE_ACCOUNT_ID;
          }
          else if (hashCode == SERVICE_CODE_HASH)
          {
            return ListUsageFilterName::SERVICE_CODE;
          }
          else if (hashCode == USAGE_TYPE_HASH)
          {
            return ListUsageFilterName::USAGE_TYPE;
          }
          else if (hashCode == OPERATION_HASH)
          {
            return ListUsageFilterName::OPERATION;
          }
          else if (hashCode == LOCATION_HASH)
          {
            return ListUsageFilterName::LOCATION;
          }
          else if (hashCode == USAGE_GROUP_HASH)
          {
            return ListUsageFilterName::USAGE_GROUP;
          }
          else if (hashCode == HISTORICAL_USAGE_ACCOUNT_ID_HASH)
          {
            return ListUsageFilterName::HISTORICAL_USAGE_ACCOUNT_ID;
          }
          else if (hashCode == HISTORICAL_SERVICE_CODE_HASH)
          {
            return ListUsageFilterName::HISTORICAL_SERVICE_CODE;
          }
          else if (hashCode == HISTORICAL_USAGE_TYPE_HASH)
          {
            return ListUsageFilterName::HISTORICAL_USAGE_TYPE;
          }
          else if (hashCode == HISTORICAL_OPERATION_HASH)
          {
            return ListUsageFilterName::HISTORICAL_OPERATION;
          }
          else if (hashCode == HISTORICAL_LOCATION_HASH)
          {
            return ListUsageFilterName::HISTORICAL_LOCATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListUsageFilterName>(hashCode);
          }

          return ListUsageFilterName::NOT_SET;
        }

        Aws::String GetNameForListUsageFilterName(ListUsageFilterName enumValue)
        {
          switch(enumValue)
          {
          case ListUsageFilterName::NOT_SET:
            return {};
          case ListUsageFilterName::USAGE_ACCOUNT_ID:
            return "USAGE_ACCOUNT_ID";
          case ListUsageFilterName::SERVICE_CODE:
            return "SERVICE_CODE";
          case ListUsageFilterName::USAGE_TYPE:
            return "USAGE_TYPE";
          case ListUsageFilterName::OPERATION:
            return "OPERATION";
          case ListUsageFilterName::LOCATION:
            return "LOCATION";
          case ListUsageFilterName::USAGE_GROUP:
            return "USAGE_GROUP";
          case ListUsageFilterName::HISTORICAL_USAGE_ACCOUNT_ID:
            return "HISTORICAL_USAGE_ACCOUNT_ID";
          case ListUsageFilterName::HISTORICAL_SERVICE_CODE:
            return "HISTORICAL_SERVICE_CODE";
          case ListUsageFilterName::HISTORICAL_USAGE_TYPE:
            return "HISTORICAL_USAGE_TYPE";
          case ListUsageFilterName::HISTORICAL_OPERATION:
            return "HISTORICAL_OPERATION";
          case ListUsageFilterName::HISTORICAL_LOCATION:
            return "HISTORICAL_LOCATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListUsageFilterNameMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
