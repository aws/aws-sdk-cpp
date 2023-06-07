/**
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
  enum class InheritedProperty
  {
    NOT_SET,
    ACCOUNT_DATA_PROTECTION
  };

namespace InheritedPropertyMapper
{
AWS_CLOUDWATCHLOGS_API InheritedProperty GetInheritedPropertyForName(const Aws::String& name);

AWS_CLOUDWATCHLOGS_API Aws::String GetNameForInheritedProperty(InheritedProperty value);
} // namespace InheritedPropertyMapper
} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
