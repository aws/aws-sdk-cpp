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
  enum class DelegationStatus
  {
    NOT_SET,
    IN_PROGRESS,
    UNDER_REVIEW,
    COMPLETE
  };

namespace DelegationStatusMapper
{
AWS_AUDITMANAGER_API DelegationStatus GetDelegationStatusForName(const Aws::String& name);

AWS_AUDITMANAGER_API Aws::String GetNameForDelegationStatus(DelegationStatus value);
} // namespace DelegationStatusMapper
} // namespace Model
} // namespace AuditManager
} // namespace Aws
