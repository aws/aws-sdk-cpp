/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/AutoScalingConfiguration.h>
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
      namespace AutoScalingConfigurationMapper
      {

        static const int TargetTrackingScalingCpu_HASH = HashingUtils::HashString("TargetTrackingScalingCpu");
        static const int TargetTrackingScalingMemory_HASH = HashingUtils::HashString("TargetTrackingScalingMemory");


        AutoScalingConfiguration GetAutoScalingConfigurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TargetTrackingScalingCpu_HASH)
          {
            return AutoScalingConfiguration::TargetTrackingScalingCpu;
          }
          else if (hashCode == TargetTrackingScalingMemory_HASH)
          {
            return AutoScalingConfiguration::TargetTrackingScalingMemory;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoScalingConfiguration>(hashCode);
          }

          return AutoScalingConfiguration::NOT_SET;
        }

        Aws::String GetNameForAutoScalingConfiguration(AutoScalingConfiguration enumValue)
        {
          switch(enumValue)
          {
          case AutoScalingConfiguration::TargetTrackingScalingCpu:
            return "TargetTrackingScalingCpu";
          case AutoScalingConfiguration::TargetTrackingScalingMemory:
            return "TargetTrackingScalingMemory";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoScalingConfigurationMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
