/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppSync
{
namespace Model
{
  enum class EventLogLevel
  {
    NOT_SET,
    NONE,
    ERROR_,
    ALL,
    INFO,
    DEBUG_
  };

namespace EventLogLevelMapper
{
AWS_APPSYNC_API EventLogLevel GetEventLogLevelForName(const Aws::String& name);

AWS_APPSYNC_API Aws::String GetNameForEventLogLevel(EventLogLevel value);
} // namespace EventLogLevelMapper
} // namespace Model
} // namespace AppSync
} // namespace Aws
