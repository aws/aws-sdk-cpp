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
  enum class State
  {
    NOT_SET,
    Active,
    Suppressed,
    Baseline
  };

namespace StateMapper
{
AWS_CLOUDWATCHLOGS_API State GetStateForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForState(State value);
} // namespace StateMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
