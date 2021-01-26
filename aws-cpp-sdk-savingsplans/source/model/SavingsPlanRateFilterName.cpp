/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanRateFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SavingsPlans
  {
    namespace Model
    {
      namespace SavingsPlanRateFilterNameMapper
      {

        static const int region_HASH = HashingUtils::HashString("region");
        static const int instanceType_HASH = HashingUtils::HashString("instanceType");
        static const int productDescription_HASH = HashingUtils::HashString("productDescription");
        static const int tenancy_HASH = HashingUtils::HashString("tenancy");
        static const int productType_HASH = HashingUtils::HashString("productType");
        static const int serviceCode_HASH = HashingUtils::HashString("serviceCode");
        static const int usageType_HASH = HashingUtils::HashString("usageType");
        static const int operation_HASH = HashingUtils::HashString("operation");


        SavingsPlanRateFilterName GetSavingsPlanRateFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == region_HASH)
          {
            return SavingsPlanRateFilterName::region;
          }
          else if (hashCode == instanceType_HASH)
          {
            return SavingsPlanRateFilterName::instanceType;
          }
          else if (hashCode == productDescription_HASH)
          {
            return SavingsPlanRateFilterName::productDescription;
          }
          else if (hashCode == tenancy_HASH)
          {
            return SavingsPlanRateFilterName::tenancy;
          }
          else if (hashCode == productType_HASH)
          {
            return SavingsPlanRateFilterName::productType;
          }
          else if (hashCode == serviceCode_HASH)
          {
            return SavingsPlanRateFilterName::serviceCode;
          }
          else if (hashCode == usageType_HASH)
          {
            return SavingsPlanRateFilterName::usageType;
          }
          else if (hashCode == operation_HASH)
          {
            return SavingsPlanRateFilterName::operation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanRateFilterName>(hashCode);
          }

          return SavingsPlanRateFilterName::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanRateFilterName(SavingsPlanRateFilterName enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanRateFilterName::region:
            return "region";
          case SavingsPlanRateFilterName::instanceType:
            return "instanceType";
          case SavingsPlanRateFilterName::productDescription:
            return "productDescription";
          case SavingsPlanRateFilterName::tenancy:
            return "tenancy";
          case SavingsPlanRateFilterName::productType:
            return "productType";
          case SavingsPlanRateFilterName::serviceCode:
            return "serviceCode";
          case SavingsPlanRateFilterName::usageType:
            return "usageType";
          case SavingsPlanRateFilterName::operation:
            return "operation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanRateFilterNameMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
