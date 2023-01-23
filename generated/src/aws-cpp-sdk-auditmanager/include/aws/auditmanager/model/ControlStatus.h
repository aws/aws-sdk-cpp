/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AuditManager
{
namespace Model
{
  enum class ControlStatus
  {
    NOT_SET,
    UNDER_REVIEW,
    REVIEWED,
    INACTIVE
  };

namespace ControlStatusMapper
{
AWS_AUDITMANAGER_API ControlStatus GetControlStatusForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForControlStatus(ControlStatus value);
} // namespace ControlStatusMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
