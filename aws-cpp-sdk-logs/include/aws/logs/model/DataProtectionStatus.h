﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{
  enum class DataProtectionStatus
  {
    NOT_SET,
    ACTIVATED,
    DELETED,
    ARCHIVED,
    DISABLED
  };

namespace DataProtectionStatusMapper
{
AWS_CLOUDWATCHLOGS_API DataProtectionStatus GetDataProtectionStatusForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForDataProtectionStatus(DataProtectionStatus value);
} // namespace DataProtectionStatusMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
