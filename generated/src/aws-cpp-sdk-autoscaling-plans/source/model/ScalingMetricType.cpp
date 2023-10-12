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

        static constexpr uint32_t ASGAverageCPUUtilization_HASH = ConstExprHashingUtils::HashString("ASGAverageCPUUtilization");
        static constexpr uint32_t ASGAverageNetworkIn_HASH = ConstExprHashingUtils::HashString("ASGAverageNetworkIn");
        static constexpr uint32_t ASGAverageNetworkOut_HASH = ConstExprHashingUtils::HashString("ASGAverageNetworkOut");
        static constexpr uint32_t DynamoDBReadCapacityUtilization_HASH = ConstExprHashingUtils::HashString("DynamoDBReadCapacityUtilization");
        static constexpr uint32_t DynamoDBWriteCapacityUtilization_HASH = ConstExprHashingUtils::HashString("DynamoDBWriteCapacityUtilization");
        static constexpr uint32_t ECSServiceAverageCPUUtilization_HASH = ConstExprHashingUtils::HashString("ECSServiceAverageCPUUtilization");
        static constexpr uint32_t ECSServiceAverageMemoryUtilization_HASH = ConstExprHashingUtils::HashString("ECSServiceAverageMemoryUtilization");
        static constexpr uint32_t ALBRequestCountPerTarget_HASH = ConstExprHashingUtils::HashString("ALBRequestCountPerTarget");
        static constexpr uint32_t RDSReaderAverageCPUUtilization_HASH = ConstExprHashingUtils::HashString("RDSReaderAverageCPUUtilization");
        static constexpr uint32_t RDSReaderAverageDatabaseConnections_HASH = ConstExprHashingUtils::HashString("RDSReaderAverageDatabaseConnections");
        static constexpr uint32_t EC2SpotFleetRequestAverageCPUUtilization_HASH = ConstExprHashingUtils::HashString("EC2SpotFleetRequestAverageCPUUtilization");
        static constexpr uint32_t EC2SpotFleetRequestAverageNetworkIn_HASH = ConstExprHashingUtils::HashString("EC2SpotFleetRequestAverageNetworkIn");
        static constexpr uint32_t EC2SpotFleetRequestAverageNetworkOut_HASH = ConstExprHashingUtils::HashString("EC2SpotFleetRequestAverageNetworkOut");


        ScalingMetricType GetScalingMetricTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ScalingMetricType::NOT_SET:
            return {};
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
