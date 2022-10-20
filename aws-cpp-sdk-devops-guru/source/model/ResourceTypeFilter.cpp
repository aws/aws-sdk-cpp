/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/ResourceTypeFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace ResourceTypeFilterMapper
      {

        static const int LOG_GROUPS_HASH = HashingUtils::HashString("LOG_GROUPS");
        static const int CLOUDFRONT_DISTRIBUTION_HASH = HashingUtils::HashString("CLOUDFRONT_DISTRIBUTION");
        static const int DYNAMODB_TABLE_HASH = HashingUtils::HashString("DYNAMODB_TABLE");
        static const int EC2_NAT_GATEWAY_HASH = HashingUtils::HashString("EC2_NAT_GATEWAY");
        static const int ECS_CLUSTER_HASH = HashingUtils::HashString("ECS_CLUSTER");
        static const int ECS_SERVICE_HASH = HashingUtils::HashString("ECS_SERVICE");
        static const int EKS_CLUSTER_HASH = HashingUtils::HashString("EKS_CLUSTER");
        static const int ELASTIC_BEANSTALK_ENVIRONMENT_HASH = HashingUtils::HashString("ELASTIC_BEANSTALK_ENVIRONMENT");
        static const int ELASTIC_LOAD_BALANCER_LOAD_BALANCER_HASH = HashingUtils::HashString("ELASTIC_LOAD_BALANCER_LOAD_BALANCER");
        static const int ELASTIC_LOAD_BALANCING_V2_LOAD_BALANCER_HASH = HashingUtils::HashString("ELASTIC_LOAD_BALANCING_V2_LOAD_BALANCER");
        static const int ELASTIC_LOAD_BALANCING_V2_TARGET_GROUP_HASH = HashingUtils::HashString("ELASTIC_LOAD_BALANCING_V2_TARGET_GROUP");
        static const int ELASTICACHE_CACHE_CLUSTER_HASH = HashingUtils::HashString("ELASTICACHE_CACHE_CLUSTER");
        static const int ELASTICSEARCH_DOMAIN_HASH = HashingUtils::HashString("ELASTICSEARCH_DOMAIN");
        static const int KINESIS_STREAM_HASH = HashingUtils::HashString("KINESIS_STREAM");
        static const int LAMBDA_FUNCTION_HASH = HashingUtils::HashString("LAMBDA_FUNCTION");
        static const int OPEN_SEARCH_SERVICE_DOMAIN_HASH = HashingUtils::HashString("OPEN_SEARCH_SERVICE_DOMAIN");
        static const int RDS_DB_INSTANCE_HASH = HashingUtils::HashString("RDS_DB_INSTANCE");
        static const int RDS_DB_CLUSTER_HASH = HashingUtils::HashString("RDS_DB_CLUSTER");
        static const int REDSHIFT_CLUSTER_HASH = HashingUtils::HashString("REDSHIFT_CLUSTER");
        static const int ROUTE53_HOSTED_ZONE_HASH = HashingUtils::HashString("ROUTE53_HOSTED_ZONE");
        static const int ROUTE53_HEALTH_CHECK_HASH = HashingUtils::HashString("ROUTE53_HEALTH_CHECK");
        static const int S3_BUCKET_HASH = HashingUtils::HashString("S3_BUCKET");
        static const int SAGEMAKER_ENDPOINT_HASH = HashingUtils::HashString("SAGEMAKER_ENDPOINT");
        static const int SNS_TOPIC_HASH = HashingUtils::HashString("SNS_TOPIC");
        static const int SQS_QUEUE_HASH = HashingUtils::HashString("SQS_QUEUE");
        static const int STEP_FUNCTIONS_ACTIVITY_HASH = HashingUtils::HashString("STEP_FUNCTIONS_ACTIVITY");
        static const int STEP_FUNCTIONS_STATE_MACHINE_HASH = HashingUtils::HashString("STEP_FUNCTIONS_STATE_MACHINE");


        ResourceTypeFilter GetResourceTypeFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOG_GROUPS_HASH)
          {
            return ResourceTypeFilter::LOG_GROUPS;
          }
          else if (hashCode == CLOUDFRONT_DISTRIBUTION_HASH)
          {
            return ResourceTypeFilter::CLOUDFRONT_DISTRIBUTION;
          }
          else if (hashCode == DYNAMODB_TABLE_HASH)
          {
            return ResourceTypeFilter::DYNAMODB_TABLE;
          }
          else if (hashCode == EC2_NAT_GATEWAY_HASH)
          {
            return ResourceTypeFilter::EC2_NAT_GATEWAY;
          }
          else if (hashCode == ECS_CLUSTER_HASH)
          {
            return ResourceTypeFilter::ECS_CLUSTER;
          }
          else if (hashCode == ECS_SERVICE_HASH)
          {
            return ResourceTypeFilter::ECS_SERVICE;
          }
          else if (hashCode == EKS_CLUSTER_HASH)
          {
            return ResourceTypeFilter::EKS_CLUSTER;
          }
          else if (hashCode == ELASTIC_BEANSTALK_ENVIRONMENT_HASH)
          {
            return ResourceTypeFilter::ELASTIC_BEANSTALK_ENVIRONMENT;
          }
          else if (hashCode == ELASTIC_LOAD_BALANCER_LOAD_BALANCER_HASH)
          {
            return ResourceTypeFilter::ELASTIC_LOAD_BALANCER_LOAD_BALANCER;
          }
          else if (hashCode == ELASTIC_LOAD_BALANCING_V2_LOAD_BALANCER_HASH)
          {
            return ResourceTypeFilter::ELASTIC_LOAD_BALANCING_V2_LOAD_BALANCER;
          }
          else if (hashCode == ELASTIC_LOAD_BALANCING_V2_TARGET_GROUP_HASH)
          {
            return ResourceTypeFilter::ELASTIC_LOAD_BALANCING_V2_TARGET_GROUP;
          }
          else if (hashCode == ELASTICACHE_CACHE_CLUSTER_HASH)
          {
            return ResourceTypeFilter::ELASTICACHE_CACHE_CLUSTER;
          }
          else if (hashCode == ELASTICSEARCH_DOMAIN_HASH)
          {
            return ResourceTypeFilter::ELASTICSEARCH_DOMAIN;
          }
          else if (hashCode == KINESIS_STREAM_HASH)
          {
            return ResourceTypeFilter::KINESIS_STREAM;
          }
          else if (hashCode == LAMBDA_FUNCTION_HASH)
          {
            return ResourceTypeFilter::LAMBDA_FUNCTION;
          }
          else if (hashCode == OPEN_SEARCH_SERVICE_DOMAIN_HASH)
          {
            return ResourceTypeFilter::OPEN_SEARCH_SERVICE_DOMAIN;
          }
          else if (hashCode == RDS_DB_INSTANCE_HASH)
          {
            return ResourceTypeFilter::RDS_DB_INSTANCE;
          }
          else if (hashCode == RDS_DB_CLUSTER_HASH)
          {
            return ResourceTypeFilter::RDS_DB_CLUSTER;
          }
          else if (hashCode == REDSHIFT_CLUSTER_HASH)
          {
            return ResourceTypeFilter::REDSHIFT_CLUSTER;
          }
          else if (hashCode == ROUTE53_HOSTED_ZONE_HASH)
          {
            return ResourceTypeFilter::ROUTE53_HOSTED_ZONE;
          }
          else if (hashCode == ROUTE53_HEALTH_CHECK_HASH)
          {
            return ResourceTypeFilter::ROUTE53_HEALTH_CHECK;
          }
          else if (hashCode == S3_BUCKET_HASH)
          {
            return ResourceTypeFilter::S3_BUCKET;
          }
          else if (hashCode == SAGEMAKER_ENDPOINT_HASH)
          {
            return ResourceTypeFilter::SAGEMAKER_ENDPOINT;
          }
          else if (hashCode == SNS_TOPIC_HASH)
          {
            return ResourceTypeFilter::SNS_TOPIC;
          }
          else if (hashCode == SQS_QUEUE_HASH)
          {
            return ResourceTypeFilter::SQS_QUEUE;
          }
          else if (hashCode == STEP_FUNCTIONS_ACTIVITY_HASH)
          {
            return ResourceTypeFilter::STEP_FUNCTIONS_ACTIVITY;
          }
          else if (hashCode == STEP_FUNCTIONS_STATE_MACHINE_HASH)
          {
            return ResourceTypeFilter::STEP_FUNCTIONS_STATE_MACHINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceTypeFilter>(hashCode);
          }

          return ResourceTypeFilter::NOT_SET;
        }

        Aws::String GetNameForResourceTypeFilter(ResourceTypeFilter enumValue)
        {
          switch(enumValue)
          {
          case ResourceTypeFilter::LOG_GROUPS:
            return "LOG_GROUPS";
          case ResourceTypeFilter::CLOUDFRONT_DISTRIBUTION:
            return "CLOUDFRONT_DISTRIBUTION";
          case ResourceTypeFilter::DYNAMODB_TABLE:
            return "DYNAMODB_TABLE";
          case ResourceTypeFilter::EC2_NAT_GATEWAY:
            return "EC2_NAT_GATEWAY";
          case ResourceTypeFilter::ECS_CLUSTER:
            return "ECS_CLUSTER";
          case ResourceTypeFilter::ECS_SERVICE:
            return "ECS_SERVICE";
          case ResourceTypeFilter::EKS_CLUSTER:
            return "EKS_CLUSTER";
          case ResourceTypeFilter::ELASTIC_BEANSTALK_ENVIRONMENT:
            return "ELASTIC_BEANSTALK_ENVIRONMENT";
          case ResourceTypeFilter::ELASTIC_LOAD_BALANCER_LOAD_BALANCER:
            return "ELASTIC_LOAD_BALANCER_LOAD_BALANCER";
          case ResourceTypeFilter::ELASTIC_LOAD_BALANCING_V2_LOAD_BALANCER:
            return "ELASTIC_LOAD_BALANCING_V2_LOAD_BALANCER";
          case ResourceTypeFilter::ELASTIC_LOAD_BALANCING_V2_TARGET_GROUP:
            return "ELASTIC_LOAD_BALANCING_V2_TARGET_GROUP";
          case ResourceTypeFilter::ELASTICACHE_CACHE_CLUSTER:
            return "ELASTICACHE_CACHE_CLUSTER";
          case ResourceTypeFilter::ELASTICSEARCH_DOMAIN:
            return "ELASTICSEARCH_DOMAIN";
          case ResourceTypeFilter::KINESIS_STREAM:
            return "KINESIS_STREAM";
          case ResourceTypeFilter::LAMBDA_FUNCTION:
            return "LAMBDA_FUNCTION";
          case ResourceTypeFilter::OPEN_SEARCH_SERVICE_DOMAIN:
            return "OPEN_SEARCH_SERVICE_DOMAIN";
          case ResourceTypeFilter::RDS_DB_INSTANCE:
            return "RDS_DB_INSTANCE";
          case ResourceTypeFilter::RDS_DB_CLUSTER:
            return "RDS_DB_CLUSTER";
          case ResourceTypeFilter::REDSHIFT_CLUSTER:
            return "REDSHIFT_CLUSTER";
          case ResourceTypeFilter::ROUTE53_HOSTED_ZONE:
            return "ROUTE53_HOSTED_ZONE";
          case ResourceTypeFilter::ROUTE53_HEALTH_CHECK:
            return "ROUTE53_HEALTH_CHECK";
          case ResourceTypeFilter::S3_BUCKET:
            return "S3_BUCKET";
          case ResourceTypeFilter::SAGEMAKER_ENDPOINT:
            return "SAGEMAKER_ENDPOINT";
          case ResourceTypeFilter::SNS_TOPIC:
            return "SNS_TOPIC";
          case ResourceTypeFilter::SQS_QUEUE:
            return "SQS_QUEUE";
          case ResourceTypeFilter::STEP_FUNCTIONS_ACTIVITY:
            return "STEP_FUNCTIONS_ACTIVITY";
          case ResourceTypeFilter::STEP_FUNCTIONS_STATE_MACHINE:
            return "STEP_FUNCTIONS_STATE_MACHINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceTypeFilterMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
