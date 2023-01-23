/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTEvents
{
namespace Model
{
  enum class LoggingLevel
  {
    NOT_SET,
    ERROR_,
    INFO,
    DEBUG_
  };

namespace LoggingLevelMapper
{
AWS_IOTEVENTS_API LoggingLevel GetLoggingLevelForName(const Aws::String& name);

AWS_IOTEVENTS_API Aws::String GetNameForLoggingLevel(LoggingLevel value);
} // namespace LoggingLevelMapper
} // namespace Model
} // namespace IoTEvents
} // namespace Aws
