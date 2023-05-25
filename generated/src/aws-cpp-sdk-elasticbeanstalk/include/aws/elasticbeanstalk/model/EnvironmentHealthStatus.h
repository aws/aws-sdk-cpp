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
  enum class EnvironmentHealthStatus
  {
    NOT_SET,
    NoData,
    Unknown,
    Pending,
    Ok,
    Info,
    Warning,
    Degraded,
    Severe,
    Suspended
  };

namespace EnvironmentHealthStatusMapper
{
AWS_ELASTICBEANSTALK_API EnvironmentHealthStatus GetEnvironmentHealthStatusForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForEnvironmentHealthStatus(EnvironmentHealthStatus value);
} // namespace EnvironmentHealthStatusMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
