/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PredefinedLoadMetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace PredefinedLoadMetricTypeMapper
      {

        static const int ASGTotalCPUUtilization_HASH = HashingUtils::HashString("ASGTotalCPUUtilization");
        static const int ASGTotalNetworkIn_HASH = HashingUtils::HashString("ASGTotalNetworkIn");
        static const int ASGTotalNetworkOut_HASH = HashingUtils::HashString("ASGTotalNetworkOut");
        static const int ALBTargetGroupRequestCount_HASH = HashingUtils::HashString("ALBTargetGroupRequestCount");


        PredefinedLoadMetricType GetPredefinedLoadMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASGTotalCPUUtilization_HASH)
          {
            return PredefinedLoadMetricType::ASGTotalCPUUtilization;
          }
          else if (hashCode == ASGTotalNetworkIn_HASH)
          {
            return PredefinedLoadMetricType::ASGTotalNetworkIn;
          }
          else if (hashCode == ASGTotalNetworkOut_HASH)
          {
            return PredefinedLoadMetricType::ASGTotalNetworkOut;
          }
          else if (hashCode == ALBTargetGroupRequestCount_HASH)
          {
            return PredefinedLoadMetricType::ALBTargetGroupRequestCount;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PredefinedLoadMetricType>(hashCode);
          }

          return PredefinedLoadMetricType::NOT_SET;
        }

        Aws::String GetNameForPredefinedLoadMetricType(PredefinedLoadMetricType enumValue)
        {
          switch(enumValue)
          {
          case PredefinedLoadMetricType::NOT_SET:
            return {};
          case PredefinedLoadMetricType::ASGTotalCPUUtilization:
            return "ASGTotalCPUUtilization";
          case PredefinedLoadMetricType::ASGTotalNetworkIn:
            return "ASGTotalNetworkIn";
          case PredefinedLoadMetricType::ASGTotalNetworkOut:
            return "ASGTotalNetworkOut";
          case PredefinedLoadMetricType::ALBTargetGroupRequestCount:
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

      } // namespace PredefinedLoadMetricTypeMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
