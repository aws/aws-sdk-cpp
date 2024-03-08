/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/FleetScalingMetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeBuild
  {
    namespace Model
    {
      namespace FleetScalingMetricTypeMapper
      {

        static const int FLEET_UTILIZATION_RATE_HASH = HashingUtils::HashString("FLEET_UTILIZATION_RATE");


        FleetScalingMetricType GetFleetScalingMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLEET_UTILIZATION_RATE_HASH)
          {
            return FleetScalingMetricType::FLEET_UTILIZATION_RATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetScalingMetricType>(hashCode);
          }

          return FleetScalingMetricType::NOT_SET;
        }

        Aws::String GetNameForFleetScalingMetricType(FleetScalingMetricType enumValue)
        {
          switch(enumValue)
          {
          case FleetScalingMetricType::NOT_SET:
            return {};
          case FleetScalingMetricType::FLEET_UTILIZATION_RATE:
            return "FLEET_UTILIZATION_RATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetScalingMetricTypeMapper
    } // namespace Model
  } // namespace CodeBuild
} // namespace Aws
