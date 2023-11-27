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
  enum class AnomalyDetectorStatus
  {
    NOT_SET,
    INITIALIZING,
    TRAINING,
    ANALYZING,
    FAILED,
    DELETED,
    PAUSED
  };

namespace AnomalyDetectorStatusMapper
{
AWS_CLOUDWATCHLOGS_API AnomalyDetectorStatus GetAnomalyDetectorStatusForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForAnomalyDetectorStatus(AnomalyDetectorStatus value);
} // namespace AnomalyDetectorStatusMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
