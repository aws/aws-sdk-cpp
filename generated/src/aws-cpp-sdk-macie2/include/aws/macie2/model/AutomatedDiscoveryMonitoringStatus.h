/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{
  enum class AutomatedDiscoveryMonitoringStatus
  {
    NOT_SET,
    MONITORED,
    NOT_MONITORED
  };

namespace AutomatedDiscoveryMonitoringStatusMapper
{
AWS_MACIE2_API AutomatedDiscoveryMonitoringStatus GetAutomatedDiscoveryMonitoringStatusForName(const Aws::String& name);

AWS_MACIE2_API Aws::String GetNameForAutomatedDiscoveryMonitoringStatus(AutomatedDiscoveryMonitoringStatus value);
} // namespace AutomatedDiscoveryMonitoringStatusMapper
} // namespace Model
} // namespace Macie2
} // namespace Aws
