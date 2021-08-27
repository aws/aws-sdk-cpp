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
  enum class EnvironmentHealthAttribute
  {
    NOT_SET,
    Status,
    Color,
    Causes,
    ApplicationMetrics,
    InstancesHealth,
    All,
    HealthStatus,
    RefreshedAt
  };

namespace EnvironmentHealthAttributeMapper
{
AWS_ELASTICBEANSTALK_API EnvironmentHealthAttribute GetEnvironmentHealthAttributeForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForEnvironmentHealthAttribute(EnvironmentHealthAttribute value);
} // namespace EnvironmentHealthAttributeMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
