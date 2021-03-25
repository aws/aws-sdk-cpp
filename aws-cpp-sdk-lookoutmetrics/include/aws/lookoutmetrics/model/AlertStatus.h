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
  enum class AlertStatus
  {
    NOT_SET,
    ACTIVE,
    INACTIVE
  };

namespace AlertStatusMapper
{
AWS_LOOKOUTMETRICS_API AlertStatus GetAlertStatusForName(const Aws::String& name);

AWS_LOOKOUTMETRICS_API Aws::String GetNameForAlertStatus(AlertStatus value);
} // namespace AlertStatusMapper
} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
