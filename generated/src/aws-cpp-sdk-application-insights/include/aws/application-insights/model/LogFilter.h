/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{
  enum class LogFilter
  {
    NOT_SET,
    ERROR_,
    WARN,
    INFO
  };

namespace LogFilterMapper
{
AWS_APPLICATIONINSIGHTS_API LogFilter GetLogFilterForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForLogFilter(LogFilter value);
} // namespace LogFilterMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
