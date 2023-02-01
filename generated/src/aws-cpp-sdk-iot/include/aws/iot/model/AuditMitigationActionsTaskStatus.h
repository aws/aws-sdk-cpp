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
  enum class AuditMitigationActionsTaskStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    FAILED,
    CANCELED
  };

namespace AuditMitigationActionsTaskStatusMapper
{
AWS_IOT_API AuditMitigationActionsTaskStatus GetAuditMitigationActionsTaskStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuditMitigationActionsTaskStatus(AuditMitigationActionsTaskStatus value);
} // namespace AuditMitigationActionsTaskStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
