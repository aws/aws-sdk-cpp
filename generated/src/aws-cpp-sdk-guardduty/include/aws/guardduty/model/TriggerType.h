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
enum class TriggerType { NOT_SET, BACKUP, GUARDDUTY };

namespace TriggerTypeMapper {
AWS_GUARDDUTY_API TriggerType GetTriggerTypeForName(const Aws::String& name);

AWS_GUARDDUTY_API Aws::String GetNameForTriggerType(TriggerType value);
}  // namespace TriggerTypeMapper
}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
