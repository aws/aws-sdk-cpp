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
  enum class SeverityLevel
  {
    NOT_SET,
    Low,
    Medium,
    High
  };

namespace SeverityLevelMapper
{
AWS_APPLICATIONINSIGHTS_API SeverityLevel GetSeverityLevelForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForSeverityLevel(SeverityLevel value);
} // namespace SeverityLevelMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
