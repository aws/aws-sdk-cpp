/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/LoadMetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScalingPlans
  {
    namespace Model
    {
      namespace LoadMetricTypeMapper
      {

        static const int ASGTotalCPUUtilization_HASH = HashingUtils::HashString("ASGTotalCPUUtilization");
        static const int ASGTotalNetworkIn_HASH = HashingUtils::HashString("ASGTotalNetworkIn");
        static const int ASGTotalNetworkOut_HASH = HashingUtils::HashString("ASGTotalNetworkOut");
        static const int ALBTargetGroupRequestCount_HASH = HashingUtils::HashString("ALBTargetGroupRequestCount");


        LoadMetricType GetLoadMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASGTotalCPUUtilization_HASH)
          {
            return LoadMetricType::ASGTotalCPUUtilization;
          }
          else if (hashCode == ASGTotalNetworkIn_HASH)
          {
            return LoadMetricType::ASGTotalNetworkIn;
          }
          else if (hashCode == ASGTotalNetworkOut_HASH)
          {
            return LoadMetricType::ASGTotalNetworkOut;
          }
          else if (hashCode == ALBTargetGroupRequestCount_HASH)
          {
            return LoadMetricType::ALBTargetGroupRequestCount;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LoadMetricType>(hashCode);
          }

          return LoadMetricType::NOT_SET;
        }

        Aws::String GetNameForLoadMetricType(LoadMetricType enumValue)
        {
          switch(enumValue)
          {
          case LoadMetricType::ASGTotalCPUUtilization:
            return "ASGTotalCPUUtilization";
          case LoadMetricType::ASGTotalNetworkIn:
            return "ASGTotalNetworkIn";
          case LoadMetricType::ASGTotalNetworkOut:
            return "ASGTotalNetworkOut";
          case LoadMetricType::ALBTargetGroupRequestCount:
            return "ALBTargetGroupRequestCount";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LoadMetricTypeMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
