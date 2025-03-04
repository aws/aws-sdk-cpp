/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{
  enum class LogLevel
  {
    NOT_SET,
    DEBUG_,
    ERROR_,
    INFO,
    WARN
  };

namespace LogLevelMapper
{
AWS_IOTMANAGEDINTEGRATIONS_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_IOTMANAGEDINTEGRATIONS_API Aws::String GetNameForLogLevel(LogLevel value);
} // namespace LogLevelMapper
} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
