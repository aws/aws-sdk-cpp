/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Connect
{
namespace Model
{
  enum class MonitorCapability
  {
    NOT_SET,
    SILENT_MONITOR,
    BARGE
  };

namespace MonitorCapabilityMapper
{
AWS_CONNECT_API MonitorCapability GetMonitorCapabilityForName(const Aws::String& name);

AWS_CONNECT_API Aws::String GetNameForMonitorCapability(MonitorCapability value);
} // namespace MonitorCapabilityMapper
} // namespace Model
} // namespace Connect
} // namespace Aws
