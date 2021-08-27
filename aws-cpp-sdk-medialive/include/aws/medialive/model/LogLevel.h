/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class LogLevel
  {
    NOT_SET,
    ERROR_,
    WARNING,
    INFO,
    DEBUG_,
    DISABLED
  };

namespace LogLevelMapper
{
AWS_MEDIALIVE_API LogLevel GetLogLevelForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForLogLevel(LogLevel value);
} // namespace LogLevelMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
