/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{
  enum class LogDriver
  {
    NOT_SET,
    json_file,
    syslog,
    journald,
    gelf,
    fluentd,
    awslogs,
    splunk,
    awsfirelens
  };

namespace LogDriverMapper
{
AWS_ECS_API LogDriver GetLogDriverForName(const Aws::String& name);

AWS_ECS_API Aws::String GetNameForLogDriver(LogDriver value);
} // namespace LogDriverMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
