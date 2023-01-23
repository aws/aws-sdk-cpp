﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Inspector2
{
namespace Model
{
  enum class ExternalReportStatus
  {
    NOT_SET,
    SUCCEEDED,
    IN_PROGRESS,
    CANCELLED,
    FAILED
  };

namespace ExternalReportStatusMapper
{
AWS_INSPECTOR2_API ExternalReportStatus GetExternalReportStatusForName(const Aws::String& name);

AWS_INSPECTOR2_API Aws::String GetNameForExternalReportStatus(ExternalReportStatus value);
} // namespace ExternalReportStatusMapper
} // namespace Model
} // namespace Inspector2
} // namespace Aws
