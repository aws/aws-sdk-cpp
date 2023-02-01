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
  enum class LustreAccessAuditLogLevel
  {
    NOT_SET,
    DISABLED,
    WARN_ONLY,
    ERROR_ONLY,
    WARN_ERROR
  };

namespace LustreAccessAuditLogLevelMapper
{
AWS_FSX_API LustreAccessAuditLogLevel GetLustreAccessAuditLogLevelForName(const Aws::String& name);

AWS_FSX_API Aws::String GetNameForLustreAccessAuditLogLevel(LustreAccessAuditLogLevel value);
} // namespace LustreAccessAuditLogLevelMapper
} // namespace Model
} // namespace FSx
} // namespace Aws
