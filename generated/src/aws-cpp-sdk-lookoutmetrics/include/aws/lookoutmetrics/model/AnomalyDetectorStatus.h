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
  enum class AnomalyDetectorStatus
  {
    NOT_SET,
    ACTIVE,
    ACTIVATING,
    DELETING,
    FAILED,
    INACTIVE,
    LEARNING,
    BACK_TEST_ACTIVATING,
    BACK_TEST_ACTIVE,
    BACK_TEST_COMPLETE,
    DEACTIVATED,
    DEACTIVATING
  };

namespace AnomalyDetectorStatusMapper
{
AWS_LOOKOUTMETRICS_API AnomalyDetectorStatus GetAnomalyDetectorStatusForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForAnomalyDetectorStatus(AnomalyDetectorStatus value);
} // namespace AnomalyDetectorStatusMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
