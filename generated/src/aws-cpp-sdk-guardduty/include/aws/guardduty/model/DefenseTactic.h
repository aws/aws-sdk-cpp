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
enum class DefenseTactic { NOT_SET, Isolate, Evict, Restore, Harden, Detect };

namespace DefenseTacticMapper {
AWS_GUARDDUTY_API DefenseTactic GetDefenseTacticForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForDefenseTactic(DefenseTactic value);
}  // namespace DefenseTacticMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
