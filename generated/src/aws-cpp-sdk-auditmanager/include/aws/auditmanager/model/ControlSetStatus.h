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
  enum class ControlSetStatus
  {
    NOT_SET,
    ACTIVE,
    UNDER_REVIEW,
    REVIEWED
  };

namespace ControlSetStatusMapper
{
AWS_AUDITMANAGER_API ControlSetStatus GetControlSetStatusForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForControlSetStatus(ControlSetStatus value);
} // namespace ControlSetStatusMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
