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
  enum class HealthEventStatus
  {
    NOT_SET,
    ACTIVE,
    RESOLVED
  };

namespace HealthEventStatusMapper
{
AWS_INTERNETMONITOR_API HealthEventStatus GetHealthEventStatusForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForHealthEventStatus(HealthEventStatus value);
} // namespace HealthEventStatusMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
