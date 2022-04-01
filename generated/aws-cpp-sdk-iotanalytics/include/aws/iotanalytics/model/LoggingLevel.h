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
  enum class LoggingLevel
  {
    NOT_SET,
    ERROR_
  };

namespace LoggingLevelMapper
{
AWS_IOTANALYTICS_API LoggingLevel GetLoggingLevelForName(const Aws::String& name);

AWS_IOTANALYTICS_API Aws::String GetNameForLoggingLevel(LoggingLevel value);
} // namespace LoggingLevelMapper
} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
