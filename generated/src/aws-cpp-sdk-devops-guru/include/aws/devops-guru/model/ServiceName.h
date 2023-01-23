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
  enum class ServiceName
  {
    NOT_SET,
    API_GATEWAY,
    APPLICATION_ELB,
    AUTO_SCALING_GROUP,
    CLOUD_FRONT,
    DYNAMO_DB,
    EC2,
    ECS,
    EKS,
    ELASTIC_BEANSTALK,
    ELASTI_CACHE,
    ELB,
    ES,
    KINESIS,
    LAMBDA,
    NAT_GATEWAY,
    NETWORK_ELB,
    RDS,
    REDSHIFT,
    ROUTE_53,
    S3,
    SAGE_MAKER,
    SNS,
    SQS,
    STEP_FUNCTIONS,
    SWF
  };

namespace ServiceNameMapper
{
AWS_DEVOPSGURU_API ServiceName GetServiceNameForName(const Aws::String& name);

AWS_DEVOPSGURU_API Aws::String GetNameForServiceName(ServiceName value);
} // namespace ServiceNameMapper
} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
