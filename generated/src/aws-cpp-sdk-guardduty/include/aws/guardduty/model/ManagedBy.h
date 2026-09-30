/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

namespace Aws {
namespace GuardDuty {
namespace Model {
enum class ManagedBy { NOT_SET, GUARDDUTY_POLICY };

namespace ManagedByMapper {
AWS_GUARDDUTY_API ManagedBy GetManagedByForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForManagedBy(ManagedBy value);
}  // namespace ManagedByMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
