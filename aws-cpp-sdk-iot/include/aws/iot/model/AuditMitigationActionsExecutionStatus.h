/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{
  enum class AuditMitigationActionsExecutionStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    CANCELED,
    SKIPPED,
    PENDING
  };

namespace AuditMitigationActionsExecutionStatusMapper
{
AWS_IOT_API AuditMitigationActionsExecutionStatus GetAuditMitigationActionsExecutionStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuditMitigationActionsExecutionStatus(AuditMitigationActionsExecutionStatus value);
} // namespace AuditMitigationActionsExecutionStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
