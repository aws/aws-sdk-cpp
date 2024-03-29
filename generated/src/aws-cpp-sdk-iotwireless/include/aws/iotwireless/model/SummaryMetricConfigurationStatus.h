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
  enum class SummaryMetricConfigurationStatus
  {
    NOT_SET,
    Enabled,
    Disabled
  };

namespace SummaryMetricConfigurationStatusMapper
{
AWS_IOTWIRELESS_API SummaryMetricConfigurationStatus GetSummaryMetricConfigurationStatusForName(const Aws::String& name);

AWS_IOTWIRELESS_API Aws::String GetNameForSummaryMetricConfigurationStatus(SummaryMetricConfigurationStatus value);
} // namespace SummaryMetricConfigurationStatusMapper
} // namespace Model
} // namespace IoTWireless
} // namespace Aws
