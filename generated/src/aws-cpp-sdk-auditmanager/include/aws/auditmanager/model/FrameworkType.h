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
  enum class FrameworkType
  {
    NOT_SET,
    Standard,
    Custom
  };

namespace FrameworkTypeMapper
{
AWS_AUDITMANAGER_API FrameworkType GetFrameworkTypeForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForFrameworkType(FrameworkType value);
} // namespace FrameworkTypeMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
