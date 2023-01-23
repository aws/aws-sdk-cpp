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
  enum class ControlType
  {
    NOT_SET,
    Standard,
    Custom
  };

namespace ControlTypeMapper
{
AWS_AUDITMANAGER_API ControlType GetControlTypeForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForControlType(ControlType value);
} // namespace ControlTypeMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
