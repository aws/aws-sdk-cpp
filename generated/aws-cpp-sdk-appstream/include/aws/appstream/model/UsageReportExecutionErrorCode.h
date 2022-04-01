/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppStream
{
namespace Model
{
  enum class UsageReportExecutionErrorCode
  {
    NOT_SET,
    RESOURCE_NOT_FOUND,
    ACCESS_DENIED,
    INTERNAL_SERVICE_ERROR
  };

namespace UsageReportExecutionErrorCodeMapper
{
AWS_APPSTREAM_API UsageReportExecutionErrorCode GetUsageReportExecutionErrorCodeForName(const Aws::String& name);

AWS_APPSTREAM_API Aws::String GetNameForUsageReportExecutionErrorCode(UsageReportExecutionErrorCode value);
} // namespace UsageReportExecutionErrorCodeMapper
} // namespace Model
} // namespace AppStream
} // namespace Aws
