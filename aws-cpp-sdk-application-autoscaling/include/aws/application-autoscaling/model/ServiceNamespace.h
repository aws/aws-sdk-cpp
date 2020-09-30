/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{
  enum class ServiceNamespace
  {
    NOT_SET,
    ecs,
    elasticmapreduce,
    ec2,
    appstream,
    dynamodb,
    rds,
    sagemaker,
    custom_resource,
    comprehend,
    lambda,
    cassandra,
    kafka
  };

namespace ServiceNamespaceMapper
{
AWS_APPLICATIONAUTOSCALING_API ServiceNamespace GetServiceNamespaceForName(const Aws::String& name);

AWS_APPLICATIONAUTOSCALING_API Aws::String GetNameForServiceNamespace(ServiceNamespace value);
} // namespace ServiceNamespaceMapper
} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
