/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class MonitoringExecutionSortKey
  {
    NOT_SET,
    CreationTime,
    ScheduledTime,
    Status
  };

namespace MonitoringExecutionSortKeyMapper
{
AWS_SAGEMAKER_API MonitoringExecutionSortKey GetMonitoringExecutionSortKeyForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForMonitoringExecutionSortKey(MonitoringExecutionSortKey value);
} // namespace MonitoringExecutionSortKeyMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
