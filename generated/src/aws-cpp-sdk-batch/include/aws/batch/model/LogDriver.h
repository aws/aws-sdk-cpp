/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Batch
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
    splunk
  };

namespace LogDriverMapper
{
AWS_BATCH_API LogDriver GetLogDriverForName(const Aws::String& name);

AWS_BATCH_API Aws::String GetNameForLogDriver(LogDriver value);
} // namespace LogDriverMapper
} // namespace Model
} // namespace Batch
} // namespace Aws
