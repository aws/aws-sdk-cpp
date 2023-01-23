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
  enum class ControlResponse
  {
    NOT_SET,
    MANUAL,
    AUTOMATE,
    DEFER,
    IGNORE
  };

namespace ControlResponseMapper
{
AWS_AUDITMANAGER_API ControlResponse GetControlResponseForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForControlResponse(ControlResponse value);
} // namespace ControlResponseMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
