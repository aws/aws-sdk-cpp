/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/ScalableDimension.h>
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
      namespace ScalableDimensionMapper
      {

        static constexpr uint32_t ecs_service_DesiredCount_HASH = ConstExprHashingUtils::HashString("ecs:service:DesiredCount");
        static constexpr uint32_t ec2_spot_fleet_request_TargetCapacity_HASH = ConstExprHashingUtils::HashString("ec2:spot-fleet-request:TargetCapacity");
        static constexpr uint32_t elasticmapreduce_instancegroup_InstanceCount_HASH = ConstExprHashingUtils::HashString("elasticmapreduce:instancegroup:InstanceCount");
        static constexpr uint32_t appstream_fleet_DesiredCapacity_HASH = ConstExprHashingUtils::HashString("appstream:fleet:DesiredCapacity");
        static constexpr uint32_t dynamodb_table_ReadCapacityUnits_HASH = ConstExprHashingUtils::HashString("dynamodb:table:ReadCapacityUnits");
        static constexpr uint32_t dynamodb_table_WriteCapacityUnits_HASH = ConstExprHashingUtils::HashString("dynamodb:table:WriteCapacityUnits");
        static constexpr uint32_t dynamodb_index_ReadCapacityUnits_HASH = ConstExprHashingUtils::HashString("dynamodb:index:ReadCapacityUnits");
        static constexpr uint32_t dynamodb_index_WriteCapacityUnits_HASH = ConstExprHashingUtils::HashString("dynamodb:index:WriteCapacityUnits");
        static constexpr uint32_t rds_cluster_ReadReplicaCount_HASH = ConstExprHashingUtils::HashString("rds:cluster:ReadReplicaCount");
        static constexpr uint32_t sagemaker_variant_DesiredInstanceCount_HASH = ConstExprHashingUtils::HashString("sagemaker:variant:DesiredInstanceCount");
        static constexpr uint32_t custom_resource_ResourceType_Property_HASH = ConstExprHashingUtils::HashString("custom-resource:ResourceType:Property");
        static constexpr uint32_t comprehend_document_classifier_endpoint_DesiredInferenceUnits_HASH = ConstExprHashingUtils::HashString("comprehend:document-classifier-endpoint:DesiredInferenceUnits");
        static constexpr uint32_t comprehend_entity_recognizer_endpoint_DesiredInferenceUnits_HASH = ConstExprHashingUtils::HashString("comprehend:entity-recognizer-endpoint:DesiredInferenceUnits");
        static constexpr uint32_t lambda_function_ProvisionedConcurrency_HASH = ConstExprHashingUtils::HashString("lambda:function:ProvisionedConcurrency");
        static constexpr uint32_t cassandra_table_ReadCapacityUnits_HASH = ConstExprHashingUtils::HashString("cassandra:table:ReadCapacityUnits");
        static constexpr uint32_t cassandra_table_WriteCapacityUnits_HASH = ConstExprHashingUtils::HashString("cassandra:table:WriteCapacityUnits");
        static constexpr uint32_t kafka_broker_storage_VolumeSize_HASH = ConstExprHashingUtils::HashString("kafka:broker-storage:VolumeSize");
        static constexpr uint32_t elasticache_replication_group_NodeGroups_HASH = ConstExprHashingUtils::HashString("elasticache:replication-group:NodeGroups");
        static constexpr uint32_t elasticache_replication_group_Replicas_HASH = ConstExprHashingUtils::HashString("elasticache:replication-group:Replicas");
        static constexpr uint32_t neptune_cluster_ReadReplicaCount_HASH = ConstExprHashingUtils::HashString("neptune:cluster:ReadReplicaCount");
        static constexpr uint32_t sagemaker_variant_DesiredProvisionedConcurrency_HASH = ConstExprHashingUtils::HashString("sagemaker:variant:DesiredProvisionedConcurrency");


        ScalableDimension GetScalableDimensionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ecs_service_DesiredCount_HASH)
          {
            return ScalableDimension::ecs_service_DesiredCount;
          }
          else if (hashCode == ec2_spot_fleet_request_TargetCapacity_HASH)
          {
            return ScalableDimension::ec2_spot_fleet_request_TargetCapacity;
          }
          else if (hashCode == elasticmapreduce_instancegroup_InstanceCount_HASH)
          {
            return ScalableDimension::elasticmapreduce_instancegroup_InstanceCount;
          }
          else if (hashCode == appstream_fleet_DesiredCapacity_HASH)
          {
            return ScalableDimension::appstream_fleet_DesiredCapacity;
          }
          else if (hashCode == dynamodb_table_ReadCapacityUnits_HASH)
          {
            return ScalableDimension::dynamodb_table_ReadCapacityUnits;
          }
          else if (hashCode == dynamodb_table_WriteCapacityUnits_HASH)
          {
            return ScalableDimension::dynamodb_table_WriteCapacityUnits;
          }
          else if (hashCode == dynamodb_index_ReadCapacityUnits_HASH)
          {
            return ScalableDimension::dynamodb_index_ReadCapacityUnits;
          }
          else if (hashCode == dynamodb_index_WriteCapacityUnits_HASH)
          {
            return ScalableDimension::dynamodb_index_WriteCapacityUnits;
          }
          else if (hashCode == rds_cluster_ReadReplicaCount_HASH)
          {
            return ScalableDimension::rds_cluster_ReadReplicaCount;
          }
          else if (hashCode == sagemaker_variant_DesiredInstanceCount_HASH)
          {
            return ScalableDimension::sagemaker_variant_DesiredInstanceCount;
          }
          else if (hashCode == custom_resource_ResourceType_Property_HASH)
          {
            return ScalableDimension::custom_resource_ResourceType_Property;
          }
          else if (hashCode == comprehend_document_classifier_endpoint_DesiredInferenceUnits_HASH)
          {
            return ScalableDimension::comprehend_document_classifier_endpoint_DesiredInferenceUnits;
          }
          else if (hashCode == comprehend_entity_recognizer_endpoint_DesiredInferenceUnits_HASH)
          {
            return ScalableDimension::comprehend_entity_recognizer_endpoint_DesiredInferenceUnits;
          }
          else if (hashCode == lambda_function_ProvisionedConcurrency_HASH)
          {
            return ScalableDimension::lambda_function_ProvisionedConcurrency;
          }
          else if (hashCode == cassandra_table_ReadCapacityUnits_HASH)
          {
            return ScalableDimension::cassandra_table_ReadCapacityUnits;
          }
          else if (hashCode == cassandra_table_WriteCapacityUnits_HASH)
          {
            return ScalableDimension::cassandra_table_WriteCapacityUnits;
          }
          else if (hashCode == kafka_broker_storage_VolumeSize_HASH)
          {
            return ScalableDimension::kafka_broker_storage_VolumeSize;
          }
          else if (hashCode == elasticache_replication_group_NodeGroups_HASH)
          {
            return ScalableDimension::elasticache_replication_group_NodeGroups;
          }
          else if (hashCode == elasticache_replication_group_Replicas_HASH)
          {
            return ScalableDimension::elasticache_replication_group_Replicas;
          }
          else if (hashCode == neptune_cluster_ReadReplicaCount_HASH)
          {
            return ScalableDimension::neptune_cluster_ReadReplicaCount;
          }
          else if (hashCode == sagemaker_variant_DesiredProvisionedConcurrency_HASH)
          {
            return ScalableDimension::sagemaker_variant_DesiredProvisionedConcurrency;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScalableDimension>(hashCode);
          }

          return ScalableDimension::NOT_SET;
        }

        Aws::String GetNameForScalableDimension(ScalableDimension enumValue)
        {
          switch(enumValue)
          {
          case ScalableDimension::NOT_SET:
            return {};
          case ScalableDimension::ecs_service_DesiredCount:
            return "ecs:service:DesiredCount";
          case ScalableDimension::ec2_spot_fleet_request_TargetCapacity:
            return "ec2:spot-fleet-request:TargetCapacity";
          case ScalableDimension::elasticmapreduce_instancegroup_InstanceCount:
            return "elasticmapreduce:instancegroup:InstanceCount";
          case ScalableDimension::appstream_fleet_DesiredCapacity:
            return "appstream:fleet:DesiredCapacity";
          case ScalableDimension::dynamodb_table_ReadCapacityUnits:
            return "dynamodb:table:ReadCapacityUnits";
          case ScalableDimension::dynamodb_table_WriteCapacityUnits:
            return "dynamodb:table:WriteCapacityUnits";
          case ScalableDimension::dynamodb_index_ReadCapacityUnits:
            return "dynamodb:index:ReadCapacityUnits";
          case ScalableDimension::dynamodb_index_WriteCapacityUnits:
            return "dynamodb:index:WriteCapacityUnits";
          case ScalableDimension::rds_cluster_ReadReplicaCount:
            return "rds:cluster:ReadReplicaCount";
          case ScalableDimension::sagemaker_variant_DesiredInstanceCount:
            return "sagemaker:variant:DesiredInstanceCount";
          case ScalableDimension::custom_resource_ResourceType_Property:
            return "custom-resource:ResourceType:Property";
          case ScalableDimension::comprehend_document_classifier_endpoint_DesiredInferenceUnits:
            return "comprehend:document-classifier-endpoint:DesiredInferenceUnits";
          case ScalableDimension::comprehend_entity_recognizer_endpoint_DesiredInferenceUnits:
            return "comprehend:entity-recognizer-endpoint:DesiredInferenceUnits";
          case ScalableDimension::lambda_function_ProvisionedConcurrency:
            return "lambda:function:ProvisionedConcurrency";
          case ScalableDimension::cassandra_table_ReadCapacityUnits:
            return "cassandra:table:ReadCapacityUnits";
          case ScalableDimension::cassandra_table_WriteCapacityUnits:
            return "cassandra:table:WriteCapacityUnits";
          case ScalableDimension::kafka_broker_storage_VolumeSize:
            return "kafka:broker-storage:VolumeSize";
          case ScalableDimension::elasticache_replication_group_NodeGroups:
            return "elasticache:replication-group:NodeGroups";
          case ScalableDimension::elasticache_replication_group_Replicas:
            return "elasticache:replication-group:Replicas";
          case ScalableDimension::neptune_cluster_ReadReplicaCount:
            return "neptune:cluster:ReadReplicaCount";
          case ScalableDimension::sagemaker_variant_DesiredProvisionedConcurrency:
            return "sagemaker:variant:DesiredProvisionedConcurrency";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScalableDimensionMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
