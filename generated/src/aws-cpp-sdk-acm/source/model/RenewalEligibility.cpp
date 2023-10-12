/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/RenewalEligibility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace RenewalEligibilityMapper
      {

        static constexpr uint32_t ELIGIBLE_HASH = ConstExprHashingUtils::HashString("ELIGIBLE");
        static constexpr uint32_t INELIGIBLE_HASH = ConstExprHashingUtils::HashString("INELIGIBLE");


        RenewalEligibility GetRenewalEligibilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ELIGIBLE_HASH)
          {
            return RenewalEligibility::ELIGIBLE;
          }
          else if (hashCode == INELIGIBLE_HASH)
          {
            return RenewalEligibility::INELIGIBLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RenewalEligibility>(hashCode);
          }

          return RenewalEligibility::NOT_SET;
        }

        Aws::String GetNameForRenewalEligibility(RenewalEligibility enumValue)
        {
          switch(enumValue)
          {
          case RenewalEligibility::NOT_SET:
            return {};
          case RenewalEligibility::ELIGIBLE:
            return "ELIGIBLE";
          case RenewalEligibility::INELIGIBLE:
            return "INELIGIBLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RenewalEligibilityMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
