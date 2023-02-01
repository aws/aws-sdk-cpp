/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{
  enum class ResourceTypeFilter
  {
    NOT_SET,
    LOG_GROUPS,
    CLOUDFRONT_DISTRIBUTION,
    DYNAMODB_TABLE,
    EC2_NAT_GATEWAY,
    ECS_CLUSTER,
    ECS_SERVICE,
    EKS_CLUSTER,
    ELASTIC_BEANSTALK_ENVIRONMENT,
    ELASTIC_LOAD_BALANCER_LOAD_BALANCER,
    ELASTIC_LOAD_BALANCING_V2_LOAD_BALANCER,
    ELASTIC_LOAD_BALANCING_V2_TARGET_GROUP,
    ELASTICACHE_CACHE_CLUSTER,
    ELASTICSEARCH_DOMAIN,
    KINESIS_STREAM,
    LAMBDA_FUNCTION,
    OPEN_SEARCH_SERVICE_DOMAIN,
    RDS_DB_INSTANCE,
    RDS_DB_CLUSTER,
    REDSHIFT_CLUSTER,
    ROUTE53_HOSTED_ZONE,
    ROUTE53_HEALTH_CHECK,
    S3_BUCKET,
    SAGEMAKER_ENDPOINT,
    SNS_TOPIC,
    SQS_QUEUE,
    STEP_FUNCTIONS_ACTIVITY,
    STEP_FUNCTIONS_STATE_MACHINE
  };

namespace ResourceTypeFilterMapper
{
AWS_DEVOPSGURU_API ResourceTypeFilter GetResourceTypeFilterForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForResourceTypeFilter(ResourceTypeFilter value);
} // namespace ResourceTypeFilterMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
