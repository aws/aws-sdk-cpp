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
  enum class UpdateStatus
  {
    NOT_SET,
    RESOLVED
  };

namespace UpdateStatusMapper
{
AWS_APPLICATIONINSIGHTS_API UpdateStatus GetUpdateStatusForName(const Aws::String& name);

AWS_APPLICATIONINSIGHTS_API Aws::String GetNameForUpdateStatus(UpdateStatus value);
} // namespace UpdateStatusMapper
} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
