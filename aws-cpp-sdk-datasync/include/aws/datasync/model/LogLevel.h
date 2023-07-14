/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace DataSync
{
namespace Model
{
  enum class LogLevel
  {
    NOT_SET,
    OFF,
    BASIC,
    TRANSFER
  };

namespace LogLevelMapper
{
AWS_DATASYNC_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_DATASYNC_API Aws::String GetNameForLogLevel(LogLevel value);
} // namespace LogLevelMapper
} // namespace Model
} // namespace DataSync
} // namespace Aws
