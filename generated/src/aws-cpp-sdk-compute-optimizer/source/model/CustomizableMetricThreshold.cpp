/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/CustomizableMetricThreshold.h>
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
      namespace CustomizableMetricThresholdMapper
      {

        static const int P90_HASH = HashingUtils::HashString("P90");
        static const int P95_HASH = HashingUtils::HashString("P95");
        static const int P99_5_HASH = HashingUtils::HashString("P99_5");


        CustomizableMetricThreshold GetCustomizableMetricThresholdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == P90_HASH)
          {
            return CustomizableMetricThreshold::P90;
          }
          else if (hashCode == P95_HASH)
          {
            return CustomizableMetricThreshold::P95;
          }
          else if (hashCode == P99_5_HASH)
          {
            return CustomizableMetricThreshold::P99_5;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomizableMetricThreshold>(hashCode);
          }

          return CustomizableMetricThreshold::NOT_SET;
        }

        Aws::String GetNameForCustomizableMetricThreshold(CustomizableMetricThreshold enumValue)
        {
          switch(enumValue)
          {
          case CustomizableMetricThreshold::NOT_SET:
            return {};
          case CustomizableMetricThreshold::P90:
            return "P90";
          case CustomizableMetricThreshold::P95:
            return "P95";
          case CustomizableMetricThreshold::P99_5:
            return "P99_5";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomizableMetricThresholdMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
