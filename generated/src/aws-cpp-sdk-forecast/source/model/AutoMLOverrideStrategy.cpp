/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/AutoMLOverrideStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace AutoMLOverrideStrategyMapper
      {

        static const int LatencyOptimized_HASH = HashingUtils::HashString("LatencyOptimized");
        static const int AccuracyOptimized_HASH = HashingUtils::HashString("AccuracyOptimized");


        AutoMLOverrideStrategy GetAutoMLOverrideStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LatencyOptimized_HASH)
          {
            return AutoMLOverrideStrategy::LatencyOptimized;
          }
          else if (hashCode == AccuracyOptimized_HASH)
          {
            return AutoMLOverrideStrategy::AccuracyOptimized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLOverrideStrategy>(hashCode);
          }

          return AutoMLOverrideStrategy::NOT_SET;
        }

        Aws::String GetNameForAutoMLOverrideStrategy(AutoMLOverrideStrategy enumValue)
        {
          switch(enumValue)
          {
          case AutoMLOverrideStrategy::NOT_SET:
            return {};
          case AutoMLOverrideStrategy::LatencyOptimized:
            return "LatencyOptimized";
          case AutoMLOverrideStrategy::AccuracyOptimized:
            return "AccuracyOptimized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLOverrideStrategyMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
