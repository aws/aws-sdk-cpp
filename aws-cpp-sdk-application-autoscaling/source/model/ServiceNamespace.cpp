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

        static const int ecs_HASH = HashingUtils::HashString("ecs");
        static const int elasticmapreduce_HASH = HashingUtils::HashString("elasticmapreduce");
        static const int ec2_HASH = HashingUtils::HashString("ec2");
        static const int appstream_HASH = HashingUtils::HashString("appstream");
        static const int dynamodb_HASH = HashingUtils::HashString("dynamodb");
        static const int rds_HASH = HashingUtils::HashString("rds");
        static const int sagemaker_HASH = HashingUtils::HashString("sagemaker");
        static const int custom_resource_HASH = HashingUtils::HashString("custom-resource");
        static const int comprehend_HASH = HashingUtils::HashString("comprehend");
        static const int lambda_HASH = HashingUtils::HashString("lambda");
        static const int cassandra_HASH = HashingUtils::HashString("cassandra");
        static const int kafka_HASH = HashingUtils::HashString("kafka");


        ServiceNamespace GetServiceNamespaceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
