/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{
  enum class AnomalyDetectionTaskStatus
  {
    NOT_SET,
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    FAILED_TO_SCHEDULE
  };

namespace AnomalyDetectionTaskStatusMapper
{
AWS_LOOKOUTMETRICS_API AnomalyDetectionTaskStatus GetAnomalyDetectionTaskStatusForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForAnomalyDetectionTaskStatus(AnomalyDetectionTaskStatus value);
} // namespace AnomalyDetectionTaskStatusMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
