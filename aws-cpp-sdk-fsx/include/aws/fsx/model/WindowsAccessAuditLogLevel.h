/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace FSx
{
namespace Model
{
  enum class WindowsAccessAuditLogLevel
  {
    NOT_SET,
    DISABLED,
    SUCCESS_ONLY,
    FAILURE_ONLY,
    SUCCESS_AND_FAILURE
  };

namespace WindowsAccessAuditLogLevelMapper
{
AWS_FSX_API WindowsAccessAuditLogLevel GetWindowsAccessAuditLogLevelForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForWindowsAccessAuditLogLevel(WindowsAccessAuditLogLevel value);
} // namespace WindowsAccessAuditLogLevelMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
