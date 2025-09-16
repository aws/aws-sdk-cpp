/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/HealthStatusReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace HealthStatusReasonMapper
      {

        static const int BILLING_VIEW_NO_ACCESS_HASH = HashingUtils::HashString("BILLING_VIEW_NO_ACCESS");
        static const int BILLING_VIEW_UNHEALTHY_HASH = HashingUtils::HashString("BILLING_VIEW_UNHEALTHY");
        static const int FILTER_INVALID_HASH = HashingUtils::HashString("FILTER_INVALID");
        static const int MULTI_YEAR_HISTORICAL_DATA_DISABLED_HASH = HashingUtils::HashString("MULTI_YEAR_HISTORICAL_DATA_DISABLED");


        HealthStatusReason GetHealthStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BILLING_VIEW_NO_ACCESS_HASH)
          {
            return HealthStatusReason::BILLING_VIEW_NO_ACCESS;
          }
          else if (hashCode == BILLING_VIEW_UNHEALTHY_HASH)
          {
            return HealthStatusReason::BILLING_VIEW_UNHEALTHY;
          }
          else if (hashCode == FILTER_INVALID_HASH)
          {
            return HealthStatusReason::FILTER_INVALID;
          }
          else if (hashCode == MULTI_YEAR_HISTORICAL_DATA_DISABLED_HASH)
          {
            return HealthStatusReason::MULTI_YEAR_HISTORICAL_DATA_DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HealthStatusReason>(hashCode);
          }

          return HealthStatusReason::NOT_SET;
        }

        Aws::String GetNameForHealthStatusReason(HealthStatusReason enumValue)
        {
          switch(enumValue)
          {
          case HealthStatusReason::NOT_SET:
            return {};
          case HealthStatusReason::BILLING_VIEW_NO_ACCESS:
            return "BILLING_VIEW_NO_ACCESS";
          case HealthStatusReason::BILLING_VIEW_UNHEALTHY:
            return "BILLING_VIEW_UNHEALTHY";
          case HealthStatusReason::FILTER_INVALID:
            return "FILTER_INVALID";
          case HealthStatusReason::MULTI_YEAR_HISTORICAL_DATA_DISABLED:
            return "MULTI_YEAR_HISTORICAL_DATA_DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HealthStatusReasonMapper
    } // namespace Model
  } // namespace Budgets
} // namespace Aws
