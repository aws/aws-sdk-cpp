/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/BillingMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace BillingModeMapper
      {

        static const int EXTENDABLE_RETENTION_PRICING_HASH = HashingUtils::HashString("EXTENDABLE_RETENTION_PRICING");
        static const int FIXED_RETENTION_PRICING_HASH = HashingUtils::HashString("FIXED_RETENTION_PRICING");


        BillingMode GetBillingModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTENDABLE_RETENTION_PRICING_HASH)
          {
            return BillingMode::EXTENDABLE_RETENTION_PRICING;
          }
          else if (hashCode == FIXED_RETENTION_PRICING_HASH)
          {
            return BillingMode::FIXED_RETENTION_PRICING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillingMode>(hashCode);
          }

          return BillingMode::NOT_SET;
        }

        Aws::String GetNameForBillingMode(BillingMode enumValue)
        {
          switch(enumValue)
          {
          case BillingMode::NOT_SET:
            return {};
          case BillingMode::EXTENDABLE_RETENTION_PRICING:
            return "EXTENDABLE_RETENTION_PRICING";
          case BillingMode::FIXED_RETENTION_PRICING:
            return "FIXED_RETENTION_PRICING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BillingModeMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
