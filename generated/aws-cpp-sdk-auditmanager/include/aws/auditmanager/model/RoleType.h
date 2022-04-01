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
  enum class RoleType
  {
    NOT_SET,
    PROCESS_OWNER,
    RESOURCE_OWNER
  };

namespace RoleTypeMapper
{
AWS_AUDITMANAGER_API RoleType GetRoleTypeForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForRoleType(RoleType value);
} // namespace RoleTypeMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
