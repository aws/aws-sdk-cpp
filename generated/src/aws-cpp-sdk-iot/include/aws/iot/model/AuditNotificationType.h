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
enum class AuditNotificationType { NOT_SET, SNS };

namespace AuditNotificationTypeMapper {
AWS_IOT_API AuditNotificationType GetAuditNotificationTypeForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuditNotificationType(AuditNotificationType value);
}  // namespace AuditNotificationTypeMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
