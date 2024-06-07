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
  enum class ControlState
  {
    NOT_SET,
    ACTIVE,
    END_OF_SUPPORT
  };

namespace ControlStateMapper
{
AWS_AUDITMANAGER_API ControlState GetControlStateForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForControlState(ControlState value);
} // namespace ControlStateMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
