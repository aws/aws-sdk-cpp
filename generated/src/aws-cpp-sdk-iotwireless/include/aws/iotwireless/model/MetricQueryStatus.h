/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{
  enum class MetricQueryStatus
  {
    NOT_SET,
    Succeeded,
    Failed
  };

namespace MetricQueryStatusMapper
{
AWS_IOTWIRELESS_API MetricQueryStatus GetMetricQueryStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForMetricQueryStatus(MetricQueryStatus value);
} // namespace MetricQueryStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
