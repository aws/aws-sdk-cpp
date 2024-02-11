/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/MemberAccountDiscountVisibility.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostOptimizationHub
  {
    namespace Model
    {
      namespace MemberAccountDiscountVisibilityMapper
      {

        static const int All_HASH = HashingUtils::HashString("All");
        static const int None_HASH = HashingUtils::HashString("None");


        MemberAccountDiscountVisibility GetMemberAccountDiscountVisibilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return MemberAccountDiscountVisibility::All;
          }
          else if (hashCode == None_HASH)
          {
            return MemberAccountDiscountVisibility::None;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberAccountDiscountVisibility>(hashCode);
          }

          return MemberAccountDiscountVisibility::NOT_SET;
        }

        Aws::String GetNameForMemberAccountDiscountVisibility(MemberAccountDiscountVisibility enumValue)
        {
          switch(enumValue)
          {
          case MemberAccountDiscountVisibility::NOT_SET:
            return {};
          case MemberAccountDiscountVisibility::All:
            return "All";
          case MemberAccountDiscountVisibility::None:
            return "None";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberAccountDiscountVisibilityMapper
    } // namespace Model
  } // namespace CostOptimizationHub
} // namespace Aws
