/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PricingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace PricingModeMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int TIERED_BUNDLE_HASH = HashingUtils::HashString("TIERED_BUNDLE");


        PricingMode GetPricingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return PricingMode::BASIC;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return PricingMode::STANDARD;
          }
          else if (hashCode == TIERED_BUNDLE_HASH)
          {
            return PricingMode::TIERED_BUNDLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PricingMode>(hashCode);
          }

          return PricingMode::NOT_SET;
        }

        Aws::String GetNameForPricingMode(PricingMode enumValue)
        {
          switch(enumValue)
          {
          case PricingMode::BASIC:
            return "BASIC";
          case PricingMode::STANDARD:
            return "STANDARD";
          case PricingMode::TIERED_BUNDLE:
            return "TIERED_BUNDLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PricingModeMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
