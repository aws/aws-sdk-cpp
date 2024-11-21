/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
  enum class Type
  {
    NOT_SET,
    boolean,
    integer,
    double_,
    string
  };

namespace TypeMapper
{
AWS_CLOUDWATCHLOGS_API Type GetTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForType(Type value);
} // namespace TypeMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
