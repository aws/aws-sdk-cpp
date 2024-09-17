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
  enum class InternetEventStatus
  {
    NOT_SET,
    ACTIVE,
    RESOLVED
  };

namespace InternetEventStatusMapper
{
AWS_INTERNETMONITOR_API InternetEventStatus GetInternetEventStatusForName(const Aws::String& name);

AWS_INTERNETMONITOR_API Aws::String GetNameForInternetEventStatus(InternetEventStatus value);
} // namespace InternetEventStatusMapper
} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
