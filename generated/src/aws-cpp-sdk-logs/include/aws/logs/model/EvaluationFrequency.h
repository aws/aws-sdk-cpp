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
  enum class EvaluationFrequency
  {
    NOT_SET,
    ONE_MIN,
    FIVE_MIN,
    TEN_MIN,
    FIFTEEN_MIN,
    THIRTY_MIN,
    ONE_HOUR
  };

namespace EvaluationFrequencyMapper
{
AWS_CLOUDWATCHLOGS_API EvaluationFrequency GetEvaluationFrequencyForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForEvaluationFrequency(EvaluationFrequency value);
} // namespace EvaluationFrequencyMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
