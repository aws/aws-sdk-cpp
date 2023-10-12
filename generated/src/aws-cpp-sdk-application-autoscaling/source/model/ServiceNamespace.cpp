/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/ServiceNamespace.h>
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
      namespace ServiceNamespaceMapper
      {

        static constexpr uint32_t ecs_HASH = ConstExprHashingUtils::HashString("ecs");
        static constexpr uint32_t elasticmapreduce_HASH = ConstExprHashingUtils::HashString("elasticmapreduce");
        static constexpr uint32_t ec2_HASH = ConstExprHashingUtils::HashString("ec2");
        static constexpr uint32_t appstream_HASH = ConstExprHashingUtils::HashString("appstream");
        static constexpr uint32_t dynamodb_HASH = ConstExprHashingUtils::HashString("dynamodb");
        static constexpr uint32_t rds_HASH = ConstExprHashingUtils::HashString("rds");
        static constexpr uint32_t sagemaker_HASH = ConstExprHashingUtils::HashString("sagemaker");
        static constexpr uint32_t custom_resource_HASH = ConstExprHashingUtils::HashString("custom-resource");
        static constexpr uint32_t comprehend_HASH = ConstExprHashingUtils::HashString("comprehend");
        static constexpr uint32_t lambda_HASH = ConstExprHashingUtils::HashString("lambda");
        static constexpr uint32_t cassandra_HASH = ConstExprHashingUtils::HashString("cassandra");
        static constexpr uint32_t kafka_HASH = ConstExprHashingUtils::HashString("kafka");
        static constexpr uint32_t elasticache_HASH = ConstExprHashingUtils::HashString("elasticache");
        static constexpr uint32_t neptune_HASH = ConstExprHashingUtils::HashString("neptune");


        ServiceNamespace GetServiceNamespaceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ecs_HASH)
          {
            return ServiceNamespace::ecs;
          }
          else if (hashCode == elasticmapreduce_HASH)
          {
            return ServiceNamespace::elasticmapreduce;
          }
          else if (hashCode == ec2_HASH)
          {
            return ServiceNamespace::ec2;
          }
          else if (hashCode == appstream_HASH)
          {
            return ServiceNamespace::appstream;
          }
          else if (hashCode == dynamodb_HASH)
          {
            return ServiceNamespace::dynamodb;
          }
          else if (hashCode == rds_HASH)
          {
            return ServiceNamespace::rds;
          }
          else if (hashCode == sagemaker_HASH)
          {
            return ServiceNamespace::sagemaker;
          }
          else if (hashCode == custom_resource_HASH)
          {
            return ServiceNamespace::custom_resource;
          }
          else if (hashCode == comprehend_HASH)
          {
            return ServiceNamespace::comprehend;
          }
          else if (hashCode == lambda_HASH)
          {
            return ServiceNamespace::lambda;
          }
          else if (hashCode == cassandra_HASH)
          {
            return ServiceNamespace::cassandra;
          }
          else if (hashCode == kafka_HASH)
          {
            return ServiceNamespace::kafka;
          }
          else if (hashCode == elasticache_HASH)
          {
            return ServiceNamespace::elasticache;
          }
          else if (hashCode == neptune_HASH)
          {
            return ServiceNamespace::neptune;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceNamespace>(hashCode);
          }

          return ServiceNamespace::NOT_SET;
        }

        Aws::String GetNameForServiceNamespace(ServiceNamespace enumValue)
        {
          switch(enumValue)
          {
          case ServiceNamespace::NOT_SET:
            return {};
          case ServiceNamespace::ecs:
            return "ecs";
          case ServiceNamespace::elasticmapreduce:
            return "elasticmapreduce";
          case ServiceNamespace::ec2:
            return "ec2";
          case ServiceNamespace::appstream:
            return "appstream";
          case ServiceNamespace::dynamodb:
            return "dynamodb";
          case ServiceNamespace::rds:
            return "rds";
          case ServiceNamespace::sagemaker:
            return "sagemaker";
          case ServiceNamespace::custom_resource:
            return "custom-resource";
          case ServiceNamespace::comprehend:
            return "comprehend";
          case ServiceNamespace::lambda:
            return "lambda";
          case ServiceNamespace::cassandra:
            return "cassandra";
          case ServiceNamespace::kafka:
            return "kafka";
          case ServiceNamespace::elasticache:
            return "elasticache";
          case ServiceNamespace::neptune:
            return "neptune";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceNamespaceMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
