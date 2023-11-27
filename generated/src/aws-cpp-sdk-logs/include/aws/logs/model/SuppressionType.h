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
  enum class SuppressionType
  {
    NOT_SET,
    LIMITED,
    INFINITE
  };

namespace SuppressionTypeMapper
{
AWS_CLOUDWATCHLOGS_API SuppressionType GetSuppressionTypeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForSuppressionType(SuppressionType value);
} // namespace SuppressionTypeMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
