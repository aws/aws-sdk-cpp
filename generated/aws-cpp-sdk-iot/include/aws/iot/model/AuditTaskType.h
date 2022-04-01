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
  enum class AuditTaskType
  {
    NOT_SET,
    ON_DEMAND_AUDIT_TASK,
    SCHEDULED_AUDIT_TASK
  };

namespace AuditTaskTypeMapper
{
AWS_IOT_API AuditTaskType GetAuditTaskTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuditTaskType(AuditTaskType value);
} // namespace AuditTaskTypeMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
