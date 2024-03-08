/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PredefinedMetricPairType.h>
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
      namespace PredefinedMetricPairTypeMapper
      {

        static const int ASGCPUUtilization_HASH = HashingUtils::HashString("ASGCPUUtilization");
        static const int ASGNetworkIn_HASH = HashingUtils::HashString("ASGNetworkIn");
        static const int ASGNetworkOut_HASH = HashingUtils::HashString("ASGNetworkOut");
        static const int ALBRequestCount_HASH = HashingUtils::HashString("ALBRequestCount");


        PredefinedMetricPairType GetPredefinedMetricPairTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASGCPUUtilization_HASH)
          {
            return PredefinedMetricPairType::ASGCPUUtilization;
          }
          else if (hashCode == ASGNetworkIn_HASH)
          {
            return PredefinedMetricPairType::ASGNetworkIn;
          }
          else if (hashCode == ASGNetworkOut_HASH)
          {
            return PredefinedMetricPairType::ASGNetworkOut;
          }
          else if (hashCode == ALBRequestCount_HASH)
          {
            return PredefinedMetricPairType::ALBRequestCount;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PredefinedMetricPairType>(hashCode);
          }

          return PredefinedMetricPairType::NOT_SET;
        }

        Aws::String GetNameForPredefinedMetricPairType(PredefinedMetricPairType enumValue)
        {
          switch(enumValue)
          {
          case PredefinedMetricPairType::NOT_SET:
            return {};
          case PredefinedMetricPairType::ASGCPUUtilization:
            return "ASGCPUUtilization";
          case PredefinedMetricPairType::ASGNetworkIn:
            return "ASGNetworkIn";
          case PredefinedMetricPairType::ASGNetworkOut:
            return "ASGNetworkOut";
          case PredefinedMetricPairType::ALBRequestCount:
            return "ALBRequestCount";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PredefinedMetricPairTypeMapper
    } // namespace Model
  } // namespace AutoScaling
} // namespace Aws
