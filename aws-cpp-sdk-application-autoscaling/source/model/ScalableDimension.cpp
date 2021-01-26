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

        static const int ecs_service_DesiredCount_HASH = HashingUtils::HashString("ecs:service:DesiredCount");
        static const int ec2_spot_fleet_request_TargetCapacity_HASH = HashingUtils::HashString("ec2:spot-fleet-request:TargetCapacity");
        static const int elasticmapreduce_instancegroup_InstanceCount_HASH = HashingUtils::HashString("elasticmapreduce:instancegroup:InstanceCount");
        static const int appstream_fleet_DesiredCapacity_HASH = HashingUtils::HashString("appstream:fleet:DesiredCapacity");
        static const int dynamodb_table_ReadCapacityUnits_HASH = HashingUtils::HashString("dynamodb:table:ReadCapacityUnits");
        static const int dynamodb_table_WriteCapacityUnits_HASH = HashingUtils::HashString("dynamodb:table:WriteCapacityUnits");
        static const int dynamodb_index_ReadCapacityUnits_HASH = HashingUtils::HashString("dynamodb:index:ReadCapacityUnits");
        static const int dynamodb_index_WriteCapacityUnits_HASH = HashingUtils::HashString("dynamodb:index:WriteCapacityUnits");
        static const int rds_cluster_ReadReplicaCount_HASH = HashingUtils::HashString("rds:cluster:ReadReplicaCount");
        static const int sagemaker_variant_DesiredInstanceCount_HASH = HashingUtils::HashString("sagemaker:variant:DesiredInstanceCount");
        static const int custom_resource_ResourceType_Property_HASH = HashingUtils::HashString("custom-resource:ResourceType:Property");
        static const int comprehend_document_classifier_endpoint_DesiredInferenceUnits_HASH = HashingUtils::HashString("comprehend:document-classifier-endpoint:DesiredInferenceUnits");
        static const int comprehend_entity_recognizer_endpoint_DesiredInferenceUnits_HASH = HashingUtils::HashString("comprehend:entity-recognizer-endpoint:DesiredInferenceUnits");
        static const int lambda_function_ProvisionedConcurrency_HASH = HashingUtils::HashString("lambda:function:ProvisionedConcurrency");
        static const int cassandra_table_ReadCapacityUnits_HASH = HashingUtils::HashString("cassandra:table:ReadCapacityUnits");
        static const int cassandra_table_WriteCapacityUnits_HASH = HashingUtils::HashString("cassandra:table:WriteCapacityUnits");
        static const int kafka_broker_storage_VolumeSize_HASH = HashingUtils::HashString("kafka:broker-storage:VolumeSize");


        ScalableDimension GetScalableDimensionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
