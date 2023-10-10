/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PricingUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace PricingUnitMapper
      {

        static const int GB_HASH = HashingUtils::HashString("GB");
        static const int Hrs_HASH = HashingUtils::HashString("Hrs");
        static const int GB_Mo_HASH = HashingUtils::HashString("GB-Mo");
        static const int Bundles_HASH = HashingUtils::HashString("Bundles");
        static const int Queries_HASH = HashingUtils::HashString("Queries");


        PricingUnit GetPricingUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GB_HASH)
          {
            return PricingUnit::GB;
          }
          else if (hashCode == Hrs_HASH)
          {
            return PricingUnit::Hrs;
          }
          else if (hashCode == GB_Mo_HASH)
          {
            return PricingUnit::GB_Mo;
          }
          else if (hashCode == Bundles_HASH)
          {
            return PricingUnit::Bundles;
          }
          else if (hashCode == Queries_HASH)
          {
            return PricingUnit::Queries;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PricingUnit>(hashCode);
          }

          return PricingUnit::NOT_SET;
        }

        Aws::String GetNameForPricingUnit(PricingUnit enumValue)
        {
          switch(enumValue)
          {
          case PricingUnit::NOT_SET:
            return {};
          case PricingUnit::GB:
            return "GB";
          case PricingUnit::Hrs:
            return "Hrs";
          case PricingUnit::GB_Mo:
            return "GB-Mo";
          case PricingUnit::Bundles:
            return "Bundles";
          case PricingUnit::Queries:
            return "Queries";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PricingUnitMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
