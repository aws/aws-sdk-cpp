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
enum class AuditFrequency { NOT_SET, DAILY, WEEKLY, BIWEEKLY, MONTHLY };

namespace AuditFrequencyMapper {
AWS_IOT_API AuditFrequency GetAuditFrequencyForName(const Aws::String& name);

AWS_IOT_API Aws::String GetNameForAuditFrequency(AuditFrequency value);
}  // namespace AuditFrequencyMapper
}  // namespace Model
}  // namespace IoT
}  // namespace Aws
