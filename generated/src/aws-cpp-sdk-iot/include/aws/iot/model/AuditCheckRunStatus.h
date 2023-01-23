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
  enum class AuditCheckRunStatus
  {
    NOT_SET,
    IN_PROGRESS,
    WAITING_FOR_DATA_COLLECTION,
    CANCELED,
    COMPLETED_COMPLIANT,
    COMPLETED_NON_COMPLIANT,
    FAILED
  };

namespace AuditCheckRunStatusMapper
{
AWS_IOT_API AuditCheckRunStatus GetAuditCheckRunStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuditCheckRunStatus(AuditCheckRunStatus value);
} // namespace AuditCheckRunStatusMapper
} // namespace Model
} // namespace IoT
} // namespace Aws
