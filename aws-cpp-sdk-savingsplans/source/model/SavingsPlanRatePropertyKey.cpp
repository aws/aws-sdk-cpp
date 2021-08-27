/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanRatePropertyKey.h>
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
      namespace SavingsPlanRatePropertyKeyMapper
      {

        static const int region_HASH = HashingUtils::HashString("region");
        static const int instanceType_HASH = HashingUtils::HashString("instanceType");
        static const int instanceFamily_HASH = HashingUtils::HashString("instanceFamily");
        static const int productDescription_HASH = HashingUtils::HashString("productDescription");
        static const int tenancy_HASH = HashingUtils::HashString("tenancy");


        SavingsPlanRatePropertyKey GetSavingsPlanRatePropertyKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == region_HASH)
          {
            return SavingsPlanRatePropertyKey::region;
          }
          else if (hashCode == instanceType_HASH)
          {
            return SavingsPlanRatePropertyKey::instanceType;
          }
          else if (hashCode == instanceFamily_HASH)
          {
            return SavingsPlanRatePropertyKey::instanceFamily;
          }
          else if (hashCode == productDescription_HASH)
          {
            return SavingsPlanRatePropertyKey::productDescription;
          }
          else if (hashCode == tenancy_HASH)
          {
            return SavingsPlanRatePropertyKey::tenancy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanRatePropertyKey>(hashCode);
          }

          return SavingsPlanRatePropertyKey::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanRatePropertyKey(SavingsPlanRatePropertyKey enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanRatePropertyKey::region:
            return "region";
          case SavingsPlanRatePropertyKey::instanceType:
            return "instanceType";
          case SavingsPlanRatePropertyKey::instanceFamily:
            return "instanceFamily";
          case SavingsPlanRatePropertyKey::productDescription:
            return "productDescription";
          case SavingsPlanRatePropertyKey::tenancy:
            return "tenancy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsPlanRatePropertyKeyMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
