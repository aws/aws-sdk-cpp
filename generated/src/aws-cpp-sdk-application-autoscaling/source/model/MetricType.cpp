﻿/**
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
        static const int AppStreamAverageCapacityUtilization_HASH = HashingUtils::HashString("AppStreamAverageCapacityUtilization");
        static const int ComprehendInferenceUtilization_HASH = HashingUtils::HashString("ComprehendInferenceUtilization");
        static const int LambdaProvisionedConcurrencyUtilization_HASH = HashingUtils::HashString("LambdaProvisionedConcurrencyUtilization");
        static const int CassandraReadCapacityUtilization_HASH = HashingUtils::HashString("CassandraReadCapacityUtilization");
        static const int CassandraWriteCapacityUtilization_HASH = HashingUtils::HashString("CassandraWriteCapacityUtilization");
        static const int KafkaBrokerStorageUtilization_HASH = HashingUtils::HashString("KafkaBrokerStorageUtilization");
        static const int ElastiCacheEngineCPUUtilization_HASH = HashingUtils::HashString("ElastiCacheEngineCPUUtilization");
        static const int ElastiCacheDatabaseMemoryUsagePercentage_HASH = HashingUtils::HashString("ElastiCacheDatabaseMemoryUsagePercentage");
        static const int ElastiCachePrimaryEngineCPUUtilization_HASH = HashingUtils::HashString("ElastiCachePrimaryEngineCPUUtilization");
        static const int ElastiCacheReplicaEngineCPUUtilization_HASH = HashingUtils::HashString("ElastiCacheReplicaEngineCPUUtilization");
        static const int ElastiCacheDatabaseMemoryUsageCountedForEvictPercentage_HASH = HashingUtils::HashString("ElastiCacheDatabaseMemoryUsageCountedForEvictPercentage");
        static const int NeptuneReaderAverageCPUUtilization_HASH = HashingUtils::HashString("NeptuneReaderAverageCPUUtilization");
        static const int SageMakerVariantProvisionedConcurrencyUtilization_HASH = HashingUtils::HashString("SageMakerVariantProvisionedConcurrencyUtilization");
        static const int ElastiCacheDatabaseCapacityUsageCountedForEvictPercentage_HASH = HashingUtils::HashString("ElastiCacheDatabaseCapacityUsageCountedForEvictPercentage");
        static const int SageMakerInferenceComponentInvocationsPerCopy_HASH = HashingUtils::HashString("SageMakerInferenceComponentInvocationsPerCopy");
        static const int WorkSpacesAverageUserSessionsCapacityUtilization_HASH = HashingUtils::HashString("WorkSpacesAverageUserSessionsCapacityUtilization");
        static const int SageMakerInferenceComponentConcurrentRequestsPerCopyHighResolution_HASH = HashingUtils::HashString("SageMakerInferenceComponentConcurrentRequestsPerCopyHighResolution");
        static const int SageMakerVariantConcurrentRequestsPerModelHighResolution_HASH = HashingUtils::HashString("SageMakerVariantConcurrentRequestsPerModelHighResolution");


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
          else if (hashCode == ElastiCacheEngineCPUUtilization_HASH)
          {
            return MetricType::ElastiCacheEngineCPUUtilization;
          }
          else if (hashCode == ElastiCacheDatabaseMemoryUsagePercentage_HASH)
          {
            return MetricType::ElastiCacheDatabaseMemoryUsagePercentage;
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
          else if (hashCode == SageMakerInferenceComponentInvocationsPerCopy_HASH)
          {
            return MetricType::SageMakerInferenceComponentInvocationsPerCopy;
          }
          else if (hashCode == WorkSpacesAverageUserSessionsCapacityUtilization_HASH)
          {
            return MetricType::WorkSpacesAverageUserSessionsCapacityUtilization;
          }
          else if (hashCode == SageMakerInferenceComponentConcurrentRequestsPerCopyHighResolution_HASH)
          {
            return MetricType::SageMakerInferenceComponentConcurrentRequestsPerCopyHighResolution;
          }
          else if (hashCode == SageMakerVariantConcurrentRequestsPerModelHighResolution_HASH)
          {
            return MetricType::SageMakerVariantConcurrentRequestsPerModelHighResolution;
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
          case MetricType::ElastiCacheEngineCPUUtilization:
            return "ElastiCacheEngineCPUUtilization";
          case MetricType::ElastiCacheDatabaseMemoryUsagePercentage:
            return "ElastiCacheDatabaseMemoryUsagePercentage";
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
          case MetricType::SageMakerInferenceComponentInvocationsPerCopy:
            return "SageMakerInferenceComponentInvocationsPerCopy";
          case MetricType::WorkSpacesAverageUserSessionsCapacityUtilization:
            return "WorkSpacesAverageUserSessionsCapacityUtilization";
          case MetricType::SageMakerInferenceComponentConcurrentRequestsPerCopyHighResolution:
            return "SageMakerInferenceComponentConcurrentRequestsPerCopyHighResolution";
          case MetricType::SageMakerVariantConcurrentRequestsPerModelHighResolution:
            return "SageMakerVariantConcurrentRequestsPerModelHighResolution";
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
