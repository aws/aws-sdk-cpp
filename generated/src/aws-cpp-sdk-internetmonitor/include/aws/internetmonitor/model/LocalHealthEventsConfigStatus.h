/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/internetmonitor/InternetMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{
  enum class LocalHealthEventsConfigStatus
  {
    NOT_SET,
    ENABLED,
    DISABLED
  };

namespace LocalHealthEventsConfigStatusMapper
{
AWS_INTERNETMONITOR_API LocalHealthEventsConfigStatus GetLocalHealthEventsConfigStatusForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForLocalHealthEventsConfigStatus(LocalHealthEventsConfigStatus value);
} // namespace LocalHealthEventsConfigStatusMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
