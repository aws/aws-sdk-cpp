﻿/**
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
  enum class Status
  {
    NOT_SET,
    IGNORE,
    RESOLVED,
    PENDING,
    RECURRING
  };

namespace StatusMapper
{
AWS_APPLICATIONINSIGHTS_API Status GetStatusForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForStatus(Status value);
} // namespace StatusMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
