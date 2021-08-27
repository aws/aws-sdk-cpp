/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/PricingPlan.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace PricingPlanMapper
      {

        static const int RequestBasedUsage_HASH = HashingUtils::HashString("RequestBasedUsage");
        static const int MobileAssetTracking_HASH = HashingUtils::HashString("MobileAssetTracking");
        static const int MobileAssetManagement_HASH = HashingUtils::HashString("MobileAssetManagement");


        PricingPlan GetPricingPlanForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RequestBasedUsage_HASH)
          {
            return PricingPlan::RequestBasedUsage;
          }
          else if (hashCode == MobileAssetTracking_HASH)
          {
            return PricingPlan::MobileAssetTracking;
          }
          else if (hashCode == MobileAssetManagement_HASH)
          {
            return PricingPlan::MobileAssetManagement;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PricingPlan>(hashCode);
          }

          return PricingPlan::NOT_SET;
        }

        Aws::String GetNameForPricingPlan(PricingPlan enumValue)
        {
          switch(enumValue)
          {
          case PricingPlan::RequestBasedUsage:
            return "RequestBasedUsage";
          case PricingPlan::MobileAssetTracking:
            return "MobileAssetTracking";
          case PricingPlan::MobileAssetManagement:
            return "MobileAssetManagement";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PricingPlanMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
