/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling-plans/model/ScalingMetricType.h>
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
      namespace ScalingMetricTypeMapper
      {

        static const int ASGAverageCPUUtilization_HASH = HashingUtils::HashString("ASGAverageCPUUtilization");
        static const int ASGAverageNetworkIn_HASH = HashingUtils::HashString("ASGAverageNetworkIn");
        static const int ASGAverageNetworkOut_HASH = HashingUtils::HashString("ASGAverageNetworkOut");
        static const int DynamoDBReadCapacityUtilization_HASH = HashingUtils::HashString("DynamoDBReadCapacityUtilization");
        static const int DynamoDBWriteCapacityUtilization_HASH = HashingUtils::HashString("DynamoDBWriteCapacityUtilization");
        static const int ECSServiceAverageCPUUtilization_HASH = HashingUtils::HashString("ECSServiceAverageCPUUtilization");
        static const int ECSServiceAverageMemoryUtilization_HASH = HashingUtils::HashString("ECSServiceAverageMemoryUtilization");
        static const int ALBRequestCountPerTarget_HASH = HashingUtils::HashString("ALBRequestCountPerTarget");
        static const int RDSReaderAverageCPUUtilization_HASH = HashingUtils::HashString("RDSReaderAverageCPUUtilization");
        static const int RDSReaderAverageDatabaseConnections_HASH = HashingUtils::HashString("RDSReaderAverageDatabaseConnections");
        static const int EC2SpotFleetRequestAverageCPUUtilization_HASH = HashingUtils::HashString("EC2SpotFleetRequestAverageCPUUtilization");
        static const int EC2SpotFleetRequestAverageNetworkIn_HASH = HashingUtils::HashString("EC2SpotFleetRequestAverageNetworkIn");
        static const int EC2SpotFleetRequestAverageNetworkOut_HASH = HashingUtils::HashString("EC2SpotFleetRequestAverageNetworkOut");


        ScalingMetricType GetScalingMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASGAverageCPUUtilization_HASH)
          {
            return ScalingMetricType::ASGAverageCPUUtilization;
          }
          else if (hashCode == ASGAverageNetworkIn_HASH)
          {
            return ScalingMetricType::ASGAverageNetworkIn;
          }
          else if (hashCode == ASGAverageNetworkOut_HASH)
          {
            return ScalingMetricType::ASGAverageNetworkOut;
          }
          else if (hashCode == DynamoDBReadCapacityUtilization_HASH)
          {
            return ScalingMetricType::DynamoDBReadCapacityUtilization;
          }
          else if (hashCode == DynamoDBWriteCapacityUtilization_HASH)
          {
            return ScalingMetricType::DynamoDBWriteCapacityUtilization;
          }
          else if (hashCode == ECSServiceAverageCPUUtilization_HASH)
          {
            return ScalingMetricType::ECSServiceAverageCPUUtilization;
          }
          else if (hashCode == ECSServiceAverageMemoryUtilization_HASH)
          {
            return ScalingMetricType::ECSServiceAverageMemoryUtilization;
          }
          else if (hashCode == ALBRequestCountPerTarget_HASH)
          {
            return ScalingMetricType::ALBRequestCountPerTarget;
          }
          else if (hashCode == RDSReaderAverageCPUUtilization_HASH)
          {
            return ScalingMetricType::RDSReaderAverageCPUUtilization;
          }
          else if (hashCode == RDSReaderAverageDatabaseConnections_HASH)
          {
            return ScalingMetricType::RDSReaderAverageDatabaseConnections;
          }
          else if (hashCode == EC2SpotFleetRequestAverageCPUUtilization_HASH)
          {
            return ScalingMetricType::EC2SpotFleetRequestAverageCPUUtilization;
          }
          else if (hashCode == EC2SpotFleetRequestAverageNetworkIn_HASH)
          {
            return ScalingMetricType::EC2SpotFleetRequestAverageNetworkIn;
          }
          else if (hashCode == EC2SpotFleetRequestAverageNetworkOut_HASH)
          {
            return ScalingMetricType::EC2SpotFleetRequestAverageNetworkOut;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalingMetricType>(hashCode);
          }

          return ScalingMetricType::NOT_SET;
        }

        Aws::String GetNameForScalingMetricType(ScalingMetricType enumValue)
        {
          switch(enumValue)
          {
          case ScalingMetricType::ASGAverageCPUUtilization:
            return "ASGAverageCPUUtilization";
          case ScalingMetricType::ASGAverageNetworkIn:
            return "ASGAverageNetworkIn";
          case ScalingMetricType::ASGAverageNetworkOut:
            return "ASGAverageNetworkOut";
          case ScalingMetricType::DynamoDBReadCapacityUtilization:
            return "DynamoDBReadCapacityUtilization";
          case ScalingMetricType::DynamoDBWriteCapacityUtilization:
            return "DynamoDBWriteCapacityUtilization";
          case ScalingMetricType::ECSServiceAverageCPUUtilization:
            return "ECSServiceAverageCPUUtilization";
          case ScalingMetricType::ECSServiceAverageMemoryUtilization:
            return "ECSServiceAverageMemoryUtilization";
          case ScalingMetricType::ALBRequestCountPerTarget:
            return "ALBRequestCountPerTarget";
          case ScalingMetricType::RDSReaderAverageCPUUtilization:
            return "RDSReaderAverageCPUUtilization";
          case ScalingMetricType::RDSReaderAverageDatabaseConnections:
            return "RDSReaderAverageDatabaseConnections";
          case ScalingMetricType::EC2SpotFleetRequestAverageCPUUtilization:
            return "EC2SpotFleetRequestAverageCPUUtilization";
          case ScalingMetricType::EC2SpotFleetRequestAverageNetworkIn:
            return "EC2SpotFleetRequestAverageNetworkIn";
          case ScalingMetricType::EC2SpotFleetRequestAverageNetworkOut:
            return "EC2SpotFleetRequestAverageNetworkOut";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalingMetricTypeMapper
    } // namespace Model
  } // namespace AutoScalingPlans
} // namespace Aws
