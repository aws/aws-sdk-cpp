/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

namespace Aws {
namespace IoT {
namespace Model {
enum class AuditTaskStatus { NOT_SET, IN_PROGRESS, COMPLETED, FAILED, CANCELED };

namespace AuditTaskStatusMapper {
AWS_IOT_API AuditTaskStatus GetAuditTaskStatusForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuditTaskStatus(AuditTaskStatus value);
}  // namespace AuditTaskStatusMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
