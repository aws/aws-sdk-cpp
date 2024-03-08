/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/PurchasingOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationDiscoveryService
  {
    namespace Model
    {
      namespace PurchasingOptionMapper
      {

        static const int ALL_UPFRONT_HASH = HashingUtils::HashString("ALL_UPFRONT");
        static const int PARTIAL_UPFRONT_HASH = HashingUtils::HashString("PARTIAL_UPFRONT");
        static const int NO_UPFRONT_HASH = HashingUtils::HashString("NO_UPFRONT");


        PurchasingOption GetPurchasingOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_UPFRONT_HASH)
          {
            return PurchasingOption::ALL_UPFRONT;
          }
          else if (hashCode == PARTIAL_UPFRONT_HASH)
          {
            return PurchasingOption::PARTIAL_UPFRONT;
          }
          else if (hashCode == NO_UPFRONT_HASH)
          {
            return PurchasingOption::NO_UPFRONT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PurchasingOption>(hashCode);
          }

          return PurchasingOption::NOT_SET;
        }

        Aws::String GetNameForPurchasingOption(PurchasingOption enumValue)
        {
          switch(enumValue)
          {
          case PurchasingOption::NOT_SET:
            return {};
          case PurchasingOption::ALL_UPFRONT:
            return "ALL_UPFRONT";
          case PurchasingOption::PARTIAL_UPFRONT:
            return "PARTIAL_UPFRONT";
          case PurchasingOption::NO_UPFRONT:
            return "NO_UPFRONT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PurchasingOptionMapper
    } // namespace Model
  } // namespace ApplicationDiscoveryService
} // namespace Aws
