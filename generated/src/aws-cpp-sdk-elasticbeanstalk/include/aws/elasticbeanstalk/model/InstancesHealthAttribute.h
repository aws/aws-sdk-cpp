/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{
  enum class InstancesHealthAttribute
  {
    NOT_SET,
    HealthStatus,
    Color,
    Causes,
    ApplicationMetrics,
    RefreshedAt,
    LaunchedAt,
    System,
    Deployment,
    AvailabilityZone,
    InstanceType,
    All
  };

namespace InstancesHealthAttributeMapper
{
AWS_ELASTICBEANSTALK_API InstancesHealthAttribute GetInstancesHealthAttributeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForInstancesHealthAttribute(InstancesHealthAttribute value);
} // namespace InstancesHealthAttributeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
