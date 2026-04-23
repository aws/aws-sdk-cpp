/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/application-autoscaling/model/MetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace MetricTypeMapper
      {

        static const int DynamoDBReadCapacityUtilization_HASH = HashingUtils::HashString("DynamoDBReadCapacityUtilization");
        static const int DynamoDBWriteCapacityUtilization_HASH = HashingUtils::HashString("DynamoDBWriteCapacityUtilization");
        static const int ALBRequestCountPerTarget_HASH = HashingUtils::HashString("ALBRequestCountPerTarget");
        static const int RDSReaderAverageCPUUtilization_HASH = HashingUtils::HashString("RDSReaderAverageCPUUtilization");
        static const int RDSReaderAverageDatabaseConnections_HASH = HashingUtils::HashString("RDSReaderAverageDatabaseConnections");
        static const int EC2SpotFleetRequestAverageCPUUtilization_HASH = HashingUtils::HashString("EC2SpotFleetRequestAverageCPUUtilization");
        static const int EC2SpotFleetRequestAverageNetworkIn_HASH = HashingUtils::HashString("EC2SpotFleetRequestAverageNetworkIn");
        static const int EC2SpotFleetRequestAverageNetworkOut_HASH = HashingUtils::HashString("EC2SpotFleetRequestAverageNetworkOut");
        static const int SageMakerVariantInvocationsPerInstance_HASH = HashingUtils::HashString("SageMakerVariantInvocationsPerInstance");
        static const int ECSServiceAverageCPUUtilization_HASH = HashingUtils::HashString("ECSServiceAverageCPUUtilization");
        static const int ECSServiceAverageMemoryUtilization_HASH = HashingUtils::HashString("ECSServiceAverageMemoryUtilization");


        MetricType GetMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DynamoDBReadCapacityUtilization_HASH)
          {
            return MetricType::DynamoDBReadCapacityUtilization;
          }
          else if (hashCode == DynamoDBWriteCapacityUtilization_HASH)
          {
            return MetricType::DynamoDBWriteCapacityUtilization;
          }
          else if (hashCode == ALBRequestCountPerTarget_HASH)
          {
            return MetricType::ALBRequestCountPerTarget;
          }
          else if (hashCode == RDSReaderAverageCPUUtilization_HASH)
          {
            return MetricType::RDSReaderAverageCPUUtilization;
          }
          else if (hashCode == RDSReaderAverageDatabaseConnections_HASH)
          {
            return MetricType::RDSReaderAverageDatabaseConnections;
          }
          else if (hashCode == EC2SpotFleetRequestAverageCPUUtilization_HASH)
          {
            return MetricType::EC2SpotFleetRequestAverageCPUUtilization;
          }
          else if (hashCode == EC2SpotFleetRequestAverageNetworkIn_HASH)
          {
            return MetricType::EC2SpotFleetRequestAverageNetworkIn;
          }
          else if (hashCode == EC2SpotFleetRequestAverageNetworkOut_HASH)
          {
            return MetricType::EC2SpotFleetRequestAverageNetworkOut;
          }
          else if (hashCode == SageMakerVariantInvocationsPerInstance_HASH)
          {
            return MetricType::SageMakerVariantInvocationsPerInstance;
          }
          else if (hashCode == ECSServiceAverageCPUUtilization_HASH)
          {
            return MetricType::ECSServiceAverageCPUUtilization;
          }
          else if (hashCode == ECSServiceAverageMemoryUtilization_HASH)
          {
            return MetricType::ECSServiceAverageMemoryUtilization;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricType>(hashCode);
          }

          return MetricType::NOT_SET;
        }

        Aws::String GetNameForMetricType(MetricType enumValue)
        {
          switch(enumValue)
          {
          case MetricType::DynamoDBReadCapacityUtilization:
            return "DynamoDBReadCapacityUtilization";
          case MetricType::DynamoDBWriteCapacityUtilization:
            return "DynamoDBWriteCapacityUtilization";
          case MetricType::ALBRequestCountPerTarget:
            return "ALBRequestCountPerTarget";
          case MetricType::RDSReaderAverageCPUUtilization:
            return "RDSReaderAverageCPUUtilization";
          case MetricType::RDSReaderAverageDatabaseConnections:
            return "RDSReaderAverageDatabaseConnections";
          case MetricType::EC2SpotFleetRequestAverageCPUUtilization:
            return "EC2SpotFleetRequestAverageCPUUtilization";
          case MetricType::EC2SpotFleetRequestAverageNetworkIn:
            return "EC2SpotFleetRequestAverageNetworkIn";
          case MetricType::EC2SpotFleetRequestAverageNetworkOut:
            return "EC2SpotFleetRequestAverageNetworkOut";
          case MetricType::SageMakerVariantInvocationsPerInstance:
            return "SageMakerVariantInvocationsPerInstance";
          case MetricType::ECSServiceAverageCPUUtilization:
            return "ECSServiceAverageCPUUtilization";
          case MetricType::ECSServiceAverageMemoryUtilization:
            return "ECSServiceAverageMemoryUtilization";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricTypeMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
