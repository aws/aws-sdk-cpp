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
  enum class EnvironmentStatus
  {
    NOT_SET,
    Aborting,
    Launching,
    Updating,
    LinkingFrom,
    LinkingTo,
    Ready,
    Terminating,
    Terminated
  };

namespace EnvironmentStatusMapper
{
AWS_ELASTICBEANSTALK_API EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name);

AWS_ELASTICBEANSTALK_API Aws::String GetNameForEnvironmentStatus(EnvironmentStatus value);
} // namespace EnvironmentStatusMapper
} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
