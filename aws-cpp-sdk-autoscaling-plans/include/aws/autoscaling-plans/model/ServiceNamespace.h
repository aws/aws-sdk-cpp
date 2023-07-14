/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling-plans/AutoScalingPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AutoScalingPlans
{
namespace Model
{
  enum class ServiceNamespace
  {
    NOT_SET,
    autoscaling,
    ecs,
    ec2,
    rds,
    dynamodb
  };

namespace ServiceNamespaceMapper
{
AWS_AUTOSCALINGPLANS_API ServiceNamespace GetServiceNamespaceForName(const Aws::String& name);

AWS_AUTOSCALINGPLANS_API Aws::String GetNameForServiceNamespace(ServiceNamespace value);
} // namespace ServiceNamespaceMapper
} // namespace Model
} // namespace AutoScalingPlans
} // namespace Aws
