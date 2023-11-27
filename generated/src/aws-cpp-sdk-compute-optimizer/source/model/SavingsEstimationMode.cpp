/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/SavingsEstimationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace SavingsEstimationModeMapper
      {

        static const int AfterDiscounts_HASH = HashingUtils::HashString("AfterDiscounts");
        static const int BeforeDiscounts_HASH = HashingUtils::HashString("BeforeDiscounts");


        SavingsEstimationMode GetSavingsEstimationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AfterDiscounts_HASH)
          {
            return SavingsEstimationMode::AfterDiscounts;
          }
          else if (hashCode == BeforeDiscounts_HASH)
          {
            return SavingsEstimationMode::BeforeDiscounts;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsEstimationMode>(hashCode);
          }

          return SavingsEstimationMode::NOT_SET;
        }

        Aws::String GetNameForSavingsEstimationMode(SavingsEstimationMode enumValue)
        {
          switch(enumValue)
          {
          case SavingsEstimationMode::NOT_SET:
            return {};
          case SavingsEstimationMode::AfterDiscounts:
            return "AfterDiscounts";
          case SavingsEstimationMode::BeforeDiscounts:
            return "BeforeDiscounts";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SavingsEstimationModeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
