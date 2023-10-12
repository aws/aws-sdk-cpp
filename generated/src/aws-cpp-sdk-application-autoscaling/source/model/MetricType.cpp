/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t DynamoDBReadCapacityUtilization_HASH = ConstExprHashingUtils::HashString("DynamoDBReadCapacityUtilization");
        static constexpr uint32_t DynamoDBWriteCapacityUtilization_HASH = ConstExprHashingUtils::HashString("DynamoDBWriteCapacityUtilization");
        static constexpr uint32_t ALBRequestCountPerTarget_HASH = ConstExprHashingUtils::HashString("ALBRequestCountPerTarget");
        static constexpr uint32_t RDSReaderAverageCPUUtilization_HASH = ConstExprHashingUtils::HashString("RDSReaderAverageCPUUtilization");
        static constexpr uint32_t RDSReaderAverageDatabaseConnections_HASH = ConstExprHashingUtils::HashString("RDSReaderAverageDatabaseConnections");
        static constexpr uint32_t EC2SpotFleetRequestAverageCPUUtilization_HASH = ConstExprHashingUtils::HashString("EC2SpotFleetRequestAverageCPUUtilization");
        static constexpr uint32_t EC2SpotFleetRequestAverageNetworkIn_HASH = ConstExprHashingUtils::HashString("EC2SpotFleetRequestAverageNetworkIn");
        static constexpr uint32_t EC2SpotFleetRequestAverageNetworkOut_HASH = ConstExprHashingUtils::HashString("EC2SpotFleetRequestAverageNetworkOut");
        static constexpr uint32_t SageMakerVariantInvocationsPerInstance_HASH = ConstExprHashingUtils::HashString("SageMakerVariantInvocationsPerInstance");
        static constexpr uint32_t ECSServiceAverageCPUUtilization_HASH = ConstExprHashingUtils::HashString("ECSServiceAverageCPUUtilization");
        static constexpr uint32_t ECSServiceAverageMemoryUtilization_HASH = ConstExprHashingUtils::HashString("ECSServiceAverageMemoryUtilization");
        static constexpr uint32_t AppStreamAverageCapacityUtilization_HASH = ConstExprHashingUtils::HashString("AppStreamAverageCapacityUtilization");
        static constexpr uint32_t ComprehendInferenceUtilization_HASH = ConstExprHashingUtils::HashString("ComprehendInferenceUtilization");
        static constexpr uint32_t LambdaProvisionedConcurrencyUtilization_HASH = ConstExprHashingUtils::HashString("LambdaProvisionedConcurrencyUtilization");
        static constexpr uint32_t CassandraReadCapacityUtilization_HASH = ConstExprHashingUtils::HashString("CassandraReadCapacityUtilization");
        static constexpr uint32_t CassandraWriteCapacityUtilization_HASH = ConstExprHashingUtils::HashString("CassandraWriteCapacityUtilization");
        static constexpr uint32_t KafkaBrokerStorageUtilization_HASH = ConstExprHashingUtils::HashString("KafkaBrokerStorageUtilization");
        static constexpr uint32_t ElastiCachePrimaryEngineCPUUtilization_HASH = ConstExprHashingUtils::HashString("ElastiCachePrimaryEngineCPUUtilization");
        static constexpr uint32_t ElastiCacheReplicaEngineCPUUtilization_HASH = ConstExprHashingUtils::HashString("ElastiCacheReplicaEngineCPUUtilization");
        static constexpr uint32_t ElastiCacheDatabaseMemoryUsageCountedForEvictPercentage_HASH = ConstExprHashingUtils::HashString("ElastiCacheDatabaseMemoryUsageCountedForEvictPercentage");
        static constexpr uint32_t NeptuneReaderAverageCPUUtilization_HASH = ConstExprHashingUtils::HashString("NeptuneReaderAverageCPUUtilization");
        static constexpr uint32_t SageMakerVariantProvisionedConcurrencyUtilization_HASH = ConstExprHashingUtils::HashString("SageMakerVariantProvisionedConcurrencyUtilization");
        static constexpr uint32_t ElastiCacheDatabaseCapacityUsageCountedForEvictPercentage_HASH = ConstExprHashingUtils::HashString("ElastiCacheDatabaseCapacityUsageCountedForEvictPercentage");


        MetricType GetMetricTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == AppStreamAverageCapacityUtilization_HASH)
          {
            return MetricType::AppStreamAverageCapacityUtilization;
          }
          else if (hashCode == ComprehendInferenceUtilization_HASH)
          {
            return MetricType::ComprehendInferenceUtilization;
          }
          else if (hashCode == LambdaProvisionedConcurrencyUtilization_HASH)
          {
            return MetricType::LambdaProvisionedConcurrencyUtilization;
          }
          else if (hashCode == CassandraReadCapacityUtilization_HASH)
          {
            return MetricType::CassandraReadCapacityUtilization;
          }
          else if (hashCode == CassandraWriteCapacityUtilization_HASH)
          {
            return MetricType::CassandraWriteCapacityUtilization;
          }
          else if (hashCode == KafkaBrokerStorageUtilization_HASH)
          {
            return MetricType::KafkaBrokerStorageUtilization;
          }
          else if (hashCode == ElastiCachePrimaryEngineCPUUtilization_HASH)
          {
            return MetricType::ElastiCachePrimaryEngineCPUUtilization;
          }
          else if (hashCode == ElastiCacheReplicaEngineCPUUtilization_HASH)
          {
            return MetricType::ElastiCacheReplicaEngineCPUUtilization;
          }
          else if (hashCode == ElastiCacheDatabaseMemoryUsageCountedForEvictPercentage_HASH)
          {
            return MetricType::ElastiCacheDatabaseMemoryUsageCountedForEvictPercentage;
          }
          else if (hashCode == NeptuneReaderAverageCPUUtilization_HASH)
          {
            return MetricType::NeptuneReaderAverageCPUUtilization;
          }
          else if (hashCode == SageMakerVariantProvisionedConcurrencyUtilization_HASH)
          {
            return MetricType::SageMakerVariantProvisionedConcurrencyUtilization;
          }
          else if (hashCode == ElastiCacheDatabaseCapacityUsageCountedForEvictPercentage_HASH)
          {
            return MetricType::ElastiCacheDatabaseCapacityUsageCountedForEvictPercentage;
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
          case MetricType::NOT_SET:
            return {};
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
          case MetricType::AppStreamAverageCapacityUtilization:
            return "AppStreamAverageCapacityUtilization";
          case MetricType::ComprehendInferenceUtilization:
            return "ComprehendInferenceUtilization";
          case MetricType::LambdaProvisionedConcurrencyUtilization:
            return "LambdaProvisionedConcurrencyUtilization";
          case MetricType::CassandraReadCapacityUtilization:
            return "CassandraReadCapacityUtilization";
          case MetricType::CassandraWriteCapacityUtilization:
            return "CassandraWriteCapacityUtilization";
          case MetricType::KafkaBrokerStorageUtilization:
            return "KafkaBrokerStorageUtilization";
          case MetricType::ElastiCachePrimaryEngineCPUUtilization:
            return "ElastiCachePrimaryEngineCPUUtilization";
          case MetricType::ElastiCacheReplicaEngineCPUUtilization:
            return "ElastiCacheReplicaEngineCPUUtilization";
          case MetricType::ElastiCacheDatabaseMemoryUsageCountedForEvictPercentage:
            return "ElastiCacheDatabaseMemoryUsageCountedForEvictPercentage";
          case MetricType::NeptuneReaderAverageCPUUtilization:
            return "NeptuneReaderAverageCPUUtilization";
          case MetricType::SageMakerVariantProvisionedConcurrencyUtilization:
            return "SageMakerVariantProvisionedConcurrencyUtilization";
          case MetricType::ElastiCacheDatabaseCapacityUsageCountedForEvictPercentage:
            return "ElastiCacheDatabaseCapacityUsageCountedForEvictPercentage";
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
