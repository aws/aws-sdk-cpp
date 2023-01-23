/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{
  enum class ReprocessingStatus
  {
    NOT_SET,
    RUNNING,
    SUCCEEDED,
    CANCELLED,
    FAILED
  };

namespace ReprocessingStatusMapper
{
AWS_IOTANALYTICS_API ReprocessingStatus GetReprocessingStatusForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForReprocessingStatus(ReprocessingStatus value);
} // namespace ReprocessingStatusMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
