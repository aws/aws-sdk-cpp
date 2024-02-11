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
  enum class Scope
  {
    NOT_SET,
    ALL
  };

namespace ScopeMapper
{
AWS_CLOUDWATCHLOGS_API Scope GetScopeForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForScope(Scope value);
} // namespace ScopeMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
